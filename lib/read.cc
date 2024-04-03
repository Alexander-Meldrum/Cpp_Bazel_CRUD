#include "lib/read.h"
#include "lib/utils.h"
#include <iostream>
#include <fstream>
using namespace std;

void read_and_count_chars(string filename) {   

    if (fileExists(filename)) {
        string line;
        int counter = 0;
        ifstream inMyStream (filename); 
        

        if (inMyStream.is_open()) {
            while( getline ( inMyStream, line ) ) {
                    cout << line << endl;
                    counter += line.length();
                }
            }
        inMyStream.close();
        std::cout << "The file: " << filename << " contains " << counter << " chars" << std::endl;

    } else {
        string errorMessage = string("Error: file does not exist: ")+filename;
        throw invalid_argument(errorMessage);
    };

    return;
}