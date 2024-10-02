/*D. O que está errado no código abaixo?

int main() {
 int x, *p;
 x = 10;
 *p = x;
 return 0;
}*/

// R: O ponteiro p não está ligado a nenhum endereço de memória. O jeito certo seria:

#include <iostream>
using namespace std;

int main() {
 int x, *p;
 x = 10;
 p = &x;
 return 0;
}