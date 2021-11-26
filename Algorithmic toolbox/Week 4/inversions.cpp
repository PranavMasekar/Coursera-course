#include <bits/stdc++.h>
using namespace std;

long long mymerge(int arr[], int temp[], int left, int mid, int right)
{
  long long i, j, k, count = 0;
  i = left;
  j = mid;
  k = left;
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
      count = count + (mid - i);
      
    }
  }
  while (i <= mid - 1)
    temp[k++] = arr[i++];

  while (j <= right)
    temp[k++] = arr[j++];

  for (i = left; i <= right; i++)
    arr[i] = temp[i];

  return count;
}

long long mergesort(int arr[], int left, int right)
{
  int temp[right + 1];
  int n = right-left+1;
  if(n==1) return 0;
  long long mid, count = 0;
  if (right > left)
  {
    mid = (right + left) / 2;
    count += mergesort(arr, left, mid);
    count += mergesort(arr, mid + 1, right);
    count += mymerge(arr, temp, left, mid + 1, right);
  }
  return count;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
 cout<<mergesort(arr,0,n-1)<<endl;

  return 0;
}