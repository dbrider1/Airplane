//
//  BaseStruct.hpp
//  AirplaneWar
//
//  Created by IronMan on 2018/4/19.
//

#ifndef Airplane_hpp
#define Airplane_hpp

#include <stdio.h>

//飞机属性，包括主角和敌机          

class AirplaneBase
{
public:
    AirplaneBase(){}
    ~AirplaneBase(){}
    
};

class AirplaneHero:public AirplaneBase
{
public:
    static AirplaneHero* getInstance();
    static void deleteInstance();
private:
    int m_Hp;
    int m_nBullet;
    int m_nBulletDamage;
    int m_nDefendValue;
    float m_nSpeed;
    ~AirplaneHero(){}
private:
    AirplaneHero(){}
};

//敌机种类
typedef enum
{
    KONWN = 0,
    SMALL,
    MIDDLE,
    BIG,
    HUAGE,
    TITAN,
}EnumEnemy;

class AirplaneEnemy:public AirplaneBase
{
public:
    AirplaneEnemy(int kind):m_kind(kind){}
private:
    int m_Hp;
    int m_nBullet;
    int m_nBulletDamage;
    int m_nDefendValue;
    float m_nSpeed;
    int m_kind;
};

class AirplaneFactory:public AirplaneEnemy
{
public:
    void createAirplane(EnumEnemy kindAirplane)
    {
        AirplaneEnemy* enemy = new AirplaneEnemy(1);
        
        switch(kindAirplane)
        {
            case EnumEnemy::KONWN:
                
                break;
            case EnumEnemy::SMALL:
                break;
            case EnumEnemy::MIDDLE:
                break;
            case EnumEnemy::BIG:
                break;
            case EnumEnemy::HUAGE:
                break;
            case EnumEnemy::TITAN:
                break;
            default:
                break;
        }
        
        
    }
};


#endif /* BaseStruct_hpp */
