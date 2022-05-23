// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// jaccard_coeff
NumericMatrix jaccard_coeff(SEXP R_idx, SEXP R_weight);
RcppExport SEXP _monocle3_jaccard_coeff(SEXP R_idxSEXP, SEXP R_weightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type R_idx(R_idxSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_weight(R_weightSEXP);
    rcpp_result_gen = Rcpp::wrap(jaccard_coeff(R_idx, R_weight));
    return rcpp_result_gen;
END_RCPP
}
// pnorm_over_mat
NumericMatrix pnorm_over_mat(SEXP R_num_links_ij, SEXP R_var_null_num_links);
RcppExport SEXP _monocle3_pnorm_over_mat(SEXP R_num_links_ijSEXP, SEXP R_var_null_num_linksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type R_num_links_ij(R_num_links_ijSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_var_null_num_links(R_var_null_num_linksSEXP);
    rcpp_result_gen = Rcpp::wrap(pnorm_over_mat(R_num_links_ij, R_var_null_num_links));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_monocle3_jaccard_coeff", (DL_FUNC) &_monocle3_jaccard_coeff, 2},
    {"_monocle3_pnorm_over_mat", (DL_FUNC) &_monocle3_pnorm_over_mat, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_monocle3(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
