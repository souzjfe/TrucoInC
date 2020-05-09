#include <stdio.h>
#include "tad.h"
#include <stdlib.h>

void printCard(Cards card)
{
    printf("┌─────┐\n");
    if (card.priority >= 10)
    {
        printf("│   %d│\n", card.priority);
    }
    else
    {
        printf("│    %d│\n", card.priority);
    }
    switch (card.suit)
    {
    case clubs:
        printf("│  ♣  │\n");
        break;

    case hearts:
        printf("│  ♥  │\n");
        break;

    case spades:
        printf("│  ♠  │\n");
        break;
    case diamonds:
        printf("│  ♦  │\n");
        break;
    }
    if (card.number >= 10)
        printf("│%d   │\n", card.number);
    else
        printf("│%d    │\n", card.number);
    printf("└─────┘\n");
}
void printDeck(Deck *deck)
{
    int i;
    for (i = 0; i < deck->top; i++)
        printCard(deck->item[i]);
}

void printHand(Player *player[])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        printf("Jogador %d:\n", i + 1);
        for (j = 0; j <= player[i]->size; j++)
            printCard(player[i]->item[j]);
        printf("\n\n");
    }
}
void printTable(Table *table, int second, int third)
{
    //rodada 1
    
    // somente a carta do vira sem as cartas dos jogadores
    printf("\n\n\n\n\n\n\t\t┌─────┐\n");
    if (table->turnCard.number >= 10)
        printf("\t\t│   %d│\n", table->turnCard.number);
    else
        printf("\t\t│    %d│\n", table->turnCard.number);
    switch (table->turnCard.suit)
    {
    case clubs:
        printf("\t\t│  ♣  │\n");
        break;

    case hearts:
        printf("\t\t│  ♥  │\n");
        break;

    case spades:
        printf("\t\t│  ♠  │\n");
        break;
    case diamonds:
        printf("\t\t│  ♦  │\n");
    }
    if (table->turnCard.number >= 10)
        printf("\t\t│%d   │\n", table->turnCard.number);
    else
        printf("\t\t│%d    │\n", table->turnCard.number);
    printf("\t\t└─────┘\n\n");
    getchar();
    system("clear");
    ////////////////////////////////////////////////////////////////////////////////////////////
    

    // primeira carta da mesa no caso a do players 1 e o vira
    // vira
    printf("\n\n\n\n\n\n\t\t┌─────┐\n");
    if (table->turnCard.number >= 10)
        printf("\t\t│   %d│\n", table->turnCard.number);
    else
        printf("\t\t│    %d│\n", table->turnCard.number);
    switch (table->turnCard.suit)
    {
    case clubs:
        printf("\t\t│  ♣  │\n");
        break;

    case hearts:
        printf("\t\t│  ♥  │\n");
        break;

    case spades:
        printf("\t\t│  ♠  │\n");
        break;
    case diamonds:
        printf("\t\t│  ♦  │\n");
    }
    if (table->turnCard.number >= 10)
        printf("\t\t│%d   │\n", table->turnCard.number);
    else
        printf("\t\t│%d    │\n", table->turnCard.number);
    printf("\t\t└─────┘\n\n");
    //jogador 1

    printf("\t\t┌─────┐\n");
    if (table->item[0].number >= 10)
        printf("\t\t│   %d│\n", table->item[0].number);
    else
        printf("\t\t│    %d│\n", table->item[0].number);
    switch (table->item[0].suit)
    {
    case clubs:
        printf("\t\t│  ♣  │\n");
        break;

    case hearts:
        printf("\t\t│  ♥  │\n");
        break;

    case spades:
        printf("\t\t│  ♠  │\n");
        break;
    case diamonds:
        printf("\t\t│  ♦  │\n");
    }
    if (table->item[0].number >= 10)
        printf("\t\t│%d   │\n", table->item[0].number);
    else
        printf("\t\t│%d    │\n", table->item[0].number);
    printf("\t\t└─────┘\n");
    //
    getchar();
    system("clear");
    /////////////////////////////////////////////////////////////////////////////////
    

    //cartas vira jogador 1 e jogador 2;
    //turn car e 2;
    printf("\n\n\n\n\n\n\t\t┌─────┐\t\t┌─────┐\n");
    // carta do vira
    if (table->turnCard.number >= 10)
        printf("\t\t│   %d│\t\t", table->turnCard.number);
    else
        printf("\t\t│    %d│\t\t", table->turnCard.number);
    // jogador 2
    if (table->item[1].number >= 10)
        printf("│   %d│\n", table->item[1].number);
    else
        printf("│    %d│\n", table->item[1].number);

    // carta do vira
    switch (table->turnCard.suit)
    {
    case clubs:
        printf("\t\t│  ♣  │\t\t");
        break;

    case hearts:
        printf("\t\t│  ♥  │\t\t");
        break;

    case spades:
        printf("\t\t│  ♠  │\t\t");
        break;
    case diamonds:
        printf("\t\t│  ♦  │\t\t");
    }
    //jogador 2
    switch (table->item[1].suit)
    {
    case clubs:
        printf("│  ♣  │\n");
        break;

    case hearts:
        printf("│  ♥  │\n");
        break;

    case spades:
        printf("│  ♠  │\n");
        break;
    case diamonds:
        printf("│  ♦  │\n");
    }
    // carta do vira
    if (table->turnCard.number >= 10)
        printf("\t\t│%d   │\t\t", table->turnCard.number);
    else
        printf("\t\t│%d    │\t\t", table->turnCard.number);
    //jogador 2
    if (table->item[1].number >= 10)
        printf("│%d   │\n", table->item[1].number);
    else
        printf("│%d    │\n", table->item[1].number);
    printf("\t\t└─────┘\t\t└─────┘\n\n");
    //jogador 1
    printf("\t\t┌─────┐\n");
    if (table->item[0].number >= 10)
        printf("\t\t│   %d│\n", table->item[0].number);
    else
        printf("\t\t│    %d│\n", table->item[0].number);
    switch (table->item[0].suit)
    {
    case clubs:
        printf("\t\t│  ♣  │\n");
        break;

    case hearts:
        printf("\t\t│  ♥  │\n");
        break;

    case spades:
        printf("\t\t│  ♠  │\n");
        break;
    case diamonds:
        printf("\t\t│  ♦  │\n");
    }
    if (table->item[0].number >= 10)
        printf("\t\t│%d   │\n", table->item[0].number);
    else
        printf("\t\t│%d    │\n", table->item[0].number);
    printf("\t\t└─────┘\n");
    getchar();
    system("clear");
    
    // jogador 3 2 1 e vira
    //jogador 3
    printf("\t\t┌─────┐\n");
    if (table->item[2].number >= 10)
        printf("\t\t│   %d│\n", table->item[2].number);
    else
        printf("\t\t│    %d│\n", table->item[2].number);
    switch (table->item[2].suit)
    {
    case clubs:
        printf("\t\t│  ♣  │\n");
        break;

    case hearts:
        printf("\t\t│  ♥  │\n");
        break;

    case spades:
        printf("\t\t│  ♠  │\n");
        break;
    case diamonds:
        printf("\t\t│  ♦  │\n");
    }
    if (table->item[2].number >= 10)
        printf("\t\t│%d   │\n", table->item[2].number);
    else
        printf("\t\t│%d    │\n", table->item[2].number);
    printf("\t\t└─────┘");

    //turn car e 2;
    printf("\n\n\t\t┌─────┐\t\t┌─────┐\n");
    // carta do vira
    if (table->turnCard.number >= 10)
        printf("\t\t│   %d│\t\t", table->turnCard.number);
    else
        printf("\t\t│    %d│\t\t", table->turnCard.number);
    // jogador 2
    if (table->item[1].number >= 10)
        printf("│   %d│\n", table->item[1].number);
    else
        printf("│    %d│\n", table->item[1].number);

    // carta do vira
    switch (table->turnCard.suit)
    {
    case clubs:
        printf("\t\t│  ♣  │\t\t");
        break;

    case hearts:
        printf("\t\t│  ♥  │\t\t");
        break;

    case spades:
        printf("\t\t│  ♠  │\t\t");
        break;
    case diamonds:
        printf("\t\t│  ♦  │\t\t");
    }
    //jogador 2
    switch (table->item[1].suit)
    {
    case clubs:
        printf("│  ♣  │\n");
        break;

    case hearts:
        printf("│  ♥  │\n");
        break;

    case spades:
        printf("│  ♠  │\n");
        break;
    case diamonds:
        printf("│  ♦  │\n");
    }
    // carta do vira
    if (table->turnCard.number >= 10)
        printf("\t\t│%d   │\t\t", table->turnCard.number);
    else
        printf("\t\t│%d    │\t\t", table->turnCard.number);
    //jogador 2
    if (table->item[1].number >= 10)
        printf("│%d   │\n", table->item[1].number);
    else
        printf("│%d    │\n", table->item[1].number);
    printf("\t\t└─────┘\t\t└─────┘\n\n");
    //jogador 1
    printf("\t\t┌─────┐\n");
    if (table->item[0].number >= 10)
        printf("\t\t│   %d│\n", table->item[0].number);
    else
        printf("\t\t│    %d│\n", table->item[0].number);
    switch (table->item[0].suit)
    {
    case clubs:
        printf("\t\t│  ♣  │\n");
        break;

    case hearts:
        printf("\t\t│  ♥  │\n");
        break;

    case spades:
        printf("\t\t│  ♠  │\n");
        break;
    case diamonds:
        printf("\t\t│  ♦  │\n");
    }
    if (table->item[0].number >= 10)
        printf("\t\t│%d   │\n", table->item[0].number);
    else
        printf("\t\t│%d    │\n", table->item[0].number);
    printf("\t\t└─────┘\n");
    getchar();
    system("clear");
    
    ////////////////////////////

    //todos os jogadores e o vira
    //jogador 3
    printf("\t\t┌─────┐\n");
    if (table->item[2].number >= 10)
        printf("\t\t│   %d│\n", table->item[2].number);
    else
        printf("\t\t│    %d│\n", table->item[2].number);
    switch (table->item[2].suit)
    {
    case clubs:
        printf("\t\t│  ♣  │\n");
        break;

    case hearts:
        printf("\t\t│  ♥  │\n");
        break;

    case spades:
        printf("\t\t│  ♠  │\n");
        break;
    case diamonds:
        printf("\t\t│  ♦  │\n");
    }
    if (table->item[2].number >= 10)
        printf("\t\t│%d   │\n", table->item[2].number);
    else
        printf("\t\t│%d    │\n", table->item[2].number);
    printf("\t\t└─────┘\n\n");

    //cartas 4 turn car e 2;
    printf("┌─────┐\t\t┌─────┐\t\t┌─────┐\n");
    // jogador 4
    if (table->item[3].number >= 10)
        printf("│   %d│\t\t", table->item[3].number);
    else
        printf("│    %d│\t\t", table->item[3].number);
    // carta do vira
    if (table->turnCard.number >= 10)
        printf("│   %d│\t\t", table->turnCard.number);
    else
        printf("│    %d│\t\t", table->turnCard.number);
    // jogador 2
    if (table->item[1].number >= 10)
        printf("│   %d│\n", table->item[1].number);
    else
        printf("│    %d│\n", table->item[1].number);
    //jogador 3
    switch (table->item[3].suit)
    {
    case clubs:
        printf("│  ♣  │\t\t");
        break;

    case hearts:
        printf("│  ♥  │\t\t");
        break;

    case spades:
        printf("│  ♠  │\t\t");
        break;
    case diamonds:
        printf("│  ♦  │\t\t");
    }
    // carta do vira
    switch (table->turnCard.suit)
    {
    case clubs:
        printf("│  ♣  │\t\t");
        break;

    case hearts:
        printf("│  ♥  │\t\t");
        break;

    case spades:
        printf("│  ♠  │\t\t");
        break;
    case diamonds:
        printf("│  ♦  │\t\t");
    }
    //jogador 2
    switch (table->item[1].suit)
    {
    case clubs:
        printf("│  ♣  │\n");
        break;

    case hearts:
        printf("│  ♥  │\n");
        break;

    case spades:
        printf("│  ♠  │\n");
        break;
    case diamonds:
        printf("│  ♦  │\n");
    }
    //jogador 4
    if (table->item[3].number >= 10)
        printf("│%d   │\t\t", table->item[3].number);
    else
        printf("│%d    │\t\t", table->item[3].number);
    // carta do vira
    if (table->turnCard.number >= 10)
        printf("│%d   │\t\t", table->turnCard.number);
    else
        printf("│%d    │\t\t", table->turnCard.number);
    //jogador 2
    if (table->item[1].number >= 10)
        printf("│%d   │\n", table->item[1].number);
    else
        printf("│%d    │\n", table->item[1].number);
    printf("└─────┘\t\t└─────┘\t\t└─────┘\n\n");
    //jogador 1
    printf("\t\t┌─────┐\n");
    if (table->item[0].number >= 10)
        printf("\t\t│   %d│\n", table->item[0].number);
    else
        printf("\t\t│    %d│\n", table->item[0].number);
    switch (table->item[0].suit)
    {
    case clubs:
        printf("\t\t│  ♣  │\n");
        break;

    case hearts:
        printf("\t\t│  ♥  │\n");
        break;

    case spades:
        printf("\t\t│  ♠  │\n");
        break;
    case diamonds:
        printf("\t\t│  ♦  │\n");
    }
    if (table->item[0].number >= 10)
        printf("\t\t│%d   │\n", table->item[0].number);
    else
        printf("\t\t│%d    │\n", table->item[0].number);
    printf("\t\t└─────┘\n");
    getchar();
    system("clear");
    //rodada 2//////////////////////////////////////////////////////////////////////////////////////
    
    // somente a carta do vira sem as cartas dos jogadores
    printf("\n\n\n\n\n\n\t\t┌─────┐\n");
    if (table->turnCard.number >= 10)
        printf("\t\t│   %d│\n", table->turnCard.number);
    else
        printf("\t\t│    %d│\n", table->turnCard.number);
    switch (table->turnCard.suit)
    {
    case clubs:
        printf("\t\t│  ♣  │\n");
        break;

    case hearts:
        printf("\t\t│  ♥  │\n");
        break;

    case spades:
        printf("\t\t│  ♠  │\n");
        break;
    case diamonds:
        printf("\t\t│  ♦  │\n");
    }
    if (table->turnCard.number >= 10)
        printf("\t\t│%d   │\n", table->turnCard.number);
    else
        printf("\t\t│%d    │\n", table->turnCard.number);
    printf("\t\t└─────┘\n\n");
    getchar();
    system("clear");
    
    if (second == 0)
    {
        // primeira carta da mesa no caso a do players 1 e o vira
        // vira
        printf("\n\n\n\n\n\n\t\t┌─────┐\n");
        if (table->turnCard.number >= 10)
            printf("\t\t│   %d│\n", table->turnCard.number);
        else
            printf("\t\t│    %d│\n", table->turnCard.number);
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->turnCard.number >= 10)
            printf("\t\t│%d   │\n", table->turnCard.number);
        else
            printf("\t\t│%d    │\n", table->turnCard.number);
        printf("\t\t└─────┘\n\n");
        //jogador 1

        printf("\t\t┌─────┐\n");
        if (table->item[4].number >= 10)
            printf("\t\t│   %d│\n", table->item[4].number);
        else
            printf("\t\t│    %d│\n", table->item[4].number);
        switch (table->item[4].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[4].number >= 10)
            printf("\t\t│%d   │\n", table->item[4].number);
        else
            printf("\t\t│%d    │\n", table->item[4].number);
        printf("\t\t└─────┘\n");
        //
        getchar();
        system("clear");
        /////////////////////////////////////////////////////////////////////////////////
        

        //cartas vira jogador 1 e jogador 2;
        //turn car e 2;
        printf("\n\n\n\n\n\n\t\t┌─────┐\t\t┌─────┐\n");
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("\t\t│   %d│\t\t", table->turnCard.number);
        else
            printf("\t\t│    %d│\t\t", table->turnCard.number);
        // jogador 2
        if (table->item[5].number >= 10)
            printf("│   %d│\n", table->item[5].number);
        else
            printf("│    %d│\n", table->item[5].number);

        // carta do vira
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\t\t");
            break;

        case hearts:
            printf("\t\t│  ♥  │\t\t");
            break;

        case spades:
            printf("\t\t│  ♠  │\t\t");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\t\t");
        }
        //jogador 2
        switch (table->item[5].suit)
        {
        case clubs:
            printf("│  ♣  │\n");
            break;

        case hearts:
            printf("│  ♥  │\n");
            break;

        case spades:
            printf("│  ♠  │\n");
            break;
        case diamonds:
            printf("│  ♦  │\n");
        }
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("\t\t│%d   │\t\t", table->turnCard.number);
        else
            printf("\t\t│%d    │\t\t", table->turnCard.number);
        //jogador 2
        if (table->item[5].number >= 10)
            printf("│%d   │\n", table->item[5].number);
        else
            printf("│%d    │\n", table->item[5].number);
        printf("\t\t└─────┘\t\t└─────┘\n\n");
        //jogador 1
        printf("\t\t┌─────┐\n");
        if (table->item[4].number >= 10)
            printf("\t\t│   %d│\n", table->item[4].number);
        else
            printf("\t\t│    %d│\n", table->item[4].number);
        switch (table->item[4].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[4].number >= 10)
            printf("\t\t│%d   │\n", table->item[4].number);
        else
            printf("\t\t│%d    │\n", table->item[4].number);
        printf("\t\t└─────┘\n");
        getchar();
        system("clear");
        
        // jogador 3 2 1 e vira
        //jogador 3
        printf("\t\t┌─────┐\n");
        if (table->item[6].number >= 10)
            printf("\t\t│   %d│\n", table->item[6].number);
        else
            printf("\t\t│    %d│\n", table->item[6].number);
        switch (table->item[6].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[6].number >= 10)
            printf("\t\t│%d   │\n", table->item[6].number);
        else
            printf("\t\t│%d    │\n", table->item[6].number);
        printf("\t\t└─────┘");

        //turn car e 2;
        printf("\n\n\t\t┌─────┐\t\t┌─────┐\n");
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("\t\t│   %d│\t\t", table->turnCard.number);
        else
            printf("\t\t│    %d│\t\t", table->turnCard.number);
        // jogador 2
        if (table->item[5].number >= 10)
            printf("│   %d│\n", table->item[5].number);
        else
            printf("│    %d│\n", table->item[5].number);

        // carta do vira
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\t\t");
            break;

        case hearts:
            printf("\t\t│  ♥  │\t\t");
            break;

        case spades:
            printf("\t\t│  ♠  │\t\t");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\t\t");
        }
        //jogador 2
        switch (table->item[5].suit)
        {
        case clubs:
            printf("│  ♣  │\n");
            break;

        case hearts:
            printf("│  ♥  │\n");
            break;

        case spades:
            printf("│  ♠  │\n");
            break;
        case diamonds:
            printf("│  ♦  │\n");
        }
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("\t\t│%d   │\t\t", table->turnCard.number);
        else
            printf("\t\t│%d    │\t\t", table->turnCard.number);
        //jogador 2
        if (table->item[5].number >= 10)
            printf("│%d   │\n", table->item[5].number);
        else
            printf("│%d    │\n", table->item[5].number);
        printf("\t\t└─────┘\t\t└─────┘\n\n");
        //jogador 1
        printf("\t\t┌─────┐\n");
        if (table->item[4].number >= 10)
            printf("\t\t│   %d│\n", table->item[4].number);
        else
            printf("\t\t│    %d│\n", table->item[4].number);
        switch (table->item[4].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[4].number >= 10)
            printf("\t\t│%d   │\n", table->item[4].number);
        else
            printf("\t\t│%d    │\n", table->item[4].number);
        printf("\t\t└─────┘\n");
        getchar();
        system("clear");
        
        ////////////////////////////

        //todos os jogadores e o vira
        //jogador 3
        printf("\t\t┌─────┐\n");
        if (table->item[6].number >= 10)
            printf("\t\t│   %d│\n", table->item[6].number);
        else
            printf("\t\t│    %d│\n", table->item[6].number);
        switch (table->item[6].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[6].number >= 10)
            printf("\t\t│%d   │\n", table->item[6].number);
        else
            printf("\t\t│%d    │\n", table->item[6].number);
        printf("\t\t└─────┘\n\n");

        //cartas 4 turn car e 2;
        printf("┌─────┐\t\t┌─────┐\t\t┌─────┐\n");
        // jogador 4
        if (table->item[7].number >= 10)
            printf("│   %d│\t\t", table->item[7].number);
        else
            printf("│    %d│\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│   %d│\t\t", table->turnCard.number);
        else
            printf("│    %d│\t\t", table->turnCard.number);
        // jogador 2
        if (table->item[5].number >= 10)
            printf("│   %d│\n", table->item[5].number);
        else
            printf("│    %d│\n", table->item[5].number);
        //jogador 3
        switch (table->item[7].suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        // carta do vira
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        //jogador 2
        switch (table->item[5].suit)
        {
        case clubs:
            printf("│  ♣  │\n");
            break;

        case hearts:
            printf("│  ♥  │\n");
            break;

        case spades:
            printf("│  ♠  │\n");
            break;
        case diamonds:
            printf("│  ♦  │\n");
        }
        //jogador 4
        if (table->item[7].number >= 10)
            printf("│%d   │\t\t", table->item[7].number);
        else
            printf("│%d    │\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│%d   │\t\t", table->turnCard.number);
        else
            printf("│%d    │\t\t", table->turnCard.number);
        //jogador 2
        if (table->item[5].number >= 10)
            printf("│%d   │\n", table->item[5].number);
        else
            printf("│%d    │\n", table->item[5].number);
        printf("└─────┘\t\t└─────┘\t\t└─────┘\n\n");
        //jogador 1
        printf("\t\t┌─────┐\n");
        if (table->item[4].number >= 10)
            printf("\t\t│   %d│\n", table->item[4].number);
        else
            printf("\t\t│    %d│\n", table->item[4].number);
        switch (table->item[4].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[4].number >= 10)
            printf("\t\t│%d   │\n", table->item[4].number);
        else
            printf("\t\t│%d    │\n", table->item[4].number);
        printf("\t\t└─────┘\n");
        getchar();
        system("clear");
    }
    else if (second == 1)
    {
        printf("\n\n\n\n\n\n\t\t┌─────┐\t\t┌─────┐\n"); // jogador 2 e o vira
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("\t\t│   %d│\t\t", table->turnCard.number);
        else
            printf("\t\t│    %d│\t\t", table->turnCard.number);
        // jogador 2
        if (table->item[5].number >= 10)
            printf("│   %d│\n", table->item[5].number);
        else
            printf("│    %d│\n", table->item[5].number);

        // carta do vira
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\t\t");
            break;

        case hearts:
            printf("\t\t│  ♥  │\t\t");
            break;

        case spades:
            printf("\t\t│  ♠  │\t\t");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\t\t");
        }
        //jogador 2
        switch (table->item[5].suit)
        {
        case clubs:
            printf("│  ♣  │\n");
            break;

        case hearts:
            printf("│  ♥  │\n");
            break;

        case spades:
            printf("│  ♠  │\n");
            break;
        case diamonds:
            printf("│  ♦  │\n");
        }
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("\t\t│%d   │\t\t", table->turnCard.number);
        else
            printf("\t\t│%d    │\t\t", table->turnCard.number);
        //jogador 2
        if (table->item[5].number >= 10)
            printf("│%d   │\n", table->item[5].number);
        else
            printf("│%d    │\n", table->item[5].number);
        printf("\t\t└─────┘\t\t└─────┘\n\n");
        //
        getchar();
        system("clear");
        
        // 2 3 e o vira
        // jogador 3
        printf("\t\t┌─────┐\n");
        if (table->item[6].number >= 10)
            printf("\t\t│   %d│\n", table->item[6].number);
        else
            printf("\t\t│    %d│\n", table->item[6].number);
        switch (table->item[6].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[6].number >= 10)
            printf("\t\t│%d   │\n", table->item[6].number);
        else
            printf("\t\t│%d    │\n", table->item[6].number);
        printf("\t\t└─────┘");

        printf("\n\n\t\t┌─────┐\t\t┌─────┐\n");
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("\t\t│   %d│\t\t", table->turnCard.number);
        else
            printf("\t\t│    %d│\t\t", table->turnCard.number);
        // jogador 2
        if (table->item[5].number >= 10)
            printf("│   %d│\n", table->item[5].number);
        else
            printf("│    %d│\n", table->item[5].number);

        // carta do vira
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\t\t");
            break;

        case hearts:
            printf("\t\t│  ♥  │\t\t");
            break;

        case spades:
            printf("\t\t│  ♠  │\t\t");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\t\t");
        }
        //jogador 2
        switch (table->item[5].suit)
        {
        case clubs:
            printf("│  ♣  │\n");
            break;

        case hearts:
            printf("│  ♥  │\n");
            break;

        case spades:
            printf("│  ♠  │\n");
            break;
        case diamonds:
            printf("│  ♦  │\n");
        }
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("\t\t│%d   │\t\t", table->turnCard.number);
        else
            printf("\t\t│%d    │\t\t", table->turnCard.number);
        //jogador 2
        if (table->item[5].number >= 10)
            printf("│%d   │\n", table->item[5].number);
        else
            printf("│%d    │\n", table->item[5].number);
        printf("\t\t└─────┘\t\t└─────┘\n\n");
        ///
        getchar();
        system("clear");
        
        // 2  3 4 e o vira
        // jogador 3
        printf("\t\t┌─────┐\n");
        if (table->item[6].number >= 10)
            printf("\t\t│   %d│\n", table->item[6].number);
        else
            printf("\t\t│    %d│\n", table->item[6].number);
        switch (table->item[6].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[6].number >= 10)
            printf("\t\t│%d   │\n", table->item[6].number);
        else
            printf("\t\t│%d    │\n", table->item[6].number);
        printf("\t\t└─────┘\n\n");
        //cartas 4 turn car e 2;
        printf("┌─────┐\t\t┌─────┐\t\t┌─────┐\n");
        // jogador 4
        if (table->item[7].number >= 10)
            printf("│   %d│\t\t", table->item[7].number);
        else
            printf("│    %d│\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│   %d│\t\t", table->turnCard.number);
        else
            printf("│    %d│\t\t", table->turnCard.number);
        // jogador 2
        if (table->item[5].number >= 10)
            printf("│   %d│\n", table->item[5].number);
        else
            printf("│    %d│\n", table->item[5].number);
        //jogador 3
        switch (table->item[7].suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        // carta do vira
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        //jogador 2
        switch (table->item[5].suit)
        {
        case clubs:
            printf("│  ♣  │\n");
            break;

        case hearts:
            printf("│  ♥  │\n");
            break;

        case spades:
            printf("│  ♠  │\n");
            break;
        case diamonds:
            printf("│  ♦  │\n");
        }
        //jogador 4
        if (table->item[7].number >= 10)
            printf("│%d   │\t\t", table->item[7].number);
        else
            printf("│%d    │\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│%d   │\t\t", table->turnCard.number);
        else
            printf("│%d    │\t\t", table->turnCard.number);
        //jogador 2
        if (table->item[5].number >= 10)
            printf("│%d   │\n", table->item[5].number);
        else
            printf("│%d    │\n", table->item[5].number);
        printf("└─────┘\t\t└─────┘\t\t└─────┘\n\n");
        ///
        getchar();
        system("clear");
        
        //todos os jogadores e o vira
        //jogador 3
        printf("\t\t┌─────┐\n");
        if (table->item[6].number >= 10)
            printf("\t\t│   %d│\n", table->item[6].number);
        else
            printf("\t\t│    %d│\n", table->item[6].number);
        switch (table->item[6].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[6].number >= 10)
            printf("\t\t│%d   │\n", table->item[6].number);
        else
            printf("\t\t│%d    │\n", table->item[6].number);
        printf("\t\t└─────┘\n\n");

        //cartas 4 turn car e 2;
        printf("┌─────┐\t\t┌─────┐\t\t┌─────┐\n");
        // jogador 4
        if (table->item[7].number >= 10)
            printf("│   %d│\t\t", table->item[7].number);
        else
            printf("│    %d│\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│   %d│\t\t", table->turnCard.number);
        else
            printf("│    %d│\t\t", table->turnCard.number);
        // jogador 2
        if (table->item[5].number >= 10)
            printf("│   %d│\n", table->item[5].number);
        else
            printf("│    %d│\n", table->item[5].number);
        //jogador 3
        switch (table->item[7].suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        // carta do vira
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        //jogador 2
        switch (table->item[5].suit)
        {
        case clubs:
            printf("│  ♣  │\n");
            break;

        case hearts:
            printf("│  ♥  │\n");
            break;

        case spades:
            printf("│  ♠  │\n");
            break;
        case diamonds:
            printf("│  ♦  │\n");
        }
        //jogador 4
        if (table->item[7].number >= 10)
            printf("│%d   │\t\t", table->item[7].number);
        else
            printf("│%d    │\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│%d   │\t\t", table->turnCard.number);
        else
            printf("│%d    │\t\t", table->turnCard.number);
        //jogador 2
        if (table->item[5].number >= 10)
            printf("│%d   │\n", table->item[5].number);
        else
            printf("│%d    │\n", table->item[5].number);
        printf("└─────┘\t\t└─────┘\t\t└─────┘\n\n");
        //jogador 1
        printf("\t\t┌─────┐\n");
        if (table->item[4].number >= 10)
            printf("\t\t│   %d│\n", table->item[4].number);
        else
            printf("\t\t│    %d│\n", table->item[4].number);
        switch (table->item[4].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[4].number >= 10)
            printf("\t\t│%d   │\n", table->item[4].number);
        else
            printf("\t\t│%d    │\n", table->item[4].number);
        printf("\t\t└─────┘\n");
        getchar();
        system("clear");
    }
    else if (second == 2)
    {
        //jogador 3 e o vira
        //jogador 3
        printf("\t\t┌─────┐\n");
        if (table->item[6].number >= 10)
            printf("\t\t│   %d│\n", table->item[6].number);
        else
            printf("\t\t│    %d│\n", table->item[6].number);
        switch (table->item[6].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[6].number >= 10)
            printf("\t\t│%d   │\n", table->item[6].number);
        else
            printf("\t\t│%d    │\n", table->item[6].number);
        printf("\t\t└─────┘\n\n");
        //vira
        printf("\t\t┌─────┐\n");
        if (table->turnCard.number >= 10)
            printf("\t\t│   %d│\n", table->turnCard.number);
        else
            printf("\t\t│    %d│\n", table->turnCard.number);
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->turnCard.number >= 10)
            printf("\t\t│%d   │\n", table->turnCard.number);
        else
            printf("\t\t│%d    │\n", table->turnCard.number);
        printf("\t\t└─────┘\n\n");
        getchar();
        system("clear");
        
        //
        //jogador 3 4 e o vira
        //jogador 3
        printf("\t\t┌─────┐\n");
        if (table->item[6].number >= 10)
            printf("\t\t│   %d│\n", table->item[6].number);
        else
            printf("\t\t│    %d│\n", table->item[6].number);
        switch (table->item[6].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[6].number >= 10)
            printf("\t\t│%d   │\n", table->item[6].number);
        else
            printf("\t\t│%d    │\n", table->item[6].number);
        printf("\t\t└─────┘\n\n");
        //cartas 4 e turn car ;
        printf("┌─────┐\t\t┌─────┐\n");
        // jogador 4
        if (table->item[7].number >= 10)
            printf("│   %d│\t\t", table->item[7].number);
        else
            printf("│    %d│\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│   %d│\n", table->turnCard.number);
        else
            printf("│    %d│\n", table->turnCard.number);
        //jogador 4
        switch (table->item[7].suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        // carta do vira
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("│  ♣  │\n");
            break;

        case hearts:
            printf("│  ♥  │\n");
            break;

        case spades:
            printf("│  ♠  │\n");
            break;
        case diamonds:
            printf("│  ♦  │\n");
        }
        //jogador 4
        if (table->item[7].number >= 10)
            printf("│%d   │\t\t", table->item[7].number);
        else
            printf("│%d    │\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│%d   │\n", table->turnCard.number);
        else
            printf("│%d    │\n", table->turnCard.number);
        printf("└─────┘\t\t└─────┘\n\n");

        getchar();
        system("clear");
        

        //

        //jogador 3 4 1 e o vira
        //jogador 3
        printf("\t\t┌─────┐\n");
        if (table->item[6].number >= 10)
            printf("\t\t│   %d│\n", table->item[6].number);
        else
            printf("\t\t│    %d│\n", table->item[6].number);
        switch (table->item[6].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[6].number >= 10)
            printf("\t\t│%d   │\n", table->item[6].number);
        else
            printf("\t\t│%d    │\n", table->item[6].number);
        printf("\t\t└─────┘\n\n");
        //cartas 4 e turn car ;
        printf("┌─────┐\t\t┌─────┐\n");
        // jogador 4
        if (table->item[7].number >= 10)
            printf("│   %d│\t\t", table->item[7].number);
        else
            printf("│    %d│\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│   %d│\n", table->turnCard.number);
        else
            printf("│    %d│\n", table->turnCard.number);
        //jogador 4
        switch (table->item[7].suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        // carta do vira
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("│  ♣  │\n");
            break;

        case hearts:
            printf("│  ♥  │\n");
            break;

        case spades:
            printf("│  ♠  │\n");
            break;
        case diamonds:
            printf("│  ♦  │\n");
        }
        //jogador 4
        if (table->item[7].number >= 10)
            printf("│%d   │\t\t", table->item[7].number);
        else
            printf("│%d    │\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│%d   │\n", table->turnCard.number);
        else
            printf("│%d    │\n", table->turnCard.number);
        printf("└─────┘\t\t└─────┘\n\n");
        //jogador 1
        printf("\t\t┌─────┐\n");
        if (table->item[4].number >= 10)
            printf("\t\t│   %d│\n", table->item[4].number);
        else
            printf("\t\t│    %d│\n", table->item[4].number);
        switch (table->item[4].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[4].number >= 10)
            printf("\t\t│%d   │\n", table->item[4].number);
        else
            printf("\t\t│%d    │\n", table->item[4].number);
        printf("\t\t└─────┘\n\n");
        getchar();
        system("clear");
        
        //
        //todos os jogadores e o vira
        //jogador 3
        printf("\t\t┌─────┐\n");
        if (table->item[6].number >= 10)
            printf("\t\t│   %d│\n", table->item[6].number);
        else
            printf("\t\t│    %d│\n", table->item[6].number);
        switch (table->item[6].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[6].number >= 10)
            printf("\t\t│%d   │\n", table->item[6].number);
        else
            printf("\t\t│%d    │\n", table->item[6].number);
        printf("\t\t└─────┘\n\n");

        //cartas 4 turn car e 2;
        printf("┌─────┐\t\t┌─────┐\t\t┌─────┐\n");
        // jogador 4
        if (table->item[7].number >= 10)
            printf("│   %d│\t\t", table->item[7].number);
        else
            printf("│    %d│\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│   %d│\t\t", table->turnCard.number);
        else
            printf("│    %d│\t\t", table->turnCard.number);
        // jogador 2
        if (table->item[5].number >= 10)
            printf("│   %d│\n", table->item[5].number);
        else
            printf("│    %d│\n", table->item[5].number);
        //jogador 4
        switch (table->item[7].suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        // carta do vira
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        //jogador 2
        switch (table->item[5].suit)
        {
        case clubs:
            printf("│  ♣  │\n");
            break;

        case hearts:
            printf("│  ♥  │\n");
            break;

        case spades:
            printf("│  ♠  │\n");
            break;
        case diamonds:
            printf("│  ♦  │\n");
        }
        //jogador 4
        if (table->item[7].number >= 10)
            printf("│%d   │\t\t", table->item[7].number);
        else
            printf("│%d    │\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│%d   │\t\t", table->turnCard.number);
        else
            printf("│%d    │\t\t", table->turnCard.number);
        //jogador 2
        if (table->item[5].number >= 10)
            printf("│%d   │\n", table->item[5].number);
        else
            printf("│%d    │\n", table->item[5].number);
        printf("└─────┘\t\t└─────┘\t\t└─────┘\n\n");
        //jogador 1
        printf("\t\t┌─────┐\n");
        if (table->item[4].number >= 10)
            printf("\t\t│   %d│\n", table->item[4].number);
        else
            printf("\t\t│    %d│\n", table->item[4].number);
        switch (table->item[4].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[4].number >= 10)
            printf("\t\t│%d   │\n", table->item[4].number);
        else
            printf("\t\t│%d    │\n", table->item[4].number);
        printf("\t\t└─────┘\n");
        getchar();
        system("clear");
    }
    else
    {
        //cartas 4 e turn car ;
        printf("\n\n\n\n\n\n┌─────┐\t\t┌─────┐\n");
        // jogador 4
        if (table->item[7].number >= 10)
            printf("│   %d│\t\t", table->item[7].number);
        else
            printf("│    %d│\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│   %d│\n", table->turnCard.number);
        else
            printf("│    %d│\n", table->turnCard.number);
        //jogador 4
        switch (table->item[7].suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        // carta do vira
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("│  ♣  │\n");
            break;

        case hearts:
            printf("│  ♥  │\n");
            break;

        case spades:
            printf("│  ♠  │\n");
            break;
        case diamonds:
            printf("│  ♦  │\n");
        }
        //jogador 4
        if (table->item[7].number >= 10)
            printf("│%d   │\t\t", table->item[7].number);
        else
            printf("│%d    │\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│%d   │\n", table->turnCard.number);
        else
            printf("│%d    │\n", table->turnCard.number);
        printf("└─────┘\t\t└─────┘\n\n");

        getchar();
        system("clear");
        
        //
        // 4 1 e turn
        //cartas 4 e turn car ;
        printf("\n\n\n\n\n\n┌─────┐\t\t┌─────┐\n");
        // jogador 4
        if (table->item[7].number >= 10)
            printf("│   %d│\t\t", table->item[7].number);
        else
            printf("│    %d│\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│   %d│\n", table->turnCard.number);
        else
            printf("│    %d│\n", table->turnCard.number);
        //jogador 4
        switch (table->item[7].suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        // carta do vira
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("│  ♣  │\n");
            break;

        case hearts:
            printf("│  ♥  │\n");
            break;

        case spades:
            printf("│  ♠  │\n");
            break;
        case diamonds:
            printf("│  ♦  │\n");
        }
        //jogador 4
        if (table->item[7].number >= 10)
            printf("│%d   │\t\t", table->item[7].number);
        else
            printf("│%d    │\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│%d   │\n", table->turnCard.number);
        else
            printf("│%d    │\n", table->turnCard.number);
        printf("└─────┘\t\t└─────┘\n\n");

        //jogador 1
        printf("\t\t┌─────┐\n");
        if (table->item[4].number >= 10)
            printf("\t\t│   %d│\n", table->item[4].number);
        else
            printf("\t\t│    %d│\n", table->item[4].number);
        switch (table->item[4].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[4].number >= 10)
            printf("\t\t│%d   │\n", table->item[4].number);
        else
            printf("\t\t│%d    │\n", table->item[4].number);
        printf("\t\t└─────┘\n");

        getchar();
        system("clear");
        
        //
        // jogador 4 1 2 e turn
        //cartas 4 turn car e 2;
        printf("\n\n\n\n\n\n┌─────┐\t\t┌─────┐\t\t┌─────┐\n");
        // jogador 4
        if (table->item[7].number >= 10)
            printf("│   %d│\t\t", table->item[7].number);
        else
            printf("│    %d│\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│   %d│\t\t", table->turnCard.number);
        else
            printf("│    %d│\t\t", table->turnCard.number);
        // jogador 2
        if (table->item[5].number >= 10)
            printf("│   %d│\n", table->item[5].number);
        else
            printf("│    %d│\n", table->item[5].number);
        //jogador 3
        switch (table->item[7].suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        // carta do vira
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        //jogador 2
        switch (table->item[5].suit)
        {
        case clubs:
            printf("│  ♣  │\n");
            break;

        case hearts:
            printf("│  ♥  │\n");
            break;

        case spades:
            printf("│  ♠  │\n");
            break;
        case diamonds:
            printf("│  ♦  │\n");
        }
        //jogador 4
        if (table->item[7].number >= 10)
            printf("│%d   │\t\t", table->item[7].number);
        else
            printf("│%d    │\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│%d   │\t\t", table->turnCard.number);
        else
            printf("│%d    │\t\t", table->turnCard.number);
        //jogador 2
        if (table->item[5].number >= 10)
            printf("│%d   │\n", table->item[5].number);
        else
            printf("│%d    │\n", table->item[5].number);
        printf("└─────┘\t\t└─────┘\t\t└─────┘\n\n");

        //jogador 1
        printf("\t\t┌─────┐\n");
        if (table->item[4].number >= 10)
            printf("\t\t│   %d│\n", table->item[4].number);
        else
            printf("\t\t│    %d│\n", table->item[4].number);
        switch (table->item[4].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[4].number >= 10)
            printf("\t\t│%d   │\n", table->item[4].number);
        else
            printf("\t\t│%d    │\n", table->item[4].number);
        printf("\t\t└─────┘\n");
        getchar();
        system("clear");
        

        //todos os jogadores e o vira
        //jogador 3
        printf("\t\t┌─────┐\n");
        if (table->item[6].number >= 10)
            printf("\t\t│   %d│\n", table->item[6].number);
        else
            printf("\t\t│    %d│\n", table->item[6].number);
        switch (table->item[6].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[6].number >= 10)
            printf("\t\t│%d   │\n", table->item[6].number);
        else
            printf("\t\t│%d    │\n", table->item[6].number);
        printf("\t\t└─────┘\n\n");

        //cartas 4 turn car e 2;
        printf("┌─────┐\t\t┌─────┐\t\t┌─────┐\n");
        // jogador 4
        if (table->item[7].number >= 10)
            printf("│   %d│\t\t", table->item[7].number);
        else
            printf("│    %d│\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│   %d│\t\t", table->turnCard.number);
        else
            printf("│    %d│\t\t", table->turnCard.number);
        // jogador 2
        if (table->item[5].number >= 10)
            printf("│   %d│\n", table->item[5].number);
        else
            printf("│    %d│\n", table->item[5].number);
        //jogador 3
        switch (table->item[7].suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        // carta do vira
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("│  ♣  │\t\t");
            break;

        case hearts:
            printf("│  ♥  │\t\t");
            break;

        case spades:
            printf("│  ♠  │\t\t");
            break;
        case diamonds:
            printf("│  ♦  │\t\t");
        }
        //jogador 2
        switch (table->item[5].suit)
        {
        case clubs:
            printf("│  ♣  │\n");
            break;

        case hearts:
            printf("│  ♥  │\n");
            break;

        case spades:
            printf("│  ♠  │\n");
            break;
        case diamonds:
            printf("│  ♦  │\n");
        }
        //jogador 4
        if (table->item[7].number >= 10)
            printf("│%d   │\t\t", table->item[7].number);
        else
            printf("│%d    │\t\t", table->item[7].number);
        // carta do vira
        if (table->turnCard.number >= 10)
            printf("│%d   │\t\t", table->turnCard.number);
        else
            printf("│%d    │\t\t", table->turnCard.number);
        //jogador 2
        if (table->item[5].number >= 10)
            printf("│%d   │\n", table->item[5].number);
        else
            printf("│%d    │\n", table->item[5].number);
        printf("└─────┘\t\t└─────┘\t\t└─────┘\n\n");
        //jogador 1
        printf("\t\t┌─────┐\n");
        if (table->item[4].number >= 10)
            printf("\t\t│   %d│\n", table->item[4].number);
        else
            printf("\t\t│    %d│\n", table->item[4].number);
        switch (table->item[4].suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->item[4].number >= 10)
            printf("\t\t│%d   │\n", table->item[4].number);
        else
            printf("\t\t│%d    │\n", table->item[4].number);
        printf("\t\t└─────┘\n");
        getchar();
        system("clear");
        
    }

    if (third != 9)
    {
        //rodada 3//////////////////////////////////////////////////////////////////////////////////////
        // somente a carta do vira sem as cartas dos jogadores
        
        printf("\n\n\n\n\n\n\t\t┌─────┐\n");
        if (table->turnCard.number >= 10)
            printf("\t\t│   %d│\n", table->turnCard.number);
        else
            printf("\t\t│    %d│\n", table->turnCard.number);
        switch (table->turnCard.suit)
        {
        case clubs:
            printf("\t\t│  ♣  │\n");
            break;

        case hearts:
            printf("\t\t│  ♥  │\n");
            break;

        case spades:
            printf("\t\t│  ♠  │\n");
            break;
        case diamonds:
            printf("\t\t│  ♦  │\n");
        }
        if (table->turnCard.number >= 10)
            printf("\t\t│%d   │\n", table->turnCard.number);
        else
            printf("\t\t│%d    │\n", table->turnCard.number);
        printf("\t\t└─────┘\n\n");
        getchar();
        system("clear");
        

        if (third == 0)
        {
            // primeira carta da mesa no caso a do players 1 e o vira
            // vira
            printf("\n\n\n\n\n\n\t\t┌─────┐\n");
            if (table->turnCard.number >= 10)
                printf("\t\t│   %d│\n", table->turnCard.number);
            else
                printf("\t\t│    %d│\n", table->turnCard.number);
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->turnCard.number >= 10)
                printf("\t\t│%d   │\n", table->turnCard.number);
            else
                printf("\t\t│%d    │\n", table->turnCard.number);
            printf("\t\t└─────┘\n\n");
            //jogador 1

            printf("\t\t┌─────┐\n");
            if (table->item[8].number >= 10)
                printf("\t\t│   %d│\n", table->item[8].number);
            else
                printf("\t\t│    %d│\n", table->item[8].number);
            switch (table->item[8].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[8].number >= 10)
                printf("\t\t│%d   │\n", table->item[8].number);
            else
                printf("\t\t│%d    │\n", table->item[8].number);
            printf("\t\t└─────┘\n");
            //
            getchar();
            system("clear");
            /////////////////////////////////////////////////////////////////////////////////
            

            //cartas vira jogador 1 e jogador 2;
            //turn car e 2;
            printf("\n\n\n\n\n\n\t\t┌─────┐\t\t┌─────┐\n");
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("\t\t│   %d│\t\t", table->turnCard.number);
            else
                printf("\t\t│    %d│\t\t", table->turnCard.number);
            // jogador 2
            if (table->item[9].number >= 10)
                printf("│   %d│\n", table->item[9].number);
            else
                printf("│    %d│\n", table->item[9].number);

            // carta do vira
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\t\t");
                break;

            case hearts:
                printf("\t\t│  ♥  │\t\t");
                break;

            case spades:
                printf("\t\t│  ♠  │\t\t");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\t\t");
            }
            //jogador 2
            switch (table->item[9].suit)
            {
            case clubs:
                printf("│  ♣  │\n");
                break;

            case hearts:
                printf("│  ♥  │\n");
                break;

            case spades:
                printf("│  ♠  │\n");
                break;
            case diamonds:
                printf("│  ♦  │\n");
            }
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("\t\t│%d   │\t\t", table->turnCard.number);
            else
                printf("\t\t│%d    │\t\t", table->turnCard.number);
            //jogador 2
            if (table->item[9].number >= 10)
                printf("│%d   │\n", table->item[9].number);
            else
                printf("│%d    │\n", table->item[9].number);
            printf("\t\t└─────┘\t\t└─────┘\n\n");
            //jogador 1
            printf("\t\t┌─────┐\n");
            if (table->item[8].number >= 10)
                printf("\t\t│   %d│\n", table->item[8].number);
            else
                printf("\t\t│    %d│\n", table->item[8].number);
            switch (table->item[8].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[8].number >= 10)
                printf("\t\t│%d   │\n", table->item[8].number);
            else
                printf("\t\t│%d    │\n", table->item[8].number);
            printf("\t\t└─────┘\n");
            getchar();
            system("clear");
            
            // jogador 3 2 1 e vira
            //jogador 3
            printf("\t\t┌─────┐\n");
            if (table->item[10].number >= 10)
                printf("\t\t│   %d│\n", table->item[10].number);
            else
                printf("\t\t│    %d│\n", table->item[10].number);
            switch (table->item[10].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[10].number >= 10)
                printf("\t\t│%d   │\n", table->item[10].number);
            else
                printf("\t\t│%d    │\n", table->item[10].number);
            printf("\t\t└─────┘");

            //turn car e 2;
            printf("\n\n\t\t┌─────┐\t\t┌─────┐\n");
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("\t\t│   %d│\t\t", table->turnCard.number);
            else
                printf("\t\t│    %d│\t\t", table->turnCard.number);
            // jogador 2
            if (table->item[9].number >= 10)
                printf("│   %d│\n", table->item[9].number);
            else
                printf("│    %d│\n", table->item[9].number);

            // carta do vira
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\t\t");
                break;

            case hearts:
                printf("\t\t│  ♥  │\t\t");
                break;

            case spades:
                printf("\t\t│  ♠  │\t\t");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\t\t");
            }
            //jogador 2
            switch (table->item[9].suit)
            {
            case clubs:
                printf("│  ♣  │\n");
                break;

            case hearts:
                printf("│  ♥  │\n");
                break;

            case spades:
                printf("│  ♠  │\n");
                break;
            case diamonds:
                printf("│  ♦  │\n");
            }
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("\t\t│%d   │\t\t", table->turnCard.number);
            else
                printf("\t\t│%d    │\t\t", table->turnCard.number);
            //jogador 2
            if (table->item[9].number >= 10)
                printf("│%d   │\n", table->item[9].number);
            else
                printf("│%d    │\n", table->item[9].number);
            printf("\t\t└─────┘\t\t└─────┘\n\n");
            //jogador 1
            printf("\t\t┌─────┐\n");
            if (table->item[8].number >= 10)
                printf("\t\t│   %d│\n", table->item[8].number);
            else
                printf("\t\t│    %d│\n", table->item[8].number);
            switch (table->item[8].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[8].number >= 10)
                printf("\t\t│%d   │\n", table->item[8].number);
            else
                printf("\t\t│%d    │\n", table->item[8].number);
            printf("\t\t└─────┘\n");
            getchar();
            system("clear");
            
            ////////////////////////////

            //todos os jogadores e o vira
            //jogador 3
            printf("\t\t┌─────┐\n");
            if (table->item[10].number >= 10)
                printf("\t\t│   %d│\n", table->item[10].number);
            else
                printf("\t\t│    %d│\n", table->item[10].number);
            switch (table->item[10].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[10].number >= 10)
                printf("\t\t│%d   │\n", table->item[10].number);
            else
                printf("\t\t│%d    │\n", table->item[10].number);
            printf("\t\t└─────┘\n\n");

            //cartas 4 turn car e 2;
            printf("┌─────┐\t\t┌─────┐\t\t┌─────┐\n");
            // jogador 4
            if (table->item[11].number >= 10)
                printf("│   %d│\t\t", table->item[11].number);
            else
                printf("│    %d│\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│   %d│\t\t", table->turnCard.number);
            else
                printf("│    %d│\t\t", table->turnCard.number);
            // jogador 2
            if (table->item[9].number >= 10)
                printf("│   %d│\n", table->item[9].number);
            else
                printf("│    %d│\n", table->item[9].number);
            //jogador 3
            switch (table->item[11].suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            // carta do vira
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            //jogador 2
            switch (table->item[9].suit)
            {
            case clubs:
                printf("│  ♣  │\n");
                break;

            case hearts:
                printf("│  ♥  │\n");
                break;

            case spades:
                printf("│  ♠  │\n");
                break;
            case diamonds:
                printf("│  ♦  │\n");
            }
            //jogador 4
            if (table->item[11].number >= 10)
                printf("│%d   │\t\t", table->item[11].number);
            else
                printf("│%d    │\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│%d   │\t\t", table->turnCard.number);
            else
                printf("│%d    │\t\t", table->turnCard.number);
            //jogador 2
            if (table->item[9].number >= 10)
                printf("│%d   │\n", table->item[9].number);
            else
                printf("│%d    │\n", table->item[9].number);
            printf("└─────┘\t\t└─────┘\t\t└─────┘\n\n");
            //jogador 1
            printf("\t\t┌─────┐\n");
            if (table->item[8].number >= 10)
                printf("\t\t│   %d│\n", table->item[8].number);
            else
                printf("\t\t│    %d│\n", table->item[8].number);
            switch (table->item[8].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[8].number >= 10)
                printf("\t\t│%d   │\n", table->item[8].number);
            else
                printf("\t\t│%d    │\n", table->item[8].number);
            printf("\t\t└─────┘\n");
            getchar();
            system("clear");
        }
        else if (third == 1)
        {
            printf("\n\n\n\n\n\n\t\t┌─────┐\t\t┌─────┐\n"); // jogador 2 e o vira
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("\t\t│   %d│\t\t", table->turnCard.number);
            else
                printf("\t\t│    %d│\t\t", table->turnCard.number);
            // jogador 2
            if (table->item[9].number >= 10)
                printf("│   %d│\n", table->item[9].number);
            else
                printf("│    %d│\n", table->item[9].number);

            // carta do vira
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\t\t");
                break;

            case hearts:
                printf("\t\t│  ♥  │\t\t");
                break;

            case spades:
                printf("\t\t│  ♠  │\t\t");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\t\t");
            }
            //jogador 2
            switch (table->item[9].suit)
            {
            case clubs:
                printf("│  ♣  │\n");
                break;

            case hearts:
                printf("│  ♥  │\n");
                break;

            case spades:
                printf("│  ♠  │\n");
                break;
            case diamonds:
                printf("│  ♦  │\n");
            }
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("\t\t│%d   │\t\t", table->turnCard.number);
            else
                printf("\t\t│%d    │\t\t", table->turnCard.number);
            //jogador 2
            if (table->item[9].number >= 10)
                printf("│%d   │\n", table->item[9].number);
            else
                printf("│%d    │\n", table->item[9].number);
            printf("\t\t└─────┘\t\t└─────┘\n\n");
            //
            getchar();
            system("clear");
            
            // 2 3 e o vira
            // jogador 3
            printf("\t\t┌─────┐\n");
            if (table->item[10].number >= 10)
                printf("\t\t│   %d│\n", table->item[10].number);
            else
                printf("\t\t│    %d│\n", table->item[10].number);
            switch (table->item[10].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[10].number >= 10)
                printf("\t\t│%d   │\n", table->item[10].number);
            else
                printf("\t\t│%d    │\n", table->item[10].number);
            printf("\t\t└─────┘");

            printf("\n\n\t\t┌─────┐\t\t┌─────┐\n");
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("\t\t│   %d│\t\t", table->turnCard.number);
            else
                printf("\t\t│    %d│\t\t", table->turnCard.number);
            // jogador 2
            if (table->item[9].number >= 10)
                printf("│   %d│\n", table->item[9].number);
            else
                printf("│    %d│\n", table->item[9].number);

            // carta do vira
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\t\t");
                break;

            case hearts:
                printf("\t\t│  ♥  │\t\t");
                break;

            case spades:
                printf("\t\t│  ♠  │\t\t");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\t\t");
            }
            //jogador 2
            switch (table->item[9].suit)
            {
            case clubs:
                printf("│  ♣  │\n");
                break;

            case hearts:
                printf("│  ♥  │\n");
                break;

            case spades:
                printf("│  ♠  │\n");
                break;
            case diamonds:
                printf("│  ♦  │\n");
            }
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("\t\t│%d   │\t\t", table->turnCard.number);
            else
                printf("\t\t│%d    │\t\t", table->turnCard.number);
            //jogador 2
            if (table->item[9].number >= 10)
                printf("│%d   │\n", table->item[9].number);
            else
                printf("│%d    │\n", table->item[9].number);
            printf("\t\t└─────┘\t\t└─────┘\n\n");
            ///
            getchar();
            system("clear");
            
            // 2  3 4 e o vira
            // jogador 3
            printf("\t\t┌─────┐\n");
            if (table->item[10].number >= 10)
                printf("\t\t│   %d│\n", table->item[10].number);
            else
                printf("\t\t│    %d│\n", table->item[10].number);
            switch (table->item[10].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[10].number >= 10)
                printf("\t\t│%d   │\n", table->item[10].number);
            else
                printf("\t\t│%d    │\n", table->item[10].number);
            printf("\t\t└─────┘\n\n");
            //cartas 4 turn car e 2;
            printf("┌─────┐\t\t┌─────┐\t\t┌─────┐\n");
            // jogador 4
            if (table->item[11].number >= 10)
                printf("│   %d│\t\t", table->item[11].number);
            else
                printf("│    %d│\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│   %d│\t\t", table->turnCard.number);
            else
                printf("│    %d│\t\t", table->turnCard.number);
            // jogador 2
            if (table->item[9].number >= 10)
                printf("│   %d│\n", table->item[9].number);
            else
                printf("│    %d│\n", table->item[9].number);
            //jogador 3
            switch (table->item[11].suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            // carta do vira
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            //jogador 2
            switch (table->item[9].suit)
            {
            case clubs:
                printf("│  ♣  │\n");
                break;

            case hearts:
                printf("│  ♥  │\n");
                break;

            case spades:
                printf("│  ♠  │\n");
                break;
            case diamonds:
                printf("│  ♦  │\n");
            }
            //jogador 4
            if (table->item[11].number >= 10)
                printf("│%d   │\t\t", table->item[11].number);
            else
                printf("│%d    │\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│%d   │\t\t", table->turnCard.number);
            else
                printf("│%d    │\t\t", table->turnCard.number);
            //jogador 2
            if (table->item[9].number >= 10)
                printf("│%d   │\n", table->item[9].number);
            else
                printf("│%d    │\n", table->item[9].number);
            printf("└─────┘\t\t└─────┘\t\t└─────┘\n\n");
            ///
            getchar();
            system("clear");
            
            //todos os jogadores e o vira
            //jogador 3
            printf("\t\t┌─────┐\n");
            if (table->item[10].number >= 10)
                printf("\t\t│   %d│\n", table->item[10].number);
            else
                printf("\t\t│    %d│\n", table->item[10].number);
            switch (table->item[10].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[10].number >= 10)
                printf("\t\t│%d   │\n", table->item[10].number);
            else
                printf("\t\t│%d    │\n", table->item[10].number);
            printf("\t\t└─────┘\n\n");

            //cartas 4 turn car e 2;
            printf("┌─────┐\t\t┌─────┐\t\t┌─────┐\n");
            // jogador 4
            if (table->item[11].number >= 10)
                printf("│   %d│\t\t", table->item[11].number);
            else
                printf("│    %d│\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│   %d│\t\t", table->turnCard.number);
            else
                printf("│    %d│\t\t", table->turnCard.number);
            // jogador 2
            if (table->item[9].number >= 10)
                printf("│   %d│\n", table->item[9].number);
            else
                printf("│    %d│\n", table->item[9].number);
            //jogador 3
            switch (table->item[11].suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            // carta do vira
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            //jogador 2
            switch (table->item[9].suit)
            {
            case clubs:
                printf("│  ♣  │\n");
                break;

            case hearts:
                printf("│  ♥  │\n");
                break;

            case spades:
                printf("│  ♠  │\n");
                break;
            case diamonds:
                printf("│  ♦  │\n");
            }
            //jogador 4
            if (table->item[11].number >= 10)
                printf("│%d   │\t\t", table->item[11].number);
            else
                printf("│%d    │\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│%d   │\t\t", table->turnCard.number);
            else
                printf("│%d    │\t\t", table->turnCard.number);
            //jogador 2
            if (table->item[9].number >= 10)
                printf("│%d   │\n", table->item[9].number);
            else
                printf("│%d    │\n", table->item[9].number);
            printf("└─────┘\t\t└─────┘\t\t└─────┘\n\n");
            //jogador 1
            printf("\t\t┌─────┐\n");
            if (table->item[8].number >= 10)
                printf("\t\t│   %d│\n", table->item[8].number);
            else
                printf("\t\t│    %d│\n", table->item[8].number);
            switch (table->item[8].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[8].number >= 10)
                printf("\t\t│%d   │\n", table->item[8].number);
            else
                printf("\t\t│%d    │\n", table->item[8].number);
            printf("\t\t└─────┘\n");
            getchar();
            system("clear");
        }
        else if (third == 2)
        {
            //jogador 3 e o vira
            //jogador 3
            printf("\t\t┌─────┐\n");
            if (table->item[10].number >= 10)
                printf("\t\t│   %d│\n", table->item[10].number);
            else
                printf("\t\t│    %d│\n", table->item[10].number);
            switch (table->item[10].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[10].number >= 10)
                printf("\t\t│%d   │\n", table->item[10].number);
            else
                printf("\t\t│%d    │\n", table->item[10].number);
            printf("\t\t└─────┘\n\n");
            //vira
            printf("\t\t┌─────┐\n");
            if (table->turnCard.number >= 10)
                printf("\t\t│   %d│\n", table->turnCard.number);
            else
                printf("\t\t│    %d│\n", table->turnCard.number);
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->turnCard.number >= 10)
                printf("\t\t│%d   │\n", table->turnCard.number);
            else
                printf("\t\t│%d    │\n", table->turnCard.number);
            printf("\t\t└─────┘\n\n");
            getchar();
            system("clear");
            
            //
            //jogador 3 4 e o vira
            //jogador 3
            printf("\t\t┌─────┐\n");
            if (table->item[10].number >= 10)
                printf("\t\t│   %d│\n", table->item[10].number);
            else
                printf("\t\t│    %d│\n", table->item[10].number);
            switch (table->item[10].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[10].number >= 10)
                printf("\t\t│%d   │\n", table->item[10].number);
            else
                printf("\t\t│%d    │\n", table->item[10].number);
            printf("\t\t└─────┘\n\n");
            //cartas 4 e turn car ;
            printf("┌─────┐\t\t┌─────┐\n");
            // jogador 4
            if (table->item[11].number >= 10)
                printf("│   %d│\t\t", table->item[11].number);
            else
                printf("│    %d│\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│   %d│\n", table->turnCard.number);
            else
                printf("│    %d│\n", table->turnCard.number);
            //jogador 4
            switch (table->item[11].suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            // carta do vira
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("│  ♣  │\n");
                break;

            case hearts:
                printf("│  ♥  │\n");
                break;

            case spades:
                printf("│  ♠  │\n");
                break;
            case diamonds:
                printf("│  ♦  │\n");
            }
            //jogador 4
            if (table->item[11].number >= 10)
                printf("│%d   │\t\t", table->item[11].number);
            else
                printf("│%d    │\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│%d   │\n", table->turnCard.number);
            else
                printf("│%d    │\n", table->turnCard.number);
            printf("└─────┘\t\t└─────┘\n\n");

            getchar();
            system("clear");
            

            //

            //jogador 3 4 1 e o vira
            //jogador 3
            printf("\t\t┌─────┐\n");
            if (table->item[10].number >= 10)
                printf("\t\t│   %d│\n", table->item[10].number);
            else
                printf("\t\t│    %d│\n", table->item[10].number);
            switch (table->item[10].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[10].number >= 10)
                printf("\t\t│%d   │\n", table->item[10].number);
            else
                printf("\t\t│%d    │\n", table->item[10].number);
            printf("\t\t└─────┘\n\n");
            //cartas 4 e turn car ;
            printf("┌─────┐\t\t┌─────┐\n");
            // jogador 4
            if (table->item[11].number >= 10)
                printf("│   %d│\t\t", table->item[11].number);
            else
                printf("│    %d│\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│   %d│\n", table->turnCard.number);
            else
                printf("│    %d│\n", table->turnCard.number);
            //jogador 4
            switch (table->item[11].suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            // carta do vira
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("│  ♣  │\n");
                break;

            case hearts:
                printf("│  ♥  │\n");
                break;

            case spades:
                printf("│  ♠  │\n");
                break;
            case diamonds:
                printf("│  ♦  │\n");
            }
            //jogador 4
            if (table->item[11].number >= 10)
                printf("│%d   │\t\t", table->item[11].number);
            else
                printf("│%d    │\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│%d   │\n", table->turnCard.number);
            else
                printf("│%d    │\n", table->turnCard.number);
            printf("└─────┘\t\t└─────┘\n\n");
            //jogador 1
            printf("\t\t┌─────┐\n");
            if (table->item[8].number >= 10)
                printf("\t\t│   %d│\n", table->item[8].number);
            else
                printf("\t\t│    %d│\n", table->item[8].number);
            switch (table->item[8].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[8].number >= 10)
                printf("\t\t│%d   │\n", table->item[8].number);
            else
                printf("\t\t│%d    │\n", table->item[8].number);
            printf("\t\t└─────┘\n\n");
            getchar();
            system("clear");
            
            //
            //todos os jogadores e o vira
            //jogador 3
            printf("\t\t┌─────┐\n");
            if (table->item[10].number >= 10)
                printf("\t\t│   %d│\n", table->item[10].number);
            else
                printf("\t\t│    %d│\n", table->item[10].number);
            switch (table->item[10].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[10].number >= 10)
                printf("\t\t│%d   │\n", table->item[10].number);
            else
                printf("\t\t│%d    │\n", table->item[10].number);
            printf("\t\t└─────┘\n\n");

            //cartas 4 turn car e 2;
            printf("┌─────┐\t\t┌─────┐\t\t┌─────┐\n");
            // jogador 4
            if (table->item[11].number >= 10)
                printf("│   %d│\t\t", table->item[11].number);
            else
                printf("│    %d│\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│   %d│\t\t", table->turnCard.number);
            else
                printf("│    %d│\t\t", table->turnCard.number);
            // jogador 2
            if (table->item[9].number >= 10)
                printf("│   %d│\n", table->item[9].number);
            else
                printf("│    %d│\n", table->item[9].number);
            //jogador 4
            switch (table->item[11].suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            // carta do vira
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            //jogador 2
            switch (table->item[9].suit)
            {
            case clubs:
                printf("│  ♣  │\n");
                break;

            case hearts:
                printf("│  ♥  │\n");
                break;

            case spades:
                printf("│  ♠  │\n");
                break;
            case diamonds:
                printf("│  ♦  │\n");
            }
            //jogador 4
            if (table->item[11].number >= 10)
                printf("│%d   │\t\t", table->item[11].number);
            else
                printf("│%d    │\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│%d   │\t\t", table->turnCard.number);
            else
                printf("│%d    │\t\t", table->turnCard.number);
            //jogador 2
            if (table->item[9].number >= 10)
                printf("│%d   │\n", table->item[9].number);
            else
                printf("│%d    │\n", table->item[9].number);
            printf("└─────┘\t\t└─────┘\t\t└─────┘\n\n");
            //jogador 1
            printf("\t\t┌─────┐\n");
            if (table->item[8].number >= 10)
                printf("\t\t│   %d│\n", table->item[8].number);
            else
                printf("\t\t│    %d│\n", table->item[8].number);
            switch (table->item[8].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[8].number >= 10)
                printf("\t\t│%d   │\n", table->item[8].number);
            else
                printf("\t\t│%d    │\n", table->item[8].number);
            printf("\t\t└─────┘\n");
            getchar();
            system("clear");
        }
        else
        {
            //cartas 4 e turn car ;
            printf("\n\n\n\n\n\n┌─────┐\t\t┌─────┐\n");
            // jogador 4
            if (table->item[11].number >= 10)
                printf("│   %d│\t\t", table->item[11].number);
            else
                printf("│    %d│\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│   %d│\n", table->turnCard.number);
            else
                printf("│    %d│\n", table->turnCard.number);
            //jogador 4
            switch (table->item[11].suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            // carta do vira
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("│  ♣  │\n");
                break;

            case hearts:
                printf("│  ♥  │\n");
                break;

            case spades:
                printf("│  ♠  │\n");
                break;
            case diamonds:
                printf("│  ♦  │\n");
            }
            //jogador 4
            if (table->item[11].number >= 10)
                printf("│%d   │\t\t", table->item[11].number);
            else
                printf("│%d    │\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│%d   │\n", table->turnCard.number);
            else
                printf("│%d    │\n", table->turnCard.number);
            printf("└─────┘\t\t└─────┘\n\n");

            getchar();
            system("clear");
            
            //
            // 4 1 e turn
            //cartas 4 e turn car ;
            printf("\n\n\n\n\n\n┌─────┐\t\t┌─────┐\n");
            // jogador 4
            if (table->item[11].number >= 10)
                printf("│   %d│\t\t", table->item[11].number);
            else
                printf("│    %d│\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│   %d│\n", table->turnCard.number);
            else
                printf("│    %d│\n", table->turnCard.number);
            //jogador 4
            switch (table->item[11].suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            // carta do vira
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("│  ♣  │\n");
                break;

            case hearts:
                printf("│  ♥  │\n");
                break;

            case spades:
                printf("│  ♠  │\n");
                break;
            case diamonds:
                printf("│  ♦  │\n");
            }
            //jogador 4
            if (table->item[11].number >= 10)
                printf("│%d   │\t\t", table->item[11].number);
            else
                printf("│%d    │\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│%d   │\n", table->turnCard.number);
            else
                printf("│%d    │\n", table->turnCard.number);
            printf("└─────┘\t\t└─────┘\n\n");

            //jogador 1
            printf("\t\t┌─────┐\n");
            if (table->item[8].number >= 10)
                printf("\t\t│   %d│\n", table->item[8].number);
            else
                printf("\t\t│    %d│\n", table->item[8].number);
            switch (table->item[8].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[8].number >= 10)
                printf("\t\t│%d   │\n", table->item[8].number);
            else
                printf("\t\t│%d    │\n", table->item[8].number);
            printf("\t\t└─────┘\n");

            getchar();
            system("clear");
            
            //
            // jogador 4 1 2 e turn
            //cartas 4 turn car e 2;
            printf("\n\n\n\n\n\n┌─────┐\t\t┌─────┐\t\t┌─────┐\n");
            // jogador 4
            if (table->item[11].number >= 10)
                printf("│   %d│\t\t", table->item[11].number);
            else
                printf("│    %d│\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│   %d│\t\t", table->turnCard.number);
            else
                printf("│    %d│\t\t", table->turnCard.number);
            // jogador 2
            if (table->item[9].number >= 10)
                printf("│   %d│\n", table->item[9].number);
            else
                printf("│    %d│\n", table->item[9].number);
            //jogador 3
            switch (table->item[11].suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            // carta do vira
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            //jogador 2
            switch (table->item[9].suit)
            {
            case clubs:
                printf("│  ♣  │\n");
                break;

            case hearts:
                printf("│  ♥  │\n");
                break;

            case spades:
                printf("│  ♠  │\n");
                break;
            case diamonds:
                printf("│  ♦  │\n");
            }
            //jogador 4
            if (table->item[11].number >= 10)
                printf("│%d   │\t\t", table->item[11].number);
            else
                printf("│%d    │\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│%d   │\t\t", table->turnCard.number);
            else
                printf("│%d    │\t\t", table->turnCard.number);
            //jogador 2
            if (table->item[9].number >= 10)
                printf("│%d   │\n", table->item[9].number);
            else
                printf("│%d    │\n", table->item[9].number);
            printf("└─────┘\t\t└─────┘\t\t└─────┘\n\n");

            //jogador 1
            printf("\t\t┌─────┐\n");
            if (table->item[8].number >= 10)
                printf("\t\t│   %d│\n", table->item[8].number);
            else
                printf("\t\t│    %d│\n", table->item[8].number);
            switch (table->item[8].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[8].number >= 10)
                printf("\t\t│%d   │\n", table->item[8].number);
            else
                printf("\t\t│%d    │\n", table->item[8].number);
            printf("\t\t└─────┘\n");
            getchar();
            system("clear");
            

            //todos os jogadores e o vira
            //jogador 3
            printf("\t\t┌─────┐\n");
            if (table->item[10].number >= 10)
                printf("\t\t│   %d│\n", table->item[10].number);
            else
                printf("\t\t│    %d│\n", table->item[10].number);
            switch (table->item[10].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[10].number >= 10)
                printf("\t\t│%d   │\n", table->item[10].number);
            else
                printf("\t\t│%d    │\n", table->item[10].number);
            printf("\t\t└─────┘\n\n");

            //cartas 4 turn car e 2;
            printf("┌─────┐\t\t┌─────┐\t\t┌─────┐\n");
            // jogador 4
            if (table->item[11].number >= 10)
                printf("│   %d│\t\t", table->item[11].number);
            else
                printf("│    %d│\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│   %d│\t\t", table->turnCard.number);
            else
                printf("│    %d│\t\t", table->turnCard.number);
            // jogador 2
            if (table->item[9].number >= 10)
                printf("│   %d│\n", table->item[9].number);
            else
                printf("│    %d│\n", table->item[9].number);
            //jogador 3
            switch (table->item[11].suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            // carta do vira
            switch (table->turnCard.suit)
            {
            case clubs:
                printf("│  ♣  │\t\t");
                break;

            case hearts:
                printf("│  ♥  │\t\t");
                break;

            case spades:
                printf("│  ♠  │\t\t");
                break;
            case diamonds:
                printf("│  ♦  │\t\t");
            }
            //jogador 2
            switch (table->item[9].suit)
            {
            case clubs:
                printf("│  ♣  │\n");
                break;

            case hearts:
                printf("│  ♥  │\n");
                break;

            case spades:
                printf("│  ♠  │\n");
                break;
            case diamonds:
                printf("│  ♦  │\n");
            }
            //jogador 4
            if (table->item[11].number >= 10)
                printf("│%d   │\t\t", table->item[11].number);
            else
                printf("│%d    │\t\t", table->item[11].number);
            // carta do vira
            if (table->turnCard.number >= 10)
                printf("│%d   │\t\t", table->turnCard.number);
            else
                printf("│%d    │\t\t", table->turnCard.number);
            //jogador 2
            if (table->item[9].number >= 10)
                printf("│%d   │\n", table->item[9].number);
            else
                printf("│%d    │\n", table->item[9].number);
            printf("└─────┘\t\t└─────┘\t\t└─────┘\n\n");
            //jogador 1
            printf("\t\t┌─────┐\n");
            if (table->item[8].number >= 10)
                printf("\t\t│   %d│\n", table->item[8].number);
            else
                printf("\t\t│    %d│\n", table->item[8].number);
            switch (table->item[8].suit)
            {
            case clubs:
                printf("\t\t│  ♣  │\n");
                break;

            case hearts:
                printf("\t\t│  ♥  │\n");
                break;

            case spades:
                printf("\t\t│  ♠  │\n");
                break;
            case diamonds:
                printf("\t\t│  ♦  │\n");
            }
            if (table->item[8].number >= 10)
                printf("\t\t│%d   │\n", table->item[8].number);
            else
                printf("\t\t│%d    │\n", table->item[8].number);
            printf("\t\t└─────┘\n");
            getchar();
            system("clear");
        }
    }
}
void printScore(Configuration pontos)
{
    printf("Player 1 e 3: %d\tPlayer 2 e 4: %d\n", pontos.scoreVertical, pontos.scoreHorizontal);
    getchar();
    system("clear");
}