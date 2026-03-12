#include <stdio.h>
#include <string.h>
#include "apdu.h"

int main() {
    char input[256];

    printf("Enter smart card DATA field: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = 0;

    printf("\n--- Running vulnerable version ---\n");
    build_apdu_vulnerable(input);

    printf("\n--- Running safe version ---\n");
    build_apdu_safe(input);

    return 0;
}
