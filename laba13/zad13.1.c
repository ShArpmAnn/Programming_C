#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>


void signals(int sig) {
    switch (sig) {
        case SIGABRT:
            printf("Vvod SIGABRT (signal avar stop)\n");
            break;
        case SIGFPE:
            printf("Vvod SIGFPE (iscluch floating point)\n");
            break;
        case SIGILL:
            printf("Vvod SIGILL (nevernay instruction)\n");
            break;
        case SIGINT:
            printf("Vvod SIGINT (interrupt from keyboard)\n");
            break;
        case SIGSEGV:
            printf("Vvod SIGSEGV (naruthenie segmentation)\n");
            break;
        case SIGTERM:
            printf("Vvod SIGTERM (zaverthenie)\n");
            break;
        default:
            printf("unknown signal %d\n", sig);
    }
}

int main() {
    signal(SIGABRT, signals);
    signal(SIGFPE,  signals);
    signal(SIGILL,  signals);
    signal(SIGINT,  signals);
    signal(SIGSEGV, signals);
    signal(SIGTERM, signals);

    printf("vvod command:\n");
    printf("1 - SIGABRT\n");
    printf("2 - SIGFPE\n");
    printf("3 - SIGILL\n");
    printf("4 - Raise SIGINT\n");
    printf("5 - Raise SIGSEGV\n");
    printf("6 - Raise SIGTERM\n");
    printf("q - Quit\n");

    char input[10];

    while (1) {
        printf("Vvod: ");
        fgets(input, sizeof(input), stdin);
        

        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "q") == 0) {
            break;
        }

        int sig_num = 0;
        if (strcmp(input, "1") == 0) {
            sig_num = SIGABRT;
        } else if (strcmp(input, "2") == 0) {
            sig_num = SIGFPE;
        } else if (strcmp(input, "3") == 0) {
            sig_num = SIGILL;
        } else if (strcmp(input, "4") == 0) {
            sig_num = SIGINT;
        } else if (strcmp(input, "5") == 0) {
            sig_num = SIGSEGV;
        } else if (strcmp(input, "6") == 0) {
            sig_num = SIGTERM;
        } else {
            printf("neverni vvod\n");
            continue;
        }

        printf("signal %d...\n", sig_num);
        raise(sig_num);
    }

    return 0;
}
