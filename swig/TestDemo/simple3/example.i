/* File : example.i */
%module example

/* Convert from Python --> C */
%typemap(in) int {
  $1 = PyInt_AsLong($input);
  $1 = $1 + 1;
}

/* Convert from C --> Python */
%typemap(out) int {
  $result = PyInt_FromLong($1);
}

%inline %{
int factorial(int n);
int DbgMemRead(int va, char* dest, int size);
int DbgMemRead2(int va, void* dest, int size);
%}

