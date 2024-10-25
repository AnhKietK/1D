#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[1000], n, b[1000], c = 0, l = 1, kq;
    cin >> n;
      for (int i = 0; i < 1000; i++)
    {
      b[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            b[c] = a[i];
            c += 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            b[l] = a[i];
            l += 2;
        }

    }
    l = l - 1;
    kq = max(c, l);
    if(kq==l) kq+=1;
    for (int i = 0; i <= kq; i++){
     if(b[i]!=0){
      cout<<b[i]<<" ";
     }
    }
 return 0;
}