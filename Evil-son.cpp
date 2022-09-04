#include <iostream>

using namespace std;

int main(void){
    int instancias, retas, regioes;

    cin >> instancias;
    for(int i=0; i<instancias; i++){
        cin >> retas;
        regioes = (((retas*(retas+1))/2)+1);
        cout << regioes << endl;
    }
}