#ifndef function_pointers_h
#define function_pointers_h

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void functionprint(char *s);
int int_index(int *array, int size, int (*cmp)(int));

#endif
