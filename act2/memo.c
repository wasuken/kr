#include <stdio.h>

int strLen(char[]);
int atoi(char[]);

int main()
{
  char *s = "test";
  printf("%d\n", strLen(s));
  s = "1010";
  printf("%d\n", atoi(s));
}

int strLen(char s[])
{
  int i;

  i = 0;
  while(s[i] != '\0')
	++i;
  return i;
}

int atoi(char s[])
{
  int i, n;

  n = 0;
  for(i = 0; s[i] >= '0' && s[i] <= '9';++i)
	n = 10 * n + (s[i] - '0');

  return n;
}
