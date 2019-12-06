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
    int w , y;
    cin>>w>>y;

    int max = w>y? w: y;

    int n = 6-max+1;
    int d = 6;

    for(int i = 2; i<=6; i++)
    {
      if(n%i == 0 && d % i == 0)
      {
        n = n/i;
        d = d/i;
      }
    }

    cout<<n<<"/"<<d<<"\n";







    return 0;
}
