// # Sort

#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
NumericVector cpp_sort(NumericVector x)
{
  NumericVector ret = clone(x);
  std::sort(ret.begin(), ret.end());
  return ret;
}

/*** R
x <- runif(1e6)
bench::mark(
  sort(x),
  cpp_sort(x)
)
*/

