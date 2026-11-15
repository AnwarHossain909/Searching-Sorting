#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){int n,k;cin>>n>>k;priority_queue<int>heap;while(n--){int x;cin>>x;heap.push(x);if((int)heap.size()>k)heap.pop();}cout<<heap.top()<<'\n';}
