
#include <stdio.h>
#include <stdlib.h>

int main(void){

	int sizeOfArray;
	int counter;


	printf("Enter the amount of rows and columns for the multiplication table: ");
	fflush(stdout);
	scanf("%d", &sizeOfArray);

	int multiplicationTable[sizeOfArray][sizeOfArray];

	for(int i =0; i< sizeOfArray; i++){
		for(int j = 0; j< sizeOfArray; j++){
			multiplicationTable[i][j] = (i+1)*(j+1);
		}
	}

	for(int i =0; i <sizeOfArray; i++){

	if(i == 0){

	printf("      %d", i+1);

	} else{

	printf("   %d", i+1);

	}

}

	for(int i =0; i <sizeOfArray + 1; i++){

	if(i == 0){

	printf("\n  +");

	} else{

	printf("-----");

	}
	

}
	
	printf("\n");
	
	for(int i=0; i < sizeOfArray; i++){
		
		counter++;
		
		
		for(int j=0; j <sizeOfArray; j++){

			if(j == 0 && counter <10){

			printf("\n%d |   %d", counter, multiplicationTable[i][j]);

		} if(j == 0 && counter >= 10){
			
			printf("\n%d|   %d", counter, multiplicationTable[i][j]);
			
			
		} else {
		

			printf("   %d", multiplicationTable[i][j]);
			
		}

	}
	}

return 0;

}
