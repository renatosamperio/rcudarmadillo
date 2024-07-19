#include "arma_matrix.h"

arma::mat solve_linear(const arma::mat& A, const arma::mat& B) {
    return arma::solve(A, B);
}

arma::mat inverse_matrix(const arma::mat& A) {
    return arma::inv(A);
}
