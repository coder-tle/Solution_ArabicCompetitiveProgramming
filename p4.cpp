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
      int n;
      cin>>n;

      double digits  = 0;
      for(int i  = 1; i<=n; i++){
        digits += log10(i);



      }
      digits = floor(digits) +1;
      cout<< ( (int)digits)<<endl;
    }






    return 0;
}
