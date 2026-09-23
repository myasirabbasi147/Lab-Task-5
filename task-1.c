#include <stdio.h>
int main() {
    float bill_amount;
    int member_status;
    float discount_bill;
    float final_price;
    printf("Enter Total Bill Amount: \n");
    scanf("%f", &bill_amount);
    printf("Enter '1' for membership and '0' for non-membership status: \n");
    scanf("%d", &member_status);
    if (member_status != 0 && member_status != 1) {
        printf("Invalid Member Status");
    }
    if (bill_amount>=5000 && member_status == 1) {
        printf("Your original bill = %f \n", bill_amount);
        discount_bill = bill_amount * 0.2;
        final_price = bill_amount - discount_bill;
        printf("Your bill after discount = %f \n", final_price);
    }
    else if (bill_amount>=5000 && member_status == 0) {
        printf("Your original bill = %f \n", bill_amount);
        discount_bill = bill_amount * 0.1;
        final_price = bill_amount - discount_bill;
        printf("Your bill after discount = %f \n",final_price);
    }
    else if (bill_amount<=5000 && member_status==1) {
        printf("Your original bill = %f \n", bill_amount);
        discount_bill = bill_amount * 0.1;
        final_price = bill_amount - discount_bill;
        printf("Your bill after discount = %f \n",final_price);
    }
    else {
        printf("Your original bill = %f \n", bill_amount);
        printf("No Discount for You");
    }
    return 0;
}