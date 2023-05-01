/*H is house, .(dot) is blank
A person lives in each house. A person can move to a grid if it is adjacent to that person. Therefore, the grid must be present on the left and right side of that person.

Now, you are required to put some fences that can be marked as B on some blank spaces so that the village can be divided into several pieces. A person cannot walk past a fence but can walk through a house. */

#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              	                  // Reading input from STDIN

	char grid[num];
	scanf("%s", grid);

	if(grid[0]=='.')
			grid[0]='B';
	if(num==1){
		printf("YES\n%s", grid);
		return 0;
		}

	for(int i=1;i<num;i++){
		if( grid[i-1]=='H' && grid[i]=='H' ){
			printf("NO\n");
			return 0;
			}
		else if(grid[i]=='.')
			grid[i]='B';
		}

	printf("YES\n");
	printf("%s", grid);	
	
}
