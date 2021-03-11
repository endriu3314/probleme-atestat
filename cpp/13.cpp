#include <iostream>

using namespace std;

int main()
{
  int a[50][50], n, i, j, gr[50];

  fin >> n;

  for (i=1; i<n; i++) {
    for (j=1; j<n; j++) {
      fin >> a[i][j];
    }
  }

  for (i=1; i<n; i++) {
    gr[i] = 0;

    for (j=1; j<n; j++) {
      gr[i] += a[i][j];
    }
  }

  for (i=1; i<n; i++) {
    cout << gr[i] << ' ';
  }

  return 0;
}
