#include <stdio.h> // se incluye la libreria 
int main()
{
    int n;
     printf("Seleccione la  conversion deseada\n"); // seleccion de la conversion 
     printf("1. C  a  F\n"); // seleccion de C a F
     printf("2. F  a  C\n"); // seleccion de F a C 
     scanf("%d",&n); 
      if(n==1){
          float c;
          printf("Ingresa los grados centigrados\n"); //Ingresar los datos en C 
           scanf("%f",&c); // 
          double f=(c*9/5)+(32);
          printf("%0.2fC equivale a %0.2lfF",c,f); // imprimir la equivalencia de C a F 
      }else{
          float f;
          printf("Ingresa grados fahrenheit\n"); // ingresar los grados en F
          scanf("%f",&f);
          double c=(f-32)*5/9;
          printf("%0.2fF equivale  a %0.2lfC",f,c); // imprimir la equivalencia de F a C 
      }
    return 0;
}
