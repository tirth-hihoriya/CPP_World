#include <iostream>

using namespace std;

class Player
{
    public:
    int x,y;
    int speed=10;

    int move(int xa,int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }

};

int main()
{
    Player player;
    player.x = 5;
    player.y = 10;
    player.move(2,3);

    cout << player.x << "  "  << player.y << endl;


}