#include <iostream>

using namespace std;

int cb(int v[], int li, int ls)
{
  int mij;

  mij = (li + ls) / 2;

  if (li <= ls) {
    if (x == v[mij]) {
      return 1;
    }

    if (x < v[mij]) {
      return cb(v, x, li, mij - 1);
    }

    return cb(v, x, mij + 1, ls);
  }

  return 0;
}

int main()
{
  int v[1000], n, i, x;

  cin >> x;
  cin >> n;

  for (i=0; i<n; i++) {
    cin >> v[i];
  }

  if (cb(v, x, 0, n-1) == 1) {
    cout << x << " apare in vectorul v";
  } else {
    cout << x << " nu apare in vectorul v";
  }

  return 0;
}
