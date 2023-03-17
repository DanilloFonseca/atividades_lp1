#include<iostream>
float harmonia(float n);
int recebe_numero();

int main(){

    int x = recebe_numero();
    
    float num = harmonia(x);

    std::cout<<num<<std::endl;


    return 0;
}

float harmonia(float n){

    if(n<=1)
        return 1;
    else
        return 1/n + harmonia(n-1);
}

int recebe_numero(){
    float x;
    std::cout<<"Digite um número: "<<std::endl;
    std::cin>>x;
    return x;
}