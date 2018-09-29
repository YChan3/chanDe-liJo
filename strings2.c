#include <stdio.h>
#include <string.h>

int mystrlen( char *source ){
    int counter = 0;
    while(*source++){
        counter++;
    }
    return counter;
}

char *mystrncat(char *dest, char *source, int n){
    int enddest = mystrlen(dest);
    int counter = 0;
    while(counter <  n){
    enddest += counter;
    dest[enddest] = source[counter];
    printf("counter:%d, dest:%x \n", counter, dest[enddest]);
    counter++;
    }
    return dest;
}

int main(){
    char str1[50] = "doggo";
    char str2[50] = "abcdefghijk";
    printf("length of %s: %d\n", str1, mystrlen(str1));
    printf("strntest of dest:%s src:%s result:%s \n", str1, str2, mystrncat(str1, str2, 5));
    return 0;
}
