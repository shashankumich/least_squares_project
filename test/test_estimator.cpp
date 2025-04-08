#include <gtest/gtest.h>
#include "estimator.hpp"
#include <Eigen/Dense>
#include <vector>

TEST(LeastSquareEstimatorTest, BasicSanity) {
    std::vector<Eigen::Vector2d> anchors = {
        {0, 1}, {1, 2}, {2, 4}, {0, 5}
    };
    std::vector<double> ranges = {4.9, 3.1, 4.5, 3.7};

    Eigen::Vector2d result = leastSquareEstimator(anchors, ranges);
    
    // Assert expected size or some rough sanity bounds
    EXPECT_EQ(result.size(), 2);
    EXPECT_GT(result.x(), -10.0);
    EXPECT_LT(result.y(), 10.0);
}

TEST(LeastSquareEstimatorTest, TooFewAnchors) {
    std::vector<Eigen::Vector2d> anchors = {
        {0, 1}, {1, 2}
    };
    std::vector<double> ranges = {1.0, 2.0};

    Eigen::Vector2d result = leastSquareEstimator(anchors, ranges);

    // Should return zero vector
    EXPECT_EQ(result, Eigen::Vector2d::Zero());
}