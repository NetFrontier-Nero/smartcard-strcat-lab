#include <stdio.h>
#include <string.h>
#include "apdu.h"

void build_apdu_vulnerable(const char *data) {
    char apdu[32];
    apdu[0] = '\0';

    strcat(apdu, "00A40400");   // APDU header
    strcat(apdu, data);         //  NO bounds checking

    printf("[VULNERABLE] APDU buffer: %s\n", apdu);
}
