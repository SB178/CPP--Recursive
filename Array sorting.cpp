#include<bits/stdc++.h>

using namespace std;

void sort(vector<int>& v,int temp)
{
    if(v.size()== 0 || v.back()<=temp)  //
    {
        v.push_back(temp);              //
        return ;                        // base condition
    }
    int temp2= v.back();                //
    v.pop_back();                       //
    insert(v,temp);                     //hypothesis

    v.push_back(temp2);                 //Induction
}

void div(vector<int>& v)
{
    if(v.size()==0)                     //
    {
        return ;                        // base condition
    }
    int temp = v.back();                //
    v.pop_back();                       //
    sort(v);                            //hypothesis

    insert(v,temp);                     //Induction
}
int main()                              //driver code
{
    int n;
    cin>>n;
    vector<int>ar(n,0);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    
    sort(ar);
    for(int i=0;i<n;i++)
        cout<<ar[i];
    return 0;
}