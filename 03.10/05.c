#include <stdio.h>

/*Задача 5. Напишете произволна програма, която демонстрира уменията ви
да боравите с указатели към структури. Нека декларираната от вас
структура(и) съдържа указател към собствения си тип.
*/
 
struct employee {
 char name[100];
 int age;
 float salary;
 char department[50];
};
 
int main(){
   struct employee employee_one, *ptr;
    
    printf("Enter Name, Age, Salary and Department of Employee\n");
    scanf("%s", &employee_one.name);
    scanf("%d", &employee_one.age);
    scanf("%f", &employee_one.salary);
    scanf("%s", &employee_one.department);
 
        
    ptr = &employee_one;
    printf("\nEmployee Details\n");
    printf(" Name : %s\n Age : %d\n Salary = %f\n Dept : %s\n", 
       ptr->name, ptr->age, ptr->salary, ptr->department);
 
   return 0;
}