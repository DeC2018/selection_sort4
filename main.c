#include <stdio.h>

int main()
{
    int n = 8;
    int arr[] = {5,4,3,6,8,1,9,2};

    int i = 0, j;
    while( i < n) {
        j = i + 1;
        while( j < n) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
        i++;
    }
    printf("Sorted Array: ");
    for(i = 0; i < n; i++)  {
        printf(" %d", arr[i]);
    }
    return 0;
}

