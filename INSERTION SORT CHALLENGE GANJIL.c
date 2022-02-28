#include <stdio.h>
#include <stdlib.h>

//INSERTION SORT CHALLENGE GENAP

int main(){
  int  array[100] = {46,2,93,81,51,67}, a, c;

  for (int i = 1; i <6; i++){
    a = i;
    while(a > 0 && array[a-1] > array[a]){
      c = array[a];
      array[a] = array[a-1];
      array[a-1] = c;
        a--;
    }
  }
  printf("Setelah Diurutkan:\n");
  for (int i = 0; i < 6; i++){
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}