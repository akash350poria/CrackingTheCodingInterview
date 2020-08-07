#include<iostream>
#include<ctype.h>
using namespace std;

bool palindromePermutation(char str[]) {
    int h[128]={ 0 };
    int i;
    int oddCount=0;
    int count=0;
    for (i=0;str[i]!='\0';i++) {
        str[i]=tolower(str[i]);
        if (str[i] != ' ')
            str[count++] = str[i];
    }
    str[count]='\0';
    for (i=0;str[i]!='\0';i++) {
        h[str[i]]++;
    }
    for (i=0;i<128;i++) {
        if (h[i]%2!=0) {
            oddCount++;
        }
    }
    if (oddCount>1)
        return false;
    else
        return true;
}

int main() {
    char s[100];
    gets(s);
    bool result=palindromePermutation(s);
    if (result)
        cout<<"True";
    else
        cout<<"False";
    return 0;
}