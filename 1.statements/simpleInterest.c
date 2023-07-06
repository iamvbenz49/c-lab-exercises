#include <stdio.h>

int main() {
    int principalAmount,rateOfInterest,time,amount;
    printf("Enter the principal amount : ");
    scanf("%d",&principalAmount);
    printf("\nEnter the rate of interest : ");
    scanf("%d",&rateOfInterest);
    printf("\nEnter the time : ");
    scanf("%d",&time);
    amount = (principalAmount*rateOfInterest*time)/100;
    printf("\nSimple Interest : %d",amount);
    return 0;
}
