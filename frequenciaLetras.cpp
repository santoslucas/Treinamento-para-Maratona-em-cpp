/*beecrowd | 1255
Frequência de Letras*/

#include <iostream>

using namespace std;

int main (void)
{
    int casos;
    cin >> casos;
    cin.ignore();
    char alfa[27] = "abcdefghijklmnopqrstuvwxyz";

    while(casos--)
    {
        int contador[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

        string frase;
        getline(cin, frase);
        int tamanho = frase.size();
        int maisRepetido=0;

        for (int i = 0; i < tamanho; i++)
        {   
            char aux = tolower(frase[i]);
            if (aux>=97 && aux<=122)
            {
                for (int j = 0; j < 26; j++)
                {
                    if (aux == alfa[j]) 
                    {
                        contador[j]++;

                        if (contador[j] > maisRepetido)
                        {
                            maisRepetido = contador[j];
                        }

                        break;
                    }
                }
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (contador[i] == maisRepetido)
            {
                cout << alfa[i];
            }
        }
        cout << endl;
    }
}