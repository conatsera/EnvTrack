add_executable(gravity-ut
    gravity_ut.cc
)

target_link_libraries(gravity-ut
    PRIVATE
        TrackGravity
)

add_executable(gesture-ut
    gesture_ut.cc
)

target_link_libraries(gesture-ut
    PRIVATE
        TrackGesture
)

add_executable(eye-ut
    eye_ut.cc
)

target_link_libraries(eye-ut
    PRIVATE
        TrackEye
)

add_executable(llighthouse-ut
    llighthouse_ut.cc
)

target_link_libraries(llighthouse-ut
    PRIVATE
        TrackLLighthouse
)