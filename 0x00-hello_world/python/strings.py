def func():
    raise ConnectionError

try:
    func()
except ConnectionError as exc:
    raise