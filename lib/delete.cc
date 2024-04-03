#include "lib/delete.h"
#include "lib/utils.h"
#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

void delete_file(const string filename) {
    if (fileExists(filename)) {
        int result = remove(filename.c_str());
        if (result == 0) {
            std::cout << filename << " was deleted" << std::endl;
        } else {
            string errorMessage = string("Error: Not possible to delete file: ")+filename;
            throw invalid_argument(errorMessage);
        }

    } else {
        string errorMessage = string("Error: file does not exist, cannot be deleted: ")+filename;
        throw invalid_argument(errorMessage);
    };
    
    return;
}