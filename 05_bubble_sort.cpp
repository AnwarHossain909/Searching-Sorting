#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;vector<int>a(n);for(int&i:a)cin>>i;for(int end=n-1;end>0;--end){bool changed=false;for(int i=0;i<end;++i)if(a[i]>a[i+1]){swap(a[i],a[i+1]);changed=true;}if(!changed)break;}for(int i=0;i<n;++i)cout<<a[i]<<(i+1==n?'\n':' ');}
