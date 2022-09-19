from bs4 import BeautifulSoup
import requests

with open('a.html', encoding='utf-8') as file:
    html = file.read()
soup = BeautifulSoup(html, 'lxml')
f = open('result.txt', 'w', encoding='utf-8')

for k in soup.find_all('a'):
    if k['href']:
        url = k['href']
    print(url)
    ua = {'User-Agent':'Mozilla/5.0 (Windows NT 6.1; Win64; x64) Chrome/65.0.3325.181'}
    rqg=requests.get(url,headers=ua,timeout=3.0)
    #初始化HTML
    html = rqg.content.decode('utf-8')
    parse = BeautifulSoup(html, 'lxml')
    answer = parse.find_all('p')
    for i in answer:
        line = i.get_text()
        if line != '':
                if line[0] == '*':
                    for i in len(line):
                        print(line, file=f)
f.close()
