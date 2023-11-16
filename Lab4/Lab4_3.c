#include <stdio.h>

int main(){
    int grades[3][7] = {{80, 99, 100, 60, 90, 74, 88}, {100, 88, 75, 70, 61, 55, 89}, {55, 76, 50, 80, 88, 100, 100}};
    int sec[3] = {101,102,103}, i, j, gradeCount[5];
    float avg[3], sum[3];
    char gradeAlpha[5] = {'A', 'B', 'C', 'D', 'F'};
    for (i = 0; i < 3; i++){
        for (j = 0; j < 7; j++){
            sum[i] += grades[i][j];
        }
        avg[i] = sum[i] / 7;
        printf("Average for section %d: %.2f\n", sec[i], avg[i]);
    }
    printf("\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 7; j++){
            if (grades[i][j] >= 90){
                gradeCount[0]++;
            } else if (grades[i][j] >= 80){
                gradeCount[1]++;
            } else if (grades[i][j] >= 70){
                gradeCount[2]++;
            } else if (grades[i][j] >= 60){
                gradeCount[3]++;
            } else {
                gradeCount[4]++;
            }
        }
    }
    for (i = 0; i < 5; i++){
            printf("The number of %cs is %d\n", gradeAlpha[i], gradeCount[i]);
    }
}