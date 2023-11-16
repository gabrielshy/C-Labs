#include <stdio.h>
#include <math.h>

int main(){
    float radius[4] = {};  
    double pi = M_PI;
    int i;
    for (i = 0; i < 4; i++) {
        printf("Enter radius %d: ", i + 1);
        scanf("%f", &radius[i]);
    }
    for (i=0; i < 4; i++){
        double volume  = (4*pi*(radius[i]*radius[i]*radius[i]))/3;
        printf("The volume for radius %.2f is %.2f\n", radius[i], volume);
        double area = pi*(radius[i] * radius[i]);
        printf("The area for radius %.2f is %.2f\n", radius[i], area);
    } 
}