//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=50109
#include<cstdio>
#include<algorithm>
#include<utility>
using namespace std;

bool compara(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b)
{
    return a.first>b.first;
}

int main()
{
    int n,a;
    scanf("%d",&n);
    pair<int,pair<int,int> > A[n*n];
    int B[n+1];
    int G[n+1];
    for(int i=0;i<=n;i++)
    {
        B[i]=0;
        G[i]=0;
    }
    int k=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&a);
            A[k]={a,{i,j}};
            k++;
        }
    }
    sort(A,A+n*n,compara);
    for(int i=0;i<n*n;i++)
    {
        if(B[A[i].second.first] == 0 && G[A[i].second.second] == 0)
        {
            B[A[i].second.first]=1;
            G[A[i].second.second]=1;
            printf("boy %d pair with girl %d\n",A[i].second.first,A[i].second.second);
        }
    }
    return 0;
}

