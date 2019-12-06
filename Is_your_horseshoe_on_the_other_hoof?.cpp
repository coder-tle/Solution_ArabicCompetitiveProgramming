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
    int a[4];

    for(int i = 0;i<4; i++)
    a[i] = -1;
    int d = 0;
    for(int i = 0; i<4; i++)
    {
      int k ;
      cin>>k;
      int flag = 0;
      for(int j = 0; j<4; j++)
      {
        if(k == a[j])
        flag = 1;
      }
      if(flag == 0)
      a[d++] = k;
      flag = 0;
    }
    int r =0;
    for(int i = 0;i<4; i++)
    {
      if(a[i] != -1)
      r++;
    }

    cout<<(4-r)<<endl;






    return 0;
}
