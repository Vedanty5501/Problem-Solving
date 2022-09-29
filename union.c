#include <stdio.h>
void union_array(int a[], int m, int b[], int n){
	int i=0,j=0,k=0,c[9],t;
	while (i<m && j<n) {
		if (a[i]<b[j]){
			c[k]=a[i];
            i++;
            k++;
        }
		else if (a[i] > b[j]){
			c[k]=b[j];
            j++;
            k++;
        }
		else {
			c[k]=b[j];
			i++;
            j++;
            k++;
		}
	}
	while (i<m){
		c[k]=a[i];
		k++;
		i++;
	}
	while (j<n){
		c[k]=b[j];
		j++;
		k++;
	}
	for(t=0;t<k;t++){
		printf("%d ",c[t]);
	}
}
int main()
{
    int m=5,n=4;
	int arr1[5] = {1,2,4,5,9};
	int arr2[4] = {0,3,5,7};
	union_array(arr1, m, arr2, n);
	return 0;
}
