#include <iostream>
#include <sys/stat.h>

using namespace std;


bool fileExists(const string filename) {
    struct stat buffer;
    if (stat(filename.c_str(), &buffer) != -1)
    {
        return true;
    }
    return false;
};