# Calculating relative transformation between body frames
# e.g. cam0 to cam1 (mynteye)

import numpy as np
from numpy.linalg import inv

### method 1
R = np.matrix([[0.999977157990771, -0.005868144222728206, -0.003353860474561389],
              [0.005862452793314005, 0.999981363334493, -0.0017042977838046508],
              [0.0033637990349794076, 0.0016845970055114656, 0.9999929234694525]])

t = np.matrix([[-0.11540937718118167],
              [-0.0004241454565239301],
              [-0.0011846708360299869]])

t_ = - np.matmul(inv(R), t)


### method 2
T = np.matrix([[0.9999697620802357, -0.005566703043559188, 0.005430169648418454, -0.1173514388708759],
               [0.005578050930814223, 0.9999822857950144, -0.002076883237090139, -0.0005192495776083523],
               [-0.005418512065043198, 0.0021071101993233076, 0.9999830997639899, 0.0007600111555135342],
               [0.0, 0.0, 0.0, 1.0]])

T_ = inv(T)