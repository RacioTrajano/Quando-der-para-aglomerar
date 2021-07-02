#include <stdio.h>

int unique (int n, int values[n], int uniqueValues[n]){

int cont = 0;
int pos;
for (int i=0; i< n; i++){
  scanf ("%d", &pos);
  uniqueValues[pos] = 1;
  cont++;
}

n = cont;

return n;
}


int main () {

int leituras;
scanf("%d", &leituras);

int vetor_repetido[leituras];
int vetor_unico[100];

unique(leituras, vetor_repetido,vetor_unico);

for (int i=0; i<100; i++){
  if (vetor_unico[i] == 1){
      printf("%d ", i);
  }
}
  return 0;

}