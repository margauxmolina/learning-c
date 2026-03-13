#include <stdio.h>

int main() {
    //first c code 
    printf("Hello world!\n");
    printf("testing\n");

    //testing variables for profit calulation
    const double costPrice = 4.55; 
    double sellingPrice = 8.99;
    double secondsuppliercost = 3.50;
    sellingPrice = 12.66;
    double take = sellingPrice - costPrice;
    printf("The profit is: %f\n", take);


    double profitMargin = (take / costPrice) * 100;
    
    // Convert to integer for whole number percentage
    profitMargin = (int)profitMargin; 
    printf("The profit margin is: %d%%\n", profitMargin);


}
