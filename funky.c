#include <stdio.h>
#include <stdlib.h>


// 1. Write a function that takes an array of int values as a parameter and prints it out.

// void cuz no return type
void printer(int* array, int size){
	int pos;
	printf("[ ");
	// goes through array, prints out the value and then comma till end of array is reached
	for (pos =0; pos < size; pos++){
		printf("%d ",*(array+pos));
	}
	printf("]\n");
}


// 2. Write a function to take an array and return the average of the values

// double cuz the average will be returned
double average(int* array, int size){
	int pos;
	int total=0;
	// goes through array, adds the value of current index to total
	for (pos=0; pos < size; pos++){
		total += *(array+pos);
	}
	// computes the average
	return total/size;	
}

// 3. Takes two equal size arrays and copies vals of first array into second
void copy(int* array,int* array2, int size){
	int pos;
	// goes through array2 and sets it equal to the values of the first array
	for (pos =0; pos < size; pos ++){
		*(array2+pos) = *(array+pos);
	}
}

int main(){
	// arrays both w same size 
	int a1[7]= {3,1,4,1,5,9,2};
	int a2[7]= {1,2,3,4,5,6,7};
	
	printf("Part 1: Printing an Array \na1 is ");
	printer(a1,7);
	printf("\n");
	
	printf("Part 2: Average of values\n");
	printf("Average: %f \n",average(a1,7));
	printf("\n");
	
	printf("Part 3: Copying time 0_0 \n");
	printf("Before copying:\n");
		printer(a2,7);
	printf("After copying: \n");
		copy(a1,a2,7);
		printer(a2,7);

}
	
	


