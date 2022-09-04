#include <iostream>
#include <cstring>

using namespace std;

int main(void){
    string matrizAUX;
    string matring[4];

    for(int i=0; i<4; i++)
    {
        cin >> matring[i];
    }

    int tamanhoMatring = matring[0].length();
    int tamanhoPalavra = (tamanhoMatring - 2);
    int colunas [tamanhoMatring];
    char auxColunas[4];

    for(int i=0; i<tamanhoMatring; i++)
    {
        for(int j=0; j<4; j++){
            auxColunas[j] = matring[j][i];
        }
        colunas[i] = atoi(auxColunas);
    }

    char palavra;
    
    for(int i=1; i<=tamanhoPalavra; i++)
    {
        palavra = (((colunas[0]*colunas[i])+colunas[tamanhoMatring-1]) % 257);
        cout << palavra;
    }
    cout << endl;
}