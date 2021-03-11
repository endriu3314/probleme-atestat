#include <iostream>

using namespace std;

float putere(int A, int N)
{
  if (N == 0 && A != 0) {
    return 1;
  }

  if (N == 0 && A == 0) {
    return 1;
  }

  if (N > 0 && A != 0) {
    return A*putere(A, N-1);
  }

  return 1 / (A*putere(A, N-1));
}

int main()
{
  int A, N;

  cout << "A="; cin >> A;
  cout << "N="; cin >> N;

  cout << putere(A, N);

  return 0;
}
