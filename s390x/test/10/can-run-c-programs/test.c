#include <stdio.h>

#define ANSI_GREEN "\x1b[32m"
#define ANSI_RESET "\x1b[0m"

int main() {
        printf(ANSI_GREEN "\nSuccess! This C program is running on the quay.io/ibmz/gcc:10.2.0 image.\n" ANSI_RESET);
        printf(ANSI_GREEN "Terminating...\n\n" ANSI_RESET);

        return 0;
}
