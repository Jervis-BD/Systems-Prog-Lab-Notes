#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_word(char **pWord, FILE *pfile);

int main(int argc, char *argv[]) {
    //

    char *filename = "studentBinary.bin";

    FILE *pfile = NULL;
    pfile = fopen(filename, "rb");

    if (!pfile) // check if the open operation work correctly
    {
        printf("Error opening %s for writing. Program terminated.\n", filename);
        exit(1);
    }

    char *name;
    get_word(&name, pfile);
    printf("Name: %s\n", name);

    char *college;
    get_word(&college, pfile);
    printf("College: %s\n", college);

    int data[1];
    fread(data, 1, sizeof(int), pfile);

    printf("Age: %d\n", data[0]);

    float grade[1];
    fread(grade, 1, sizeof(float), pfile);

    printf("Grade: %.2f\n", grade[0]);

    /*int name_len[1];
    fread(name_len, sizeof(int), 1, pfile);

    printf("%d\n", name_len[0]);

    char name[name_len[0]];

    fread(name, sizeof(char), name_len[0], pfile);
    printf("%s\n", name);*/

    /*
    int name_len;
    scanf("%d", &name_len);

    char name[name_len];
    scanf("%s", name);

    int coll_len;
    scanf("%d", &coll_len);

    char college[coll_len];
    scanf("%s", college);

    int age;
    scanf("%d", &age);

    float grade;
    scanf("%f", &grade);

    printf("Name: %s\nCollege: %s\nAge: %d\nGrade: %.2f\n", name, college,
    age, grade);
    */
    return 0;
}

void get_word(char **pWord, FILE *pfile) {
    int word_len[1];
    fread(word_len, sizeof(int), 1, pfile);

    *pWord = malloc(word_len[0] * sizeof(char));

    fread(*pWord, sizeof(char), word_len[0], pfile);
}
