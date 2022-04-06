#include <iostream>
using namespace std;

int main() {

    int primo;
    int secondo;
    int n,somma;
    cin >> n;
    primo = 1;
    secondo =0;
    for (int i = 0; i < n ; i++)
    {
        somma = primo + secondo;
        if(somma<=n)
        {
            primo = secondo;
        secondo = somma;
            cout << somma << endl;
        }
            else
            {
            break;
            }
    }
    return 0;
}
