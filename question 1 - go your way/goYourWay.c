#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end));i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define mod 1000000009
#define MAX 1000001
#define f(i,a,b) for(int i=(a);i<(b);i++)
#define rf(i,a,b) for(int i=(a);i>=b;i--)
#define sl(n) scanf("%ld",&n)
#define pl(n) printf("%ld",n)
#define ps(s) printf("%s",s)
#define ss(s) scanf("%s",s)

int main(){
    int t,N;
    char * str;
    long i=0;
    sl(t);

    for(int tc=1;tc<=t;tc++){
        sl(N);

        str = malloc(sizeof(char));
        ss(str);
        printf("Case # %ld : ",tc);

        while(str[i]!='\0'){
            // write your logic here
        }
        ps("\n");
        i=0;
    }
    return 0;
}

