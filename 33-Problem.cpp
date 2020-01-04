//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=50106
#include<queue>
#include<iostream>
#include<cstdio>
#include<utility>
using namespace std;

int main()
{
    int n,m,ans=0,tmp_w,k=0;
    cin >> m >> n;
    int A[n][m];
    int mark[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> A[i][j];
            mark[i][j]=0;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(A[i][j] != 0 && mark[i][j] == 0)
            {
                k++;
                tmp_w=0;
                queue< pair<int,int> > B;
                B.push({i,j});
                while(B.size()>0)
                {
                    int a=B.front().first;
                    int b=B.front().second;
                    B.pop();
                    if(mark[a][b] == 0)
                    {
                        tmp_w+=A[a][b];
                        mark[a][b]=1;
                    }
                    if(a-1>=0)
                    {
                        if(A[a-1][b] != 0 && mark[a-1][b] == 0)
                            B.push({a-1,b});
                    }
                    if(a+1<n)
                    {
                        if(A[a+1][b] != 0 && mark[a+1][b] == 0)
                            B.push({a+1,b});
                    }
                    if(b-1>=0)
                    {
                        if(A[a][b-1] != 0 && mark[a][b-1] == 0)
                            B.push({a,b-1});
                    }
                    if(b+1<m)
                    {
                        if(A[a][b+1] != 0 && mark[a][b+1] == 0)
                            B.push({a,b+1});
                    }
                }
                ans=max(ans,tmp_w);
            }
        }
    }
    printf("%d\n",k);
    printf("%d\n",ans);
    return 0;
}
