#include <stdio.h>
#include <string.h>

// 0 ha nem, 1 ha igen
int palindrom(char str[]){
    int i, j;
    for(i = 0, j = strlen(str)-1; i < j; i++, j--){
        if(str[i] != str[j]){
            return 0;
        }
    }
    return 1;
}

int main(){

char str1[] = "indula gorog aludni";
char str2[] = "indul a gorog aludni";

printf("%d\n", palindrom(str1));
printf("%d\n", palindrom(str2));

    return 0;
}