#include <stdio.h>
/*getting user input*/

char megl[64];

int main(){
printf("type something!\n");
fgets(megl,64,stdin);
printf("you entered: %s \n",megl);
return 0;
}
