//Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem inversa.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
 system ("clear");

  float numero[10];
  int i;

  printf("Digite 10 numeros reais: \n");
  for (i=0 ; i<10 ; i++) {
    scanf("%f", &numero[i]);
  }

  printf("\nOs numeros na ordem inversa ficam:\n");
  for (i=9; i>=0; i--) {
    printf("%2.f\n", numero[i]);
  }
   
   
  return 0;
}