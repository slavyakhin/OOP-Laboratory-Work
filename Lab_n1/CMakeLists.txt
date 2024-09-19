cmake_minimum_required(VERSION 3.10)

# project name
project(Lab_n1)

# variable containing list of the sources for the library
set(SOURCE_LIB src/function.cpp)
# variable containing list of the sources for the executable file
set(SOURCE_EXE main.cpp)

# static library
add_library(lib ${SOURCE_LIB})
add_executable(main ${SOURCE_EXE})

target_link_libraries(main lib)

# Tests
enable_testing()
find_package(GTest REQUIRED)

add_executable(tests test/tests.cpp)
target_link_libraries(tests lib GTest::GTest)

add_test(NAME MyProjectTests COMMAND tests)