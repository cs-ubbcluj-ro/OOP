cmake_minimum_required(VERSION 3.17)
project(OOP)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_PREFIX_PATH "/Users/arthur/Qt/5.15.2/clang_64/lib/cmake")
set(QT_VERSION 5)
set(REQUIRED_LIBS Core Gui Widgets)
set(REQUIRED_LIBS_QUALIFIED Qt5::Core Qt5::Gui Qt5::Widgets)

add_executable(OOP
        Lectures/Lecture_1/Arrays.c
        Lectures/Lecture_1/Casting.cpp
        Lectures/Lecture_1/CStrings.c
        Lectures/Lecture_1/DataTypes.c
        Lectures/Lecture_1/Functions.cpp
        Lectures/Lecture_1/HelloWorld.cpp
        Lectures/Lecture_1/HelloWorldC.c
        Lectures/Lecture_1/Pointers.c
        Lectures/Lecture_1/ReadWrite.c
        Lectures/Lecture_1/Statements.c
        Lectures/Lecture_1/StructExample.c
        Lectures/Lecture_2/ConstPointers.c
        Lectures/Lecture_2/DynamicArray.h
        Lectures/Lecture_2/DynamicArray.c
        Lectures/Lecture_2/DynamicMemoryManagement.cpp
        Lectures/Lecture_2/DynamicMemoryManagementC.c
        Lectures/Lecture_2/main.c
        Lectures/Lecture_2/NullDanglingPointers.c
        Lectures/Lecture_2/Planet.c
        Lectures/Lecture_2/Planet.h
        Lectures/Lecture_2/PointersToFunctions.c
        Lectures/Lecture_3/c_plus.cpp
        Lectures/Lecture_3/vector_ex1.cpp
        Lectures/Lecture_3/vector_ex2.cpp
        Lectures/Lecture_3/vector_ex3.cpp
        Lectures/Lecture_3/vector_v1/Vector2D.h
        Lectures/Lecture_3/vector_v1/Vector2D.cpp
        Lectures/Lecture_3/vector_v2/Vector2D.h
        Lectures/Lecture_3/vector_v2/Vector2D.cpp
        Lectures/Lecture_3/vector_v3/Vector2D.h
        Lectures/Lecture_3/vector_v3/Vector2D.cpp
        Lectures/Lecture_3/vector_v3/DynamicVector.h
        Lectures/Lecture_3/vector_v3/DynamicVector.cpp
        Lectures/Lecture_4/FunctionTemplate.cpp
        Lectures/Lecture_4/DynamicVector.h
        Lectures/Lecture_4/DynamicVector_demo.cpp
        Lectures/Lecture_4/Pair.h
        Lectures/Lecture_4/stl_demo.cpp
        Lectures/Lecture_5/Animal.h
        Lectures/Lecture_5/Animal.cpp
        Lectures/Lecture_5/Dog.h
        Lectures/Lecture_5/Dog.cpp
        Lectures/Lecture_5/Penguin.h
        Lectures/Lecture_5/Penguin.cpp
        Lectures/Lecture_5/demo.cpp
        Lectures/Lecture_6_abstract_base_class/Animal.h
        Lectures/Lecture_6_abstract_base_class/Animal.cpp
        Lectures/Lecture_6_abstract_base_class/demo.cpp
        Lectures/Lecture_6_abstract_base_class/Dog.h
        Lectures/Lecture_6_abstract_base_class/Dog.cpp
        Lectures/Lecture_6_abstract_base_class/Filter.h
        Lectures/Lecture_6_abstract_base_class/Penguin.h
        Lectures/Lecture_6_abstract_base_class/Penguin.cpp
        Lectures/Lecture_6_abstract_base_class/Zoo.h
        Lectures/Lecture_6_abstract_base_class/Zoo.cpp
        Lectures/Lecture_6_polymorphism/Animal.h
        Lectures/Lecture_6_polymorphism/Animal.cpp
        Lectures/Lecture_6_polymorphism/demo.cpp
        Lectures/Lecture_6_polymorphism/Dog.h
        Lectures/Lecture_6_polymorphism/Dog.cpp
        Lectures/Lecture_6_polymorphism/Penguin.h
        Lectures/Lecture_6_polymorphism/Penguin.cpp
        Lectures/Lecture_7_streams/Animal.h
        Lectures/Lecture_7_streams/Animal.cpp
        Lectures/Lecture_7_streams/main.cpp
        Lectures/Lecture_7_streams/Penguin.h
        Lectures/Lecture_7_streams/Penguin.cpp
        Lectures/Lecture_7_files/main.cpp
        Lectures/Lecture_7_files/Spaceship.h
        Lectures/Lecture_7_files/Spaceship.cpp
        Lectures/Lecture_7_exceptions/main.cpp
        Lectures/Lecture_7_exceptions/Spaceship.h
        Lectures/Lecture_7_exceptions/Spaceship.cpp
        Lectures/Lecture_7_exceptions/SpaceshipValidator.h
        Lectures/Lecture_7_exceptions/SpaceshipValidator.cpp
        Lectures/Lecture_8/hello_world/lecture9_demo_hello_world.h
        Lectures/Lecture_8/hello_world/lecture9_demo_hello_world.cpp
        Lectures/Lecture_8/hello_world/main.cpp
        Lectures/Lecture_8/widgets/lecture9_demo_widgets.h
        Lectures/Lecture_8/widgets/lecture9_demo_widgets.cpp
        Lectures/Lecture_8/widgets/main.cpp
        Lectures/Lecture_8/qt_designer/lecture9_demo_qt_designer.h
        Lectures/Lecture_8/qt_designer/lecture9_demo_qt_designer.cpp
        Lectures/Lecture_8/qt_designer/programaticallydesignedwidget.hpp
        Lectures/Lecture_8/qt_designer/programaticallydesignedwidget.cpp
        Lectures/Lecture_8/qt_designer/main.cpp
        Lectures/Lecture_9/drawing/Drawing.h
        Lectures/Lecture_9/drawing/Drawing.cpp
        Lectures/Lecture_9/drawing/main.cpp
        Lectures/Lecture_9/introspection/IntrospectionExample.h
        Lectures/Lecture_9/introspection/IntrospectionExample.cpp
        Lectures/Lecture_9/introspection/MyClass.h
        Lectures/Lecture_9/introspection/MyClass.cpp
        Lectures/Lecture_9/introspection/main.cpp
        Lectures/Lecture_9/notepad/Lecture10_demo_Notepad.h
        Lectures/Lecture_9/notepad/Lecture10_demo_Notepad.cpp
        Lectures/Lecture_9/notepad/main.cpp
        Lectures/Lecture_9/spinslider/Lecture10_demo_spin_slider.h
        Lectures/Lecture_9/spinslider/Lecture10_demo_spin_slider.cpp
        Lectures/Lecture_9/spinslider/main.cpp
        Lectures/Lecture_9/genes/Gene.h
        Lectures/Lecture_9/genes/Gene.cpp
        Lectures/Lecture_9/genes/GenesGUI.h
        Lectures/Lecture_9/genes/GenesGUI.cpp
        Lectures/Lecture_9/genes/Lecture10_demo.h
        Lectures/Lecture_9/genes/Lecture10_demo.cpp
        Lectures/Lecture_9/genes/main.cpp
        Lectures/Lecture_10/genes/DialogGenesListWidget.h
        Lectures/Lecture_10/genes/DialogGenesListWidget.cpp
        Lectures/Lecture_10/genes/DialogGenesView.h
        Lectures/Lecture_10/genes/DialogGenesView.cpp
        Lectures/Lecture_10/genes/GeneRepository.h
        Lectures/Lecture_10/genes/GeneRepository.cpp
        Lectures/Lecture_10/genes/lecture11_demo.h
        Lectures/Lecture_10/genes/lecture11_demo.cpp
        Lectures/Lecture_10/genes/main.cpp
        Lectures/Lecture_10/genes_custom_model/GeneRepository.h
        Lectures/Lecture_10/genes_custom_model/GeneRepository.cpp
        Lectures/Lecture_10/genes_custom_model/GenesTableModel.h
        Lectures/Lecture_10/genes_custom_model/GenesTableModel.cpp
        Lectures/Lecture_10/genes_custom_model/lecture11_demo_custom_models.h
        Lectures/Lecture_10/genes_custom_model/lecture11_demo_custom_models.cpp
        Lectures/Lecture_10/genes_custom_model/PaginatedGenesTableModel.h
        Lectures/Lecture_10/genes_custom_model/PaginatedGenesTableModel.cpp
        Lectures/Lecture_10/genes_custom_model/PictureDelegate.h
        Lectures/Lecture_10/genes_custom_model/PictureDelegate.cpp
        Lectures/Lecture_10/genes_custom_model/main.cpp
        Lectures/Lecture_11/main.cpp
        Lectures/Lecture_11/SmartPointer.h
        Lectures/Lecture_11/SmartPointer.cpp
        Lectures/Lecture_11/SmartPointerTemplate.h
        Lectures/Lecture_11/Spaceship.h
        Lectures/Lecture_11/Spaceship.cpp
        Lectures/Lecture_12/adapter/Adapter.h
        Lectures/Lecture_12/adapter/Castle.h
        Lectures/Lecture_12/adapter/Controller.h
        Lectures/Lecture_12/adapter/Controller.cpp
        Lectures/Lecture_12/adapter/PaymentService.h
        Lectures/Lecture_12/adapter/lecture12_demo_adapter.h
        Lectures/Lecture_12/adapter/lecture12_demo_adapter.cpp
        Lectures/Lecture_12/adapter/main.cpp
        Lectures/Lecture_12/composite/Graphic.cpp
        Lectures/Lecture_12/composite/Graphic.h
        Lectures/Lecture_12/composite/lecture12_demo_composite.cpp
        Lectures/Lecture_12/composite/lecture12_demo_composite.h
        Lectures/Lecture_12/composite/main.cpp
        Lectures/Lecture_12/composite/mywidget.cpp
        Lectures/Lecture_12/composite/mywidget.h
        Lectures/Lecture_12/iterator/Castle.h
        Lectures/Lecture_12/iterator/Iterator.h
        Lectures/Lecture_12/iterator/Iterator.cpp
        Lectures/Lecture_12/iterator/lecture12_demo_iterator.h
        Lectures/Lecture_12/iterator/lecture12_demo_iterator.cpp
        Lectures/Lecture_12/iterator/main.cpp
        Lectures/Lecture_12/iterator/Multimap.h
        Lectures/Lecture_12/iterator/Multimap.cpp
        Lectures/Lecture_12/observer/Auctioneer.h
        Lectures/Lecture_12/observer/Auctioneer.cpp
        Lectures/Lecture_12/observer/auctionleader.cpp
        Lectures/Lecture_12/observer/auctionleader.h
        Lectures/Lecture_12/observer/BidderWithDescription.h
        Lectures/Lecture_12/observer/BidderWithDescription.cpp
        Lectures/Lecture_12/observer/BidderWithPhoto.cpp
        Lectures/Lecture_12/observer/BidderWithPhoto.h
        Lectures/Lecture_12/observer/lecture12_demo_observer.h
        Lectures/Lecture_12/observer/lecture12_demo_observer.cpp
        Lectures/Lecture_12/observer/Observer.h
        Lectures/Lecture_12/observer/main.cpp
        Lectures/Lecture_12/strategy/lecture12_demo_strategy.h
        Lectures/Lecture_12/strategy/lecture12_demo_strategy.cpp
        Lectures/Lecture_12/strategy/main.cpp
        Lectures/Lecture_12/strategy/SaveFileStrategy.cpp
        Lectures/Lecture_12/strategy/SaveFileStrategy.h
        Lectures/Lecture_12/strategy/Castle.h)

file(COPY Lectures/Lecture_10/genes/Ecoli_genes.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY Lectures/Lecture_10/genes_custom_model/Ecoli.jpg
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY Lectures/Lecture_10/genes_custom_model/Genes.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY Lectures/Lecture_10/genes_custom_model/human.jpg
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY Lectures/Lecture_12/iterator/chambord.jpg
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY Lectures/Lecture_12/iterator/highclere.jpg
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY Lectures/Lecture_12/iterator/neuschwanstein.jpg
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY Lectures/Lecture_12/iterator/peles.jpg
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY Lectures/Lecture_12/iterator/scaliger.jpg
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY Lectures/Lecture_12/iterator/windsor.jpg
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

if (NOT CMAKE_PREFIX_PATH)
    message(WARNING "CMAKE_PREFIX_PATH is not defined, you may need to set it "
            "(-DCMAKE_PREFIX_PATH=\"path/to/Qt/lib/cmake\" or -DCMAKE_PREFIX_PATH=/usr/include/{host}/qt{version}/ on Ubuntu)")
endif ()

find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)
target_link_libraries(${PROJECT_NAME} ${REQUIRED_LIBS_QUALIFIED})