#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <queue>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef long long int LL;
#define ALL(s) (s).begin(),(s).end()
#define R(i,m,n)	for(i=m;i>=n;i--)
#define FF(i,m,n)	for(i=m;i<n;i++)
#define F(i,n)	FF(i,0,n)
#define VI vector<int>
#define PB push_back
#define CLR(s,v) memset(s,v,sizeof(s))
string to_str(LL x){ ostringstream o;o<<x;return o.str();}
LL to_int(string s){ istringstream st(s); LL i;	st>>i;return i;}
#define FR(it,t) for(typeof(t.begin()) it=t.begin(); it!=t.end(); ++it)
typedef pair<int,int> PI;
#define MP(x,y) make_pair(x,y)
#define f first
#define s second
#define MOD 531169

int multi[1000000],totalm;
int dp[1000000];

LL FC[MOD+10], Inv[MOD+10];

int Pow(LL x, int n) {
	LL res = 1;
	while (n > 0) {
		if (n&1)
			res = res*x%MOD;
		x = x*x%MOD;
		n >>= 1;
	}
	return (int)res;
}
 
int Ivs(int x) {
	int res = Pow(x, MOD-2);
	return res;
}

LL Fgo(LL a,LL b)
{
      LL a1,a2,b1,b2;
      a1 = a%MOD,a2 = a/MOD;
      b1 = b%MOD,b2 = b/MOD;
      LL res1=FC[a1]%MOD*Inv[b1]%MOD*Inv[a1-b1]%MOD;
      LL res2=FC[a2]%MOD*Inv[b2]%MOD*Inv[a2-b2]%MOD;
      if(b2==0)res2 = 0;
      return (res1 + res2)%MOD;
}
  
void PreP(int g){
	totalm=0;
	if(g==1)	return ;
	totalm=1;
	multi[0]=1;
	int i=2;
	while(i*i<g){
		if(g%i==0){
			multi[totalm++]=i;
			multi[totalm++]=g/i;
		}
		i++;
	}
	if(i*i==g && g%i==0)	multi[totalm++]=i;
	sort(multi,multi+totalm);
}

#define mx 1000
long long c[mx][mx];
void CM(){
	int i,j;
	for(i=0;i<mx;i++){
		for(j=0;j<=i;j++){
			c[i][j]=(j==0)?1:(c[i-1][j-1]+c[i-1][j]);
		}
	}
}

int fn(int a,int b){
	Fgo(a+b,b);
}

int main(){
	int t,a,b,i,j,k,sum;
	int g;
	CM();
    FC[0] = Inv[0] = 1;
    for(i=1;i<=MOD+1;i++) 
    {
		FC[i] = int(LL(FC[i-1])*i%MOD);
		Inv[i] = int(LL(Inv[i-1])*Ivs(i)%MOD);
	}

	cin>>t;
	while(t--){
		cin>>a>>b;
		g=__gcd(a,b);
		a/=g;b/=g;
		PreP(g);
		CLR(dp,0);
		sum=0;
		F(i,totalm){
			k=fn(a*multi[i],b*multi[i]);
			F(j,i){
				if(multi[i]%multi[j]==0){
					k=(k-dp[j]+MOD)%MOD;
				}
			}
			dp[i]=k;
			sum=(sum+k)%MOD;
		}
		int ans=fn(a*g,b*g)-sum;
		cout<<(ans+MOD)%MOD<<"\n";
	}
	return 0;
}
