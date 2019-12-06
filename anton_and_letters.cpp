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
    string str;
    //cin>>str;
    getline(cin, str);
    int a1[26] ;int count = 0;


    for(int i = 0;i<26;i++)a1[i] = 0;


    for(int i= 0; i<str.length(); i++)
    {
      if(str[i]>= 'a' && str[i] <='z')
      {
        // cout<<"inside: for: "<<str[i]<<"\n";
        // cout<<"index accessed : "<<(str[i]-'a')<<endl;
        if(a1[str[i] - 'a'] == 0){
        count++;
        a1[str[i]-'a'] = 1;}


      }
    }

    cout<<count<<endl;






    return 0;
}
