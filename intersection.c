#include<stdio.h>
int inters(int a[],int m,int b[],int n){
	int ct=0,t,i,j,k=0,c[10];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i]==b[j]){
				c[k]=a[i];
				k++;
				ct++;
			}
		}
	}
	if(ct==0){
		printf("NULL");
		return 0;
	}
	for(t=0;t<k;t++){
		printf("%d ",c[t]);
	}
	return 0;
}

int main(){
	int m,n;
	int a[10]={1,2,3,4,5,6,7,8,9,20};
	int b[10]={30,40,50,80,90,10,16,17,18,200};
	m=10;
	n=10;
	
	inters(a,m,b,n);
}
