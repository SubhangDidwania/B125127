#include <stdio.h>

struct Product {
    int id;
    char name[50];
    float price;
    int quantity;
};

int main() {
    struct Product p;
    float total;

    printf("Enter Product ID: ");
    scanf("%d",&p.id);

    printf("Enter Product Name: ");
    scanf("%s",p.name);

    printf("Enter Price: ");
    scanf("%f",&p.price);

    printf("Enter Quantity: ");
    scanf("%d",&p.quantity);

    total = p.price * p.quantity;

    printf("\nTotal Cost = %.2f\n",total);

    return 0;
}