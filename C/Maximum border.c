/*Each cell is colored with white(given by .) or black(given by #). Considering the shapes created by black(given by #) cells, what is the maximum border of these shapes? Border of a shape means the maximum number of consecutive black(given by #) cells in any row or column without any white(given by .) cell in between.

A shape is a set of connected cells. Two cells are connected if they share an edge. Note that no shape has a hole in it.*/

#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);

	while(num--){
		int rows,cols, regist=0;
		char grid[1000][1001];
		scanf("%d %d", &rows, &cols);
		for (int i=0; i<rows;i++){
			scanf("%s", grid[i]);
		}

		for(int i=0;i<rows;i++){
			int count=0;
			for(int j=0;j<cols;j++){
				if(grid[i][j]=='#')
					count++;
				else {
					if (count>regist)
						regist=count;
					count=0;
				}
			} if (count>regist)
				regist=count;
		}

		for(int i=0;i<cols;i++){
			int count=0;
			for(int j=0;j<rows;j++){
				if(grid[j][i]=='#')
					count++;
				else {
					if (count>regist)
						regist=count;
					count=0;
				}
			} if (count>regist)
				regist=count;
		}

		printf("%d\n", regist);

	}
	return 0;
}