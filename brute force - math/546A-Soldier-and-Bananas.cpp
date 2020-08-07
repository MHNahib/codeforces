/*
    A. Soldier and Bananas
    Status: Solved
    Link: https://codeforces.com/problemset/problem/546/A
    Logic:
    If we have n>=sum amount of money, then we don't need to borrow form friends.
*/

# include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,w, sum=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++){
        sum= sum+(i*k);

    }

    if(n>= sum)
        cout<<0<<endl;
    else
        cout<<sum-n<<endl;

    return 0;
}
