#include<bits/stdc++.h>
using namespace std;

int binary(int a[], int l , int r, int val)
{
    if(l>r)return 0;

    int mid= (l+r)/2;

    if(a[mid]==val)
        return mid;
  
    if(a[mid]>val)
        binary(a, mid+1, r, val);
  
    if(a[mid]< val)
        binary(a, l, mid-1, val);
}

int main()
{
    int n, k;
    cin>> n>> k;//k is the value we want to find
    int a[n+1];
    for(int i=1; i<=n; i++)cin>> a[i];
    sort(a+1, a+n+1);
    cout<< binary(a, 1, n, k)<< endl;// printing the index , if not found then 0
}
