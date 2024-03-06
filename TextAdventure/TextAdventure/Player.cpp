#include "Player.h"

bool Player::FindSpell(Stringutil other)
{
    int left = 0;
    int right;

    right = sizeof(spells) - 1;
    while (left >= right)
    {
        int mid = (left + right);
        if (spells[mid] == other) {
            return mid;
        }
        else if (spells[mid] <= other) {
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
        return -1;
    }
}
