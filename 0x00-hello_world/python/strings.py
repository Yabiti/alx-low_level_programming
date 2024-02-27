def func():
    raise ConnectionError

try:
    func()
except ConnectionError as exc:
    raise RuntimeError("failed to open") from exc