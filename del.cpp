#include<iostream>
using namespace std;
int main()
{
    int a[100],num,del,value,pos,i,j;
    cout<<"Enter The Number Of Elements: ";
    cin>>num;
    cout<<"Enter"<<num<<" values:"<<endl;
    for(i=0;i<num;i++)
    {
        cout<<"A["<<i<<"]=";
        cin>>a[i];
    }
    cout<<"Enter Number You Want To Delete: ";
    cin>>del;
    for(i=0;i<num;i++)
    {
            if(a[i]==del)
            {
                    a[i]=a[i+1];
            }
            else
            cout<<a[i]<<endl;
    }
return 0;
}
