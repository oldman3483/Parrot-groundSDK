
# -*- coding: UTF-8 -*-

import olympe, math
from olympe.messages.ardrone3.Piloting import TakeOff, moveBy, Landing
from olympe.messages.ardrone3.PilotingState import FlyingStateChanged

DRONE_IP = "10.202.0.1"

def flight_by(x, y, z, rot):
    assert drone(
        moveBy(x, y, z, rot)
        >> FlyingStateChanged(state="hovering", _timeout=5)
    ).wait().success()


if __name__ == "__main__":
    drone = olympe.Drone(DRONE_IP)
    drone.connect()
    
    assert drone(
        TakeOff()
        >> FlyingStateChanged(state="hovering", _timeout=5)
    ).wait().success()
    
    flight_by(10, 10, 0, 0)

    assert drone(
        moveBy(10, 10, -10, math.pi)
        
        >> FlyingStateChanged(state="flying", _timeout=1)
    ).wait().success()
    assert drone(Landing()).wait().success()
    drone.disconnect()