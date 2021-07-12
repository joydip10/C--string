#include<stdio.h>
int main()
{
    char str[10];
    int b,c,d,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%s %d",str,&b);
    if(str[0]=='j'&&str[1]=='a'){
        c=100;
        d=b+c;
    }
    else if(str[0]=='f'){
        c=200;
        d=b+c;
    }
    else if(str[0]=='m'&&str[2]=='r'){
        c=300;
        d=b+c;
    }
    else if(str[0]=='a'){
        c=400;
        d=b+c;
    }
    else if(str[0]=='m'&&str[1]=='a'){
        c=500;
        d=b+c;
    }
    else if(str[0]=='j'&&str[1]=='u'&&str[2]=='n'){
        c=600;
        d=b+c;
    }
    else if(str[0]=='j'&&str[1]=='u'&&str[2]=='l'){
        c=700;
        d=b+c;
    }
    else if(str[0]=='a'&&str[1]=='u'){
        c=800;
        d=b+c;
    }
    else if(str[0]=='o'){
        c=1000;
        d=b+c;
    }
    else if(str[0]=='n'){
        c=1100;
        d=b+c;
    }
    else if(str[0]=='d'){
        c=1200;
        d=b+c;
    }
    if(d<213||d>1225) printf("pohela falgun\n");
    else if(d==213) printf("v d\n");
    else if(d<221)  printf("i m l d\n");
    else if(d<308)  printf("i w d\n");
    else if(d<321)  printf("i c d\n");
    else if(d<326)  printf("b i d\n");
    else if(d<401)  printf("a f d\n");
    else if(d<414)  printf("p b\n");
    else if(d<501)  printf("m d\n");
    else if(d<619)  printf("f d\n");
    else if(d<718)  printf("m d\n");
    else if(d<820)  printf("w m d\n");
    else if(d<1031) printf("h d\n");
    else if(d<1119) printf("w t d\n");
    else if(d<1210) printf("h r d\n");
    else if(d<1216) printf("v d b\n");
    else if(d<1224) printf("c d\n");
    }
    return 0;
}
