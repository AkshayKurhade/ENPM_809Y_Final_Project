#pragma once
#include "landbasedrobot.h"
#include<string.h>
#include<iostream>

namespace rwa3
{
/**
* @brief This is a concrete class containing attributes and methods for landbased wheeled navigation and handling of objects 
*/
class LandBasedWheeled : public LandBasedRobot
{
	public:
/**
* @brief This is the default constructor for land based wheeled robot
* @param name Name is set to None.
* @param x x co-ordinate is set to 0.
* * @param y x co-ordinate is set to 0.
 */
    LandBasedWheeled(std::string name="none", int x=0, int y=0)
    : LandBasedRobot(name,x,y)
    {};
    
    ~LandBasedWheeled(){
    //std::cout << "Destructor LandBasedWheeled" << std::endl;     
    };
    
    void SpeedUp(int);
    virtual void GoUp(int, int) override;
    virtual void GoDown(int,int) override;
    virtual void TurnLeft(int,int) override;
    virtual void TurnRight(int,int) override;
    virtual void PickUp(std::string) override;
    virtual void Release(std::string) override;
    
    
protected:
    int wheel_number;
    std::string *wheel_type;
};

}

