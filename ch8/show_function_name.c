#include<stdio.h>
#include<execinfo.h>

void foo(void)
{
	printf("foo\n");
}
int main(int argc,char *agv[1])
{
	void *funcptr = &foo;
	backtrace_symbols_fd(&funcptr);
	return 0;
}
