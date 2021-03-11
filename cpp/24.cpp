#include <iostream>
#include <stdio>
#include <cstring>

using namespace std;

int main()
{
  char s[31];
  int n, i;

  gets(s);
  n = strlen(s);

  for (i=0; i<n; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] = s[i] + 32;
    }

    if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] = s[i] - 32;
    }
  }

  puts(s);

  return 0;
}
