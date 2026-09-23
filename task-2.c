#include<stdio.h>
int main() {
    float shop_amount;
    float del_distance;
    float total_amount;
    printf("Enter your shopping amount: \n");
    scanf("%f", &shop_amount);
    printf("Enter your delivery distance in km: \n");
    scanf("%f", &del_distance);
    if (shop_amount<=0 || del_distance<=0) {
        printf("Invalid Input \n");
    }
    else if (shop_amount>=5000) {
        printf("Your shopping amount is: %f \n", shop_amount);
        printf("No delivery charges \n");
    }
    else if (shop_amount<5000 && del_distance<=5) {
        printf("Your shopping amount is: %f \n", shop_amount);
        printf("Delivery charges = Rs. 150 \n");
        total_amount = shop_amount + 150;
        printf("Your total amount is %f \n", total_amount);
    }
    else if (shop_amount<5000 && del_distance>=6 && del_distance<=10) {
        printf("Your shopping amount is: %f \n", shop_amount);
        printf("Delivery charges = Rs. 250 \n");
        total_amount = shop_amount + 250;
        printf("Your total amount is %f \n", total_amount);
    }
    else if (shop_amount<5000 && del_distance>=11 && del_distance<=20) {
        printf("Your shopping amount is: %f \n", shop_amount);
        printf("Delivery charges = Rs. 400 \n");
        total_amount = shop_amount + 400;
        printf("Your total amount is %f \n", total_amount);
    }
    else {
        printf("Your shopping amount is: %f \n", shop_amount);
        printf("Delivery charges = Rs. 600 \n");
        total_amount = shop_amount + 600;
        printf("Your total amount is %f \n", total_amount);
    }
    return 0;
}