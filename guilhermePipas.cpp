/*beecrowd | 1921
Guilherme e Suas Pipas*/

#include <iostream>

using namespace std;

int main (void)
{
    long long int lados;
    cin >> lados;

    long long int diagonais;
    diagonais = ((lados*(lados-3))/2);

    cout << diagonais << endl;
}