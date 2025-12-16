#include <stdio.h>

int main() {
    int litres, days, usage;
    printf("Enter monthly water usage in litres: ");
    scanf("%d", &litres);
    printf("Enter number of days water was saved: ");
    scanf("%d", &days);
    if (litres < 2500 && days > 10){
        printf("Bonus: 300 PKR Discount.");
    } else {
        printf("No Bonus.");
    }
    return 0;
}

