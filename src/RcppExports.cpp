// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cumsumBorder
NumericVector cumsumBorder(NumericVector x, double border);
RcppExport SEXP _RnaSeqSampleSize_cumsumBorder(SEXP xSEXP, SEXP borderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type border(borderSEXP);
    rcpp_result_gen = Rcpp::wrap(cumsumBorder(x, border));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP generateA2Fx(SEXP, SEXP, SEXP);
RcppExport SEXP myDnbinom2(SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_RnaSeqSampleSize_cumsumBorder", (DL_FUNC) &_RnaSeqSampleSize_cumsumBorder, 2},
    {"generateA2Fx", (DL_FUNC) &generateA2Fx, 3},
    {"myDnbinom2",   (DL_FUNC) &myDnbinom2,   4},
    {NULL, NULL, 0}
};

RcppExport void R_init_RnaSeqSampleSize(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
