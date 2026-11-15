#include <iostream>
#include <vector>
using namespace std;
long long count(vector<long long>&a,int l,int r){if(r-l<=1)return 0;int m=(l+r)/2;long long ans=count(a,l,m)+count(a,m,r);vector<long long>b;int i=l,j=m;while(i<m||j<r){if(j==r||(i<m&&a[i]<=a[j]))b.push_back(a[i++]);else{ans+=m-i;b.push_back(a[j++]);}}for(int k=l;k<r;++k)a[k]=b[k-l];return ans;}
int main(){int n;cin>>n;vector<long long>a(n);for(auto&i:a)cin>>i;cout<<count(a,0,n)<<'\n';}
