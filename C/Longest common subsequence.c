#include<stdio.h>
#define SIZE 10

int max(int a, int b){
    return a>b?a:b;
}

void main(){
    int m,n,i,j;
    char a[SIZE], b[SIZE];
    scanf("%s", a);scanf("%s", b);

    m=strlen(a);
    n=strlen(b);
    int lcs[m+1][n+1];
    //printf("%d %d\n", m, n);

    for(i=0;i<=m;i++)
        for(j=0;j<=n;j++){
			if(i==0||j==0)
				lcs[i][j]=0;//filling 0th lines
            else if(a[i-1]==b[j-1])
                lcs[i][j]=lcs[i-1][j-1]+1;
            else 
                lcs[i][j]=max(lcs[i][j-1], lcs[i-1][j]);
        }
    
    i=m;j=n;
    int length=lcs[m][n];
    printf("%d\n", length);
    
    char subseq[length+1];
    subseq[length]="\0";
    
    while(i>0 && j>0){
        if(a[i-1]==b[j-1]){
            subseq[length-1]=a[i-1];
            i--;j--;length--;
        }
        else if (lcs[i-1][j]>lcs[i][j-1]){ //most important line in printing seq
            i--;
        }
        else j--;
    }
    printf("%s\n", subseq);
}