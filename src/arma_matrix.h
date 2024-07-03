#include <armadillo>
#include <Rcpp.h>
using namespace Rcpp;

//' Matrix solver 
//' @param rows `numeric` matrix rows
//' @param cols `numeric` matrix columns
//' @param iterations `numeric` number of tries
// [[Rcpp::export]]
arma::mat solve_problem(int rows, int cols, int iterations);