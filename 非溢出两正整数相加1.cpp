#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[200];
    gets(a);gets(b);
    int aNumber,bNumber,i;
    aNumber = strlen(a),bNumber = strlen(b);
    if(aNumber>=bNumber)
    {
        for(i=0;i<bNumber;i++)
        {
        a[aNumber-1-i] = a[aNumber-1-i] + b[bNumber-1-i] - '0';
        if(a[aNumber-1-i]-'0'>=10)
        {
            a[aNumber-1-i] -= 10;
            a[aNumber-2-i]++;
        }
        }
        puts(a);
    }
    else
    {
        for(i=0;i<aNumber;i++)
        {
        b[bNumber-1-i] = a[aNumber-1-i] + b[bNumber-1-i] - '0';
         if(b[bNumber-1-i]-'0'>=10)
        {
            b[bNumber-1-i] -= 10;
            b[bNumber-2-i]++;
        }
        }
        puts(b);
    }

}
