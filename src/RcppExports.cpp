// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// gogame_test
void gogame_test();
RcppExport SEXP sgf_gogame_test() {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    gogame_test();
    return R_NilValue;
END_RCPP
}
// prune_sgf
std::string prune_sgf(std::string sgf, bool keep_first);
RcppExport SEXP sgf_prune_sgf(SEXP sgfSEXP, SEXP keep_firstSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type sgf(sgfSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_first(keep_firstSEXP);
    __result = Rcpp::wrap(prune_sgf(sgf, keep_first));
    return __result;
END_RCPP
}
// get_transitions
Rcpp::DataFrame get_transitions(unsigned int boardsize, std::vector<bool> ismove_vec, std::vector<unsigned int> x_vec, std::vector<unsigned int> y_vec, std::vector<unsigned int> color_vec);
RcppExport SEXP sgf_get_transitions(SEXP boardsizeSEXP, SEXP ismove_vecSEXP, SEXP x_vecSEXP, SEXP y_vecSEXP, SEXP color_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< unsigned int >::type boardsize(boardsizeSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type ismove_vec(ismove_vecSEXP);
    Rcpp::traits::input_parameter< std::vector<unsigned int> >::type x_vec(x_vecSEXP);
    Rcpp::traits::input_parameter< std::vector<unsigned int> >::type y_vec(y_vecSEXP);
    Rcpp::traits::input_parameter< std::vector<unsigned int> >::type color_vec(color_vecSEXP);
    __result = Rcpp::wrap(get_transitions(boardsize, ismove_vec, x_vec, y_vec, color_vec));
    return __result;
END_RCPP
}
