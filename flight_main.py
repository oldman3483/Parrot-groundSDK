# -*- coding: UTF-8 -*-

import olympe, math
from olympe.messages.ardrone3.Piloting import TakeOff, moveBy, Landing
from olympe.messages.ardrone3.PilotingState import FlyingStateChanged
from utils import readPoints, flight_by

DRONE_IP = "10.202.0.1"


if __name__ == "__main__":
    drone = olympe.Drone(DRONE_IP)
    drone.connect()
    pathname = "./SP_buf5_H80_NTU_t1_path.txt"
    inpts = readPoints(pathname)
    print(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>")

    print(inpts[0][0])

    
    print("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<")
    
    assert drone(
        TakeOff()
        >> FlyingStateChanged(state="hovering", _timeout=5)
    ).wait().success()

    for i in range(794,804,1):
        assert drone(
            moveBy(float(inpts[0][i+10]-inpts[0][i]), float(inpts[1][i+10]-inpts[1][i+1]),0, math.pi)
            >> FlyingStateChanged(state="hovering", _timeout=5)
            ).wait().success()
        #flight_by(inpts[0][i+1]-inpts[0][i], inpts[1][i+1]-inpts[1][i+1], 0, 0)
        print(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>")
        print("Start flight X: "+str(inpts[0][i])+ "flight Y: "+str(inpts[1][i]))
        print("End flight X: "+str(inpts[0][i+1])+ "flight Y: "+str(inpts[1][i+1]))
        print("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<")

    assert drone(
        moveBy(10, 10, 0, math.pi)
        
        >> FlyingStateChanged(state="flying", _timeout=1)
    ).wait().success()
        
    
    
    
    assert drone(Landing()).wait().success()
    drone.disconnect()