// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// qgraph_layout_Cpp
NumericMatrix qgraph_layout_Cpp(int pniter, int pvcount, int pecount, NumericVector maxdelta, double parea, double pcoolexp, double prepulserad, IntegerVector Ef, /* Edges from */     IntegerVector Et, /*Edges t0*/     NumericVector W, NumericVector xInit, NumericVector yInit, LogicalVector Cx, LogicalVector Cy, int digits);
RcppExport SEXP _qgraph_qgraph_layout_Cpp(SEXP pniterSEXP, SEXP pvcountSEXP, SEXP pecountSEXP, SEXP maxdeltaSEXP, SEXP pareaSEXP, SEXP pcoolexpSEXP, SEXP prepulseradSEXP, SEXP EfSEXP, SEXP EtSEXP, SEXP WSEXP, SEXP xInitSEXP, SEXP yInitSEXP, SEXP CxSEXP, SEXP CySEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type pniter(pniterSEXP);
    Rcpp::traits::input_parameter< int >::type pvcount(pvcountSEXP);
    Rcpp::traits::input_parameter< int >::type pecount(pecountSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type maxdelta(maxdeltaSEXP);
    Rcpp::traits::input_parameter< double >::type parea(pareaSEXP);
    Rcpp::traits::input_parameter< double >::type pcoolexp(pcoolexpSEXP);
    Rcpp::traits::input_parameter< double >::type prepulserad(prepulseradSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Ef(EfSEXP);
    Rcpp::traits::input_parameter< /* Edges from */     IntegerVector >::type Et(EtSEXP);
    Rcpp::traits::input_parameter< /*Edges t0*/     NumericVector >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xInit(xInitSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yInit(yInitSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type Cx(CxSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type Cy(CySEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(qgraph_layout_Cpp(pniter, pvcount, pecount, maxdelta, parea, pcoolexp, prepulserad, Ef, Et, W, xInit, yInit, Cx, Cy, digits));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_qgraph_qgraph_layout_Cpp", (DL_FUNC) &_qgraph_qgraph_layout_Cpp, 15},
    {NULL, NULL, 0}
};

RcppExport void R_init_qgraph(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
