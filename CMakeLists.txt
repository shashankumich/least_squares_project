cmake_minimum_required(VERSION 3.10)
project(LeastSquaresEstimator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add Eigen from the submodule
include_directories(${CMAKE_SOURCE_DIR}/external/eigen)

# Add your own headers
include_directories(${CMAKE_SOURCE_DIR}/include)

# Define the executable
add_executable(least_squares
    src/main.cpp
    src/estimator.cpp
)
