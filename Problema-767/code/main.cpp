#include <iostream>

using namespace std;

int main()
{
    int a[10][20],n,m,i,j;
    int SUMA = 0;
    
    cout << "Da-i o valoare la N : ";
    cin >> n;
    
    cout << "Da-i o valoare lu M : ";
    cin >> m;
    
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> a[i][j];
    
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (a[i][j] % 2 == 0)
                SUMA = SUMA  + a[i][j];
    
    cout << "Suma este = " << SUMA << endl;
                
    return 0;
}
