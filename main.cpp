#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   //armstrong number
   int num; int r; int sum=0;
   cin>>num;

   int temp=num;

   while(num>0)
   {
       r=num%10;
       sum=sum+(r*r*r);
       num=num/10;
   }

   if(sum==temp)
    cout<<"yes its armstrong"<<endl;
   else
    cout<<"no its not armstrong"<<endl;

}
