int factorial(int n)
{
	return n;
}
int DbgMemRead(int va, char* dest, int size)
{
	for(int i = 0; i < size; i++)
	{
		dest[i] = 'A';
	}
	
	return va;
}

int DbgMemRead2(int va, void* dest, int size)
{
	char* p =(char*)dest;
	for(int i = 0; i < size; i++)
	{
		p[i] = 'A';
	}
	
	return va;
}