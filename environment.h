#ifndef ENVTRACK_ENVIRONMENT_H
#define ENVTRACK_ENVIRONMENT_H

#include "device/piece.h"

#include <vector>

namespace EnvTrack {

template<unsigned int piece_count>
struct TrackedDevice {
    const unsigned int piece_count_ = piece_count;
    Device::PieceHandle pieces_[piece_count];
};

typedef struct {
    const unsigned int piece_count_;
    Device::PieceHandle* pieces_;
} TrackedDevice_t;

class MobileObject {
public:
    MobileObject();
    ~MobileObject();

    unsigned int GetTrackedDevices() const;
    unsigned int GetCarriedDevices() const;

private:
    unsigned int tracked_device_count_ = 0;
    unsigned int carried_device_count_ = 0;

    TrackedDevice_t* tracked_devices_;

    
};

class Environment {

};

}  // namespace EnvTrack

#endif