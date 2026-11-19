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

    float avg_grade = 0;
    int csce_students = 0;

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

        avg_grade += students[count]->grade;
        csce_students++;

        i += 3;
        count++;
    }

    avg_grade = avg_grade / csce_students;

    for (int i = 0; i < num_students; i++) {
        if (strcmp(students[i]->subject, "CSCE") == 0 &&
            students[i]->grade > avg_grade) {
            printf("%s, %.2f\n", students[i]->name, students[i]->grade);
        }
    }

    printf("Average grade: %.2f\n", avg_grade);

    return 0;
}
