import sys

try:
    print("do you have some explanations", sys.argv[1])
except IndexError:
    print("Too few arguments")