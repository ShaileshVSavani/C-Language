/*Q.1 WAP to take price of three products from user. Find total amount with addition of 18% GST in final amount.*/

#include <stdio.h>

int main() {
    float product1, product2, product3;
    float totalAmount, gstAmount;

    printf("Enter the price of product 1: ");
    scanf("%f", &product1);

    printf("Enter the price of product 2: ");
    scanf("%f", &product2);

    printf("Enter the price of product 3: ");
    scanf("%f", &product3);

    totalAmount = product1 + product2 + product3;
    gstAmount = 0.18 * totalAmount;

    printf("Total amount before GST: %.2f\n", totalAmount);
    printf("GST (18%%) amount: %.2f\n", gstAmount);
    printf("Total amount with GST: %.2f\n", totalAmount + gstAmount);

    return 0;
}

