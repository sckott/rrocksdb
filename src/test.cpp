#include <Rcpp.h>

#include "rocksdb/db.h"
#include "rocksdb/options.h"

#include <cassert>

using namespace rocksdb;

//[[Rcpp::export]]
std::string foo() {
  Options options;
  options.create_if_missing = true;
  // DB* db;
  // rocksdb::Status status =
  //   rocksdb::DB::Open(options, "/tmp/testdb", &db);
  // assert(status.ok());
  // std::string out;
  // if (status.ok()) {
  //   out = status.ToString();
  // };
  // return out;
  std::string out = "xx";
  return out;
};
