#include <iostream>
#include <vector>
using namespace std;
int main(){int n,target;cin>>n>>target;vector<int>a(n);for(int&i:a)cin>>i;int first=-1,last=-1,l=0,r=n-1;while(l<=r){int m=l+(r-l)/2;if(a[m]>=target)r=m-1;else l=m+1;if(a[m]==target)first=m;}l=0;r=n-1;while(l<=r){int m=l+(r-l)/2;if(a[m]<=target)l=m+1;else r=m-1;if(a[m]==target)last=m;}cout<<first<<' '<<last<<'\n';}
