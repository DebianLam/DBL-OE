#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("Circle Calculator\n");
    
    while (1) {
        int option;
        double radius;
        double area, circumference;
        const double PI = 3.141592653589793238462643383279502884;
        
        printf("\nEnter 1 for Area\nEnter 2 for Circumference\nEnter 0 to exit\n");
        scanf("%d", &option);
        
        if (option == 1) {
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            
            area = PI * radius * radius;
            printf("Area of the circle: %0.3lf\n", area);
        } else if (option == 2) {
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            
            circumference = 2 * PI * radius;
            printf("Circumference of the circle: %0.3lf\n", circumference);
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