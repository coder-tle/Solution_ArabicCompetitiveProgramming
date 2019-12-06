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
    int n,t, k, d;
    cin>>n>>t>>k>>d;

    int time = 0, t1 = 0, t2 = 0, tn = 0, to = d;
    int temp = n;
    while(n > 0)
    {
      if(time > d)
      {n -= k;to += t;}
      if(to < tn && n <= 0)break;
      n -= k;
      tn += t;
      time += t;
    }


    t2 = tn>to?tn:to;

    t1 = ceil(temp/k)*t;

    if(t2<t1)cout<<"YES\n";
    else
    cout<<"NO\n";






    return 0;
}
// 
// #include<iostream>
// #include<cmath>
// using namespace std;
//
// int main()
// {
//
// 	int n, t, k, d;
// 	cin >> n >> t >> k >> d;
// 	int oneOven_t = ceil ((double) n / k) * t;
// 	int elapsed = 0;
// 	if (k >= n)
// 		cout << "NO";
// 	else {
// 		do
// 		{
// 			elapsed += t;
// 			n -= k;
// 		} while (elapsed < d);
//
//
// 		if (n < 0)
// 			n = 0;
// 		else if (n > 0)
// 			elapsed = d;
//
// 		elapsed +=  ceil((double)n/ (2 * k)) * t;
// 		if (elapsed < oneOven_t)
// 			cout << "YES";
// 		else
// 			cout << "NO";
// 	}
//
// 		return 0;
// }
