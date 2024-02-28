import requests
import sys

if len(sys.argv) != 2:
    sys.exit()

response = requests("https//-------------"+ sys.argv[1])
print(response.json)

print(json.dumps(response.json(), indent=2))