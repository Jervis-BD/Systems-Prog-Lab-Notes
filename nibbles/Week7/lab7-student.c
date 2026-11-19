#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student Student;

struct Student {
        char name[20];
        char subject[20];
        float grade;
};

int main(int argc, char *argv[]) {

    // Initialise atleast two possibl students
    int num_students = 2;

    // Pointer to pointers of Student Structs
    Student **students = calloc(num_students, sizeof(Student *));

    // Keeps track of current arg
    int i = 0;

    // Keeps track of current student
    int count = 0;
    while (i < argc - 1) {
        // Dynamically resize array if exceeds current size
        if (count >= num_students) {
            num_students += 1;
            Student **pTemp =
                realloc(students, num_students * sizeof(Student *));
            students = pTemp;
        }

        // Define new pointer with size of student struct
        Student *sP = malloc(sizeof(Student));

        // Assigns each arg to correct element
        strcpy((sP)->name, argv[i + 1]);
        strcpy((sP)->subject, argv[i + 2]);
        sP->grade = atof(argv[i + 3]);

        students[count] = sP;

        i += 3;
        count++;
    }

    for (int i = 0; i < num_students; i++) {
        Student *curr_student = students[i];
        printf("%s, %s, %.2f\n", curr_student->name, curr_student->subject,
               curr_student->grade);
        //        curr_student[2]);
    }

    return 0;
}
