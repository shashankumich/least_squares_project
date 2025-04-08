#include <iostream>
#include <Eigen/Dense>
#include <vector>
#include "estimator.hpp"


int main(){

    std::vector<Eigen::Vector2d> anchors = { {0,1}, {1,2}, {0,5}};
    std::vector<double> ranges = {4.9, 3.1, 4.5};

    Eigen::Vector2d esti_pos = leastSquareEstimator(anchors, ranges);

    std::cout << "Estimated position:  " << esti_pos.transpose() << std::endl;

    return 0;
}