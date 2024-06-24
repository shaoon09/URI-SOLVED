#include <bits/stdc++.h>
using namespace std;



int main()
{

    int i=0,j=0;

    cout<<"Expression terminated by '$'."<<endl;
    cout<<"Type expression: ";

    char a[10],b[10],c;
    void *p,*add[10];

    while((c=getchar())!='$')
    {
        a[i]=c;
        i++;
    }
    int n=i-1;

    cout<<"Given expression is: ";
    i=0;
    while(i<=n)
    {
        cout<<a[i];
        i++;
    }
    cout<<endl;
    cout<<"      Symbol Table"<<endl;
    cout<<"Symbol    "<<"Addr    "<<"Type    "<<endl;
    i=0;

    while(i<=n)
    {
        c=a[i];
        if(isalpha(c))
        {

            p=malloc(c);
            add[j]=p;
            b[j]=c;
            cout<<c<<"    "<<p<<"    identifier"<<endl;
            j++;
        }
        i++;
    }
    cout<<"Enter symbol for searching: ";
    char ch;
    cin>>ch;
    bool f=0;
    for(int i=0; i<j; i++)
    {
        if(ch==b[i])
        {
            cout<<"  Symbol found!"<<endl;
            cout<<ch<<"    "<<"@address:"<<add[i]<<endl;
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"  Symbol not found!"<<endl;
}

