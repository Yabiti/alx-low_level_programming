import requests
import sys

if len(sys.argv) != 2:
    sys.exit()

response = requests("https//-------------------" + sys.arv[1])
print(response.json)