/// Author: Sarfaraz Alam
# include <bits/stdc++.h>
# define pb push_back
# define ll long long

# define fi first
# define se second
# define all(vc) vc.begin(),vc.end()
# define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
# define DEBUG
typedef unsigned long long int ull;
using namespace std;
#include<string>
#include<cmath>
const int N = 1e5 + 7;
const int mod = 1e9 + 7;


int main()
{
    speed;
    #ifdef DEBUGfd
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif // DEBUG

    //Code begins
    int k, r;
    int c = 0;
    int t = 0;
    cin>>k>>r;
    int i;
    for( i = 1; i<=10; i++)
    {
      t = k*i;
      if(t % 10 != 0)c++;
      if(t % 10 == 0 || t%10 == r )
      break;
    }

    if(i != 0 && i <= 10)
    cout<<i<<endl;
    else
    cout<<"1\n";






    return 0;
}
