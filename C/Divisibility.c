/*You are provided an array A of size N  that contains non-negative integers. Your task is to determine whether the number that is formed by selecting the last digit of all the N numbers is divisible by 10*/
#include <stdio.h>

int main(){
	int num;
	long sum=0;
	scanf("%d", &num);   

	int arr[num];
	for(int i=0; i<num; i++) { 
		scanf("%d", &arr[i]);
	}
	
	if(arr[num-1]%10 == 0)
		printf("Yes");
	else
		printf("No");
}
