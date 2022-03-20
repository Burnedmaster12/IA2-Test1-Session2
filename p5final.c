#include <stdio.h>

void input_string(char *a)
{
  printf("Enter the string:\n");
  scanf("%s", a);
}
int string_length(char *str)
{
  int n;
  for (n = 0; str[n]; n++);
  return n;
} 

void string_copy(char *d, char *s)
{
  for(int i=0;s[i]!='\0';i++)
    d[i]=s[i];
}

char *str_reverse(char *str)
{
  int n,t;
  n = string_length(str);
  n--;
  for (int i = 0; i< n/2; i++)
  {
     t= str[i];
     str[i] = str[n-i];
     str[n-i] = t;
  }
  return str;
}

void output(char *a, char *reverse_a)
{
  printf("The reverse of %s is %s\n", a, reverse_a);
}

int main()
{
  char str[100];
  input_string(str);
  char rev_str[100];
  string_copy(rev_str,str);
  str_reverse(rev_str);
  output(str, rev_str);
  return 0;
}

