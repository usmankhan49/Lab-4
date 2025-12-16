#include <stdio.h>
int main() {
    int members, litres;
    printf("Enter number of family members: ");
    scanf("%d", &members);
    printf("Enter monthly water usage in litres: ");
    scanf("%d", &litres);
    if (litres > 3000) {
        if (members > 6) {
            printf("Allowed: Large Family Exception");
        } else {
            printf("Fine Applied.");
        }
    } else {
        printf("No Fine Applied.");
    }
    return 0;
}

