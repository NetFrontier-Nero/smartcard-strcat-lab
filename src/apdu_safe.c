#include <stdio.h>
#include <string.h>
#include "apdu.h"

void build_apdu_safe(const char *data) {
    char apdu[32];

    int written = snprintf(apdu, sizeof(apdu), "00A40400%.20s", data);

    if (written < 0 || written >= (int)sizeof(apdu)) {
        printf("[SAFE] Input too long, APDU rejected\n");
        return;
    }

    printf("[SAFE] APDU buffer: %s\n", apdu);
}
