// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// read_plink_afs_cpp
List read_plink_afs_cpp(String bedfile, const NumericVector indvec, const NumericVector indvec2, bool verbose);
RcppExport SEXP _admixtools_read_plink_afs_cpp(SEXP bedfileSEXP, SEXP indvecSEXP, SEXP indvec2SEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type bedfile(bedfileSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type indvec(indvecSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type indvec2(indvec2SEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(read_plink_afs_cpp(bedfile, indvec, indvec2, verbose));
    return rcpp_result_gen;
END_RCPP
}
// cpp_opt_A
arma::mat cpp_opt_A(const arma::mat& B, const arma::mat& xvec, const arma::mat& qinv, int nr, double fudge);
RcppExport SEXP _admixtools_cpp_opt_A(SEXP BSEXP, SEXP xvecSEXP, SEXP qinvSEXP, SEXP nrSEXP, SEXP fudgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type xvec(xvecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type qinv(qinvSEXP);
    Rcpp::traits::input_parameter< int >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< double >::type fudge(fudgeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_opt_A(B, xvec, qinv, nr, fudge));
    return rcpp_result_gen;
END_RCPP
}
// cpp_opt_B
arma::mat cpp_opt_B(const arma::mat& A, const arma::vec& xvec, const arma::mat& qinv, int nc, double fudge);
RcppExport SEXP _admixtools_cpp_opt_B(SEXP ASEXP, SEXP xvecSEXP, SEXP qinvSEXP, SEXP ncSEXP, SEXP fudgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type xvec(xvecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type qinv(qinvSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< double >::type fudge(fudgeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_opt_B(A, xvec, qinv, nc, fudge));
    return rcpp_result_gen;
END_RCPP
}
// cpp_qpadm_weights
List cpp_qpadm_weights(const arma::mat& xmat, const arma::mat& qinv, int rnk, double fudge, int iterations, bool constrained, Function qpsolve);
RcppExport SEXP _admixtools_cpp_qpadm_weights(SEXP xmatSEXP, SEXP qinvSEXP, SEXP rnkSEXP, SEXP fudgeSEXP, SEXP iterationsSEXP, SEXP constrainedSEXP, SEXP qpsolveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type xmat(xmatSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type qinv(qinvSEXP);
    Rcpp::traits::input_parameter< int >::type rnk(rnkSEXP);
    Rcpp::traits::input_parameter< double >::type fudge(fudgeSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< bool >::type constrained(constrainedSEXP);
    Rcpp::traits::input_parameter< Function >::type qpsolve(qpsolveSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_qpadm_weights(xmat, qinv, rnk, fudge, iterations, constrained, qpsolve));
    return rcpp_result_gen;
END_RCPP
}
// cpp_get_weights_covariance
arma::mat cpp_get_weights_covariance(arma::cube f4_lo, arma::mat qinv, arma::vec block_lengths, double fudge, int boot, bool constrained, Function qpsolve);
RcppExport SEXP _admixtools_cpp_get_weights_covariance(SEXP f4_loSEXP, SEXP qinvSEXP, SEXP block_lengthsSEXP, SEXP fudgeSEXP, SEXP bootSEXP, SEXP constrainedSEXP, SEXP qpsolveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type f4_lo(f4_loSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type qinv(qinvSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type block_lengths(block_lengthsSEXP);
    Rcpp::traits::input_parameter< double >::type fudge(fudgeSEXP);
    Rcpp::traits::input_parameter< int >::type boot(bootSEXP);
    Rcpp::traits::input_parameter< bool >::type constrained(constrainedSEXP);
    Rcpp::traits::input_parameter< Function >::type qpsolve(qpsolveSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_get_weights_covariance(f4_lo, qinv, block_lengths, fudge, boot, constrained, qpsolve));
    return rcpp_result_gen;
END_RCPP
}
// cpp_aftable_to_dstatnum
arma::mat cpp_aftable_to_dstatnum(arma::mat& aftable, arma::vec& p1, arma::vec& p2, arma::vec& p3, arma::vec& p4);
RcppExport SEXP _admixtools_cpp_aftable_to_dstatnum(SEXP aftableSEXP, SEXP p1SEXP, SEXP p2SEXP, SEXP p3SEXP, SEXP p4SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type aftable(aftableSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type p3(p3SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type p4(p4SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_aftable_to_dstatnum(aftable, p1, p2, p3, p4));
    return rcpp_result_gen;
END_RCPP
}
// cpp_aftable_to_dstatden
arma::mat cpp_aftable_to_dstatden(arma::mat& aftable, arma::vec& p1, arma::vec& p2, arma::vec& p3, arma::vec& p4);
RcppExport SEXP _admixtools_cpp_aftable_to_dstatden(SEXP aftableSEXP, SEXP p1SEXP, SEXP p2SEXP, SEXP p3SEXP, SEXP p4SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type aftable(aftableSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type p3(p3SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type p4(p4SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_aftable_to_dstatden(aftable, p1, p2, p3, p4));
    return rcpp_result_gen;
END_RCPP
}
// cpp_is_polymorphic
arma::vec cpp_is_polymorphic(arma::mat geno);
RcppExport SEXP _admixtools_cpp_is_polymorphic(SEXP genoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type geno(genoSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_is_polymorphic(geno));
    return rcpp_result_gen;
END_RCPP
}
// cpp_opt_edge_lengths
arma::vec cpp_opt_edge_lengths(const arma::mat& ppwts_2d, const arma::mat& ppinv, const arma::vec& f3_est, Function qpsolve, const arma::vec& lower, const arma::vec& upper, double fudge);
RcppExport SEXP _admixtools_cpp_opt_edge_lengths(SEXP ppwts_2dSEXP, SEXP ppinvSEXP, SEXP f3_estSEXP, SEXP qpsolveSEXP, SEXP lowerSEXP, SEXP upperSEXP, SEXP fudgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type ppwts_2d(ppwts_2dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type ppinv(ppinvSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type f3_est(f3_estSEXP);
    Rcpp::traits::input_parameter< Function >::type qpsolve(qpsolveSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< double >::type fudge(fudgeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_opt_edge_lengths(ppwts_2d, ppinv, f3_est, qpsolve, lower, upper, fudge));
    return rcpp_result_gen;
END_RCPP
}
// cpp_fill_pwts
arma::mat cpp_fill_pwts(arma::mat& pwts, const arma::vec& weights, const arma::mat& path_edge_table, const arma::mat& path_admixedge_table, int numpaths);
RcppExport SEXP _admixtools_cpp_fill_pwts(SEXP pwtsSEXP, SEXP weightsSEXP, SEXP path_edge_tableSEXP, SEXP path_admixedge_tableSEXP, SEXP numpathsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type pwts(pwtsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type path_edge_table(path_edge_tableSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type path_admixedge_table(path_admixedge_tableSEXP);
    Rcpp::traits::input_parameter< int >::type numpaths(numpathsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_fill_pwts(pwts, weights, path_edge_table, path_admixedge_table, numpaths));
    return rcpp_result_gen;
END_RCPP
}
// cpp_optimweightsfun
double cpp_optimweightsfun(arma::vec weights, List args);
RcppExport SEXP _admixtools_cpp_optimweightsfun(SEXP weightsSEXP, SEXP argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< List >::type args(argsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_optimweightsfun(weights, args));
    return rcpp_result_gen;
END_RCPP
}
// cpp_get_pairindex
NumericVector cpp_get_pairindex(const NumericVector perm);
RcppExport SEXP _admixtools_cpp_get_pairindex(SEXP permSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type perm(permSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_get_pairindex(perm));
    return rcpp_result_gen;
END_RCPP
}
// cpp_read_packedancestrymap
NumericMatrix cpp_read_packedancestrymap(String genofile, int nsnp, int nind, IntegerVector indvec, int first, int last, bool transpose, bool verbose);
RcppExport SEXP _admixtools_cpp_read_packedancestrymap(SEXP genofileSEXP, SEXP nsnpSEXP, SEXP nindSEXP, SEXP indvecSEXP, SEXP firstSEXP, SEXP lastSEXP, SEXP transposeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type genofile(genofileSEXP);
    Rcpp::traits::input_parameter< int >::type nsnp(nsnpSEXP);
    Rcpp::traits::input_parameter< int >::type nind(nindSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type indvec(indvecSEXP);
    Rcpp::traits::input_parameter< int >::type first(firstSEXP);
    Rcpp::traits::input_parameter< int >::type last(lastSEXP);
    Rcpp::traits::input_parameter< bool >::type transpose(transposeSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_read_packedancestrymap(genofile, nsnp, nind, indvec, first, last, transpose, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_admixtools_read_plink_afs_cpp", (DL_FUNC) &_admixtools_read_plink_afs_cpp, 4},
    {"_admixtools_cpp_opt_A", (DL_FUNC) &_admixtools_cpp_opt_A, 5},
    {"_admixtools_cpp_opt_B", (DL_FUNC) &_admixtools_cpp_opt_B, 5},
    {"_admixtools_cpp_qpadm_weights", (DL_FUNC) &_admixtools_cpp_qpadm_weights, 7},
    {"_admixtools_cpp_get_weights_covariance", (DL_FUNC) &_admixtools_cpp_get_weights_covariance, 7},
    {"_admixtools_cpp_aftable_to_dstatnum", (DL_FUNC) &_admixtools_cpp_aftable_to_dstatnum, 5},
    {"_admixtools_cpp_aftable_to_dstatden", (DL_FUNC) &_admixtools_cpp_aftable_to_dstatden, 5},
    {"_admixtools_cpp_is_polymorphic", (DL_FUNC) &_admixtools_cpp_is_polymorphic, 1},
    {"_admixtools_cpp_opt_edge_lengths", (DL_FUNC) &_admixtools_cpp_opt_edge_lengths, 7},
    {"_admixtools_cpp_fill_pwts", (DL_FUNC) &_admixtools_cpp_fill_pwts, 5},
    {"_admixtools_cpp_optimweightsfun", (DL_FUNC) &_admixtools_cpp_optimweightsfun, 2},
    {"_admixtools_cpp_get_pairindex", (DL_FUNC) &_admixtools_cpp_get_pairindex, 1},
    {"_admixtools_cpp_read_packedancestrymap", (DL_FUNC) &_admixtools_cpp_read_packedancestrymap, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_admixtools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
