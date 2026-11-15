#include <iostream>
#include <vector>
using namespace std;
int main(){int n,target;cin>>n>>target;vector<int>a(n);for(int&i:a)cin>>i;for(int i=0;i<n;++i)if(a[i]==target){cout<<i<<'\n';return 0;}cout<<-1<<'\n';}
