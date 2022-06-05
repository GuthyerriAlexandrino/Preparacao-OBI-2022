#include <stdio.h>
void merg(int *, int, int, int);


void merge_sort(int *arr, int low, int hight) {
  int mid;
  if (low < hight) {
    // Divide o array no meio e ordena os elementos usando merge sort
    mid = (low + hight) / 2;         // Encontra o meio do vetor passando seus extremos;
    merge_sort(arr, low, mid);       // O final da primeira fração é o meio agora;
    merge_sort(arr, mid + 1, hight); // O inicio da outra é o meio + 1;
    // merge das funções ordenadas agora;
    merge(arr, low, hight, mid);
  }
}

// merge sort
void merge(int *arr, int low, int hight, int mid) {
  int i, j, k, c[50];
  i = low;
  k = low;
  j = mid + 1;
  // meio ao fim;
  while (i <= mid && j <= hight) {
    if (arr[i] < arr[j]) {
      c[k] = arr[i]; //Coloca o menor nas primeiras posições de um vetor auxiliar;
      k++;
      i++;
    }
    else {
      c[k] = arr[j];
      k++;
      j++;
    }
  }

  //Corre o resto do i e escreve -> Numeros que não cairam na condição
  while (i <= mid) {
    c[k] = arr[i];
    k++;
    i++;
  }

  while (j <= hight){
    c[k] = arr[j];
    k++;
    j++;
  }

  //Escreve o ordenado no array
  for(i = low; i < k; i++){
    arr[i] = c[i];
  }

}

int main() {
  int n;
  scanf("%d", &n);
  int array[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
  merge_sort(array, 0, n - 1); // passa o primeiro e o ultimo elemento do array;
  printf("Sorted Array: ");
  for (int i = 0; i < n; i++){
    printf("%d, ", array[i]);
  }
}