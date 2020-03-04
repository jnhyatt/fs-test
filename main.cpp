#include <cassert>

#ifdef USE_GHC_FS
#include <ghc/filesystem.hpp>
namespace fs = ghc::filesystem;
#else
#include <filesystem>
namespace fs = std::filesystem;
#endif

#include <fstream>
#include <iostream>
#include <sstream>

int main() {
    fs::path path;
    std::istringstream ss("file text.txt");
    std::string directive;

    ss >> directive >> path;
    assert(directive == "file");

    std::ifstream fileIn(path);
    assert(fileIn);

    std::cout << fileIn.rdbuf();

    return 0;
}
