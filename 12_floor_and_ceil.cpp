#include <iostream>
#include <vector>
using namespace std;
int main(){int n,x;cin>>n>>x;vector<int>a(n);for(int&i:a)cin>>i;int floor=-1,ceil=-1,l=0,r=n-1;while(l<=r){int m=l+(r-l)/2;if(a[m]==x){floor=ceil=a[m];break;}if(a[m]<x){floor=a[m];l=m+1;}else{ceil=a[m];r=m-1;}}cout<<floor<<' '<<ceil<<'\n';}
