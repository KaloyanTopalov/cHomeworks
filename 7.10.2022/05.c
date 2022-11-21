/*Задача 5. Дефинирайте структура с 4 полета (int. char[10], double, enum),
 направете масив от 20 структури и ги попълнете. 
 Изведете масива от структури на стандартния изход в CSV формат.
*/

#define SIZE 20

typedef enum {
    Gosho,
    Pesho,
    Tosho,
    Kaloyan
}enm;

struct Data
{
    int num;
    char *c;
    double doubleNum;
    enm e;
};

typedef struct Data data;



int main()
{
    data arr[SIZE];
    data test;

    for (int i = 0; i < SIZE; i++)
    {
        arr[i].num = i;
        arr[i].c = "kaloqn";
        arr[i].doubleNum = 1.3232 + i;
        arr[i].e = Kaloyan;

        printf("%d  %s %f %d\n", arr[i].num, arr[i].c, arr[i].doubleNum,arr[i].e);
        
    }


    return 0;

}
