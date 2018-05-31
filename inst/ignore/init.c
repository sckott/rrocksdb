#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* .Call calls */
extern SEXP _rrocksdb_foo(SEXP);

static const R_CallMethodDef CallEntries[] = {
  {"_rrocksdb_foo", (DL_FUNC) &_rrocksdb_foo, 1},
  {NULL, NULL, 0}
};

void R_init_rrocksdb(DllInfo *dll)
{
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
