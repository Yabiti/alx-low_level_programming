def f():
    raise OSError("operation falied")
excs = []
for i in range(3):
    