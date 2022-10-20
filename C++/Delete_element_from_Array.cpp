#include<iostream.h>
        #include<conio.h>
        void main()
{
        clrscr();
        int i,n,no,a[30];
        cout<<”\n\nEnter limit:”;
cin>>n;
cout<<”\n\nEnter “<<n<<” elements..”;
for(i=1;i<=n;i++)
cin>>a[i];
cout<<”\n\nEnter number to deleted:’;
cin>>no;
for(i=1;i<=n;i++)
{
If(no==a[i])
{
a[i]=0;
while(i<=n)
{
a[i]=a[i+1][;
 i++;
}
}
}
cout<<”\n\nArray after deletion is..”;
for(i=1;i<n;i++)
cout<<”\n”<<a[i];
getch();
}
