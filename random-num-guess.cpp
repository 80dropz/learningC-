#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>
void guessing(int randomnumber);
int main() {
    srand(time(0));
    int randomnum = rand() % (100 + 1);
    guessing(randomnum);
    return 0;
}

void guessing(int randomnumber) {
    int guess;
    std::cout << "Pick a Random number between 1 and 100: " << std::endl;
    std::cin >> guess;

    if(guess > randomnumber){
        std::cout << "Too High" << std::endl;
        guessing(randomnumber);
    }
    else if(guess < randomnumber){
        std::cout << "Too Low" << std::endl;
        guessing(randomnumber);
    }
    else if(guess == randomnumber){
        std::cout << "You WIN!!" << std::endl;
    }
    else{
        std::cout<<"Unreconginized sequence" << std::endl;
    }
}