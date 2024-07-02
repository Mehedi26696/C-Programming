//Initialization


#include<stdio.h>
int main()
{
    struct pokemon  //user defined data type
    {
         int hp;
         int speed;
         int attack;
         int tier;
    };
    struct pokemon pikachu;  //create a variable named pikachu
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';
    
    printf("%d",pikachu.attack);
    
    struct pokemon charizard;
    charizard.attack=130;
    charizard.hp=60;
    charizard.speed=120;
    charizard.tier='S';
    return 0;
}