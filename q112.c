#include<stdio.h>
int main(){
    int n=6,i,j,k;
    for(i=0;i<n;i++){
        for(j=1;j<=(n-i);j++){
            printf("%d",j);
        }
        for(k=0;k<=i;k++){
            printf(" ");
        }
        for(j=j-2;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}