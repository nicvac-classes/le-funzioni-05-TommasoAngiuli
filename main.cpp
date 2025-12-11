#include <iostream>
#include <vector>
using namespace std;
void ordina(int n, vector <int> & v) 
{
    int i, j, t;
    for (i = 0; i <= n - 1; i++) 
    {
        for (j = 0; j <= n - 2; j++) 
        {
            if (v[j] > v[j + 1]) 
            {
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
        }
    }
}

void visualizza(int n, vector <int> & v) 
{
    int i;
    for (i = 0; i <= n - 1; i++) 
    {
        cout << v[i] << endl;
    }
}

int main() 
{
    int n, i;
    n = 3;
    vector <int> v (n);
    vector <int> w (n);
    i = 0;
    while (i <= n - 1) 
    {
        v[i] = rand() % (n * 10 + 1);
        w[i] = rand() % (n * 10 + 1);
        i = i + 1;
    }
    ordina(n, v);
    ordina(n, w);
    cout << "vettore V ordinato" << endl;
    visualizza(n, v);
    cout << "vettore W ordinato" << endl;
    visualizza(n, w);
    return 0;
}