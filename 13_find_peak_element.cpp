#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;vector<int>a(n);for(int&i:a)cin>>i;int l=0,r=n-1;while(l<r){int m=l+(r-l)/2;if(a[m]>a[m+1])r=m;else l=m+1;}cout<<l<<'\n';}
