#include <iostream>
//#include<stdio.h>

using namespace std;

void isPermutation(char str1[], char str2[])
{
    int str1Length = 0, str2Length = 0;
    int h[128] = {0};
    int i;
    bool result;
    for (; str1[str1Length] != '\0'; str1Length++)
        ;
    for (; str2[str2Length] != '\0'; str2Length++)
        ;
    if (str1Length != str2Length)
    {
        result = false;
    }
    else
    {
        for (i = 0; i < str1Length; i++)
        {
            h[str1[i]]++;
            h[str2[i]]--;
        }
        for (i = 0; i < 128; i++)
        {
            if (h[i] != 0)
            {
                result = false;
                break;
            }
            else
            {
                result = true;
            }
        }
    }
    cout << result;
}

int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    isPermutation(str1, str2);
    return 0;
}