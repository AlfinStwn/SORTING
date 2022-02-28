#include <stdio.h>
#include <stdlib.h>

//Selection Sort

void swap(int *c, int *d){
    int x=*c;
    *c=*d;
    *d=x;
    }

    void selectionSort(int array[],int size){
    for (int awal=0; awal<size-1; awal++){
        int min_idx=awal;
        for (int i=awal+1; i<size; i++){
            if (array[i]<array[min_idx])
                min_idx=i;
        }
        swap(&array[min_idx],&array[awal]);
    }
    }
    void prinArray(int array[],int size){
    for (int i=0;i<size;++i){
        printf("%d ",array[i]);
    }
    printf("\n");
    }

    int main()
    {
    int data[]={55, 80, 74, 8, 18, 25, 89, 54};
    int size=sizeof(data)/sizeof(data[0]);
    selectionSort(data, size);
    printf("Array sehabis disusun dari kecil ke besar: \n");
    prinArray(data, size);

}