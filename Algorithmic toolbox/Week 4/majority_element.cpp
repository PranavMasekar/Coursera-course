#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> v, int key)
{
  int low, mid, high;
  low = 0;
  high = v.size() - 1;
  int count = 1;
  while (low <= high)
  {
    mid = low + (high - low) / 2;
    if (v[mid] == key)
    {
      count++;
      low = mid + 1;
    }
    if (v[mid] < key)
      low = mid + 1;
    else if (v[mid] > key)
      high = mid - 1;
  }
  // cout<<count<<endl;
  return count;
}

int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  //Byusing Map

  map<int, int> map;
  for (int i = 0; i < n; i++)
  {
    map[v[i]]++;
  }
  int flag = 0;
  for (int i = 0; i < n; i++)
  {
    if (map[v[i]] > n / 2)
    {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    cout << "0" << endl;
  else
    cout << "1" << endl;

  // By using Divide and Conquer Algorithm(incomplete)

  // sort(v.begin(), v.end());
  // int ans;
  // for (int i = 0; i < n; i++)
  // {
  //   ans = BinarySearch(v, v[i]);
  //   if (ans > n / 2)
  //   {
  //     cout << "1" << endl;
  //     break;
  //   }
  // }
  // if (ans <= n / 2)
  //   cout << "0";

  //Another algorithm

  // sort(v.begin(),v.end());
  // int ans=1;
  // int count=1;
  // for(int i=1;i<n;i++){
  //   if(v[i]==v[i-1]){
  //     count++;

  //   }
  //   else{
  //     ans = max(ans,count);
  //     count=1;
  //   }
  // }
  // if(ans>n/2) cout<<"1"<<endl;
  // else cout<<"0"<<endl;

  return 0;
}