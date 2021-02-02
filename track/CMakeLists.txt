add_library(TrackGravity STATIC
    gravity.h
    gravity.cc
)

set(GESTURES
        approach
        tap)

set(GESTURE_INCLUDES "")

foreach(GESTURE ${GESTURES})

set(GESTURE_INCLUDES "${GESTURE_INCLUDES};gestures/${GESTURE}.h")

endforeach()

message(${GESTURE_INCLUDES})

add_library(TrackGesture STATIC 
    gesture.h
    gesture.cc
    gestures/manager.h
    ${GESTURE_INCLUDES}
)

add_library(TrackEye STATIC
    eye.h
    eye.cc
)

add_library(TrackLLighthouse STATIC
    llighthouse.h
    llighthouse.cc
)