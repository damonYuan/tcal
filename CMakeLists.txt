cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# build
set(MAIN_PROJECT_NAME
    tcal_cmake
)
project(${MAIN_PROJECT_NAME})
add_subdirectory(src)

# third party libs
set(MAIN_LIBRARIES_DIR
    ${CMAKE_SOURCE_DIR}/libs
)
set(MAIN_LIBRARIES 
    tcal
    cpp-httplib
)
foreach(LIBRARY ${MAIN_LIBRARIES})
    add_subdirectory("${MAIN_LIBRARIES_DIR}/${LIBRARY}")
endforeach(LIBRARY)

# gtest

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(tcal_test test/app_test.cpp)
target_link_libraries(tcal_test gtest_main tcal)

include(GoogleTest)
gtest_discover_tests(tcal_test)
