//creating a function which returens the higest number out of four.
#include<iostream>

int max_of_four(int a,int b,int c,int d){
    int high=a;
    if(high<b){
        high=b;
    }
    if(high<c){
        high=c;
    }
    if(high<d){
        high=d;
    }
    return high;
    return 0;
}
int main(){
    int p,q,r,s;
    std::cout<<"enter the four numbers:\n";
    std::cin>>p>>q>>r>>s;
    std::cout<<"The max of four is "<<max_of_four( p, q, r, s)<<std::endl;
    return 0;
}