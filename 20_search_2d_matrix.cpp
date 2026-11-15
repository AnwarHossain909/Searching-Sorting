#include <iostream>
#include <vector>
using namespace std;
int main(){int rows,cols,target;cin>>rows>>cols>>target;vector<vector<int>>a(rows,vector<int>(cols));for(auto&row:a)for(int&x:row)cin>>x;int l=0,r=rows*cols-1;while(l<=r){int m=l+(r-l)/2,x=a[m/cols][m%cols];if(x==target){cout<<"true\n";return 0;}if(x<target)l=m+1;else r=m-1;}cout<<"false\n";}
