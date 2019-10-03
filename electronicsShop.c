
#include <stdio.h>
using namespace std;
int main()
{
    int t,n,m,k,c;
    cin>>t>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<m;i++)
    cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    if(a[0]+b[0]>t)
    return -1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++){
          k=a[i]+b[j];
          if(k==t)
          return k;
          if(k>c&&k<t)
          c=k;
      }
    }
    return c;
}
