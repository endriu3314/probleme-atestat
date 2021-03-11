#include <iostream>
#include <stdio>
#include <cstring>

using namespace std;

// VARIANTA 1

int main()
{
  char s[31];
  int i, n, j;

  gets(s);
  n = strlen(s);

  for (i=0; i<n; i++) {
    for (j=0; j<i; j++) {
      cout << s[j];
    }
    cout << ' ';
  }

  return 0;
}

// VARIANTA 2

int main()
{
  char s[31], aux[31];
  int i, n;

  gets(s);
  n = strlen(s);

  for (i=1; i<=n; i++) {
    strncpy(aux, s, i);
    puts(aux);
    cout << ' ';
  }

  return 0
}
