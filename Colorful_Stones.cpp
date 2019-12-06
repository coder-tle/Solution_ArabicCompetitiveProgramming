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
    // speed;
    // #ifdef DEBUGfd
    //     freopen("in.txt", "r", stdin);
    //     freopen("out.txt", "w", stdout);
    // #endif // DEBUG

    //Code begins
    // cin.ignore(numeric_limits<streamsize>::max(),'\n');
    // std::cout << "working" << '\n';
    string s1, i1;
    cin>>s1;
    // cout<<"woring 2\n";
    // cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin>>i1;
    int i = 0, j =0;
    for(i = 0; i<i1.length(); i++)
    {
      if(i1[i] == s1[j])
      j++;
    }

    cout<<(j+1)<<endl;






    return 0;
}
