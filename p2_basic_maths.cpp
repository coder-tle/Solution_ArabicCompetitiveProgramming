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
    int _;
    cin>>_;

    while(_--)
    {
      double k;
      cin>>k;
      cout<<"For :"<<k<<endl;
      cout<<floor(k)<<endl;
      cout<<ceil(k)<<endl;
      cout<<pow(10,(int)k)<<endl;


      cout<<(log2(k))<<endl;
      cout<<(log10(k))<<endl;
      cout<<sin(k)<<endl;
      cout<<cos(k)<<endl;

      cout<<"Rounding operations:\n";
      cout<<round(k)<<endl;
      cout<<trunc(k)<<endl;

      
    }






    return 0;
}
