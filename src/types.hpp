#ifndef MANIFOLD2_TYPES_H_
#define MANIFOLD2_TYPES_H_

#include <Eigen/Core>

typedef double FT;

typedef Eigen::Matrix<FT, 3, 1> Vector3;
typedef Eigen::Matrix<FT, 4, 1> Vector4;
typedef Eigen::Matrix<FT, Eigen::Dynamic, 1> VectorX;

typedef Eigen::Vector3i Vector3i;
typedef Eigen::Matrix<int, 4, 1> Vector4i;
typedef Eigen::VectorXi VectorXi;

typedef Eigen::MatrixXd MatrixD;
typedef Eigen::MatrixXi MatrixI;

#endif