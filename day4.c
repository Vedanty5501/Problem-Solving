#include<stdio.h>
int pallind(int n,int a){
    int i;
    if (n==0){
        return a;
    }
    else{
      i=n%10;
      a=a*10+i;
      return pallind(n/10,a); 
    }
}
int main(){
    int n,ret;
}