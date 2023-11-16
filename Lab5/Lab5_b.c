#include <stdio.h>
#include <math.h>

void menu(int r){
    int option;
    float area, volume;
    double pi = M_PI;
    printf("1. Area of a Circle\n2. Volume of Sphere\n");
    scanf(" %d", &option);
    switch (option){
        case 1:
            area = pi * (r * r);
            printf("The area of the circle is %.1f", area);
            break;

        case 2:
            volume = (4.0/3.0) * pi * (r * r * r);
            printf("The volume of the sphere is %.1f", volume);
            break;
        
        default:
            printf("Invalid option");
    }
}

int main(){
    int area, r;
    printf("Enter a radius value: ");
    scanf(" %d", &r);
    menu(r);
}