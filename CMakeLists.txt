cmake_minimum_required(VERSION 3.16)
project(Scheduling)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt5Widgets REQUIRED)

# Enable MOC processing
set(CMAKE_AUTOMOC ON)



file(GLOB HEADERS "include/*.h")
file(GLOB SOURCES "src/*.cpp")

# Create the executable
add_executable(Scheduling ${SOURCES} ${HEADERS})  # 👈 Make sure headers are included

# Include directories
target_include_directories(Scheduling PRIVATE include)

# Link Qt5Widgets
target_link_libraries(Scheduling Qt5::Widgets)
