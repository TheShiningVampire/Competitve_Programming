t = int(input())

for _ in range(t):
    a = int(input())
    count = 0
    while (a>0):
        count += a//5
        a = a//5

    print(count)# cook your dish here
