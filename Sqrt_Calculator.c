#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("Square Root\n");
    
    while (1) {
        int option;
        double input;

        
        printf("\nEnter 1 for Square Root\nEnter 0 to exit\n");
        scanf("%d", &option);
        
        if (option == 1) {
            printf("Enter the radius: ");
            scanf("%lf", &input);
            
            double output = sqrt(input);
            printf("Area of the circle: %0.3lf\n", output);
        }
        else if(option == 0){
            exit(0);
        }
        
        
        else {
            printf("Invalid option! Please try again.\n");
        }
    }
    
    return 0;
}