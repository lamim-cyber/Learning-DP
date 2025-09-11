#include <bits/stdc++.h>
#define hi ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
ll memo[10000];

//simple recursive
int f(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return f(n - 1) + f(n - 2);
}
// here the pronlem is the runtime of that recursive function is 2^n, so we introduced memoization

ll fib(ll n)
{
    if(memo[n])return memo[n];
    if(n==1) return 1;
    if(n==0) return 0;

    return memo[n]= fib(n-1)+ fib(n-2);
}
// it memoized the value , so dont have to repeat multiple times

int main()
{
    hi
    int n;
    cin>> n;
    cout<< fib(n)<< endl;

}
//counting the nth fibonacci with memoization which is called top-down dp
//if a recursive function states is saved by memoization is called top-down DP 
