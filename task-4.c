#include <stdio.h>
int main() {
    int category_choice;
    int item_choice;
    printf("1. Fast Food \n");
    printf("2. Pakistani Food \n");
    printf("3. Drinks \n");
    printf("Enter your choice: \n");
    scanf("%d", &category_choice);
    if(category_choice == 1) {
        printf("1. Burger \n");
        printf("2. Pizza \n");
        printf("3. Fries \n");
        printf("Enter item number: \n");
        scanf("%d", &item_choice);
        if (item_choice ==1) {
            printf("Your selected: Burger \n");
        }
        else if (item_choice==2) {
            printf("Your selected: Pizza \n");
        }
        else if (item_choice==3) {
            printf("Your selected: Fries \n");
        }
        else {
            printf("Invalid Choice \n");
        }
    }
    else if (category_choice==2) {
        printf("1. Biryani \n");
        printf("2. Karahi \n");
        printf("3. Nihari \n");
        printf("Enter item number: \n");
        scanf("&d", &item_choice);
        if(item_choice==1) {
            printf("You selected: Biryani \n");
        }
        else if (item_choice==2) {
            printf("You selected: Karahi \n");
        }
        else if (item_choice==3) {
            printf("You selected: Nihari \n");
        }
        else {
            printf("Invalid Item \n");
        }
    }
    else if (category_choice==3) {
        printf("1. Coke \n");
        printf("3. Pepsi \n");
        printf("2. Juice \n");
        printf("Enter item number: \n");
        scanf("&d", &item_choice);
        if(item_choice==1) {
            printf("You selected: Coke \n");
        }
        else if (item_choice==2) {
            printf("You selected: Pepsi \n");
        }
        else if (item_choice==3) {
            printf("You selected: Juice \n");
        }
        else {
            printf("Invalid Item \n");
        }
    }
    else {
        printf("Invalid Category \n");
    }
    return 0;
}