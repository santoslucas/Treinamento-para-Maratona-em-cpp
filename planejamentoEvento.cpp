/*beecrowd | 3182
Planejamento de Evento*/

#include <iostream>

using namespace std;

int main (void)
{
    int numParticip, orcamento, numHoteis, numSemanas,
        precoTotal = 0, primeiro=1;
    
    cin >> numParticip >> orcamento >> numHoteis >> numSemanas;

    int precoHotel[numHoteis], numCamas[numHoteis][numSemanas];

    for (int i = 0; i < numHoteis; i++)
    {
        cin >> precoHotel[i];
        for (int j = 0; j < numSemanas; j++)
        {
            cin >> numCamas[i][j];
            
            if(numCamas[i][j] >= numParticip)
            {
                int auxPreco = (precoHotel[i] * numParticip);
                
                if(auxPreco < precoTotal || primeiro)
                {
                    precoTotal = auxPreco;
                    primeiro = 0;
                }
            }
        }
    }

    if(precoTotal <= orcamento && precoTotal > 0)
    {
        cout << precoTotal << endl;
    }
    else
    {
        cout << "stay home" << endl;
    }
}