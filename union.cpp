
#include <stdio.h>
void union_array(int a[], int m, int b[], int n){

	int i=0,j=0,k=0,c[m+n];
	while (i<m && j<n) {
		if (a[i]<b[j]){
			c[k]=a[i];
            i++;
            k++;
        }
		else if (a[j] < b[i]){
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
	while (i<m)
		printf("%d ",a[i++]);
	while (j<n)
		printf("%d ",b[j++]);
}
int main()
{
    int m=5,n=4;
	int arr1[5] = {1,2,4,5,9};
	int arr2[4] = {0,3,5,7};
	union_array(arr1, m, arr2, n);
	return 0;
}

