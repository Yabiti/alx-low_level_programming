import requests
import sys

if len(sys.argv) != 2:
    sys.exit()

response = requests("https//---------------" + sys.qrgv[1])
print(response.json())