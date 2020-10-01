#include<iostream>
using namespace std;

void replaceStr(char str[], int length) {
    int maxLength, spaces=0;
    for (int i=0;i<length;i++) {
        if (str[i]==' ')
            spaces++;
    }
    //cout<<spaces<<endl;
    maxLength=length+(2*spaces);
    //cout<<maxLength;
    while (maxLength>0) {
        if (str[length-1]!=' ') {
            str[maxLength-1]=str[length-1];
            maxLength--;
        }
        else {
            str[maxLength-1]='0';
            str[maxLength-2]='2';
            str[maxLength-3]='%';
            maxLength-=3;
        }
        length--;
    }
    puts(str);
}

int main() {
    char str[]="Mr John Smith";
    int n=13;
    replaceStr(str, n);
    return 0;
}