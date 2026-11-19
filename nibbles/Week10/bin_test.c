#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    //
    FILE *pfile = NULL;            // File pointer
    char *filename = "myfile.bin"; // So a binary file has an extension of
                                   // '.bin'
    pfile = fopen(filename, "wb"); // open a file with a binary mode
    if (!pfile)                    // check if the open operation work correctly
    {
        printf("Error opening %s for writing. Program terminated.\n", filename);
        exit(1);
    }

    int data[] = {700, 8, 9, 78}; // the array of integers
    int num_items =
        sizeof(data) / sizeof(int); // calculate the number of elements in the
                                    // array (size of array)
    int wcount = fwrite(data, sizeof(int), num_items,
                        pfile); // write data to binary file

    fclose(pfile); // close the file
    return 0;
}
