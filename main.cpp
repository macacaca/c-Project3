#include <iostream>
#include <ctime>
using namespace std;

// Function Declaration
const string rankCard(), suitCard();
const bool checkCard(string cards[], string card);


int main()
{

    srand(time(0));
    for(int i = 0; i < 5; i++)
    {
       string card = rankCard()+", "+suitCard();
       cout << "Karta "<< i+1 <<": (" << card <<")"<< endl;
    }
}

const string rankCard() {
    int rank = (rand() % 13) + 1;
    switch (rank) {
    case 1: return "Ac";
    case 2: return "Dva";
    case 3: return "Tri";
    case 4: return "Cetiri";
    case 5: return "Pet";
    case 6: return "Sest";
    case 7: return "Sedum";
    case 8: return "Osum";
    case 9: return "Devet";
    case 10: return "Deset";
    case 11: return "Dzandar";
    case 12: return "Dama";
    case 13: return "Pop";
    default: string str= to_string(rank + 48);
    return 0;
    }
}

const string suitCard() {
    int suit = (rand() % 4) + 1;
    switch (suit) {
    case 1: return "Lokum";
    case 2: return "Srce";
    case 3: return "Detelina";
    case 4: return "Pik";
    default: return 0;
    }
}

const bool checkCard(string cards[], string card)
{
    bool hasCard = false;
     for(int i = 0; i < 5; i++){
        if(cards[i] == card){
            hasCard = true;
        }
    }
     return hasCard;
}





