#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    char input[12];
    int startup = 3;
    time_t currentTime = time(NULL);
    char* timeString = ctime(&currentTime);
    printf("Bluewing Operating Environment in C\n");

    while (startup == 3) {
        printf("User Input: ");
        fgets(input, 12, stdin);

        if (strcmp(input, "desktop\n") == 0) {

            printf("time    --help    clear    apt-info\npythcalc    circcalc\n\n");
        }

        if (strcmp(input, "--help\n") == 0) {

            printf("Visit bluewingdev.com/BWOE for tech support\n");
        }

        if (strcmp(input, "apt-info\n") == 0) {

            printf("\nBluewing Operating Environment\nBased on the C Language\nIDE: VS Code\nCompiler: GCC\nProgramming: Debian Lam\n");
        }

         if (strcmp(input, "clear\n") == 0) {

            clearConsole();
        }
          if (strcmp(input, "time\n") == 0) {

            printf("Current time: %s", timeString);
        }


        if (strcmp(input, "pythcalc\n") == 0) {
            int compileResult = system("gcc -o Pyth_Calculator Pyth_Calculator.c -lm");

            if (compileResult != 0) {
                printf("ERROR: Compilation failed with error code %d\n", compileResult);
                continue;
            }

            int executionResult = system("./Pyth_Calculator");
            if (executionResult != 0) {
                printf("ERROR: Execution failed with error code %d\n", executionResult);
                continue;
            }clearConsole();
        } else if (strcmp(input, "circcalc\n") == 0) {
            int compileResult = system("gcc -o Circle_Calculator Circle_Calculator.c -lm");

            if (compileResult != 0) {
                printf("ERROR: Compilation failed with error code %d\n", compileResult);
                continue;
            }

            int executionResult = system("./Circle_Calculator");
            if (executionResult != 0) {
                printf("ERROR: Execution failed with error code %d\n", executionResult);
                continue;
            }clearConsole();
        }
    }

    return 0;
}