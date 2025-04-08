#include "estimator.hpp"
#include <iostream>

Eigen::Vector2d leastSquareEstimator(const std::vector<Eigen::Vector2d> &anchors, const std::vector<double> &ranges){

    int numAnchors = anchors.size();

    if (numAnchors < 3){
        std::cout << "Not enough anchors to estimate the accurate location" << std::endl;
    }

    Eigen::Vector2d firstAnchor = anchors[0];
    double firstRange = ranges[0];

    Eigen::MatrixXd A_Matrix(numAnchors-1, 2);
    Eigen::VectorXd B_Matrix(numAnchors-1, 1);

    for(int i = 1; i < numAnchors; i++){
        Eigen::Vector2d cur_Anchor = anchors[i];
        double cur_range = ranges[i];
        A_Matrix.row(i-1) = 2 * (cur_Anchor - firstAnchor).transpose(); 

        B_Matrix(i-1) = firstRange * firstRange - cur_range * cur_range + cur_Anchor.squaredNorm() - firstAnchor.squaredNorm();
    }

    Eigen::Vector2d estimated_position = (A_Matrix.transpose() * A_Matrix).ldlt().solve(A_Matrix.transpose() * B_Matrix);

    return estimated_position;

}