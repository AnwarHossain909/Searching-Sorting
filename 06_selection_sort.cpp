#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;vector<int>a(n);for(int&i:a)cin>>i;for(int i=0;i<n;++i){int best=i;for(int j=i+1;j<n;++j)if(a[j]<a[best])best=j;swap(a[i],a[best]);}for(int i=0;i<n;++i)cout<<a[i]<<(i+1==n?'\n':' ');}
