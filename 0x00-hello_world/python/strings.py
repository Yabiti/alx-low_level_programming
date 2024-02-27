try:
    open('database')
except OSError:
    raise RuntimeError from None