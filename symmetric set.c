#include<stdio.h>
int symm(int a[],int n,int b[],int m){
    int i=0,j=0,ck[5]={0},ck2[5]={0};
    printf("{ ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i]==b[j]){
                ck[i]=1;
                ck2[j]=1;
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        if(ck[i]==0)
        printf("%d, ",a[i]);
    }
    for(i=0;i<m;i++){
        if(ck2[i]==0)
        printf("%d, ",b[i]);
    }
    printf("}");
    return 0;
}
int main(){
    int i,n,m,j,a[100],b[100];
	printf("enter the size of the sets a : "); 
	scanf("%d",&n);
	printf("enter the element of set a :\n"); 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the size of set b : ");
	scanf("%d",&m);
	printf("enter the element of set b :\n");
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
    symm(a,n,b,m);
    return 0;
}
