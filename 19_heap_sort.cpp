#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;vector<int>a(n);for(int&i:a)cin>>i;make_heap(a.begin(),a.end());sort_heap(a.begin(),a.end());for(int i=0;i<n;++i)cout<<a[i]<<(i+1==n?'\n':' ');}
