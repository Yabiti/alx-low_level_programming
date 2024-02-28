import sys

try:
    print("hello my name is", sys.argv[2])
except IndexError:
    print("Too few arguments")