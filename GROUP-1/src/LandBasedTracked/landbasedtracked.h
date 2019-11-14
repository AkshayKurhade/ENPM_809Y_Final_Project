#pragma once
#include "landbasedrobot.h"
#include<string.h>
#include<iostream>

namespace rwa3
{
	/**
* @brief This is a concrete class containing attributes and methods for landbased tracked navigation and handling of objects 
*/
 class LandBasedTracked : public LandBasedRobot
{
	public:
	/**
* @brief This is the default constructor for land based tracked robot
* @param name Name is set to None.
* @param x x co-ordinate is set to 0.
* * @param y x co-ordinate is set to 0.
 */
    LandBasedTracked(std::string name="none", int x=0, int y=0)
    : LandBasedRobot(name,x,y)
     {
        };
    
    ~LandBasedTracked(){
    //std::cout << "Destructor LandBasedTracked" << std::endl;     
    };
    
    virtual void GoUp(int, int) override;
    virtual void GoDown(int,int) override;
    virtual void TurnLeft(int,int) override;
    virtual void TurnRight(int,int) override;
    virtual void PickUp(std::string) override;
    virtual void Release(std::string) override;
    
    std::string *track_type;

};

}

