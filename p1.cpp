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
    int a[500];
    for(int i = 0;i<500; i++)
    a[i] = 0;

    a[0] = 1;


    int k ;
    cin>>k;

    for(int i = 2; i<=k; i++)
    {
      for(int j = 0; j<500; j++)
      a[j] *= i;


      for(int j = 1; j<500; j++)
      {
        if(a[j-1] > 9)
        {
          int c = a[j-1]/10;
          a[j] = a[j] + c;
          a[j-1] =a[j-1] % 10;
        }
      }
    }


    cout<<"factorial calculation is complete :\n";
    for(int i = 499; i>= 0; i--)
    {
      cout<<a[i]<<" ";
    }


    cout<<endl;






    return 0;
}
