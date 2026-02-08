#include<iostream>
#include<vector>
using namespace std;

int main(){
     vector<int>v(6);
     for(int i=0;i<6;i++){
        cin>>v[i];
     }
     
cout<<"Enter x: ";
int x;
cin>>x;

int occurance = -1;
for(int i=0;i<v.size();i++){
   if(v[i]==x){
      occurance = i;
   }
}
/*
for(int i=v.size()-1;i>=0;i--){
      if(v[i]==x){
      occurance=i;
      break;
      }
}

*/
cout<<occurance<<endl;
}