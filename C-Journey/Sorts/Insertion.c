
#include<stdio.h>


void Insertion(int B[], int n)
{
	int i,j,x;
	
	for(i=1;i<n;i++)
	{
		j = i-1;
		x = B[i];
		while(j>-1 && B[j] > x)
		{
			B[j+1] = B[j];
			j--;	
		}
		B[j+1] = x;	
	}
}



	
int main()
{
	int B[]={3,23,43,13,56,23,1,2,5,9,123,39,80,199}, n=14,i;
		
	Insertion(B, n);
	
	for(i=0;i<n;i++)
		printf("%d ", B[i]);
	printf("\n");
	
	return 0;
}
