#include <cassert>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>

int main() {
    std::filesystem::path path;
    std::istringstream ss("file text.txt");
    std::string directive;

    ss >> directive >> path;
    assert(directive == "file");

    std::ifstream fileIn(path);
    assert(fileIn);

    std::cout << fileIn.rdbuf();

    return 0;
}
