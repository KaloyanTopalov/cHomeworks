/*Задача 3. Създайте test.txt файл в избрана от вас директория. Сложете някакви данни 
в него на латиница - име, поздрав, брой. Отворете файла за четене, като проверявате дали файла
 наистина е отворен. Използвайте fgetc() , която взема само един символ от файла. Направете while цикъл, 
 за да изпишете всички символи, като проверявате за край на файл с EOF. 
*/

#include <stdio.h>

int main()
{
    int ch;
    FILE *fp;
    fp = fopen("/home/bear/Desktop/GitHub/kaloyan-topalov-S04/24.10/text", "r");

    if(fp == NULL)
    {
        perror("Error opening file\n");
        return 1;
    }
    else {
        while( (ch=fgetc(fp)) != EOF )
        {
            printf("%c", ch);
        }

        fclose(fp);
        return 0;
    }
    
}