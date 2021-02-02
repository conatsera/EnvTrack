#ifndef ENVTRACK_TRACK_GESTURE_H
#define ENVTRACK_TRACK_GESTURE_H

#include <cstdint>

namespace EnvTrack {

template<unsigned int dimension_count, unsigned int motion_count>
class Gesture {
public:
    Gesture();
    ~Gesture();

    unsigned int GetDimensionCount() const {
        return dimension_count;
    }

    unsigned int GetMotionCount() const {
        return motion_count;
    }

private:
    const unsigned int dimension_count_ = dimension_count;
    const unsigned int motion_count_ = motion_count;
};

namespace Gestures {

typedef std::uintptr_t Handle;

}  // namespace Gesture
}  // namespace EnvTrack
#endif