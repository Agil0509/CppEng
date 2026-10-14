#pragma once

#include <array>
#include <cstdint>

#include "AdConstants.h"


namespace Ad
{
namespace Types
{

using namespace Ad::Constants;

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

struct NeighborVehiclesType
{
    std::array<VehicleType, NUM_VEHILCLES_ON_LANE> vehicle_left_lane;
    std::array<VehicleType, NUM_VEHILCLES_ON_LANE> vehicle_center_lane;
    std::array<VehicleType, NUM_VEHILCLES_ON_LANE> vehicle_right_lane;
};
} // namespace Types
} //namespace Ad
