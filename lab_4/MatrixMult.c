#include <stdio.h>
#include <malloc.h>

int** matMult(int **a, int **b, int size){
    // (4) Implement your matrix multiplication here. You will need to create a new matrix to store the product.
    //int** result;
		int** result = (int**)malloc(size * sizeof(int*));
		for(int i = 0; i<size; i++){
			*(result+i)=(int*)malloc(size*sizeof(int));
			for(int j=0; j<size; j++){
				*(*(result+i)+j)=0;
			}
		}
      for(int row =0; row<size; row++){
          for(int col =0; col <size; col++){
              //result[row][col] =0;
							*(*(result+row)+col) = 0;
              for(int idx=0; idx<size;idx++){
								*(*(result+row)+col) += *(*(a+row)+idx) * *(*(b+idx)+col);
                //result[row][col] += a[row][idx]*b[idx][col];
              }
          }
      }

      return result;
}

void printArray(int **arr, int n){
    // (2) Implement your printArray function here
    int ** array = arr;
    int size =n;

    for(int i = 0; i < size; i++){ //each row
        for(int j =0; j < size; j++){
            printf("%d " , *(*(arr+i) +j));
        }
        printf("\n");
    }
    printf("\n");

}

int main() {
    int n = 2;
    int **matA = (int**)malloc(n * sizeof(int*));
    int **matB = (int**)malloc(n * sizeof(int*));
    int **matC = (int**)malloc(n * sizeof(int*));

    // (1) Define 2 n x n arrays (matrices).
		printf("Input values for n \n");
		printf("A: \n");
		    for(int i=0; i<n; i++){
		          *(matA+i) = (int*)malloc(n* sizeof(int));  //**matA
		          for(int j=0; j<n; j++){
		              scanf("%d",&(*(*(matA+i) +j)));
		          }
		      }
			printf("B: \n");
			for(int i=0; i<n; i++){
						*(matB+i) = (int*)malloc(n* sizeof(int));  //**matA
						for(int j=0; j<n; j++){
								scanf("%d",&(*(*(matB+i) +j)));
						}
				}
    // (3) Call printArray to print out the 2 arrays here.
		printf("A: \n");
    printArray(matA, n);
		printf("B: \n");
    printArray(matB, n);


    //(5) Call matMult to multiply the 2 arrays here.
		matC = matMult(matA, matB, n);


    //(6) Call printArray to print out resulting array here.
		printf("out:\n");
    printArray(matC, n);


    return 0;
}
