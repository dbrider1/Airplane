//
//  GameManager.cpp
//  AirplaneWar
//
//  Created by IronMan on 2018/4/18.
//

#include "./GameManager.h"
#include "Airplane.hpp"
//#include "EventManager.hpp"
//
static GameManager* m_pInstance = nullptr;

GameManager* GameManager::getInstance()
{
    if(m_pInstance==nullptr)
    {
        m_pInstance = new GameManager();
    }
    
    return m_pInstance;
}

void GameManager::deleInstance()
{
    if(m_pInstance)
    {
        delete m_pInstance;
    }
    m_pInstance = nullptr;
}

bool GameManager::initGame()
{
    //初始化相关变量，读取配置文件
    //飞机初始位置，血量，速度等
    
    return true;
}

void GameManager::gameBegin(int nLevel)
{
    initGame();
    int *a = nullptr;
    
//    EventManager::getInstance()->sendData(1,a,3);
    //通知客户端初始化场景
    //开始循环
}
