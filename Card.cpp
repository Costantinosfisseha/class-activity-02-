#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string getRandomCard() {
    const char* ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    const char* suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    srand(time(0));//random number generator to ensure different results each run
    return string(ranks[rand() % 13]) + " of " + suits[rand() % 4];//Selects a random index between 0 and 12 (for ranks) and 0 and 3 (for suits)
}

void displayCard(const string& card) {
    // Creates a row of 40 asterisks for top and bottom
    cout<<string(40, '*')<<"\n*" <<string(38, ' ') <<"*\n";
    cout<<"* Casino Card: "<<card <<string(38 - card.size() - 14,' ') <<"*\n";
    cout<<"*" << string(38, ' ')<<"*\n"<<string(40,'*')<<endl;
}

int main() {
    displayCard(getRandomCard());
    return 0;
}
