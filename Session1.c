#include  <stdio.h>

int main(){

//We have the basics of pointers here

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

//We are getting to how to see the size of pointers

printf("Size of char pointer: %lu\n", sizeof(char*));
printf("Size of int pointer: %lu\n", sizeof(int*));
printf("Size of float pointer: %lu\n", sizeof(float*));
printf("Size of char: %lu\n", sizeof(char));
printf("Size of int: %lu\n", sizeof(int));
printf("Size of float: %lu\n", sizeof(float));

//Now we can see arithmetic of pointers here

int IntArray[5];

printf("%p\n", IntArray);
printf("%p\n", &IntArray);

*IntArray = 5;
printf("%d\n", IntArray[0]);

return 0;
}
