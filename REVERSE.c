#include<stdio.h>
int main()
{
    char s[10][10];
    int n,i;
    scanf("%d*c",&n);
    for(i=0;i<n;i++){
        gets(s[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%s\n",s[i]);
    }
    return 0;
}
