#include <bits/stdc++.h>
#include <cstring>

int main(){
    int numEntradas;
    std::cin >> numEntradas;

    while(numEntradas--){
        std::string entrada;

        std::cin >> entrada;

        int tamanho = entrada.length();
        int cont1=0, cont2=0, flag=1;

        for(int i=1; i<tamanho; i++){
            if(flag && (entrada[i] == 'a')){
                cont1++;
            }
            else{
                flag=0;
            }

            if(flag==0 && (entrada[i] == 'a')){
                cont2++;
            }
        }

        int num_a = (cont1*cont2);

        std::cout << "k";
        for(int i=0; i<num_a; i++){
            std::cout << "a";
        }
        std::cout << std::endl;
    }

    return 0;
}