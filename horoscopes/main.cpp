#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
std::string Zodiac;
int Sign;
std::string ZodicasList[] = {"Aries", "Cancer", "Libra", "Taurus", "Leo", "Scorpio", "Capricorn", "Aquarius", "Pisces", "saggittarious", "Virgo", "Gemini"};

int main() {
    //Some of those are spelt wrong cause my hyprland cut them off and i cant be bothered
    std::cout << "1: Aries \n2: Cancer\n3: Libra\n4: Taurus\n5: Leo\n6: Scorpio\n7: Capricorn\n8:Aquarius\n9: Pisces\n10: Sagittarious\n11: Virgo\n12: Gemini" << std::endl;
    std::cin >> Sign;

    std::cout << "You are a " << ZodicasList[Sign - 1] << std::endl;

    return 0;
}