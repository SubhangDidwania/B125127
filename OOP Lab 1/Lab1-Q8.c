#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[5];
    int max=0;

    for(int i=0;i<5;i++) {
        printf("\nEmployee %d\n",i+1);

        scanf("%d",&e[i].id);
        scanf("%s",e[i].name);
        scanf("%f",&e[i].salary);

        if(e[i].salary > e[max].salary)
            max=i;
    }

    printf("\nHighest Salary Employee\n");
    printf("ID: %d\n",e[max].id);
    printf("Name: %s\n",e[max].name);
    printf("Salary: %.2f\n",e[max].salary);

    return 0;
}