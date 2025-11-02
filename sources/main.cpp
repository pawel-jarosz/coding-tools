#include <iostream>

#include "IncludeFinder/IncludeFinder.hpp"

int main() {
    cpp_tools::include_finder::IncludeFinderApp app;
    app.execute();
    return 0;
}