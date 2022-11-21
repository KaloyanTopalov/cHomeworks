#include <stdio.h>
#include <string.h>

int get_line(char s[], int lim) {
    int static count = 0;
    if(*s == '\n') {
        return count;
    }
    else if(count == lim) 
    {
        return lim;
    }
    count++;
    
    get_line(s+=1, lim);
}

int main() {
    char str[] = "Count\nCountt";
    int lim = strlen(str);
    int length = get_line(str, lim);
    printf("%d", length);

    return 0;
}