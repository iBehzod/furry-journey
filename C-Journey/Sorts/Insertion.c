#include <stdio.h>

void Insertion(int B[], int n)
{
	int i,j,x;
	
	for(i=1;i<n;i++)
	{
		j=i-1;
		x = B[i];
		while(j>-1 && B[j] > x)
		{
			B[j+1]= B[j];
			j--;
		}
		B[j+1] = x;
	}
}

int main()
{
	int B[] = {10, 2, 5, 1 ,3, 8, 201, 2, 4, 7, 11, 29 ,81, 37,93}, n=15,i;
	
	Insertion(B, n);
	
	for(i=0;i<n;i++)
		printf("%d ", B[i]);
	printf("\n");
	
	return 0;
}
