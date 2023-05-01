# all z followed by all o such that |z|=2*|o|

#include <stdio.h>

int main(){
	char input[20];
	scanf("%s", &input);
	int x=0,y=0, i=0;
	
	while(input[i]=='z'){
		 	x++;i++;}
	while(input[i]=='o'){
			y++;i++;}
	if(2*x==y)
		printf("Yes");
	else
		printf("No");
return 0;
}
