// E. Considerando o código abaixo, qual o valor apresentado na linha 13 (pb - pa)?
// Explique o resultado apresentado.

#include <iostream>
using namespace std;

int main() {
 float *pa, *pb;
 float vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 pa = &vet[0];
 pb = &vet[9];
 cout << pa << " " << pb << endl;
 cout << pb - pa << endl;
 return 0;
}

// R: O valor apresentado é igual a 9, porque é a distância entre os indices da posição do vetor.