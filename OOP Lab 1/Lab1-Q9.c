#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float cgpa;
};

int main() {
    struct Student s[5];

    for(int i=0;i<5;i++) {
        printf("\nStudent %d\n",i+1);

        scanf("%d",&s[i].roll);
        scanf("%s",s[i].name);
        scanf("%f",&s[i].cgpa);
    }

    printf("\nStudents having CGPA >= 8.0\n");

    for(int i=0;i<5;i++) {
        if(s[i].cgpa>=8.0) {
            printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].cgpa);
        }
    }

    return 0;
}