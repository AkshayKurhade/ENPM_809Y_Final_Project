#include "landbasedwheeled.h"
#include<string.h>
#include<iostream>

/** @brief The function increases the speed of the robot, which is translated 
 * by the number of cells in the maze that the robot can traverse in each step
*/
void SpeedUp(int){
    std::cout << "SpeedUp is Called" << std::endl;
}

/**
* @brief GoUp routine.  Robot moves in Up direction. 
* @param x,y  arecoordinates
* @return Nothing
*/
void rwa3::LandBasedWheeled::GoUp(int x, int y)
{
    std::cout << "LandBasedWheeled::GoUp is called" << std::endl;
}

/**
* @brief GODown routine. Robot moves in Down direction 
* @param x,y  arecoordinates
* @return Nothing
*/
void rwa3::LandBasedWheeled::GoDown(int x,int y)
{
    std::cout << "LandBasedWheeled::GoDown is called" << std::endl;
}
/**
* @brief TurnLeft routine. Robot moves in left direction 
* @param x,y  arecoordinates
* @return Nothing
*/
void rwa3::LandBasedWheeled::TurnLeft(int x,int y)
{
    std::cout << "LandBasedWheeled::TurnLeft is called" << std::endl;
}
/**
* @brief TurnRight routine. Robot moves in right direction 
* @param x,y  are coordinates
* @return Nothing
*/
void rwa3::LandBasedWheeled::TurnRight(int x,int y)
{
    std::cout << "LandBasedWheeled::TurnRight is called" << std::endl;
}

void rwa3::LandBasedWheeled::PickUp(std::string){
    std::cout << "LandBasedWheeled::PickUp is called" << std::endl;
}
/**
* @brief Release routine. The arm releases the object. 
* @param x,y  arecoordinates
* @return Nothing
*/
void rwa3::LandBasedWheeled::Release(std::string){
    std::cout << "LandBasedWheeled::Release is called" << std::endl;
}

