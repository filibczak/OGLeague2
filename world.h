#ifndef WORLD_H
#define WORLD_H

#include <memory>
#include "dep/wink.hpp"
#include "dep/r3d.hpp"
#include "objectmanager.h"

class World
{
private:
    ObjectManager mObjectManager;
    r3dNavGrid mGrid;
    std::string mLevelName;
public:
    World();
    ObjectManager &objectmanager();
    void init();
    std::string levelName() const;
    void setLevelName(const std::string &levelName);
    void LoadWorld();
};

#endif // WORLD_H