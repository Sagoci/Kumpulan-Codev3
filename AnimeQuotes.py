# from unittest import result
import requests

__author__="Xnuvers007"
__copyright__="Copyright (c) 2022 Xnuvers007"
__license__="MIT"
__version__="1.1"
__github__="https://github.com/Xnuvers007"

try:
    file = open("./animeQuotes.txt", "a")
except (FileNotFoundError, FileExistsError):
    pass

url = 'https://katanime.vercel.app/api/getrandom'

r = requests.get(url,headers={'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/91.0.4472.124 Safari/537.36'})

data = r.json()

# print(data['sukses'])
for data in data['result']:
    # print(data['id'])
    print("Bahasa Inggris : ",data['english'])
    print("Bahasa Inggris : ",data['english'],file=file)
    print("\n")
    print("Bahasa Indonesia : ",data['indo'])
    print("Bahasa Indonesia : ",data['indo'],file=file)
    print("\n")
    print("Karakter : ",data['character'])
    print("Karakter : ",data['character'],file=file)
    print("\n")
    print("anime : ",data['anime'])
    print("anime : ",data['anime'],file=file)
print("=========================================")
print("=========================================",file=file)
file.close()