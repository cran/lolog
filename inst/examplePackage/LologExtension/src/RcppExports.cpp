// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// lolog_hello_world
Rcpp::List lolog_hello_world();
RcppExport SEXP _LologExtension_lolog_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(lolog_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// registerMinDegree
void registerMinDegree();
RcppExport SEXP _LologExtension_registerMinDegree() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    registerMinDegree();
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_LologExtension_lolog_hello_world", (DL_FUNC) &_LologExtension_lolog_hello_world, 0},
    {"_LologExtension_registerMinDegree", (DL_FUNC) &_LologExtension_registerMinDegree, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_LologExtension(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}