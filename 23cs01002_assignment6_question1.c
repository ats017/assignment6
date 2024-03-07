#include <stdio.h>
#include <stdbool.h>

bool isprime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void display(int start, int end) {
    printf("Prime numbers between %d and %d:\n", start, end);
    for (int num = start; num <= end; num++) {
        if (isprime(num)) {
            printf("%d ", num);
        }
    }
}

int main() {
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    display(start, end);

    return 0;
}