#include <stdio.h>

float val(int n){
  if(n == 1){
    return 10.0;
  }
    // 2+
    int d = val(n-1);
    return (d+20.0)/2.0;
}

int main(){
  int n;
  scanf("%d", &n);
  printf("Valor = %.2f", val(n));
}