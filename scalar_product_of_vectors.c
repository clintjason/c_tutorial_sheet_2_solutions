#include<stdio.h>

int main(int argc, char const *argv[])
{
	printf("\n***************************************************************************\n");
	printf("A program to read two vectors, calculate their scalar product display the result\n");
	printf("***************************************************************************\n\n");

	int size, i;
	printf("Enter the dimension or size of the vector: ");
	scanf("%d",&size);
	int vector1[size], vector2[size];
	float vector_scalar = 0;

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

	//Calculate the vector scalar
	for (i = 0; i < size; ++i)
	{
		vector_scalar += vector1[i] * vector2[i];
	}

	//Display the vector Scalar
	printf("The Scalar Product of vector 1 and vector 2 is : %.3f\n", vector_scalar);
	printf("\n");
	return 0;
}