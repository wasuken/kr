#include <stdio.h>


/* 動かない　動かない　この思いうぉ〜お〜 */
int main()
{
  double nc;

  for(nc=0;getchar() != EOF;++nc)
	;

  printf("%.0f\n", nc);
}
