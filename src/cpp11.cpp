// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// get_sheet_names.cpp
cpp11::strings get_sheet_names_(const std::string file, const bool include_external_data);
extern "C" SEXP _readODS_get_sheet_names_(SEXP file, SEXP include_external_data) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_sheet_names_(cpp11::as_cpp<cpp11::decay_t<const std::string>>(file), cpp11::as_cpp<cpp11::decay_t<const bool>>(include_external_data)));
  END_CPP11
}
// get_sheet_names.cpp
cpp11::strings get_flat_sheet_names_(const std::string file, const bool include_external_data);
extern "C" SEXP _readODS_get_flat_sheet_names_(SEXP file, SEXP include_external_data) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_flat_sheet_names_(cpp11::as_cpp<cpp11::decay_t<const std::string>>(file), cpp11::as_cpp<cpp11::decay_t<const bool>>(include_external_data)));
  END_CPP11
}
// read_flat_ods_.cpp
cpp11::strings read_flat_ods_(const std::string file, int start_row, int stop_row, int start_col, int stop_col, const int sheet_index, const bool formula_as_formula);
extern "C" SEXP _readODS_read_flat_ods_(SEXP file, SEXP start_row, SEXP stop_row, SEXP start_col, SEXP stop_col, SEXP sheet_index, SEXP formula_as_formula) {
  BEGIN_CPP11
    return cpp11::as_sexp(read_flat_ods_(cpp11::as_cpp<cpp11::decay_t<const std::string>>(file), cpp11::as_cpp<cpp11::decay_t<int>>(start_row), cpp11::as_cpp<cpp11::decay_t<int>>(stop_row), cpp11::as_cpp<cpp11::decay_t<int>>(start_col), cpp11::as_cpp<cpp11::decay_t<int>>(stop_col), cpp11::as_cpp<cpp11::decay_t<const int>>(sheet_index), cpp11::as_cpp<cpp11::decay_t<const bool>>(formula_as_formula)));
  END_CPP11
}
// read_ods_.cpp
cpp11::strings read_ods_(const std::string file, int start_row, int stop_row, int start_col, int stop_col, const int sheet_index, const bool formula_as_formula);
extern "C" SEXP _readODS_read_ods_(SEXP file, SEXP start_row, SEXP stop_row, SEXP start_col, SEXP stop_col, SEXP sheet_index, SEXP formula_as_formula) {
  BEGIN_CPP11
    return cpp11::as_sexp(read_ods_(cpp11::as_cpp<cpp11::decay_t<const std::string>>(file), cpp11::as_cpp<cpp11::decay_t<int>>(start_row), cpp11::as_cpp<cpp11::decay_t<int>>(stop_row), cpp11::as_cpp<cpp11::decay_t<int>>(start_col), cpp11::as_cpp<cpp11::decay_t<int>>(stop_col), cpp11::as_cpp<cpp11::decay_t<const int>>(sheet_index), cpp11::as_cpp<cpp11::decay_t<const bool>>(formula_as_formula)));
  END_CPP11
}
// splice.cpp
std::string splice_sheet_(const std::string original_xml, const std::string sheet_file, const bool flat);
extern "C" SEXP _readODS_splice_sheet_(SEXP original_xml, SEXP sheet_file, SEXP flat) {
  BEGIN_CPP11
    return cpp11::as_sexp(splice_sheet_(cpp11::as_cpp<cpp11::decay_t<const std::string>>(original_xml), cpp11::as_cpp<cpp11::decay_t<const std::string>>(sheet_file), cpp11::as_cpp<cpp11::decay_t<const bool>>(flat)));
  END_CPP11
}
// splice.cpp
std::string update_sheet_(const std::string original_xml, const std::string sheet_file, const bool flat, const int sheet_index);
extern "C" SEXP _readODS_update_sheet_(SEXP original_xml, SEXP sheet_file, SEXP flat, SEXP sheet_index) {
  BEGIN_CPP11
    return cpp11::as_sexp(update_sheet_(cpp11::as_cpp<cpp11::decay_t<const std::string>>(original_xml), cpp11::as_cpp<cpp11::decay_t<const std::string>>(sheet_file), cpp11::as_cpp<cpp11::decay_t<const bool>>(flat), cpp11::as_cpp<cpp11::decay_t<const int>>(sheet_index)));
  END_CPP11
}
// write_sheet_file_.cpp
cpp11::r_string write_sheet_file_(const std::string& filename, const cpp11::data_frame& x, const std::string& sheet_name, const bool row_names, const bool col_names, const bool na_as_string, const bool padding, const std::string& header, const std::string& footer);
extern "C" SEXP _readODS_write_sheet_file_(SEXP filename, SEXP x, SEXP sheet_name, SEXP row_names, SEXP col_names, SEXP na_as_string, SEXP padding, SEXP header, SEXP footer) {
  BEGIN_CPP11
    return cpp11::as_sexp(write_sheet_file_(cpp11::as_cpp<cpp11::decay_t<const std::string&>>(filename), cpp11::as_cpp<cpp11::decay_t<const cpp11::data_frame&>>(x), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(sheet_name), cpp11::as_cpp<cpp11::decay_t<const bool>>(row_names), cpp11::as_cpp<cpp11::decay_t<const bool>>(col_names), cpp11::as_cpp<cpp11::decay_t<const bool>>(na_as_string), cpp11::as_cpp<cpp11::decay_t<const bool>>(padding), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(header), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(footer)));
  END_CPP11
}
// write_sheet_file_.cpp
cpp11::r_string write_sheet_file_list_(const std::string& filename, const cpp11::list_of<cpp11::data_frame>& x, const std::string& sheet_name, const bool row_names, const bool col_names, const bool na_as_string, const bool padding, const std::string& header, const std::string& footer);
extern "C" SEXP _readODS_write_sheet_file_list_(SEXP filename, SEXP x, SEXP sheet_name, SEXP row_names, SEXP col_names, SEXP na_as_string, SEXP padding, SEXP header, SEXP footer) {
  BEGIN_CPP11
    return cpp11::as_sexp(write_sheet_file_list_(cpp11::as_cpp<cpp11::decay_t<const std::string&>>(filename), cpp11::as_cpp<cpp11::decay_t<const cpp11::list_of<cpp11::data_frame>&>>(x), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(sheet_name), cpp11::as_cpp<cpp11::decay_t<const bool>>(row_names), cpp11::as_cpp<cpp11::decay_t<const bool>>(col_names), cpp11::as_cpp<cpp11::decay_t<const bool>>(na_as_string), cpp11::as_cpp<cpp11::decay_t<const bool>>(padding), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(header), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(footer)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_readODS_get_flat_sheet_names_",  (DL_FUNC) &_readODS_get_flat_sheet_names_,  2},
    {"_readODS_get_sheet_names_",       (DL_FUNC) &_readODS_get_sheet_names_,       2},
    {"_readODS_read_flat_ods_",         (DL_FUNC) &_readODS_read_flat_ods_,         7},
    {"_readODS_read_ods_",              (DL_FUNC) &_readODS_read_ods_,              7},
    {"_readODS_splice_sheet_",          (DL_FUNC) &_readODS_splice_sheet_,          3},
    {"_readODS_update_sheet_",          (DL_FUNC) &_readODS_update_sheet_,          4},
    {"_readODS_write_sheet_file_",      (DL_FUNC) &_readODS_write_sheet_file_,      9},
    {"_readODS_write_sheet_file_list_", (DL_FUNC) &_readODS_write_sheet_file_list_, 9},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_readODS(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}