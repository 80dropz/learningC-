#include <iostream>
#include <cstdlib>
#include <list>
#include <string>
#include <unistd.h>
#include <ctime>

double bal = 1000.00;
void Depositing();
void Withdrawing();
void Gambleing();


int main() {
    system("clear");
    char Choice;
    std::cout << "Your balence is " << bal << "$" << std::endl;

    std::cout << "1: Deposit \n2: Withdraw \n 3: Gamble " << std::endl;
    std::cin >> Choice;
    if(Choice == '1'){
        Depositing();
    }   
    if(Choice == '2'){
        Withdrawing();
    }
    if(Choice == '3'){
        Gambleing();
    }
    else{
        std::cout << "ERROR" << std::endl;
        main();
    }

    return 0;
};


void Depositing(){
    system("clear");
    double Newbal;
    std::cout << "Current Balance" << bal << std::endl;
    std::cout << "Deposit Amount: " << std::endl;
    std::cin >> Newbal;
    bal = bal + Newbal;
    main();
};



void Withdrawing(){
    system("clear");
    double Newbal;
    std::cout << "Current Balence" << bal << std::endl;
    std::cout << "Withdraw Amount: " << std::endl;
    std::cin >> Newbal;
    bal = bal - Newbal;
    main();
};


void Gambleing(){
    system("clear");
    int doubleing;
    int seed;
    int Wager;
    std::cout << "You have " << bal << std::endl;
    std::cout << "Wager amount: ";
    std::cin >> Wager;
    if(Wager>bal){
        std::cout << "Insuffecicent Balence" << std::endl;
        Gambleing();
    };
    srand(time(0));
    seed = rand();
    std::cout << seed << std::endl;
    std::cout << (seed & 2) << std::endl;
    if ((seed % 2) == 0){
        std::cout<<"You win!"<<std::endl;
        doubleing = Wager * 2;
        bal = bal + doubleing;
        sleep(5);
        main();
    }
    else{
        std::cout<<"You lose"<<std::endl;
        bal = bal - Wager;
        sleep(5);
        main();
    }
};