cmake_minimum_required(VERSION 3.16)
project(SimpleQtApp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Try to find Qt6 first, fallback to Qt5
find_package(Qt6 COMPONENTS Widgets QUIET)
if(Qt6_FOUND)
    set(QT_VERSION 6)
    set(QT_LIBRARIES Qt6::Widgets)
else()
    find_package(Qt5 COMPONENTS Widgets REQUIRED)
    set(QT_VERSION 5)
    set(QT_LIBRARIES Qt5::Widgets)
endif()

add_executable(SimpleQtApp src/main.cpp)

target_link_libraries(SimpleQtApp PRIVATE ${QT_LIBRARIES})

# Optional: Print which Qt version is being used
message(STATUS "Using Qt${QT_VERSION}")
