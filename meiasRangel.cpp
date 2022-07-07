#include <bits/stdc++.h>

int main(){
    int pares, meias;
    std::cin >> pares;
    
    if(pares == 1){
        meias = 2;
    }

    else{
        meias = (pares*2)-1;
    }

    std::cout << meias << std::endl;

    return 0;
}