#ifndef ENVTRACK_DEVICE_PIECE_H
#define ENVTRACK_DEVICE_PIECE_H

#include <cstdint>

namespace EnvTrack {
namespace Device {

enum Type {
    GESTURE,
    GRAVITY,
    LLIGHTHOUSE,
    INVERSE_LLIGHTHOUSE,
    ACCELEROMETER,
    THERMOSTAT
};

enum State {
    OFF = 0,
    ON = 1,  // >0 always represents an operating device
    ACTIVE,
    TWT,     // Target wake time device. >50% asleep
    SLEEP,
};

template<Type type>
class Piece {
public:
    Piece();
    ~Piece();

    State GetState() const {
        return state_;
    }



private:
    Type type_ = type;
    State state_ = State::OFF;
};

typedef uint32_t PieceHandle;

}  // Device
}  // namespace EnvTrack

#endif