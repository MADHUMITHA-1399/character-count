/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char a[1001];
    scanf("%[^\n]",a);
    int count=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]!=' '){
            count++;
        }
    }
printf("%d",count);
    return 0;
}
