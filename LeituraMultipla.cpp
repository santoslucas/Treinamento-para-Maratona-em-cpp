#include <iostream>
#include <string.h>

using namespace std;

int main (void){
    char readWrite[50];
    int process;

    while (cin >> readWrite >> process){
        int size = strlen(readWrite);
        int cicles = 0;

        for (int i = 0; i < size; i++){
            if(readWrite[i] == 'W'){
                cicles++;
            }
            else{
                int j;
                for(j=i; j<(i+process); j++){
                    if(readWrite[j] == 'W'){
                        break;
                    }
                }
                i = (j-1);
                j = 0;
                cicles++;
            }
        }

        cout << cicles <<endl;
        
    }
}