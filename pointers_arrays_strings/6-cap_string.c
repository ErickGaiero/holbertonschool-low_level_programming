#include "main.h"
#include <stdio.h>

char *cap_string(char *s) {
    int i = 0;
    int c = 1;
    char sep[] = " \t\n,;.!?\"(){}";
    int j;

    while (sep[i] != '\0') {
        for (j = 0; sep[j] != '\0'; j++) {
            if (s[i] == sep[j]) {
                c = 1;
                break;
            }
        }

        if (c && s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
            c = 0;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            c = 0;
        }

        i++;
    }

    return s;
}
