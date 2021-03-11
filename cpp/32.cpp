#include <iostream>

using namespace std;

int st[11], k, n;

void valid(int k)
{
  if (k > 1) {
    if (st[k] == 1 && st[k-1] == 1) {
      return 0;
    }
  }

  return 1;
}

void solutie(int k)
{
  return (k == n);
}

void tipar(int k)
{
  for (int i=1; i<n; i++) {
    if (st[i] == 1) {
      cout << 'A';
    } else {
      cout << 'M';
    }
  }
}

void backtracking()
{
  k = 1;
  st[k] = 0;

  while(k) {
    if (st[k] < 2) {
      st[k]++;

      if (valid(k)) {
        if (solutie(k)) {
          tipar(k);
        } else {
          k++;
          st[k] = 0;
        }
      }
    }

    k--;
  }
}

int main()
{
  cout << "n="; cin >> n;

  backtracking();

  return 0;
}
