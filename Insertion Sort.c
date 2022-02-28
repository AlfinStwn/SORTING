#include <stdio.h>
#include <stdlib.h>

//Insertion Sort

void insertionSort(int *Data, int n){
    int temp, j;

    for (int i = 1; i <= n-1; i++){
        temp = Data[i];
        j = i-1;

        while(j>=0 && Data[j] > temp){
            Data[j+1] = Data[j];
            j--;
        }
        Data[j+1] = temp;
    }
}

void print(int* Data, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", Data[i]);
    }
    printf("\n");
}

int main(){

    int Data[] = {55, 46, 98, 9, 36, 76, 22, 32};


	int n = sizeof(Data)/sizeof(Data[0]);

    printf("Before Sort: ");
    print(Data, n);

    printf("After Sort: ");
    insertionSort(Data, n);
    print(Data, n);
    return 0;
}