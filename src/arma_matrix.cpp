#include "arma_matrix.h"

arma::mat solve_problem(int rows, int cols, int iterations){

    arma::mat A = arma::randn<arma::mat>(rows,cols);
    arma::mat B = cov(A);
    arma::vec V = arma::randn(cols);
    arma::mat C; 
    arma::mat D;

    for(int i = 0; i<iterations; ++i){
        C = solve(V,B); 
        D = inv(B);
    }

    return D;
}