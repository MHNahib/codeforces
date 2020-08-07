/*
    A. Expression
    Status: Solved
    Link: https://codeforces.com/problemset/problem/479/A
    Logic:
    check 4 conditions with (a+b+c)
*/

# include <bits/stdc++.h>
# include <algorithm>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int arr[] = {a+b+c, a+(b*c), a*(b+c), a*b*c, (a+b)*c};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    cout<<arr[4]<<endl;
    return 0;
}
