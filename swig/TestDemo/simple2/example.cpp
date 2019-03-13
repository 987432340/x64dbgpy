/* File : example.c */

/* A global variable */
double Foo = 3.0;



/* Compute the greatest common divisor of positive integers */
int gcd(int x, int y) {
  int g;
  g = y;
  while (x > 0) {
    g = x;
    x = y % x;
    y = g;
  }
  return g;
}

bool DbgMemRead(int va, void* dest, int size)
{
	*(char*)dest[0] = '1';
	return true;
}

bool DbgMemRead2(int va, char* dest, int size)
{
	*(char*)dest[0] = '1';
	return true;
}