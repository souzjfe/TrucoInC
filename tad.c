#include <stdio.h>
#include <stdlib.h>
#include "tad.h"
#include <time.h>

Deck *shuffle()
{
    Deck *deck;
    deck = (Deck *)malloc(sizeof(Deck));
    deck->top = -1;
    int i, j = 0;
    for (i = 1; i <= 7; i++)
    {
        deck->top++;
        deck->item[deck->top].number = i;
        deck->item[deck->top].suit = j;
        j++;
        if (j > 3)
            j = 0;
    }
    for (i = 10; i <= 12; i++)
    {
        deck->top++;
        deck->item[deck->top].number = i;
        deck->item[deck->top].suit = j;
        j++;
        if (j > 3)
            j = 0;
    }
    j = 1;
    for (i = 1; i <= 7; i++)
    {
        deck->top++;
        deck->item[deck->top].number = i;
        deck->item[deck->top].suit = j;
        j++;
        if (j > 3)
            j = 0;
    }
    for (i = 10; i <= 12; i++)
    {
        deck->top++;
        deck->item[deck->top].number = i;
        deck->item[deck->top].suit = j;
        j++;
        if (j > 3)
            j = 0;
    }
    j = 2;
    for (i = 1; i <= 7; i++)
    {
        deck->top++;
        deck->item[deck->top].number = i;
        deck->item[deck->top].suit = j;
        j++;
        if (j > 3)
            j = 0;
    }
    for (i = 10; i <= 12; i++)
    {
        deck->top++;
        deck->item[deck->top].number = i;
        deck->item[deck->top].suit = j;
        j++;
        if (j > 3)
            j = 0;
    }
    j = 3;
    for (i = 1; i <= 7; i++)
    {
        deck->top++;
        deck->item[deck->top].number = i;
        deck->item[deck->top].suit = j;
        j++;
        if (j > 3)
            j = 0;
    }
    for (i = 10; i <= 13; i++)
    {
        deck->top++;
        deck->item[deck->top].number = i;
        deck->item[deck->top].suit = j;
        j++;
        if (j > 3)
            j = 0;
    }
    return deck;
}
Cards takeoff(Deck *deck)
{
    srand(time(NULL));
    int i;
    int aux = 0;
    Cards card;
    card = deck->item[rand() % deck->top];
    for (i = 0; i <= deck->top; i++)
    {
        if (deck->item[i].suit == card.suit && deck->item[i].number == card.number)
        {
            aux++;
            deck->top--;
        }
        deck->item[i] = deck->item[i + aux];
    }
    return card;
}
Table *deal(Deck *deck)
{
    int i, j, k;
    Table *table;
    table = (Table *)malloc(sizeof(Table));
    table->size = 0;

    Player *hand[4];
    for (i = 0; i < 4; i++)
    {
        hand[i] = (Player *)malloc(sizeof(Player) * 4);
        hand[i]->size = -1;
    }
    table->turnCard = takeoff(deck);
    int number[10] = {3, 2, 1, 12, 11, 10, 7, 6, 5, 4};
    for (k = 0; k < 4; k++)
    {
        for (i = 0; i < 3; i++)
        {
            hand[k]->size++;
            hand[k]->item[i] = takeoff(deck);
        }

        for (i = 0; i < 3; i++)
        {

            if (table->turnCard.number == 12 && hand[k]->item[i].number == 1) // quanto menor a prioridade mais forte e
            {
                switch (hand[k]->item[i].suit)
                {
                case clubs:
                    hand[k]->item[i].priority = 1;
                    break;
                case hearts:
                    hand[k]->item[i].priority = 2;
                    break;
                case spades:
                    hand[k]->item[i].priority = 3;
                    break;
                case diamonds:
                    hand[k]->item[i].priority = 4;
                    break;
                }
            }
            else if (table->turnCard.number == 7 && hand[k]->item[i].number == 10)
            {
                switch (hand[k]->item[i].suit)
                {
                case clubs:
                    hand[k]->item[i].priority = 1;
                    break;

                case hearts:
                    hand[k]->item[i].priority = 2;
                    break;

                case spades:
                    hand[k]->item[i].priority = 3;
                    break;
                case diamonds:
                    hand[k]->item[i].priority = 4;
                    break;
                }
            }
            else if (hand[k]->item[i].number == (table->turnCard.number + 1))
            {
                switch (hand[k]->item[i].suit)
                {
                case clubs:
                    hand[k]->item[i].priority = 1;
                    break;

                case hearts:
                    hand[k]->item[i].priority = 2;
                    break;

                case spades:
                    hand[k]->item[i].priority = 3;
                    break;
                case diamonds:
                    hand[k]->item[i].priority = 4;
                    break;
                }
            }
            else
            {
                for (j = 0; j < 10; j++)
                {
                    if (hand[k]->item[i].number == number[j])
                        hand[k]->item[i].priority = j + 5;
                }
            }
        }
        table->players[k] = hand[k];
    }
    return table;
}

int setOrder(int size) // selecionar qual 'e o jogador apartir da jogada
{
    if (size == 0 || size == 4 || size == 8)
        return 0;
    else if (size == 1 || size == 5 || size == 9)
        return 1;
    else if (size == 2 || size == 6 || size == 10)
        return 2;
    else if (size == 3 || size == 7 || size == 11)
        return 3;
}
void giveSign(Player *players[])
{
    srand(time(NULL));
    int i, j;
    Cards auxCard;
    auxCard.priority = 8; // pq n quero passar sinal de veio;
    int luckLetterSign[7] = {0, 1, 0, 0, 0, 0, 0};
    for (j = 0; j < 2; j++)
    {
        for (i = 0; i <= players[j]->size; i++)
        {
            if (auxCard.priority > players[j]->item[i].priority) // aqui 'e uma forma de "passar sinal";
                auxCard = players[j]->item[i];
        }
        if (auxCard.priority != 8)
            players[j + 2]->letterSignAlly = auxCard;
        if (luckLetterSign[rand() % 7]) // chance do adversario ver o sinal;
            players[j + 1]->letterSignEnemy = auxCard;
        auxCard.priority = 8;
    }
    for (j = 2; j < 4; j++)
    {
        for (i = 0; i <= players[j]->size; i++)
        {
            if (auxCard.priority > players[j]->item[i].priority) // aqui 'e uma forma de "passar sinal";
                auxCard = players[j]->item[i];
        }
        if (auxCard.priority != 8)
            players[j - 2]->letterSignAlly = auxCard;
        if (luckLetterSign[rand() % 7]) // chance do adversario ver o sinal;
            players[j - 1]->letterSignEnemy = auxCard;
        auxCard.priority = 8;
    }
}
Cards setCardRand(Player *qualquer) // essa funcao escolhe aleatoriamente
{
    srand(time(NULL));
    int i = rand() % (qualquer->size + 1);
    Cards retorno = qualquer->item[i];
    qualquer->item[i] = qualquer->item[qualquer->size];
    qualquer->size--;

    return retorno;
}
void playRound()
{
    printf("a");
    Deck *deck;
    Table *table;
    Configuration opcoesDeJogo;
    opcoesDeJogo.scoreHorizontal = 0;
    opcoesDeJogo.scoreVertical = 0;
    opcoesDeJogo.gameMode = "normal";
    do
    {
        opcoesDeJogo.scorePlay[0] = 0;
        opcoesDeJogo.scorePlay[1] = 0;
        opcoesDeJogo.scorePlay[2] = 0;
        opcoesDeJogo.scorePlay[3] = 0;
        deck = shuffle();
        table = deal(deck);
        int opcaoSegundaRodada, opcaoTerceiraRodada; // 0,1,2,3 para ordem de iniciar 9,para n mostrar
        int posiVencedor, posiInicial;
        Cards winner;
        winner.priority = 15;
        for (table->size; table->size < 4; table->size++)
        {
            table->item[table->size] = setCardRand(table->players[table->size]);
            if (table->item[table->size].priority < winner.priority)
            {
                winner = table->item[table->size];
                posiVencedor = table->size;
            }
            else if (table->item[table->size].priority == winner.priority)
            {
                posiInicial = 0;
                opcaoTerceiraRodada == 9;
            }
        }
        
        opcoesDeJogo.scorePlay[posiVencedor]++;
        winner.priority = 15;
        posiInicial = posiVencedor;
        opcaoSegundaRodada = posiInicial;
        for (table->size; table->size < 8; table->size++)
        {
            table->item[table->size] = setCardRand(table->players[posiInicial]);
            if (opcoesDeJogo.scorePlay[0] == 0 && opcoesDeJogo.scorePlay[1] == 0 && opcoesDeJogo.scorePlay[2] == 0 && opcoesDeJogo.scorePlay[3] == 0) //significa que vale essa
            {
                if (table->item[table->size].priority == winner.priority)
                {
                    opcoesDeJogo.scorePlay[0] = opcoesDeJogo.scorePlay[1] = 1;
                    posiInicial = opcaoSegundaRodada;
                }
                else if (table->item[table->size].priority < winner.priority)
                {
                    winner = table->item[table->size];
                    posiVencedor = setOrder(table->size);
                    opcaoTerceiraRodada = 9;
                }
            }
            else
            {
                if (table->item[table->size].priority < winner.priority)
                {
                    winner = table->item[table->size];
                    posiVencedor = setOrder(table->size);
                }
                else if (table->item[table->size].priority == winner.priority)
                {
                    if (opcoesDeJogo.scorePlay[0] >= 1 || opcoesDeJogo.scorePlay[2] >= 1)
                        posiVencedor = 0;
                    else if (opcoesDeJogo.scorePlay[1] >= 1 || opcoesDeJogo.scorePlay[3] >= 1)
                        posiVencedor = 1;
                    opcaoTerceiraRodada = 9;
                }
            }
            posiInicial = setOrder(posiInicial + 1); //se a posição for 9 ==> posicao == 1
        }
        
        opcoesDeJogo.scorePlay[posiVencedor]++;
        if ((opcoesDeJogo.scorePlay[0] + opcoesDeJogo.scorePlay[2]) == 2)
        {
            opcoesDeJogo.scoreVertical++;
            opcaoTerceiraRodada = 9;
        }
        else if ((opcoesDeJogo.scorePlay[1] + opcoesDeJogo.scorePlay[3]) == 2)
        {
            opcoesDeJogo.scoreHorizontal++;
            opcaoTerceiraRodada = 9;
        }
        else
        {
            winner.priority = 15;
            posiInicial = posiVencedor;
            opcaoTerceiraRodada = posiInicial;
            for (table->size; table->size < 12; table->size++)
            {
                table->item[table->size] = setCardRand(table->players[posiInicial]);

                if (table->item[table->size].priority == winner.priority)
                {
                    if (opcaoSegundaRodada == 0 || opcaoSegundaRodada == 2)
                        opcoesDeJogo.scorePlay[0]++;
                    else if (opcaoSegundaRodada == 1 || opcaoSegundaRodada == 3)
                        opcoesDeJogo.scorePlay[1]++;
                }
                else if (table->item[table->size].priority < winner.priority)
                {
                    winner = table->item[table->size];
                    posiVencedor = setOrder(table->size);
                }

                posiInicial = setOrder(posiInicial + 1); //se a posição for 5 ==> posicao == 1
            }
            opcoesDeJogo.scorePlay[posiVencedor]++;
            if ((opcoesDeJogo.scorePlay[0] + opcoesDeJogo.scorePlay[2]) == 2)
                opcoesDeJogo.scoreVertical++;
            else if ((opcoesDeJogo.scorePlay[1] + opcoesDeJogo.scorePlay[3]) == 2)
                opcoesDeJogo.scoreHorizontal++;
        }
        
        //printTable(table, opcaoSegundaRodada, opcaoTerceiraRodada);
        //printScore(opcoesDeJogo);
    } while (opcoesDeJogo.scoreHorizontal < 11 && opcoesDeJogo.scoreVertical < 11);
}
