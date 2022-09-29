// union of two sorted array
#include <stdio.h>

int marge(int a[], int b[],int c[])
{
    int i = 0, j = 0, k = 0, n = 0;
    while (i < 4 && j < 5)
    {
        if (a[i] > b[j])
        {
            c[k] = b[j];
            j++;
            k++;
        }
        else if(b[j]>a[i])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else 
        {
            c[k]=a[i];
            k++;
            i++;
            j++;
            n++;
        }
    }
    while (i < 4)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < 5)
    {
        c[k] = b[j];
        j++;
        k++;
    }
	return n;
}
void display(int c[], int k)
{
    int i = 0;
    while (i < k)
    {
        printf("%d\n", c[i]);
        i++;
    }
}
int main()
{
    int a[4] = {1, 4, 6, 7}, b[5] = {1, 3, 4, 7, 8},c[9],n=0;
    n = marge(a, b,c);
    display(c, 9-n);
    printf("value %d",n);
    return 0;
}
