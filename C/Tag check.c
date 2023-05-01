/*Tag is valid if the sum of every two consecutive digits of it is even and its letter is not a vowel. Determine if the tag of the truck is valid or not.

We consider the letters "A","E","I","O","U","Y" to be vowels for this problem.*/

#include <stdio.h>

int main(){
	char code[10];
	scanf("%s", &code);              	                  // Reading input from STDIN
	char vowels[]={'A','E','I','O','U','Y'};

	for (int i=0; i<6;i++){
	if ( code[2] == vowels[i] ) {
		printf("invalid");
		return 0;
		}
	} 
	if (code[6] != '-'){
		printf("invalid");
		return 0;
	}

	if ((code[0]+code[1])%2 ==1){
		printf("invalid");
		return 0;
	}

	if ((code[7]+code[8])%2 ==1){
		printf("invalid");
		return 0;
	}
	if ((code[3]+code[4])%2 ==1){
		printf("invalid");
		return 0;
	}
	if ((code[4]+code[5])%2 ==1){
		printf("invalid");
		return 0;
	}
	printf("valid");
}
