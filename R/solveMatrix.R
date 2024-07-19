#' An example to solve a system
#' @param A `matrix` `numeric` input matrix
#' @param B `matrix` `numeric` input matrix
#' @param size `numeric` size of square matrix
#' @export
solveMatrix <- function(A = NA, B = NA, size = 200) {

    if (any(is.na(A))) {
        A <- initMatrix(size, size)
    }
    if (any(is.na(B))) {
        B <- initMatrix(size, 1)
    }

    # Solve the system of linear equations
    solution <- solve_linear(A, B)

    # Calculate the inverse of matrix A
    inverseA <- inverse_matrix(A)
}

# size <- 1e03; A <- initMatrix(size, size); B <- initMatrix(size, size)