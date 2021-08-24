import numpy as np

def readPoints(fname:str) -> (object):
    fpts = open(fname, 'r')
    
    pts_num = 0
    for line in fpts.readlines():
        pts_num+=1
    fpts.close()
    
    #print(pts_num)
    ptsx = []
    ptsy = []
    
    fpts = open(fname, 'r')
    row = 0
    for line in fpts.readlines():
        r_list = line.split(',')
        j = 0
        #print("line"+str(line))
        #print("r_list"+str(r_list))
        
        #for conp in r_list:
        if(r_list[0]!='\n'):
            ptsx.append(float(r_list[0]))
            ptsy.append(float(r_list[1]))
        
        row+=1
    ptsCor = np.array((ptsx, ptsy))
    return ptsCor

def flight_by(x, y, z_ang, rot):
    assert drone(
        moveBy(x, y, z_ang, rot)
        >> FlyingStateChanged(state="hovering", _timeout=5)
    ).wait().success()
def flight_by2(x, y, z_ang, rot):
        moveBy(x, y, z_ang, rot)
    
    