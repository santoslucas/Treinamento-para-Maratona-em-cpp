#include <iostream>
#include <math.h>

using namespace std;

#define LIMITE 12

int main (void)
{
    int distacia, velLadrao, velGuarda; 
    double tempoGuarda, caminhoGuarda, distAlcancar;

    while (cin >> distacia >> velLadrao >> velGuarda)
    {   
        caminhoGuarda = sqrt(144 +(pow(distacia, 2)));
        tempoGuarda = (caminhoGuarda / velGuarda);
        distAlcancar = (velLadrao * tempoGuarda);

        if(distAlcancar > LIMITE){
            cout << "N" << endl;
        }
        else{
            cout << "S" << endl;
        }
    }
}