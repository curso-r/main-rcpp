#include <Rcpp.h>
using namespace Rcpp;

// Crie uma função com Rcpp que faça o ReLU de um vetor de números.
// No R essa função seria algo do tipo:

/*** R
relu <- function(x) {
  ifelse(x > 0, x, 0)
}
*/

// [[Rcpp::export]]
NumericVector cpp_relu (NumericVector x)
{
  NumericVector out = clone(x);
  for (int i = 0; i < x.size(); i++)
  {
    if (x[i] < 0)
      out[i] = 0;
  }
  return out;
}

/*** R
cpp_relu(-5:5)
*/