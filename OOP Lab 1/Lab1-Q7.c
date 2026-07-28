#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float c,math,physics;
};

int main() {
    struct Student s;
    float total,avg;

    printf("Enter Roll No: ");
    scanf("%d",&s.roll);

    printf("Enter Name: ");
    scanf("%s",s.name);

    printf("Enter Marks in C: ");
    scanf("%f",&s.c);

    printf("Enter Marks in Mathematics: ");
    scanf("%f",&s.math);

    printf("Enter Marks in Physics: ");
    scanf("%f",&s.physics);

    total = s.c+s.math+s.physics;
    avg = total/3;

    printf("Total = %.2f\n",total);
    printf("Average = %.2f\n",avg);

    return 0;
}