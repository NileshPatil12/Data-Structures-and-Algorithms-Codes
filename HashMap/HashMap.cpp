#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    //creating unordered map
    unordered_map<string,int> m;

    //inserttion
    //method 1
    pair<string,int> p=make_pair("Nilesh",2);
    m.insert(p);

    //method 2
    pair<string,int> v("Tejas",7);
    m.insert(v);

    //method 3
    m["Krishna"]=12;

    //updating and it will not gonna make a new entry for it key is unique
    m["Krishna"]=11;

    //search
    cout<<m["Krishna"]<<endl;
    cout<<m.at("Nilesh")<<endl;

    //diffence between at and m[]
    cout<<m["NI"]<<endl;   //if map did not have entry then it will create it for a zerp
    // cout<<m.at("A")<<endl; //it will get an error

    //size
    cout<<m.size()<<endl;

    //to check presence
    cout<<m.count("Nilesh")<<endl; //1 for present and 0 for absent
    cout<<m.count("A")<<endl;

//erase
    m.erase("NI");
    cout<<m.size()<<endl;

    //to iterate
    //method 1
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    //by iterator
    unordered_map<string,int> :: iterator it=m.begin();
    while(it!=m.end()){
        cout<<it->first << " " <<it->second<<endl;
        it++;
    }







    return 0;
}