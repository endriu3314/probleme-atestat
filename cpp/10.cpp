#include <iostream>

using namespace std;

void citire(int &n, float v[])
{
  cout << "n="; cin >> n;
  for (int i=0; i<n; i++) {
    cout << "v[" << i << "]="; cin >> v[i];
  }
}

void afisare(int n, float v[])
{
  for (int i=0; i<n; i++)
    cout << v[i] << ' ';
}

float mini(int n, float v[])
{
  int miniX = v[0];

  for (int i=1; i<n; i++) {
    if (v[i] < miniX)
      miniX = v[i];
  }

  return miniX;
}

int main()
{
  float v[100];
  int n;

  citire(n, v);

  cout << mini(n, v) << endl;

  for (int i=0; i<n; i++)
    if (v[i] == mini(n, v))
      cout << i;

  return 0;
}
