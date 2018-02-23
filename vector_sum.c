#include<stdio.h>

int main(int argc, char const *argv[])
{
	printf("\n***************************************************************************\n");
	printf("A program to read two vectors, calculate its sum and display the result\n");
	printf("***************************************************************************\n\n");

	int size, i;
	printf("Enter the dimension or size of the vector: ");
	scanf("%d",&size);
	int vector1[size], vector2[size], vector_sum[size];

	printf("Please enter the elements of vector 1: \n");
	for (i = 0; i < size; ++i)
	{
		scanf("%d",&vector1[i]);
	}

	printf("Please enter the elements of vector 2: \n");
	for (i = 0; i < size; ++i)
	{
		scanf("%d",&vector2[i]);
	}

	//Calculate the vector sum
	for (i = 0; i < size; ++i)
	{
		vector_sum[i] = vector1[i] + vector2[i];
	}

	//Display the vector sum
	printf("The Sum of vector 1 and vector 2 is : \n");
	for (i = 0; i < size; ++i)
	{
		printf("%d ", vector_sum[i]);
	}
	printf("\n");
	return 0;
}