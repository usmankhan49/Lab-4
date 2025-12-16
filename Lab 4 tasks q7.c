#include<stdio.h>
int main(){
	int code;
	int litres;
	int members;
	int days;
	int bill;
	int fine;
	int bonus;
	int total_bill;
    printf("Enter monthly water usage in litres: ");
    scanf("%d", &litres);
    printf("Enter number of days water was saved: ");
    scanf("%d", &days);
    printf("Enter number of family members: ");
    scanf("%d", &members);
    printf("Enter your category code: ");
    scanf("%d", &code);
    
	if (litres<=3000){
    fine=0;
    } else if (litres<=5000){
    fine=200;
    } else if (litres<=7000){
    fine=500;
    } else {
        fine=1000;
    }
    
    if (litres < 2500 && days > 10){
        bonus=300;
    } else {
        bonus=0;
    }
	   
	if (litres<=3000){
    	bill = 500;
	} else {
		bill = 1000;
	}
	
	total_bill = bill+fine-bonus;
			
	switch(code){
        case 1:
        printf("Low Usage Household.\n");
        break;
        case 2:
        printf("Average Usage Household.\n");
        break;
        case 3:
        printf("High Usage Household.\n");
        break;
        case 4:
        printf("Excessive Usage Household.\n");
        break;
        default:
        printf("Invalid category code.\n");
    }
    
    printf("Your base bill is: %d\n",bill);
    printf("Fine Applied: %d\n", fine);
    printf("Bonus Applied: %d\n", bonus);
	printf("Your total bill is: %d\n", total_bill);
	
	return 0;
}
