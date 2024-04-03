#include "lib/create.h"
#include "lib/utils.h"
#include <iostream>
#include <fstream>
using namespace std;

// Create
void create(string filename) {
    if (fileExists(filename)) {
        string errorMessage = string("Error: file already exists: ")+filename;
        throw invalid_argument(errorMessage);
    } else {
        // Create and open a text file <filename>
        ofstream MyFile( filename );
        std::cout << filename << " has been created" << std::endl;

        // Write to the file
        MyFile << "Hello World in textfile!";

        // Close the file
        MyFile.close();
    };
    
    return;
}