#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d",&b.id);

    printf("Enter Title: ");
    scanf("%s",b.title);

    printf("Enter Author: ");
    scanf("%s",b.author);

    printf("Enter Price: ");
    scanf("%f",&b.price);

    printf("\nBook Details\n");
    printf("ID: %d\n",b.id);
    printf("Title: %s\n",b.title);
    printf("Author: %s\n",b.author);
    printf("Price: %.2f\n",b.price);

    return 0;
}