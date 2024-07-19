#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]

// Function to solve a system of linear equations
// [[Rcpp::export]]
arma::mat solve_linear(const arma::mat& A, const arma::mat& B);


// Function to calculate the inverse of a matrix
// [[Rcpp::export]]
arma::mat inverse_matrix(const arma::mat& A);
