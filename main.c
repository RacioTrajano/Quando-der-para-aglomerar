#include <stdio.h>

int unique (int n, int values[n], int uniqueValues[n]){

  for(int i=0; i< n; i++){
    values[i] =0;
  }
  for(int i=0; i< n; i++){
    uniqueValues[i] =0;
  }

  for(int i=0; i< n; i++){
    scanf("%d", &values[i]);
  }
  for(int i=0; i< n-1; i++){
    for(int j = i+ 1; i< n; j++){
      if (values[i] != values[j]){
        uniqueValues[i] = values[i];
      }
    }
  }
  return uniqueValues[n];
};



int main () {



int tam;
scanf("%d", &tam);
int values[tam];
int uniqueValues[tam];

unique (tam, values, uniqueValues);
for (int i=0; i< tam; i++) {
  
    printf("%d", uniqueValues[i]);
  
}

  return 0;
}