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
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n; i++)
    cin>>a[i];

    int m;
    cin>>m;
    int s[m][2];
    for(int i = 0; i<m;i++)
    {
      cin>>s[i][0]>>s[i][1];
    }
    int w , p;

    for(int i = 0; i<m; i++)
    {
      w = s[i][0];
      p = s[i][1];

      w--;

      int r = 0, l = p-1;
      if(w >= 0 && w<n)
       r = a[w] - p;
       a[w] = 0;


      if(w+1 >= 0 && w+1 < n)
      a[w + 1] += r;
      if(w-1>=0 && w-1< n)
      a[w-1] += l;
      //
      // for(int i = 0; i<n; i++)
      // cout<<a[i]<<"\n";
      // cout<<"\n\n";
    }

    for(int i = 0; i<n; i++)
    cout<<a[i]<<"\n";






    return 0;
}
