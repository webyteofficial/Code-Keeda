#include<stdio.h>
#include<string.h>

char * multiply(char num1[], char num2[]) {
    int i, j, k, size1 = strlen(num1), size2 = strlen(num2);
    char * ret = (char *)malloc(sizeof(char)*(size1+size2+1));
    for(k=0;k<size1+size2+1;k++)
        ret[k] = '0';
    if(size1==0||size2==0) return "";

    strrev(num1);
    strrev(num2);

    for(i=0;i<size2;i++){
        int dig2=num2[i];
        int carry=0;
        for(j=0;j<size1;j++){
            int dig1=num1[j];
            int temp=ret[i+j];
            int cur=dig1*dig2+temp+carry;
        }
        ret[i+size1]=carry;
    }

    strrev(ret);

    return ret;
}

int main(){
    char num1[] = "100";
    char num2[] = "200";

   printf("%s",multiply(num1, num2));

   return 0;
}
