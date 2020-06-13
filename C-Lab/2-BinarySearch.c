// Write a program to search an element using Binary Search. 
#include<stdio.h>

int main()
{
   int c, l, h, mid, n, search, arr[100];

   printf("Enter the amount of elements: \n");
   scanf("%d", &n);

   printf("Enter %d integer(s): \n", n);
   for(c=0;c<n;c++)
      scanf("%d", &arr[c]);
   
   printf("Enter the value to find: \n");
   scanf("%d", &search);

   l = 0;
   h = n-1;
   mid = (l + h)/2;

   while (l <= h)
   {
      if(arr[mid] < search)
         l = mid +1;
      else if(arr[mid] == search){
         printf("%d is found at index %d", search, mid +1);
         break;}
      else
         h  = mid -1;
         mid =  (l + h)/2;
   }

   if(h<l)
      printf("Value %d is not found! Try once more.", search);

   return 0;
   
   
}