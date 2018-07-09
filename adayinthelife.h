#ifndef ADAYINTHELIFE_H
#define ADAYINTHELIFE_H

#include "room.h"

class ADayInTheLife
{

private:
    void createRooms();
    Room *currentRoom;
public:
    ADayInTheLife();
    goRoom(int direction);
    void updateCurrentRoom(Room *newRoom);
    Room* getCurrentRoom();
    Room* getNorthRoom(Room* currentRoom);
    Room* getEastRoom(Room* currentRoom);
    Room* getSouthRoom(Room* currentRoom);
    Room* getWestRoom(Room* currentRoom);
};

#endif // ADAYINTHELIFE_H
