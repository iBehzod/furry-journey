
// #include <stdio.h>
// int main()
// {
//    int c, first, last, middle, n, search, array[100];
//    printf("Enter number of elements:\n");
//    scanf("%d",&n); 
//    printf("Enter %d integers:\n", n);
//    for (c = 0; c < n; c++)
//       scanf("%d",&array[c]); 
//    printf("Enter the value to find:\n");
//    scanf("%d", &search);
//    first = 0;
//    last = n - 1;
//    middle = (first+last)/2;
//    while (first <= last) {
//       if (array[middle] < search)
//          first = middle + 1;    
//       else if (array[middle] == search) {
//          printf("%d is present at index %d.\n", search, middle+1);
//          break;
//       }
//       else
//          last = middle - 1;
//       middle = (first + last)/2;
//    }
//    if (first > last)
//       printf("Not found! %d is not present in the list.\n", search);
//    return 0;  
// }

#include <stdio.h>
#include<stdint.h>

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
        return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
}  
int main(void) 
{ 
    int arr[] = {5, 10, 23, 24 ,30, 40, 100 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 10; 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? printf("\nThe element is not present in array\n") 
                   : printf("\nThe element is present at index %d\n", 
                            result); 
    int i;n=7;
    for(i=0; i<n; i++)
        printf("%d \n", arr[i]);
    printf("\n");
    return 0; 
}