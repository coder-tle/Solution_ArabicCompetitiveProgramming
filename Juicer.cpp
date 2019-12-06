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
    int n, max, cap;
    cin>>n>>max>>cap;

    vector<int> a;

    int k;
    for(int i = 0; i<n;i++)
    {
      cin>>k;
      if(k<=max)
      a.push_back(k);
    }

    int sum = 0;int count = 0;
    for(auto i : a)
    {
      sum += i;
      if(sum > cap )
      {
        sum = 0;
        count++;
      }
    }
    cout<<count<<endl;






    return 0;
}
