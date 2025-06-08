#include <stdio.h>


int fuincionMedia(int *arr, int n){
  int media = 0;
  for(int i = 0; i<n; i++){
  media += arr[i];
  }return media/n;
}


int funcionModa(int *arr, int n){  
  int moda = arr[0];
  int contadorRepeticiones = 0;
  for(int i=0; i<n; i++){
    int repeticiones = 0;
    for(int j=0; j<n; j++){
      if(arr[i]==arr[j]){
        repeticiones++;
      }if(repeticiones > contadorRepeticiones || (repeticiones == contadorRepeticiones && arr[i] < moda)){
        contadorRepeticiones = repeticiones;
        moda = arr[i];
      } 
    }
  }return moda;
}

int funcionMediana(int *arr, int n){
  for(int i = 0; i<n-1; i++){
    for(int j = 0; j<i-1; j++){
      if(arr[j]>arr[j+1]){
        int tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1]= tmp;
      }
    }
  }
  if(n%2== 0 ){
    return (arr[n/2]+arr[(n/2)-1])/2;
  }else{
    return (arr[n/2]);
  }
}
int main(){
//int n = 10;
//int arr[10] = {1,22222,2,1,6,8,500,9,7,10};
//printf ("%d", centralTendencies(arr, n));

printf("%s\n","ingrese el tamaño de su arreglo");
int n;
scanf("%d", &n);
int arr[n];
int numerosValidos = 0; //Esto es en caso de que se detecte un numero no valido, haremos que este sea el nuevo tamaño de nuestro arreglo y solo trabajaremos con los numerosValidos para nuestras funciones

printf("ingrese los %d numeros de su arreglo\n", n);
for(int j = 0; j<n; j++){
  scanf("%d", &arr[j]);
  if(arr[j]<0 || arr[j]>=1000){
    printf("SOLO NUMEROS ENTRE 0 Y 1000 (EXCLUYENTES)\n "); 
    break;
    }numerosValidos++;
  }

int Media = fuincionMedia(arr, numerosValidos);
int Moda = funcionModa(arr, numerosValidos);
int Mediana = funcionMediana(arr, numerosValidos);
printf("la media de su arreglo es: %d\n", Media);
printf("la mediana de su arreglo es: %d\n", Mediana);
printf("la moda de su arreglo es %d\n", Moda);





return 0; 
}
