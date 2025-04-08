cmake_minimum_required(VERSION 3.10)
project(LeastSquaresEstimator)  #Could add versions here

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

################################################################################
# DEPENDENCIES: Add Eigen from the submodule 
################################################################################
include_directories(${CMAKE_SOURCE_DIR}/external/eigen)

################################################################################
# HEADERS: Add your own headers
################################################################################
include_directories(${CMAKE_SOURCE_DIR}/include)

################################################################################
# Executable
################################################################################
add_executable(least_squares
    src/main.cpp
    src/estimator.cpp
)

################################################################################
# GTest
################################################################################
include(FetchContent)

cmake_policy(SET CMP0135 NEW)


# Download GoogleTest
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)

# Prevent GoogleTest from adding tests automatically
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Add test executable
add_executable(estimator_test
    test/test_estimator.cpp
    src/estimator.cpp
)

target_link_libraries(estimator_test
    gtest_main
)

include(GoogleTest)
gtest_discover_tests(estimator_test)
