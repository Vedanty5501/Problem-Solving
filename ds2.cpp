#include<stdio.h>
int main(){
	int n=5,i,j,k,p=1,row;
	for(i=n;i>0;i--){
		printf("\t\t\t\t");
		row=n-i+1;
		for(j=i;j>1;j--){
			printf(" ");
		}
		for(k=row;k<(2*row);k++){
			printf("%d",k);
		}
		for(k=(2*row-1);k>row;k--){
			printf("%d",k-1);
		}
		for(j=1;j<i;j++){
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
