#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void clearConsole() {
    #ifdef _WIN32
        system("cls");  
    #else
        system("clear"); 
    #endif
}

int main(){
    printf("Pythagorean Theorem Calculator\n");
int pyth = 5;
    while (pyth == 5) { 
                
                
        

                double pythA;
                double pythB;
                double pythF;
                int pythinput;

                printf("\n\nInput 1 for length of Hypotenuse\nInput 2 for length of one side\nInput 0 to exit\n");
                scanf("%i", &pythinput);

                int c;
                while ((c = getchar()) != '\n' && c != EOF) {}


                if (pythinput == 1) { 
                    printf("Length of Height: \n");
                    scanf("%lf", &pythA);

                    printf("Length of width: \n");
                    scanf("%lf", &pythB);

                    pythF = sqrt(pythA * pythA + pythB * pythB);

                    printf("Length of Hypotenuse is %.3lf (3 decimal place)\n", pythF);
                } else if (pythinput == 2) { 
                    printf("Length of Hypotenuse: \n");
                    scanf("%lf", &pythA);

                    printf("Length of other side: \n");
                    scanf("%lf", &pythB);

                    pythF = sqrt(pythA * pythA - pythB * pythB);

                    printf("Length of the remaining side is %.3lf (3 decimal place)\n", pythF);
                } else if (pythinput == 0) { 
                    exit(0);
                    
                }
            
            
    }
    
return 0;
}