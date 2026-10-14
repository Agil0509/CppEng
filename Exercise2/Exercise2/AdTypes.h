#pragma once

#include <cstdint>

#include "AdConstants.h"


namespace Ad
{
namespace Types
{
enum class LaneAssociationTypes
{
    LEFT,
    CENTER,
    RIGHT,
    NONE,
};
struct VehicleType
{
    std::int32_t id;
    LaneAssociationTypes lane;
    float speed_mps;
    float distance_m;
};
} // namespace Types
} //namespace Ad
