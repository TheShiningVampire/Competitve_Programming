t = int(input())

while (t>0):
    n = int(input())
    fac= 1
    while(n>1):
        fac = fac*n 
        n = n-1
    
    print(fac)
    t = t-1