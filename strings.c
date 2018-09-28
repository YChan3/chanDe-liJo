#include <stdio.h>
#include <string.h>

int mystrlen( char *source ){
	int counter = 0;
	while(*source++){
		counter++;
	}
	return counter;
}

char *mystrcpy( char *dest, char *source ){
	int counter = mystrlen(*source);
	while(counter--){
		*dest[
}

int main(){
	printf("length of %s: %d\n", "dog", mystrlen("dog"));
	return 0;
}
