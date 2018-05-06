//
//  GameManager.hpp
//  AirplaneWar
//
//  Created by IronMan on 2018/4/18.
//

#ifndef GameManager_h
#define GameManager_h

#include <stdio.h>


class GameManager
{
public:
    static GameManager* getInstance();
    static void deleInstance();
    bool initGame();
    void gameBegin(int nLevel);
    void gamePause();
    void gameResume();
    void gameEnd();
    bool gameWin();
    bool gameLose();
private:
    //单例构造函数要在private中
    GameManager(){}
private:
    
    unsigned int m_nLevel;
};

#endif /* GameManager_ */
