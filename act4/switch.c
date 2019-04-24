#include <stdio.h>
#include <stdlib.h>

#define MAXOP 100
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);

int main()
{
  int type;
  double op2;
  char s[MAXOP];

  while((type = getop(s)) != EOF){
	switch(type){
	case NUMBER:
	  push(atof(s));
	  break;
	case '+':
	  push(pop() + pop());
	  break;
	case '*':
	  push(pop() * pop());
	  break;
	case '-':
	  op2 = pop();
	  push(pop() - op2);
	  break;
	case '/':
	  op2 = pop();
	  if(op2 != 0.0)
		push(pop() / op2);
	  else
		printf("error: zero devisor\n");
	  break;
	case '\n':
	  printf("\t%.8g\n", pop());
	  break;
	default:
	  printf("error: unknown command %s\n", pop());
	}
  }
}

#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

/* push: fを値スタックにプッシュする。 */
void push(double f)
{
  if(sp < MAXVAL)
	val[sp++] = f;
  else{
	printf("error: full, can't push %g\n", f);
  }
}
/* pop: スタックから一番上の値をポップして返す */
double pop()
{
  if(sp > 0)
	return val[--sp];
  else{
	printf("error: stack empty\n");
	return 0.0;
  }
}
