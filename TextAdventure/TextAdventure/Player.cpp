#include "Player.h"
#include <algorithm>


Player::Player()
{
}

Player::~Player()
{
}

bool Player::FindSpell(Stringutil other)
{
    std::sort(spells.begin(), spells.end());

    int left = 0;
    int right;

    right = spells.size() - 1;
    while (left <= right)
    {


        int mid = (left + right) / 2;

        if (spells[mid] == other) {
            return true;
        }
        else if (spells[mid] < other) {
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
        
    }
    return false;
}
