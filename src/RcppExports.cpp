// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_hello_
void rcpp_hello_();
RcppExport SEXP Romp_rcpp_hello_() {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    rcpp_hello_();
    return R_NilValue;
END_RCPP
}
// rcpp_sum_
double rcpp_sum_(Rcpp::NumericVector x);
RcppExport SEXP Romp_rcpp_sum_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(rcpp_sum_(x));
    return __result;
END_RCPP
}
// rcpp_sweep_
Rcpp::NumericMatrix rcpp_sweep_(Rcpp::NumericMatrix x);
RcppExport SEXP Romp_rcpp_sweep_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type x(xSEXP);
    __result = Rcpp::wrap(rcpp_sweep_(x));
    return __result;
END_RCPP
}
