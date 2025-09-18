#include<bits/stdc++.h>
using namespace std;
vector< int > b;//global array that stores subsets
void print_subset(int a[], vector< int > b , int i, int n)
{
    if(i==n+1)// if i is above n then there is nothing to include or exclude in the array , just print 
    {
        for(int i=0; i<b.size(); i++)
        {
            cout<< b[i]<< " ";
        }
        cout<< endl;
        return;
    }

    b.push_back(a[i]);// empty subset a first a a[i] include korlam

    print_subset(a, b, i+1, n);// then i+1 kore abar call

    b.pop_back();// kebol jeta include korsi sheta exclude korlam
  //backtrack concept starts fron here, jehetu ekta dhukaisi ekta ber kore disi, karon ami chai na eta thakuk
  
    print_subset(a, b, i+1, n);// abar i+1 call
}

int main()
{
    int n;
    cin>> n;
    int a[n+1];

    for(int i=1; i<=n; i++)cin>> a[i];
    print_subset(a, b, 1, n);
}
