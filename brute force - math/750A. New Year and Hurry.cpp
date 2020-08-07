/*
    A. New Year and Hurry
    Status: Solved
    Link: https://codeforces.com/problemset/problem/750/A
    Logic:
    Check if get_time>= time. if it is then count else break.
*/

# include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k, time=0, count=0;
    cin>>n>>k;
    int get_time= 240-k;

    for(int i=1; i<=n ; i++){
        time+= i*5;
        if(time<= get_time){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}
