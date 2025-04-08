# C++ Practice
# 🔍 Least Squares Estimator

A C++ implementation of a 2D position estimator using nonlinear least squares, based on known anchor locations and range measurements.

## 📦 Dependencies

- [Eigen 3](https://gitlab.com/libeigen/eigen) (included as a Git submodule)
- C++17
- CMake 3.10+

## 🛠️ Build Instructions

```bash
# Clone the repo including Eigen
git clone --recurse-submodules https://github.com/shashankumich/least_squares_project.git
cd least_squares_project

# Build
mkdir build
cd build
cmake ..
make

# Run
./least_squares

# Project Structure
include/         # Estimator function declarations
src/             # Source files including main
external/eigen/  # Eigen as a git submodule

