#include<iostream>
using namespace std;

int main(){
    int server,req;
    int arr[10],var;
    cout<<"Shreya Rathod .\n";
    cout<<"PRN:B24CE1089.\n";
    cout <<"----------------\n";
    cout<< "Enter number of server :";
    cin >> server;
    for(int i=0;i<server;i++){
        arr[i]=0;
    }
    cout <<"Enter no.of Request";
    cin >> req;    
    cout << "Enter the request"<<req<<endl;
    cin >>var;
    for( int j=0;j<req;j++){
        int hashval= req % server;
        arr[hashval]=req;
        
    }
    cout<<"hjdfdk";
    for(int i=0;i;i++){
        cout << "Server :"<< "req"<<\n" ;

    }
    return 0;
}

