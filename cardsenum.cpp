// cardenum.cpp
// demostrates enumerations

#include <iostream>
using namespace std;

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

enum Suit
{
    clubs,
    diamonds,
    hearts,
    spades
};

struct card
{
    int number;
    Suit suit;
};

int main()
{
    card temp, chosen, prize;
    int position;

    card card1 = {7, clubs};
    cout << "Card 2 is the seven of clubs\n";

    card card2 = {jack, hearts};
    cout << "Card 2 is the jack of hearts\n";

    card card3 = {ace, spades};
    cout << "Card 3 is the ace of spades\n";

    prize = card3;

    cout << "I'm swapping card 1 and card3\n";
    temp = card3;
    card3 = card1;
    card1 = temp;

    cout << "I'm swapping card 2 and card3\n";
    temp = card3;
    card3 = card2;
    card2 = temp;

    cout << "I'm swapping card 1 and card2\n";
    temp = card2;
    card2 = card1;
    card1 = temp;

    cout << "Now , where (1, 2 or 3) is the ace of spades? ";
    cin >> position;

    switch (position)
    {
    case 1:
        chosen = card1;
        break;
    case 2:
        chosen = card2;
        break;
    case 3:
        chosen = card3;
        break;
    }

    if (chosen.number == prize.number && chosen.suit)
        cout << "That's right! You win!\n";
    else
        cout << "Sorry. You lose.\n ";   

            return 0;
}