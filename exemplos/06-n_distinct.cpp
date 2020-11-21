// # n_distinct
// nem sempre é fácil ser mais rápido!

#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
int cpp_n_distinct(NumericVector x)
{
  std::unordered_set<double> unique;
  
  double tmp;
  size_t size = x.size();
  for (size_t i = 0; i < size; i++)
  {
    tmp = x.at(i);
    unique.insert(tmp);
  }
  
  return unique.size();
}

/*** R
library(dplyr)
x <- sample(1:5000, size = 1e6, replace = TRUE)
bench::mark(
  dplyr::n_distinct(x),
  length(unique(x)),
  cpp_n_distinct(x)
)
*/
