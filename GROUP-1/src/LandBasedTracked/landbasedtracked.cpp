#include "landbasedtracked.h"
#include<string.h>
#include<iostream>

/**
* @brief GoUp routine.  Robot moves in Up direction. 
* @param x,y  arecoordinates
* @return Nothing
*/
void rwa3::LandBasedTracked::GoUp(int x, int y)
{
    std::cout << "LandBasedTracked::GoUp is called" << std::endl;
}

/**
* @brief GODown routine. Robot moves in Down direction 
* @param x,y  arecoordinates
* @return Nothing
*/
void rwa3::LandBasedTracked::GoDown(int x,int y)
{
    std::cout << "LandBasedTracked::GoDown is called" << std::endl;
}

/**
* @brief TurnLeft routine. Robot moves in left direction 
* @param x,y  arecoordinates
* @return Nothing
*/
void rwa3::LandBasedTracked::TurnLeft(int x,int y)
{
    std::cout << "LandBasedTracked::TurnLeft is called" << std::endl;
}
/**
* @brief TurnRight routine. Robot moves in right direction 
* @param x,y  arecoordinates
* @return Nothing
*/
void rwa3::LandBasedTracked::TurnRight(int x,int y)
{
    std::cout << "LandBasedTracked::TurnRight is called" << std::endl;
}
/**
* @brief PickUp routine.The arm actuates to pick up the object 
* @param x,y  arecoordinates
* @return Nothing
*/

void rwa3::LandBasedTracked::PickUp(std::string){
    std::cout << "LandBasedTracked::PickUp is called" << std::endl;
}
/**
* @brief Release routine. The arm releases the object. 
* @param x,y  arecoordinates
* @return Nothing
*/
void rwa3::LandBasedTracked::Release(std::string){
    std::cout << "LandBasedTracked::Release is called" << std::endl;
}