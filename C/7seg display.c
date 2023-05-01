#Highest integer that can be obtained by re-arranging sticks from input integer (digital stick display)


#include stdio.h

int main(){
	int num;
	scanf(%d, &num);              	                   Reading input from STDIN
	
	while(num--){
		char input[100];
		scanf(%s, input);

		int a[]={6,2,5,5,4,5,6,3,7,6}, sum=0; using index instaed of key-value or dict
		for(int i=0; istrlen(input);i++){
			sum= sum+a[input[i]-48]; converting ascii of string to int
			}

		while(sum){
			if (sum%2==1){
				printf(7);7 takes least number of odd sticks
				sum=sum-3;
			}
			else {
				printf(1);1 takes least number of even sticks
				sum=sum-2;
			}
		}
		printf(n);
	}        Writing output to STDOUT
}
