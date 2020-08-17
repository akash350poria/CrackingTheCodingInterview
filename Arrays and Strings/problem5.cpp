#include <iostream>

using namespace std;

bool strInsert(char *h1, char *h2, int i, int j)
{
    int counts = 0;
    int x = 0, y = 0;
    while (x < j)
    {
        if (h1[x] != h2[y])
        {
            counts++;
            x++;
        }
        else
        {
            x++;
            y++;
        }
    }
    return counts > 1 ? false : true;
}

bool strReplace(char *h1, char *h2, int i, int j)
{
    int counts = 0;
    for (int x = 0; x < i; x++)
    {
        if (h1[x] != h2[x])
        {
            counts++;
        }
    }
    if (counts > 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool oneAway(char str1[], char str2[])
{
    int i, j;
    bool counter;
    for (i = 0; str1[i] != '\0'; i++)
        ;
    for (j = 0; str2[j] != '\0'; j++)
        ;
    if (i > j)
        counter = strInsert(str1, str2, i, j);
    else if (i < j)
        counter = strInsert(str2, str1, j, i);
    else
        counter = strReplace(str1, str2, i, j);
    return counter;
}

int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    oneAway(str1, str2) ? cout << "True" : cout << "False";
    return 0;
}