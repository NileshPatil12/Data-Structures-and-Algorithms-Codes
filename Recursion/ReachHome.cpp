#include<iostream>
using namespace std;

void reachHome(int src,int dest){
    cout<<"Source "<<src<<" Destination "<<dest<<endl;
    if(src>=dest){
        cout<<"Ham bohot age aa chuke hai bhai "<<endl;
        return;
    }
    if(src==dest){
        cout<<"reached Home"<<endl;
        return;
    }
    src++;
    reachHome(src,dest);
}
int main()
{
    int dest;
    int src;
    cout<<"Source ";
    cin>>src;
    cout<<"Destination ";
    cin>>dest;
    reachHome(src,dest);
}