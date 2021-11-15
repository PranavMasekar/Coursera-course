#include <iostream>
using namespace std;
int get_change(int m)
{
  //write your code here
  int count = 0;
  if (m < 5)
  {
    return m;
  }
  else if (m < 10)
  {
    count++;
    count = count + (m - 5);
    return count;
  }
  else
  {
    // In constant time i.e. O(1)
    count = 0;
    int sum = m;
    int d = sum / 10;
    count = d;
    int remainder = sum % 10;
    if (remainder < 5)
    {
      return count + remainder;
    }
    else if (remainder < 10)
    {
      count++;
      count = count + (remainder - 5);
      return count;
    }

    // In Big(n)
    // while (sum >= 10)
    // {
    //   sum = sum - 10;
    //   count++;
    // }
    // if (sum < 5)
    // {
    //   return count + sum;
    // }
    // else if (sum >= 5 && sum < 10)
    // {
    //   count++;
    //   count = count + (sum - 5);
    //   return count;
    // }
  }
}

int main()
{
  int m;
  cin >> m;
  cout << get_change(m) << '\n';
  return 0;
}
