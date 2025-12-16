#include<stdio.h>
int main(){
    int litres;
    printf("Enter monthly water usage in litres: ");
    scanf("%d", &litres);
    if (litres<=3000)
    printf("Bill = 500 PKR");
    else 
    printf("Bill = 1000 PKR");
    return 0;
}

