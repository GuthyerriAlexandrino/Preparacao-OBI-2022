#include <stdio.h>
#include <stdlib.h>

void ordenar(){

}

int Achar(int N, int *Array, int NumProcurado)
{
  if (N == 0)
  {
    return -1;
  }
  if (Array[N - 1] == NumProcurado)
  {
    return Array[N - 1];
  }
  return Achar(N - 1, Array, NumProcurado);
}

int main()
{
  int N, NumProcurado;
  scanf("%d", &N); // void*
  int *Array = malloc(N * sizeof(int));
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &Array[i]);
  }
  scanf("%d", &NumProcurado);
  printf("%d", Achar(N, Array, NumProcurado));
  free(Array);
}