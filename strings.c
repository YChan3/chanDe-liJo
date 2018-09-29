#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen( char *source ){
    int counter = 0;
    while(*source++){
        counter++;
    }
    return counter;
}

// char *mystrcpy( char *dest, char *source ){
// 	int counter = my_strlen(*source);
// 	while(counter--){
// 		*dest[
// }

char * my_strncat( char *dest, char *source, int n){

    int start_point = strlen(dest);

    int i;
    for (i = 0; i < n && source[i]; i++){
        dest[start_point + i] = source[i];
    }

    dest[strlen(dest) + n + 1] = 0;

    return dest;
}

int main(){

    char a[25] = "cat";
    char b[25] = "dog";
    char c[25] = "catdog";

    printf("s1: [%s]\n", a);
    printf("s2: [%s]\n", b);
    printf("s3: [%s]\n", c);
    printf("\n");
    
    printf("Testing strlen(s3):\n");
    printf("[standard]: [%ld]\n", strlen(c));
    printf("[mine]: [%d]\n", my_strlen(c));
    printf("\n");

    printf("Testing strncat(s1, s3, 3):\n");
    printf("[standard]: [%s]\n", strncat(a, c, 3));
    strcpy(a, "cat"); // reset s1
    printf("[mine]: [%s]\n", my_strncat(a, c, 3));
    printf("\n");


    return 0;
}
