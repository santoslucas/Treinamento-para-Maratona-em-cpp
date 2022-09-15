#include <iostream>

using namespace std;

int main (void){
    int numCasos;
    cin >> numCasos;

    for(int i=0; i<numCasos; i++){
        string cifra;
        char descifra;

        int deslocamento;

        cin >> cifra;
        cin >> deslocamento;

        int tamanho = cifra.length();

        for(int j=0; j<tamanho; j++){
            descifra = (cifra[j]);
            for(int k=0; k<deslocamento; k++){
                descifra = (descifra-1);

                if(descifra == 64){
                    descifra = 90;
                }
            }
            cout << descifra;
        }

        cout << endl;
    }
}