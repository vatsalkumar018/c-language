#include <stdio.h>
#include <string.h>

void country();

int main() {
    country();
    return 0;
}

void country() {
    char country[4];

    printf("Enter country's first 3 letters (like ind, pak): ");
    scanf("%3s", country);

    if (strcmp(country, "ind") == 0) {
        printf("Indian\n");
    }
    else if (strcmp(country, "pak") == 0) {
        printf("Pakistani\n");
    }
    else if (strcmp(country, "ame") == 0) {
        printf("American\n");
    }
    else if (strcmp(country, "sri") == 0) {
        printf("Sri Lankan\n");
    }
    else {
        printf("Country not found\n");
    }
}