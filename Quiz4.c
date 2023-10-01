#include <stdio.h>

int main(){
    int items[] = {3, 4, 5}, itemlength, i, sum;
    itemlength = sizeof(items);
    for (i = 0; i > itemlength; i++){
        sum += items[i];
    }
    printf("Sum: %d", sum);
    printf("%d",itemlength);
}