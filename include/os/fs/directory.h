#pragma once

#include "file.h"

#include <string>
#include <vector>

#include <ctime>

using std::string;
using std::vector;

namespace hackbit {

class Directory {
public:
  Directory() = default;
  Directory(const string& dn, int uid, Directory* father);

  vector<File*> files;
  vector<Directory*> dirs;

  Directory* father;

  string c_time;
  string name;
  mode mode_;
  int creator_id;
};

} // hackbit