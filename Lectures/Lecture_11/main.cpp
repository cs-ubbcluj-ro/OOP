#include <memory>
#include <iostream>
#include "Spaceship.h"
#include <vector>
#include <exception>
#include "SmartPointer.h"
#include "SmartPointerTemplate.h"

using namespace std;

void resourceLeak()
{
    try
    {
        int* a = new int{ 2 };
        throw std::runtime_error{ "Hello! An exception has occured!\n" };
        delete a;
    }
    catch (std::exception& e)
    {
        cout << e.what();
    }
}

void testSmartPointer()
{
    try
    {
        SmartPointer a{ new int{3} };
        throw std::runtime_error{ "Hello! An exception has occured, but all the resources were properly managed :) \n" };
        // no need to delete + no more leaks
    }
    catch (std::exception& e)
    {
        cout << e.what();
    }
}

void function()
{
    SmartPointer p{ new int{30} };
    cout << *p;
}


void testSmartPointerTemplate()
{
    try
    {
        SmartPointerTemplate<int> a{ new int{3} };
        cout << "Created an int with value: " << *a << endl;

        SmartPointerTemplate<string> str{ new string{"Hello students!"} };
        cout << "Created a string with value: " << *str << endl;

        SmartPointerTemplate<vector<double>> v{ new vector<double>{ 2.5, 6.1, -5.3, 10 } };
        cout << "Created a vector, values: " << v->at(0) << ", " << v->at(1) << ", " << v->at(2) << ", " << v->at(3) << endl;

        throw std::runtime_error{ "Hello! An exception has occurred, but all the resources were properly managed :) \n" };
        // no need to delete + no more leaks
    }
    catch (std::exception& e)
    {
        cout << e.what();
    }
}

void exampleUniquePtr()
{
	std::unique_ptr<std::string> ptr1 = 
		std::make_unique<std::string>("Hello, I am a string owned by a unique_ptr.");
	auto ptr2 = std::move(ptr1); // ptr2 has taken ownership of the string and ptr1 is now nullptr

	if (ptr1 == nullptr)
	{
		std::cout << "ptr1 is now nullptr." << std::endl;
	}
}

// -------------------------------------------------------------------------------------------------------------------------------

void exampleSharedPtr()
{
	std::shared_ptr<Spaceship> ptr1 = 
		std::make_shared<Spaceship>("Enterprise", "Jean-Luc Picard", "heavy cruiser");
	
	{
		auto ptr2 = ptr1; // 2 shared pointers point to the same spaceship - in Debug [control block] -> [Raw View] -> [Uses]
		auto ptr3 = ptr2; // 3 shared pointers point to the same spaceship
	}
	// at the end of this scope, ptr2 and ptr3 are destroyed => reference count is now 1
	// the spaceship is not yet destroyed, since there still is one pointer which owns it (ptr1)
	
	auto ptr4 = std::move(ptr1); // ptr1 is nullptr, but there is still 1 reference count (ptr4)
}

// -------------------------------------------------------------------------------------------------------------------------------
class Team;

class Member
{
private:
	std::shared_ptr<Team> teamPtr;

public:
	void setTeamPtr(const std::shared_ptr<Team>& tp) { this->teamPtr = tp; }
};

class Team
{
private:
	std::vector<std::shared_ptr<Member>> members;

public:
	void addMember(std::shared_ptr<Member> m) { this->members.push_back(m); }
};

void teamMembersSharedPtr()
{
	std::shared_ptr<Member> m1 = std::make_shared<Member>();	// reference count for m1 is 1
	std::shared_ptr<Member> m2 = std::make_shared<Member>();	// reference count for m2 is 1
	std::shared_ptr<Member> m3 = std::make_shared<Member>();	// reference count for m3 is 1

	{
		std::shared_ptr<Team> team = std::make_shared<Team>();	// reference count for team is 1
		team->addMember(m1);		// reference count for m1 is now 2
		team->addMember(m2);		// reference count for m2 is now 2
		team->addMember(m3);		// reference count for m3 is now 2

		m1->setTeamPtr(team);		// reference count for team is now 2
		m2->setTeamPtr(team);		// reference count for team is now 3
		m3->setTeamPtr(team);		// reference count for team is now 4
	}

	int n = 0;

	// what happens at the end of this function?
	// Will the team be destroyed? Will the members be destroyed?
}

/*
class Team;

class Member
{
private:
	std::weak_ptr<Team> teamPtr;

public:
	void setTeamPtr(std::weak_ptr<Team> tp) { this->teamPtr = tp; }
};

class Team
{
private:
	std::vector<std::shared_ptr<Member>> members;

public:
	void addMember(std::shared_ptr<Member> m) { this->members.push_back(m); }
};

void exampleWeakPtr()
{
	std::shared_ptr<Member> m1 = std::make_shared<Member>();	// reference count for m1 is 1
	std::shared_ptr<Member> m2 = std::make_shared<Member>();	// reference count for m2 is 1
	std::shared_ptr<Member> m3 = std::make_shared<Member>();	// reference count for m3 is 1

	{
		std::shared_ptr<Team> team = std::make_shared<Team>();	// reference count for team is 1
		team->addMember(m1);		// reference count for m1 is now 2
		team->addMember(m2);		// reference count for m2 is now 2
		team->addMember(m3);		// reference count for m3 is now 2

		m1->setTeamPtr(team);		// reference count for team is still 1
		m2->setTeamPtr(team);		// reference count for team is still 1
		m3->setTeamPtr(team);		// reference count for team is still 1
	}

	int x = 0;
//	 what happens at the end of the function in this case?
//	 Will the team be destroyed?
//	 When will the members be destroyed ?
}
*/

int main()
{
	// unique pointer
	exampleUniquePtr();

	// shared pointer
	exampleSharedPtr();

	// weak pointer
	teamMembersSharedPtr();
	//exampleWeakPtr();

	return 0;
}