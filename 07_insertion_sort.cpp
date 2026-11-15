#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;vector<int>a(n);for(int&i:a)cin>>i;for(int i=1;i<n;++i){int value=a[i],j=i-1;while(j>=0&&a[j]>value){a[j+1]=a[j];--j;}a[j+1]=value;}for(int i=0;i<n;++i)cout<<a[i]<<(i+1==n?'\n':' ');}
