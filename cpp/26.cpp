#include <iostream>

using namespace std;

void citire(int &v[], int &n)
{
  cin >> n;

  for (int i=0; i<n; i++)
    cin >> v[i];
}

void sortate(int &v[], int &n)
{
  int i, j, aux;

  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      if (v[i] < v[j]) {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
    }
  }
}

int main()
{
  int v[100], n;

  citire(v, n);
  sortare(v, n);

  for (int i=0; i<n; i++) {
    cout << v[i] << ' ';
  }

  return 0;
}
