#include "room.h"

Room::Room(QString description, QString roomImageLocation, int index)
{
    this->description = description;
    this->roomImageLocation = roomImageLocation;
    this->index = index;
}

QString Room::shortDescription(){

    return description;
}

QString Room::getImageLocation(){

    return roomImageLocation;
}

void Room::setExits(Room *north, Room *east, Room *south, Room *west)
{
    exits[NORTH] = north;
    exits[EAST] = east;
    exits[SOUTH] = south;
    exits[WEST] = west;
}


Room* Room::nextRoom(int direction){

    Room* next = exits[direction];

    return next;
}

int Room::indexOfRoom(){

    return index;
}





