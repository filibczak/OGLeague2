#ifndef MANA_H
#define MANA_H

#include "replicate.hpp"

struct Mana
{
    Replicate<float> mCurrent;
    Replicate<float> mMax;
};

#endif // MANA_H
