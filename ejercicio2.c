#include <stdio.h>

unsigned long catalan(int n){
  unsigned long catalan[n+1];
  catalan[0] = 1;
  for(int i= 1 ; i<= n; i++){
    catalan[i]=0;
    for(int j= 0; j<i; j++){
      catalan[i] += catalan[j]*catalan[i-j-1];
    }
  }return catalan[n];
}

int main(){
  printf("ingresa el valor de su numero n de catalan:");
  int n;
  scanf("%d", &n);

  if(n > 30){
    printf("excede maximo de bits\npor favor ingese un numero igual o menor a 30");
    return -1;
  }
  if(n < 0){
    printf("solo se permite un numero igual o mayor a 0\n");
    return -1;
  }

  unsigned long resultado = catalan(n);
  printf("%lu\n", resultado);

  return 0;
}
