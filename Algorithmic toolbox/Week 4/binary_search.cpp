#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> v , int key){
  int low,mid,high;
  low=0;
  high = v.size()-1;
  while(low<=high){
    mid = low + (high-low)/2;
    if(v[mid]==key){
      return mid;
    }
    if(v[mid]<key) low = mid+1;
    else high = mid-1;
  }
  return -1;
}

int main()
{
  int n, m;
  cin >> n;
  vector<int> v1(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v1[i];
  }
  cin >> m;
  vector<int> v2(m);
  for (int i = 0; i < m; i++)
  {
    cin >> v2[i];
  }
  // sort(v1.begin(),v1.end());
  vector<int> ans;
  for(int i=0;i<m;i++){
    ans.push_back(BinarySearch(v1,v2[i]));
  }
  for (int i = 0; i < m; i++)
  {
    cout<<ans[i]<<" ";
  }
  return 0;
}