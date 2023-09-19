#include <stdio.h>

int main(){
    int sbp, dbp, ppressure;
    float map;
    printf("Enter SBP:");
    scanf(" %d", &sbp);
    printf("Enter DBP:");
    scanf(" %d", &dbp);
    ppressure = sbp - dbp;
    map = (2*((float)dbp+sbp))/3;
    printf("Pulse Pressure: %d\n", ppressure);
    printf("MAP: %.2f\n", map);
    if (sbp <= 120 && dbp <= 80){
        printf("Normal");
    } else if ((sbp <= 129 && sbp >= 120) && dbp <= 80){
        printf("Elevated");
    } else if ((sbp <= 130 && sbp >= 139) || (dbp <= 89 && dbp >= 80)){
        printf("HYPERTENSION Stage 1");
    } else if (sbp >= 140 || dbp >= 90){
        printf("HYPERTENSION Stage 2");
    }
}