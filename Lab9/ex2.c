#include <stdio.h>
#define N 6

int palindrome_array(int *a, int n)
{
    if (n>1)
    {
        if (a[0] != a[n-1])
            return 0;
        else
            return palindrome_array(a+1, n-2);
    }
    return 1;
}

int main()
{
    int arr[N]={1,2,3,3,2,1};
    
    printf("And result is: %d \n", palindrome_array(arr, N));
}
