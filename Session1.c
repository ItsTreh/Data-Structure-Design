#include  <stdio.h>

int main(){

char c1 = 'A';
char* pc1;

pc1 = &c1;

printf("%c\n", c1);
printf("%p\n", &c1);
printf("%p\n", pc1);
printf("%p\n", &pc1);

*pc1 = 'B';

printf("%c\n", c1);

char c2 = 'C';

printf("%c\n", c2);

pc1 = &c2;

*pc1 = 'D';

printf("%c\n", c2);

return 0;
}
