#include<iostream>
#include<stack>
#include<string.h>
#include<stdio.h>
using namespace std;
void rev(char *c,int n)
{
    stack<char> s;
    for(int i=0;i<n;i++){
        s.push(c[i]);
    }
    for(int i=0;i<n;i++)
    {
        c[i]=s.top();
        s.pop();
    }
}
int main()
{
    char c[20];
    gets(c);
    rev(c,strlen(c));
    printf("%s",c);
}

