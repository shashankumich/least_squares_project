#ifndef __ESTIMATOR__
#define __ESTIMATOR__

#include<vector>
#include<Eigen/Dense>



Eigen::Vector2d leastSquareEstimator(const std::vector<Eigen::Vector2d> &anchors, const std::vector<double> &ranges);


#endif // ESTIMATOR