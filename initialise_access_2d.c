#include <stdio.h>

//function print_array
void print_2darray(int num_rows, int num_cols, int array[num_rows][num_cols]){
	int i =0;
	for(int r =0; r<num_rows;r++){
		for(int c= 0; c<num_cols; c++){
			printf("Accessing the value in row%d, column%d. \n", r, c);			
			printf("This is syntax sugar: array[%d][%d] = %d  \n", r,c,array[r][c]);
			printf("address of the pointer to a row: array[r] = %p \n",array[r]);
			printf("Hence the address for element in row%d column%d is: array[r]+c=%p \n", r, c, array[r]+c);
			printf("Hence the value of element in row%d column%d is:*(array[r]+c)=%d \n", r, c, *(array[r]+c));
			printf("value of the fist element in a row: *array[%d] = %d \n",r,*array[r]);
			printf("You can also start counting from the very first element of the whole matrix(which is the value in the top left corner). The address of that value is: *array or array[0]. Proof: *array = %p= array[0] = %p \n", *array, array[0]);
			printf("The value of the element at top left corner is: **array = %d =*array[0]=%d \n", **array, *array[0]);
			printf("Using this adress, you can access a certain element in three similar ways: \n");
			printf("1.*array[0] + %d = %d\n", i, *(array[0]+i));
			printf("2.*(*array+i)=%d  (i is the index of an element, starting at 0 from the first element in first row and keep counting.)\n",*(*array+i));
			printf("3.*(*array+r*num_cols +c) = %d. (Note: r*num_cols +c =i) \n",*(*array+r*num_cols +c));
			printf("\n");
			i++;
		}
		printf("\n");
	}
	
}

int main(void){
	int array1[2][3]= {
		{1,2,3},
		{4,5,6}
	
	};
	
	printf("********This is my understanding of using pointers to access values in a 2d array. As I am very forgetful and I get confused very easily during practice, I am writing it down for future references.***************\n")
	printf("This is a 2d array: \n");
	printf("\n");
	for(int r =0; r < 2; r++){
		for(int c =0; c < 3; c++){
			printf("%d ", array1[r][c]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("Below are a few options on how to access the value and address of the elements: \n");
	printf("\n");
	print_2darray(2,3,array1);
	
	
	
return 0;
}
