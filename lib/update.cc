#include "lib/update.h"
#include "lib/utils.h"
#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;


void append_text(const string filename, const string extra_text) {   

    if (fileExists(filename)) {
        ofstream filename_stream;
        filename_stream.open(filename, std::ios::out|std::ios::app);
        filename_stream << extra_text;
        filename_stream.close();
    } else {
        string errorMessage = string("Error: file does not exist: ")+filename;
        throw invalid_argument(errorMessage);
    };

    return;
}