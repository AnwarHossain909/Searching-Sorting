#include <iostream>
#include <vector>
using namespace std;
void quickSort(vector<int>&a,int left,int right){if(left>=right)return;int pivot=a[left+(right-left)/2],i=left,j=right;while(i<=j){while(a[i]<pivot)++i;while(a[j]>pivot)--j;if(i<=j)swap(a[i++],a[j--]);}quickSort(a,left,j);quickSort(a,i,right);}
int main(){int n;cin>>n;vector<int>a(n);for(int&i:a)cin>>i;quickSort(a,0,n-1);for(int i=0;i<n;++i)cout<<a[i]<<(i+1==n?'\n':' ');}
