# TODO: Convert this into a library (learning task) 

# C++ Practice
# 🔍 Least Squares Estimator

A C++ implementation of a 2D position estimator using nonlinear least squares, based on known anchor locations and range measurements.

## 📦 Dependencies

- [Eigen 3](https://gitlab.com/libeigen/eigen) (included as a Git submodule)
- C++17
- CMake 3.10+
- Git (for cloning with submodules)

## 📁 Project Structure
```bash
least_squares_project/
├── CMakeLists.txt         # CMake build configuration
├── README.md              # Project description and usage
├── include/
│   └── estimator.hpp      # Estimator function declarations
├── src/
│   ├── main.cpp           # Entry point for running the estimator
│   └── estimator.cpp      # Core logic for least-squares estimation
├── test/
│   └── test_estimator.cpp # Google Test unit tests
├── external/
│   └── eigen/             # Eigen linear algebra library (submodule)
```

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

```

## 🧪 Running Unit Tests
This project includes Google Test-based unit tests for verifying estimation behavior.

```bash 
# From the build directory
ctest --output-on-failure

# Or run the test binary directly
./estimator_test
```

## 📄 License
MIT License — free to use, modify, and distribute.

## 🧠 Author
Shashank Verma
GitHub: shashankumich
