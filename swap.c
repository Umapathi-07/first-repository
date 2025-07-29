
#include <stdio.h>
int main() {
    int a,b;
    printf("values of a and b before swaping");
    scanf("%d\n%d",&a,&b);
    printf("a=%d\nb=%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("values of a and b after swaping\na=%d\nb=%d",a,b);

}
