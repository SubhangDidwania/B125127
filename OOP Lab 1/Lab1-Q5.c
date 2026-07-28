#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
};

int main() {
    struct Rectangle r;

    printf("Enter Length: ");
    scanf("%f",&r.length);

    printf("Enter Breadth: ");
    scanf("%f",&r.breadth);

    printf("Area = %.2f\n",r.length*r.breadth);
    printf("Perimeter = %.2f\n",2*(r.length+r.breadth));

    return 0;
}