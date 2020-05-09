#define MAX_SIZE_DECK 40
#define MAX_SIZE_HAND 3
#define MAX_SIZE_TABLE 12
#define MAX_SIZE_PLAYERS 4

typedef enum
{
    clubs,
    hearts,
    spades,
    diamonds
} Suit;
typedef struct
{
    int scoreVertical;
    int scoreHorizontal;
    int scorePlay[MAX_SIZE_PLAYERS];
    char *gameMode; // "normal" "truco" "seis" "nove" "doze" "vale a primeira" "vale a segunda"

} Configuration;

typedef struct
{
    Suit suit;
    unsigned int priority;
    unsigned int number;
} Cards;

typedef struct
{
    int top;
    Cards item[MAX_SIZE_DECK];
} Deck;

typedef struct
{
    int size;
    Cards item[MAX_SIZE_HAND];
    Cards letterSignAlly;
    Cards letterSignEnemy;
} Player;

typedef struct
{
    int size;
    Cards item[MAX_SIZE_TABLE];
    Cards turnCard;
    Player *players[MAX_SIZE_PLAYERS];
} Table;

Deck *shuffle();
Cards takeoff(Deck *deck);
Table *deal(Deck *deck);
void printCard(Cards card);
void printDeck(Deck *deck);
void printHand(Player *player[]);
void printTable(Table *table, int second, int third);
void playRound();
void giveSign(Player *players[]);
Cards setCardRand(Player *qualquer);
void printScore(Configuration pontos);