#include<stdio.h>
int main(){
    struct Pokemon{
        int attack;
        int hp;
        int speed;
    };

    struct Pokemon pikachu;
    pikachu.attack = 80;
    pikachu.hp = 70;
    pikachu.speed = 100;
    printf("%d\n",pikachu.attack);

    struct Pokemon charizard;
    charizard.attack = 120;
    charizard.hp = 150;
    charizard.speed = 90;
    printf("%d\n",charizard.attack);

    // INPUT
    // struct Pokemon pikachu;
    // scanf("%d",&pikachu.attack);
    // scanf("%d",&pikachu.hp);
    // scanf("%d",&pikachu.speed);
    // printf("%d",pikachu.speed);
    return 0;
}