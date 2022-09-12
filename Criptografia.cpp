#include <iostream>

using namespace std;

int main (void){
    int casos;
    cin >> casos;
    getchar();

    for(int i=0; i<casos; i++){
        string palavra;
        getline(cin, palavra);
        int tamanho = (palavra.length());
        char cript[tamanho+1];

        for(int j=0; j<(tamanho); j++){
            if((palavra[j]>=65 && palavra[j]<=90) ||
            (palavra[j] >= 97 && palavra[j]<= 122)){
                cript[j] = (palavra[j]+3);
            }
            else{
                cript[j] = palavra[j];
            }
        }
        cript[tamanho] = '\0';

        for(int j=0; j<(tamanho/2); j++){
            char aux = cript[j];
            cript[j] = cript[tamanho-j-1];
            cript[tamanho-j-1] = aux;

        }

        for(int j=(tamanho/2); j<tamanho; j++){
            cript[j] = (cript[j]-1);
        }

        printf("%s\n", cript);;
    }
}