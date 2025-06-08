#include <stdio.h>

void division(int num, int den, int pre){
  int entero = num/den;
  int resto = num % den;
  printf("%d", entero);
  if(resto != 0 && pre > 0){
    printf(".");
    for(int i =0;  i< pre && resto != 0; i++){
      resto *= 10;
      int decimal = resto/den;
      printf("%d", decimal);
      resto%= den;
    }
  }
}


int main(){
  printf("ingrese el numerador: ");
  int num;
  scanf("%d", &num);
  printf("ingrese el denominador: ");
  int den;
  scanf("%d", &den);
  if(den<=0){
    printf("numero ingresado invalido, debe ser un numero mayora 0");
    return 0;
  }
  printf("ingrese la presicion con la que desea que se le entregue su resultado: ");
  int pre;
  scanf("%d", &pre);

  division(num,den,pre);
  return 0;

}
