//
//  Airplane.cpp
//  AirplaneWar
//
//  Created by IronMan on 2018/4/19.
//

#include "Airplane.hpp"

static AirplaneHero* m_pInstance = nullptr;

AirplaneHero* AirplaneHero::getInstance()
{
    if(m_pInstance==nullptr)
    {
        m_pInstance = new AirplaneHero();
    }
    return m_pInstance;
}

void AirplaneHero::deleteInstance()
{
    if(m_pInstance)
    {
        delete m_pInstance;
        m_pInstance = nullptr;
    }
}
