//nesting of structures



#include<stdio.h>
int main()
{
    struct pokemon   
    {
         int hp;
         int speed;
         int attack;
         int tier;
    }pikachu,charizard;
    
    struct legend_pokemon{
        int special;
        struct pokemon x;
    };
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';
    
    printf("%d",pikachu.attack);
    
     
    charizard.attack=130;
    charizard.hp=60;
    charizard.speed=120;
    charizard.tier='S';
    return 0;
}