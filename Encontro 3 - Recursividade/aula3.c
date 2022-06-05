#include <stdio.h>

int maior(int *array, int n)
{
  if (n == 0)
  {
    return array[0];
  }

  int m = maior(&array[1], n - 1);
  if (m > array[0])
  {
    return m;
  }
  return array[0];
}

// return maior(array[p..q])
int maior2(int *array, int p, int q)
{
  if (p == q)
  {
    return array[p];
  }
  else
  {
    int m = maior2(array, p, q - 1);
    if (m > array[q])
      return m;
    else
      return array[q];
  }
}

// [0, 1, 2, 3, 4] array[0] = 0
// [1, 2, 3, 4]  array[0] = 1
// [2, 3, 4] array[0] = 2
// [3, 4] array[0] = 3
// [4] retorno 4

int menor(int *array, int n)
{
  if (n == 0)
  {
    return array[0];
  }
  int m = menor(array, n - 1);
  if (m < array[n])
  {
    return m;
  }
  return array[n];
}

// [3, 4, 0, 9], n = 4
// [3, 4, 0], n = 3
// [3, 4], n = 2
// [3], n = 1

int main()
{
  int n;
  scanf("%d", &n);
  int vet[n+1];
  for(int i = 0; i < n; i++){
    scanf("%d", &vet[i]);
  }
  printf("Maior = %d\n", maior(vet, n-1));
  printf("Menor = %d\n", menor(vet, n-1));

}