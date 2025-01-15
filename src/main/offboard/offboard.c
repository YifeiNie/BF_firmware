
#include <stdint.h>
#include <stdbool.h>
#include "offboard/offboard.h"

offboard_t offboard;

float Get_offboard_thrust(void)
{
    return offboard.thrust;
}
