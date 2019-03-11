/* File : example.h */

typedef struct
{
	char bar_s[16];
    int bar_i;
} BAR;

typedef struct
{
    char foo_s[16];
    int foo_i;
    BAR bar[3];
} FOOOO;

/* Compute the greatest common divisor of positive integers */
int gcd(int x, int y);
void get_foo(FOOOO* foo);
void copy_buffer(void *p);

