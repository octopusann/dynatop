// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// multi_hsu_cpp
void multi_hsu_cpp(IntegerVector id, NumericMatrix states, NumericMatrix properties, List flow_dir, IntegerMatrix ext_idx, IntegerVector channel_id, NumericVector channel_area, IntegerVector channel_ext_idx, NumericMatrix ext_rec, NumericMatrix channel_inflow, LogicalVector keep_states, List state_rec, double timestep, int n_sub_step);
RcppExport SEXP _dynatop_multi_hsu_cpp(SEXP idSEXP, SEXP statesSEXP, SEXP propertiesSEXP, SEXP flow_dirSEXP, SEXP ext_idxSEXP, SEXP channel_idSEXP, SEXP channel_areaSEXP, SEXP channel_ext_idxSEXP, SEXP ext_recSEXP, SEXP channel_inflowSEXP, SEXP keep_statesSEXP, SEXP state_recSEXP, SEXP timestepSEXP, SEXP n_sub_stepSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type id(idSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type states(statesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type properties(propertiesSEXP);
    Rcpp::traits::input_parameter< List >::type flow_dir(flow_dirSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type ext_idx(ext_idxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type channel_id(channel_idSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type channel_area(channel_areaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type channel_ext_idx(channel_ext_idxSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ext_rec(ext_recSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type channel_inflow(channel_inflowSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type keep_states(keep_statesSEXP);
    Rcpp::traits::input_parameter< List >::type state_rec(state_recSEXP);
    Rcpp::traits::input_parameter< double >::type timestep(timestepSEXP);
    Rcpp::traits::input_parameter< int >::type n_sub_step(n_sub_stepSEXP);
    multi_hsu_cpp(id, states, properties, flow_dir, ext_idx, channel_id, channel_area, channel_ext_idx, ext_rec, channel_inflow, keep_states, state_rec, timestep, n_sub_step);
    return R_NilValue;
END_RCPP
}
// single_hsu_cpp
void single_hsu_cpp(NumericMatrix state_rec, NumericMatrix ext_rec, NumericMatrix flux_rec, NumericVector properties, double timestep, int n_sub_step);
RcppExport SEXP _dynatop_single_hsu_cpp(SEXP state_recSEXP, SEXP ext_recSEXP, SEXP flux_recSEXP, SEXP propertiesSEXP, SEXP timestepSEXP, SEXP n_sub_stepSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type state_rec(state_recSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ext_rec(ext_recSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type flux_rec(flux_recSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type properties(propertiesSEXP);
    Rcpp::traits::input_parameter< double >::type timestep(timestepSEXP);
    Rcpp::traits::input_parameter< int >::type n_sub_step(n_sub_stepSEXP);
    single_hsu_cpp(state_rec, ext_rec, flux_rec, properties, timestep, n_sub_step);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dynatop_multi_hsu_cpp", (DL_FUNC) &_dynatop_multi_hsu_cpp, 14},
    {"_dynatop_single_hsu_cpp", (DL_FUNC) &_dynatop_single_hsu_cpp, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_dynatop(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
