#include<stdio.h>
int main(){
    int code;
    printf("Enter your category code: ");
    scanf("%d", &code);
    switch(code){
        case 1:
        printf("Low Usage Household.");
        break;
        case 2:
        printf("Average Usage Household.");
        break;
        case 3:
        printf("High Usage Household.");
        break;
        case 4:
        printf("Excessive Usage Household.");
        break;
        default:
        printf("Invalid category code.");
    }
    return 0;
}


