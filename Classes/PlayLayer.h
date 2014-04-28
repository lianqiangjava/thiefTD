//
//  PlayLayer.h
//  thiefTD
//
//  Created by cocos2d-x on 14-4-11.
//
//

#ifndef __thiefTD__PlayLayer__
#define __thiefTD__PlayLayer__

#include <iostream>
#include "cocos2d.h"
#include "Enemy.h"
#include "Tower.h"

USING_NS_CC;
class PlayLayer : public Layer
{
public:
    PlayLayer();
    ~PlayLayer();
    
    virtual bool init() override;
    static Scene* createScene();
    CREATE_FUNC(PlayLayer);
    
    Vector<EnemyBase*> enemyVector;
private:
    SpriteBatchNode *spriteSheet;
    TMXTiledMap* map;
    TMXObjectGroup* objects;
    Vector<Node*> pointsVector; //enemy移动路径的点集
    
    void initPointsVector(float offX);
    void addEnemy();
    void addTower();
};

#endif /* defined(__thiefTD__PlayLayer__) */
