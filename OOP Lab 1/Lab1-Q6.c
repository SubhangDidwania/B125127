#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

int main() {
    struct Distance d1,d2,total;

    printf("Enter First Distance (feet inches): ");
    scanf("%d%d",&d1.feet,&d1.inches);

    printf("Enter Second Distance (feet inches): ");
    scanf("%d%d",&d2.feet,&d2.inches);

    total.feet = d1.feet + d2.feet;
    total.inches = d1.inches + d2.inches;

    printf("Total Distance = %d feet %d inches\n",total.feet,total.inches);

    return 0;
}