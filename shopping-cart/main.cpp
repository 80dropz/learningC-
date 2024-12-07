#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
std::string Choice;
std::string foodlist[] = {"Popcorn", "Chicken","Meat","Glasses","CD","Magnifiying Glass"};
int foodlistsize = sizeof(foodlist);
double pricelist[] = {6.00, 3.00, 1.00, 2.50, 10.25, 0.25};
int shopping();
int main() {
    std::cout << "Popcorn: 6.00$\nChicken: 3.00$\nMeat: 1.00$\nGlasses: 2.50$\nCD: 10.25$\nMagnifiying Glass: .25$" << std::endl;
    shopping();
    return 0;
}


int shopping(){
    std::cin >> Choice;
    bool Found = false;
    for(int i = 0; i < foodlistsize; i++){
        if(foodlist[i] == Choice){
            Found = true;
            break;
        }
    }
    if(Found) {
        std::cout << "Found " << Choice << std::endl;
    }
    std::cout << "ERROR" << std::endl;
    shopping();

    return 0;
};