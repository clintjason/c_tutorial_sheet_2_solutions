#include<stdio.h>

int main(int argc, char const *argv[])
{
	printf("\n***************************************************************************\n");
	printf("A program to read two vectors, calculate its product and display the result\n");
	printf("***************************************************************************\n\n");

	int size, i;
	printf("Enter the dimension or size of the vector: ");
	scanf("%d",&size);
	int vector1[size], vector2[size], vector_product[size];

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

	//Calculate the vectors product
	for (i = 0; i < size; ++i)
	{
		if (i<size-2)
		{
			vector_product[i] = (vector1[i+1] * vector2[i+2]) - (vector1[i+2] * vector2[i+1]);	
		}
		else if (i==size-2)
		{
			vector_product[i] = (vector1[i+1] * vector2[i-1]) - (vector1[i] * vector2[i+1]);
		}
		else if (i==size-1)
		{
			vector_product[i] = (vector1[i-2] * vector2[i-1]) - (vector1[i-1] * vector2[i-2]);
		}
		
	}

	//Display the vector product
	printf("The Product of vector 1 and vector 2 is : \n");
	for (i = 0; i < size; ++i)
	{
		printf("%d ", vector_product[i]);
	}
	printf("\n");
	return 0;
}