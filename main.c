void manyint(int a, int b, int c, int d, int e )
{
			int nothing = a+b+c+d+e ;
}

void threeint(int a, int b, int c)
{
			int nothing = a+b+c;
}

int myreturn(int a)
{
			return a+a;
}
void reset_handler(void)
{
	int value = myreturn(1);
	while (1)
		;
}
