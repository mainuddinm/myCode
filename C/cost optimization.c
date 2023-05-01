//Manufacturing multiple parts on 2 machines based on their capacity and machining costs. Cost optimization
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              	                  // Reading input from STDIN
	
	while(num--){
	int costg,costp;
	scanf("%d %d", &costg, &costp);
	
	int parts;
	scanf("%d", &parts);

	int result[parts][2], sum[2]={0,0};
	int total=0;
	for(int i=0;i<parts;i++){
		for(int j=0;j<2;j++){
			scanf("%d", &result[i][j]);
			if(result[i][j]==1)
				sum[j]++;
			}
		}

	if( sum[0]*costg+sum[1]*costp < sum[1]*costg+sum[0]*costp )
		total=sum[0]*costg+sum[1]*costp; 
	else
		total=sum[0]*costp+sum[1]*costg;

	printf("%d\n", total);
	}
}
