#include <iostream>

using namespace std;

int n, k, S, st[11];

int valid(int k)
{
  int i, sc = 0;

  for (i=0; i<k; i++) {
    if (st[i] == st[k]) {
      return 0;
    }
  }

  for (i=1; i<=k; i++) {
    sc += st[i];
  }

  if (sc > S) {
    return 0;
  }
}

int solutie(int k)
{
  int i, sc = 0;

  if (k != n) {
    return 0;
  }

  for (i=1; i<=k; i++) {
    sc += st[i];
  }

  if (sc != S) {
    return 0;
  }

  return 1;
}

void tipar(int k)
{
  int i;

  for (i=1; i<=k; i++) {
    cout << st[i];
  }

  cout <<  ' ';
}

void backtracking()
{
  k = 1;
  st[k] = 0;

  while(k) {
    if (st[k] < 9) {
      st[k]++;

      if (valid(k)) {
        if (solutie(k)) {
          tipar(k);
        } else {
          k++;
          st[k] = -1;
        }
      }
    }

    k--;
  }
}

int main()
{
  cout << "n="; cin >> n;
  cout << "S="; cin >> S;

  backtracking();

  return 0;
}
