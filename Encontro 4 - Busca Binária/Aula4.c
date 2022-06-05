#include <stdio.h>
int busca(int *arr, int n, int x){
  if(n == 0){
    return -1;
  }
  
  if (arr[n-1] == x){
    return arr[n-1];
  }
  
  return busca(&arr[n-1], n-1, x);
}


int main(){
  int n, x;
  scanf("%d", &n);
  int vetor[n];
  
  for(int i = 0; i < n; i++){
    scanf("%d", &vetor[i]);
  }

  printf("Digite os valores: ");
  scanf("%d", &x);

  printf("res = %d\n", busca(vetor, n, x));
}