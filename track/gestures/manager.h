#ifndef ENVTRACK_TRACK_GESTURES_MANAGER_H
#define ENVTRACK_TRACK_GESTURES_MANAGER_H

#include "tasks.h"

#include "../gesture.h"

namespace EnvTrack {
namespace Gestures {

class Manager {
public:
    Manager();
    ~Manager();

    Gestures::Handle AddTrackedGesture();

    void RemoveTrackedGesture(Gestures::Handle handle);

private:
    Task 

};

}  // namespace Gestures
}  // namespace EnvTrack

#endif