#include <iostream>
#include <ctime>
using namespace std;
int main() {
    cout << "Press Enter 3 times to reveal your future.";
    srand(time(0));
    cin.get();
    cin.get();
    cin.get();
    int x = rand()%9+1;
    if(x == 1){
        cout << "You will get A in this 261102.";
        
    }else if(x == 2){
       cout << "You will get B+ in this 261102."; 
       
    }else if(x == 3){
       cout << "You will get B in this 261102."; 
       
    }else if(x == 4){
       cout << "You will get C+ in this 261102.";
       
    }else if(x == 5){
       cout << "You will get C in this 261102."; 
       
    }else if(x == 6){
       cout << "You will get D+ in this 261102.";
       
    }else if(x == 7){
       cout << "You will get D in this 261102."; 
       
    }else if(x == 8){
       cout << "You will get F in this 261102."; 
       
    }else if(x == 9){
       cout << "You will get W in this 261102."; 
       
    }
    return 0;
}