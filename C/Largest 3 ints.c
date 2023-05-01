// Online C compiler to run C program online
#include <stdio.h>

int main() {
int k;
scanf("%d", &k);

int a[k],l,m,n;
printf("Enter the elements\n");
for(int i=0;i<k;i++){
	scanf("%d", &a[i]);
}
	
if (a[0]<a[1]){
	if (a[1]<a[2]){
		l=a[0];
		m=a[1];
		n=a[2]; }
	else if (a[0]<a[2]){
		l=a[0];
		m=a[2];
		n=a[1];}
	else{
		l=a[2];
		m=a[0];
		n=a[1];}
	}
else{
	if (a[0]<a[2]){
		l=a[1];
		m=a[0];
		n=a[2];}
	if (a[1]<a[2]){
		l=a[1];
		m=a[2];
		n=a[0];}
	else {
		l=a[2];
		m=a[1];
		n=a[0];	}	}		

for(int i=3;i<k;i++){
	if (n < a[i]){
		l=m;
		m=n;
		n=a[i];
	}
	else if (m<a[i]){
		l=m;
		m=a[i];
	}
	else if (l<a[i])
		l=a[i];
}
printf("The largest are: %d %d %d\n", l,m,n);
return 0;
}

