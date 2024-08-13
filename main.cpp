#include <iostream>
using namespace std;
int main()
{
    int D,M,Y,Magic_Date;
    cout<<"Enter the Day, Month and Two digit Year "<<endl;
    cin>>D>>M>>Y;
    Magic_Date=D*M;
    if(Magic_Date==Y)
    {
        cout<<"Yes its a magic date ";
    }
    else
    {
        cout<<"its not a magic date ";
    }
}