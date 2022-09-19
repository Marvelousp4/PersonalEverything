num = 0
number = 0
with open('almost.txt', encoding='utf-8') as file:
    for i in file:
        num = 0
        number += 1
        for j in i:
            if j == ':':
                num += 1
                if num == 2:
                    print(number)
                    print(i)
                if num == 0:
                    print(i)