/* Use CRUD functions */
#include "lib/create.h"
#include "lib/read.h"
#include "lib/update.h"
#include "lib/delete.h"
#include <iostream>
#include <fstream>
using namespace std;

const string MyFileName = "file1.txt";

int main()
{
    std::cout << "Hello, lets CRUD!" << std::endl;

    // CREATE
    create(MyFileName);

    // READ and print
    read_and_count_chars(MyFileName);

    // UPDATE
    append_text(MyFileName, "\nExtra Text Appended!");

    // Read and print again
    read_and_count_chars(MyFileName);

    // DELETE
    delete_file(MyFileName);
}