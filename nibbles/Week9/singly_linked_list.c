#include <stdio.h>
#include <stdlib.h>

typedef struct Student Student;

struct Student {
        char name[20];
        char programme[20];
        float grade;
        Student *next;
};

// Function Prototypes
Student *get_students();
void print_students(Student *start);

int main(int argc, char *argv[]) {

    //

    return 0;
}

Student *get_students() {}
