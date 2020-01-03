//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30760
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,m;
    while(cin >> n >> m)
    {
        int matrix[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin >> matrix[i][j];
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout << matrix[j][i];
                if(j != n-1)
                    cout << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

