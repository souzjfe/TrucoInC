#include <stdio.h>
#include "tad.h"


int main(void)
{
    Deck *deck = shuffle();
    Table *table = deal(deck);
    //printDeck(deck);
    // // printf("\n\n");
    // // printCard(table->turnCard);
    // // printf("\n\n");
    // // printHand(table->players);
    // // printCard(setCardRand(table->players[3]));
    // // printCard(setCardRand(table->players[3]));
    // // printCard(setCardRand(table->players[3]));
    // // printHand(table->players);
    //printTable(table,3,4);
    //playRound();
    //printDeck(deck);
    //printf("\n\n%d ",deck->top);
    //printHand(player);
    //playRound(player);
    return 0;
}
