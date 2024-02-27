from statistics import median
from math import isnan
from itertools import filterfalse

data = [20.7, float('nan'), 19.2, 18.3, float('nan')]
print(median(data))