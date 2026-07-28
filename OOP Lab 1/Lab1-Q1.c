#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int age;
    float cgpa;
};

int main() {
    struct Student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Age: ");
    scanf("%d", &s.age);

    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    printf("\nStudent Details\n");
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("CGPA: %.2f\n", s.cgpa);

    return 0;
}