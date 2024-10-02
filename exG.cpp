#include <iostream>
#include <climits>
using namespace std;

void maxEmin (int *v1, int a){
    int min, max;
    for(int i = 0; i < a;i++){
        cin >> v1[i];
    }
    min = v1[0];
    max = v1[0];
    for(int i = 1; i < a;i++){
        if(v1[i] < min){
            min = v1[i];
        }
        if(v1[i] > max){
            max = v1[i];
        }
    }
    cout << "O valor minimo do vetor e: " << min << endl;
    cout << "O valor maximo do vetor e: " << max << endl;
}

void juncao(int *v1, int *v2, int a, int b, int c, int *v3){
    for(int i = 0; i < b;i++){
        cin >> v2[i];
    }
    for(int i = 0; i < c;i++){
        if(i < a){
           v3[i] = v1[i]; 
        }
        else{
            v3[i] = v2[i-a];
        }
    }
}

void parOUimpar(int *v3, int c){
    int vpar[c], vimpar[c];
    for(int i = 0; i < c;i++){
        if(v3[i] % 2 == 0){
            vpar[i] = v3[i];
        }
        else{
            vimpar[i] = v3[i];
        }
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    int v1[a], v2[b];
    maxEmin(v1 , a);
    int c = a+b;
    int v3[c];
    juncao(v1,v2,a,b,c,v3);
    parOUimpar(v3,c);
}