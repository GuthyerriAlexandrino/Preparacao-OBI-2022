#include <stdio.h>
#include <stdlib.h>

int array[1000] = {0};


/* {0, 1, 2, 3, 4}
  Guarda resultados já alcançados em um vetor, para evitar refazer cálculos;
*/
int fib_din(int n){
  if (array[n] != 0){
    return array[n];
  }
  array[n] = fib_din(n-1) + fib_din(n-2);
  return array[n];
}

int main(){
  int n;
  scanf("%d", &n);
  array[0] = array[1] = 1;

  printf("Fib: %d\n", fib_din(n));
}