#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int a[50][50], n, i, j, gr[50], maxi;

  fin >> n;

  for (i=1; i<=n; i++) {
    for (j=1; j<=n; j++) {
      fin >> a[i][j];
    }
  }

  maxi = 0;

  for (i=1; i<=n; i++) {
    gr[i] = 0;

    for (j=1; j<=n; j++) {
      gr[i] = gr[i] + a[i][j];
    }

    if (gr[i] > maxi)
      maxi = gr[i];
  }

  cout << maxi;

  return 0;
}
