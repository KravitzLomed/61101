#include <stdio.h>
#define N 5

void swap(int *x, int *y)
{
    int temp=*x;
    
    *x=*y;
    *y=temp;
}

void swap_array(int *a, int n)
{
    if (n>1)
    {
        swap(a, a+n-1);
        swap_array(a+1, n-2);
    } 

}

void print_array(int *a, int n)
{
    int i;
    
    for (i=0; i<n; i++)
        printf("%d ", *(a+i));
    printf("\n");
}


int main()
{
    int arr[N]={1,3,2,5,6};
    int i;
    
    swap_array(arr, N);
    print_array(arr, N);
}
