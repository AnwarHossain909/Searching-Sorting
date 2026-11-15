#include <iostream>
using namespace std;
int main(){long long n,answer=0,l=0,r=1000000000;cin>>n;while(l<=r){long long m=l+(r-l)/2;if(m<=n/m){answer=m;l=m+1;}else r=m-1;}cout<<answer<<'\n';}
