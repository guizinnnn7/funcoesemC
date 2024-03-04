#include <stdio.h>

void DizerBoatarde(char nome[20]){
  printf("Boa tarde %s\n", nome);
}

int main(void) {
  DizerBoatarde("Guilherme\n");
  DizerBoatarde("Parça");
  return 0;
}