#include <stdio.h>
#include <stdlib.h>

//Selection Sort Challenge Ganjil

void swap(int *c, int *d){
	int e = *c;
	*c = *d;
	*d = e;
}

void SelectionSort (int Data[ ], int x) {
	    int min;

        for(int i = 0; i < x-1 ; i++)  {
             min = i ;
            for(int j = i+1; j < x ; j++ ) {
                if(Data[ j ] < Data[ min ])  {
                min = j ;
                }
             }
          swap (&Data[ min ], &Data[ i ]) ;
        }
    }
void print(int* Data, int x){
    for (int i = 0; i < x; i++){
        printf("%d ", Data[i]);
    }
    printf("\n");
}
int main(){
    int Data[] = {23, 65, 30, 8, 33, 24,76,7};
	int x = sizeof(Data)/sizeof(Data[0]);

    printf("Sebelum Sorting: ");
    print(Data, x);

    printf("Setelah Sorting: ");
    SelectionSort(Data, x);
    print(Data, x);
    return 0;
}