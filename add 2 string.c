#include<stdio.h>
int main()
{
    char s[20],s1[20];
    int ln,i;
    scanf("%s %s",s,s1);
    for(ln=0;s[ln]!='\0';ln++){
        s[ln]= ' ';
    }

    ln++;
    for(i=0;s1[i]!='\0';i++)
        s[ln+i]=s1[i];
    s[ln+i]=s1[i];
    printf("%s\n%s\n",s,s1);
    return 0;
}
