#include<stdio.h>
int toh(int n,int A,int B,int C){
    if(n==0)
    return 1;
    toh(n-1,A,C,B);
    printf("Move disk %d from %c to %c \n",n,A,C);
    toh(n-1,C,B,A);
}
int main(){
    toh(10,65,66,67);
    return 0;
}
