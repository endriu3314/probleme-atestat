#include <iostream>
#include <cstring>
#include <stdio>

using namespace std;

int palindrom (char s[])
{
  int n, i;
  n = strlen(s);

  for (i=0; i<=n/2; i++)
    if (s[i] != s[n-i-1])
      return 0;

  return 1;
}

int main()
{
  char s[50][31];
  int n, i;

  cout << "n="; cin >> n;

  for (i=0; i<n; i++) {
    gets(s[i]);
  }

  for (i=0; i<n; i++) {
    if (palindrom(s[i])) {
      puts(s[i]);
    }
  }

  return 0;
}
