#include <stdio.h>

#define MAX_CITIES 10
#define DAYS_IN_WEEK 7

void calculateAverageTemperatures(int temperatures[][DAYS_IN_WEEK], int numCities) {
    int i, j;
    double sum, average;

    printf("City-wise average temperatures for the whole week:\n");
    for (i = 0; i < numCities; ++i) {
        sum = 0.0;
        for (j = 0; j < DAYS_IN_WEEK; ++j) {
            sum += temperatures[i][j];
        }
        average = sum / DAYS_IN_WEEK;
        printf("City %d: %.2lf\n", i + 1, average);
    }
}

int main() {
    int temperatures[MAX_CITIES][DAYS_IN_WEEK];
    int numCities, i, j;

    printf("Enter the number of cities: ");
    scanf("%d", &numCities);

    if (numCities <= 0 || numCities > MAX_CITIES) {
        printf("Invalid number of cities.\n");
        return 1;
    }

    printf("Enter the temperatures for each city for the whole week:\n");
    for (i = 0; i < numCities; ++i) {
        printf("City %d:\n", i + 1);
        for (j = 0; j < DAYS_IN_WEEK; ++j) {
            printf("Enter temperature for day %d: ", j + 1);
            scanf("%d", &temperatures[i][j]);
        }
    }

    calculateAverageTemperatures(temperatures, numCities);

    return 0;
}
