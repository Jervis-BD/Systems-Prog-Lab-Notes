#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Country Country;
typedef struct City City;

// Struct of city type
struct City {
        char name[30];
        float size;
};

// Struct of country type
struct Country {
        char name[30];
        City cities[3];
};

void output(struct Country country) {

    // Print the characteristics of the inputted country
    printf("%s\t\t\t", country.name);
}

int main(int argc, char *argv[]) {

    // Number of countries
    int n = (argc - 1) / 7;

    // Array of countries
    struct Country countries[n];

    // Read in the data of the countries from the arguments and save them to the
    // array of countries
    int arg_counter = 0;
    for (int i = 0; i < n; i += 1) {
        strcpy(countries[i].name, argv[arg_counter + 1]);

        // Arg counter for cities
        int a = arg_counter;
        // Iterate through each of 3 cities and add them to country
        for (int j = 0; j < 3; j++) {

            strcpy(countries[i].cities[j].name, argv[a + 2]);
            countries[i].cities[j].size = atof(argv[a + 3]);

            a += 2;
        }
        arg_counter += 7;
    }

    // Find largest city in each country and print them
    for (int i = 0; i < n; i++) {
        City largest_city = countries[i].cities[0];
        for (int j = 1; j < 2; j++) {
            if (countries[i].cities[j].size > largest_city.size) {
                largest_city = countries[i].cities[j];
            }
        }

        printf("%s: %s\n", countries[i].name, largest_city.name);
    }

    return 0;
}
