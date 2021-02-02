#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
    int T[4] = {};
    
    int j = rand() % 100 + 1;
    if(j>0 && j<=25) T[0] = 50;
    else if(j>25 && j<=50) T[0] = 100;
    else if(j>50 && j<=75) T[0] = 500;
    else if(j>75 && j<=100) T[0] = 1000;
    
    do{
        int j = rand() % 100 + 1;
    if(j>0 && j<=25) T[1] = 50;
    else if(j>25 && j<=50) T[1] = 100;
    else if(j>50 && j<=75) T[1] = 500;
    else if(j>75 && j<=100) T[1] = 1000;
    }while(T[1] == T[0]);
    
    do{
        int j = rand() % 100 + 1;
    if(j>0 && j<=25) T[2] = 50;
    else if(j>25 && j<=50) T[2] = 100;
    else if(j>50 && j<=75) T[2] = 500;
    else if(j>75 && j<=100) T[2] = 1000;
    }while(T[2] == T[0] || T[2] == T[1]);
    
    do{
        int j = rand() % 100 + 1;
    if(j>0 && j<=25) T[3] = 50;
    else if(j>25 && j<=50) T[3] = 100;
    else if(j>50 && j<=75) T[3] = 500;
    else if(j>75 && j<=100) T[3] = 1000;
    }while(T[3] == T[0] || T[3] == T[1] || T[3] == T[2]);
    
    a = T[0];
    b = T[1];
    c = T[2];
    d = T[3];
    
