#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi(a,n) for(int i=a;i<n;i++)
const int m = 1e9 + 7;
int bin_mul(long long a, long long b){
 int ans = 0;
while (b)
 {
  if (b & 1)
{
  ans = (ans + a) % m;
  }
 b = b >> 1;
a = (a + a) % m;
 }
  return ans;
}
 int bin_expo(long long a, long long b)
{
int ans = 1;
while (b)
{
 if (b & 1 == 1)
 {
 ans = bin_mul(ans,a) ;
    }
 a = bin_mul(a,a);
  b = b >> 1;
  }
 return ans;
}
int main(){
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);

return 0;
}
