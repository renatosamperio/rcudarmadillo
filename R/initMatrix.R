#' Initailised a matrix of 2D
#' @param n_rows `numeric` number of rows
#' @param n_cols `numeric` number of rows
initMatrix <- function(n_rows = 200, n_cols = 200) {
    matrix(stats::runif(n_rows*n_cols), nrow=n_rows, ncol=n_cols)
}