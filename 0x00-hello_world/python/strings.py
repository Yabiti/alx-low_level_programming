import sys

try:
    print("hello my name is", sys.argv[1])
except IndexError:
    print("too few arguments")
