#include <stdio.h>

int main() {
    //first c code 
    printf("Hello world!\n");
    printf("testing\n");

    //testing variables 
    const double costPrice = 4.55; 
    double sellingPrice = 8.99;
    sellingPrice = 12.66;
    double take = sellingPrice - costPrice;
    printf("The profit is: %f\n", take);
    int profitMargin = (take / costPrice) * 100;
    printf("The profit margin is: %d%%\n", profitMargin);


}
