/*You are given two arrays a and b. In each step, you can set a[i]=a[i]-b[i] if a[i] >=b[i]. Determine the minimum number of steps that are required to make all a[i]'s equal.*/

#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num); 

	int a[num], b[num],i,c=0;
	for(i=0;i<num;i++)
		scanf("%d", &a[i]);
	for(i=0;i<num;i++)
		scanf("%d", &b[i]);

	int min=a[0];
	for(i=0;i<num;i++){
		if(a[i]<min)
			min=a[i];
	}

    i=0;
	while(i<num){
	  while(a[i]>min)
		{
			a[i]=a[i]-b[i];
			c++;
		}
		if(a[i]<min) {
			min=a[i];
			i=0;
		}
		else if(a[i]<0)
		{
			printf("-1");
			return 0;
		} 
		else i++;
	}
	printf("%d", c); 
    return 0;
}
