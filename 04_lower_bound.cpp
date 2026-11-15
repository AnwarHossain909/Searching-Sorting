#include <iostream>
#include <vector>
using namespace std;
int main(){int n,target;cin>>n>>target;vector<int>a(n);for(int&i:a)cin>>i;int left=0,right=n;while(left<right){int mid=left+(right-left)/2;if(a[mid]<target)left=mid+1;else right=mid;}cout<<left<<'\n';}
