#include <iostream>
#include <vector>
using namespace std;
void sortRange(vector<int>&a,int left,int right){if(right-left<=1)return;int mid=(left+right)/2;sortRange(a,left,mid);sortRange(a,mid,right);vector<int>merged;int i=left,j=mid;while(i<mid||j<right){if(j==right||(i<mid&&a[i]<=a[j]))merged.push_back(a[i++]);else merged.push_back(a[j++]);}for(int k=left;k<right;++k)a[k]=merged[k-left];}
int main(){int n;cin>>n;vector<int>a(n);for(int&i:a)cin>>i;sortRange(a,0,n);for(int i=0;i<n;++i)cout<<a[i]<<(i+1==n?'\n':' ');}
