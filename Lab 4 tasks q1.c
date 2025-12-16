#include<stdio.h>
int main(){
    int litres;
    printf("Enter daily water usage in litres: ");
    scanf("%d", &litres);
    if (litres<=100)
    printf("Efficient Usage");
    else 
    printf("High Usage Detected");
    return 0;
}

