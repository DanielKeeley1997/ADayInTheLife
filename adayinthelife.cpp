#include "adayinthelife.h"

ADayInTheLife::ADayInTheLife()
{
    createRooms();
}

void ADayInTheLife::createRooms()
{

    Room *welcomeScreen, *menuScreen, *bedroom, *corridor, *kitchen, *livingroom, *door, *collegeWalk, *computerBuilding, *lectureRoom, *labRoom, *library, *mainBuilding,
            *stables, *busStop, *costollos, *taxi, *casino;


   welcomeScreen = new Room("Welcome", "WelcomeScreen.jpg", 0);
   menuScreen = new Room("Menu", "Menu.png", 1);
   bedroom = new Room("Bedroom", "BedRoom.jpg", 2);
   corridor = new Room("Corridor", "Corridor.jpg", 3);

    /*kitchen = new Room("Kitchen");
    livingroom = new Room("Livingroom");
    door = new Room("Door");

    //Level 2 College
    collegeWalk = new Room("Walk to College");
    computerBuilding = new Room("CSIS Building");
    lectureRoom = new Room("Lecture");
    labRoom = new Room("Lab Room");
    library = new Room("Library");
    mainBuilding = new Room("Main Building");
    stables = new Room("Stables Pub");

    //Level 3 Night out
    busStop = new Room("Bus Stop");
    costollos = new Room("Costollos");
    taxi = new Room("Taxi");
    casino = new Room("Casino");

   */

   //                        N     E     S     W

   bedroom->setExits        (corridor, NULL, NULL, NULL);
   corridor->setExits       (NULL, NULL, bedroom, NULL);

   currentRoom = welcomeScreen;

}

Room* ADayInTheLife::getCurrentRoom()
{
    return currentRoom;
}

void ADayInTheLife::updateCurrentRoom(Room* newRoom)
{
    currentRoom = newRoom;
}

ADayInTheLife::goRoom(int direction){

    Room* nextRoom = currentRoom->nextRoom(direction);

    if (nextRoom != NULL)
         currentRoom = nextRoom;

}

Room* ADayInTheLife::getNorthRoom(Room* currentRoom)
{
    //current room x+1
    return currentRoom->nextRoom(NORTH);
}

Room* ADayInTheLife::getEastRoom(Room* currentRoom)
{
    //current room y+1
    return currentRoom->nextRoom(EAST);
}

Room* ADayInTheLife::getSouthRoom(Room* currentRoom)
{
    //current room y-1
    currentRoom->nextRoom(SOUTH);
}

Room* ADayInTheLife::getWestRoom(Room* currentRoom)
{
    //current room x-1
    currentRoom->nextRoom(WEST);
}
