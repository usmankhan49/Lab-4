#include<stdio.h>
int main(){
    int litres;
    printf("Enter monthly water usage in litres: ");
    scanf("%d", &litres);
    if (litres<=3000){
    printf("No Fine");
    } else if (litres<=5000){
    printf("Fine = 200 PKR");
    } else if (litres<=7000){
    printf("Fine = 500 PKR");
    } else {
        printf("Fine = 1000 PKR,\nWater Supply Restricted.");
    }
    return 0;
}


