#include <RcppArmadillo.h>
#include <RcppArmadilloExtensions/sample.h>
//[[Rcpp::depends(RcppArmadillo)]]

using namespace Rcpp;

// Crie uma função em RcppArmadillo que seja exatamente equivalente à função
// sample() do R. Procure na documentação se já existe algo parecido e que você
// possa aproveitar.

/*** R
sample(letters[1:10], size = 3, replace = TRUE, prob = rep(1/10, 10))
*/

// [[Rcpp::export]]
arma::vec cpp_sample (arma::vec x, int size, bool replace, NumericVector prob)
{
  return Rcpp::RcppArmadillo::sample(x, size, replace, prob);
}

/*** R
cpp_sample(1:10, 3, TRUE, prob = rep(1/10, 10))
*/