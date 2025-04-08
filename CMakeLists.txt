cmake_minimum_required(VERSION 3.10)
project(LeastSquareEstimator)

set(CMAKE_CXX_STANDARD 17)  #Set C++ version
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Manually add the Eigen path
include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories($ENV{HOME}/toolbox/eigen-3.4.0)

# Source files
add_executable(least_squares
    src/main.cpp
    src/estimator.cpp
)