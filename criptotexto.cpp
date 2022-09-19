/*beecrowd | 2866
Criptotexto
*/

#include <iostream>

using namespace std;

int main(void)
{
    int cases;
    cin >> cases;

    while (cases--)
    {
        string cripto;
        cin >> cripto;

        int size = cripto.length();
        char trueWord[size+1];

        int j = 0;
        for (int i = (size-1); i >= 0; i--)
        {
            if(cripto[i]>=97 && cripto[i]<=122)
            {
                trueWord[j] = cripto[i];
                j++;
            }
        }
        trueWord[j] = '\0';
        cout << trueWord << endl;
    }
    
}