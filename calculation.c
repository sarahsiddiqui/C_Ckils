#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){
	
	//Declare and intilaize variables 
    double P;
    double r;
    int N;
    double C = 0.0;
    double totalCost;

    //Ask for the price for an item
    printf ("Enter the purchase price of the item: ");
    scanf ("%lf", &P);

    //Ask for the interest rate
    printf ("Enter the interest rate per year as a percentage: ");
    scanf ("%lf", &r);

    //Convert interest rate to a decimal 
    r = (0.01)*(r);

    //Ask for the number of months of repaymemnts
    printf ("Enter the number of months for repayment: ");
    scanf ("%d", &N);

    //Calculating the monthly payment
    C = (r/(1 - (powf((1+r), -N))))*P;
    printf ("The monthly payment is : %0.2lf\n", C);

    //Calculating the total cost
    totalCost = P + C ;
    //0.2 indicates double will be outputted to 2 decimals places
    printf("The total cost of the purchase is: %0.2lf\n", totalCost);
	
	return 0;
}
