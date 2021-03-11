#include <iostream>

using namespace std;

int main()
{
  int a[50][50], n, m, sum;

  cout << "n="; cin >> n;
  cout << "m="; cin >> m;

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cout << "[" << i << "][" << j << "]="; cin >> a[i][j];
    }
  }

  for (int i=0; i<n; i++) {
    sum = 0;
    int ok = 0;
    for (int j=0; j<m; j++) {
      if (a[i][j] / 2 == 0) {
        sum += a[i][j];
        ok = 1;
      }

      if (ok) cout << "Pe linia " << i << " suma este " << sum << endl;
      else cout << "Pe linia " << i << " nu exista numere pare" << endl;
    }
  }

  return 0;
}
