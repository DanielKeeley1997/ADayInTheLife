#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <QString>
#include <vector>
#include <map>
#include <utility>

#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3

using namespace std;
using std::vector;

class Room
{

private:
   QString description;
   QString roomImageLocation;
   int index;
   Room* exits[4];


public:
   Room(QString description, QString roomImageLocation = "", int index = 0);
   Room *nextRoom(int direction);
   void setExits(Room *north, Room *east, Room *south, Room *west);
   QString shortDescription();
   QString getImageLocation();
   int indexOfRoom();

};
#endif  //ROOM_H
