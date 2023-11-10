#include <iostream>

using namespace std;

int main()
{
    int n, m, i, j, k = 0;
    cin >> n >> m;
    int a[n][m];
    for (i = 0; i < n; i++)
    for (j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                k++;
            }
            }
    cout << "Number of ones in the array is: "<<k<<endl;
    return 0;
    }
    