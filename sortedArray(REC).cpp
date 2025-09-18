#include<bits/stdc++.h>
using namespace std;
bool sorted(int a[], int n)
{
    if(n==2)
        return a[n-1]<=a[n];
     
    return a[n-1]<=a[n] && print(a, n-1);
}

int main()
{
    int n;
    cin>> n;
    int a[n+1];
    for(int i=1; i<=n; i++)cin>> a[i];
    cout<< sorted(a, n)<< endl;
}
