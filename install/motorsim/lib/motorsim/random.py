import yaml
import random2
data = {}

with  open('/home/kireiji/RoboticsDev_ws/src/motorsim/via_point/via_point.yaml', 'w') as file:
    yaml.dump({},file)
    data = {'targets': []}

for i in range(20):
    rand = random2.uniform(0.0, 100.0)
    data['targets'].append(rand)
    
    
with  open('/home/kireiji/RoboticsDev_ws/src/motorsim/via_point/via_point.yaml', 'w') as file:
    yaml.dump(data,file)
    
    
