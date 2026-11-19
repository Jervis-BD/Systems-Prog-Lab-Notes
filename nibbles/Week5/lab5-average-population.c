#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct of country type
struct Country {
        char name[30];
        char capital[30];
        float pop;
        int area;
};

void output(struct Country country) {

    // Print the characteristics of the inputted country
    printf("%s\t\t\t", country.name);
    printf("%s\t\t\t", country.capital);
    printf("%d\t\t\t", country.area);
    printf("%.2f\n", country.pop);
}

int main(int argc, char *argv[]) {

    // Number of countries
    int n = (argc - 1) / 4;

    // Array of countries
    struct Country countries[n];

    // Read in the data of the countries from the arguments and save them to the
    // array of countries
    int arg_counter = 0;
    for (int i = 0; i < n; i += 1) {
        strcpy(countries[i].name, argv[arg_counter + 1]);
        strcpy(countries[i].capital, argv[arg_counter + 2]);

        countries[i].pop = atof(argv[arg_counter + 3]);
        countries[i].area = atoi(argv[arg_counter + 4]);
        arg_counter += 4;
    }

    // Print Header line
    printf("Country\t\t\tCapital\t\t\tSize\t\t\tPopulation\n");

    float average_pop = 0;

    // Output data on each country in array and calculate average population
    for (int i = 0; i < n; i++) {
        output(countries[i]);

        average_pop += countries[i].pop;
    }

    average_pop = average_pop / n;

    // Print average population
    printf("Population average: %.2f\n", average_pop);

    return 0;
}
