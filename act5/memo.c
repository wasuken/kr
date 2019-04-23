#include <stdio.h>

void strcpy(char*, char*);

int main()
{
  char *smsg = "This is test";
  char *tmsg = "This is too test";

  printf("%s\n%s", smsg, tmsg);
  strcpy(smsg, tmsg);
  printf("%s\n%s", smsg, tmsg);
}

void strcpy(char *s, char *t)
{
  while((*s++ = *t++) != '\0')
	;
}
