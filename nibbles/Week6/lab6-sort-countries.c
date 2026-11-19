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

void sort_countries(struct Country *p, int n) {
    int hasSwapped = 0;
    int runs = 0;

    while (runs < 2) {

        hasSwapped = 0;

        for (int i = 0; i < n - 1; i++) {
            if ((*(p + i)).pop < (*(p + i + 1)).pop) {

                struct Country temp;
                temp = *(p + i);
                *(p + i) = *(p + i + 1);
                *(p + i + 1) = temp;

                hasSwapped = 1;
            }
        }

        if (!hasSwapped) {
            runs += 1;
        }
    }
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

    // Sort countries based on pop
    struct Country *countryP = countries;
    sort_countries(countryP, n);

    // Print Header line
    printf("Country\t\t\tCapital\t\t\tSize\t\t\tPopulation\n");
    // Output data on each country in array
    for (int i = 0; i < n; i++) {
        output(countries[i]);
    }

    return 0;
}
