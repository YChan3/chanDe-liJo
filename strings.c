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

int my_strcmp( char *s1, char *s2 ){

    if(s1 == s2){
        return 0;
    }

    int i = 0;
    while(s1[i] && s2[i]){
        if(s1[i] > s2[i]){
            return 1;
        } else {
            return -1;
        }
        i++;
    }
    return 0;

}

int main(){

    char a[25] = "cat";
    char b[25] = "dog";
    char c[25] = "catdog";

    printf("s1: [%s]\n", a);
    printf("s2: [%s]\n", b);
    printf("s3: [%s]\n", c);
    printf("\n");
    
    printf("---------------------------\n");
    printf("Testing strlen(s3):\n");
    printf("[standard]: [%ld]\n", strlen(c));
    printf("[mine]: [%d]\n", my_strlen(c));
    printf("\n");
    printf("Testing strlen(s3):\n");
    printf("[standard]: [%ld]\n", strlen(a));
    printf("[mine]: [%d]\n", my_strlen(a));
    printf("---------------------------\n");
    printf("\n");

    printf("---------------------------\n");
    printf("Testing strncat(s1, s3, 3):\n");
    printf("[standard]: [%s]\n", strncat(a, c, 3));
    strcpy(a, "cat"); // reset s1
    printf("[mine]: [%s]\n", my_strncat(a, c, 3));
    strcpy(a, "cat"); // reset s1
    printf("\n");
    printf("Testing strncat(s1, s2, 2):\n");
    printf("[standard]: [%s]\n", strncat(a, b, 2));
    strcpy(a, "cat"); // reset s1
    printf("[mine]: [%s]\n", my_strncat(a, b, 2));
    strcpy(a, "cat"); // reset s1
    printf("---------------------------\n");
    printf("\n");

    printf("---------------------------\n");
    printf("Testing strncmp(s1, s2):\n");
    printf("[standard]: [%d]\n", strcmp(a, b));
    printf("[mine]: [%d]\n", my_strcmp(a, b));
    printf("\n");
    printf("Testing strncmp(s2, s3):\n");
    printf("[standard]: [%d]\n", strcmp(b, c));
    printf("[mine]: [%d]\n", my_strcmp(b, c));
    printf("\n");
    printf("Testing strncmp(\"hi\", \"hi\"):\n");
    printf("[standard]: [%d]\n", strcmp("hi", "hi"));
    printf("[mine]: [%d]\n", my_strcmp("hi", "hi"));
    printf("\n");
    printf("---------------------------\n");


    return 0;
}
