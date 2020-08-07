#include<iostream>
#include<stdio.h>

using namespace std;

//Used a hast table
//O(n) time complexity 
int isUnique(char str[]) {
    int x[128]={ 0 };
    for (int i=0;str[i]!='\0';i++) {
        if (x[str[i]]!=0) {
            return 0;
        }
        else {
            x[str[i]]++;
        }
    }
    return 1;
}

int main() {
    char str[100];
    gets(str);
    int result=isUnique(str);
    if (result==1) {
        cout<<"Unique";
    }
    else {
        cout<<"Not unique";
    }
    return 0;
}