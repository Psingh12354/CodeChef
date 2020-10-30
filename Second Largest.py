n=int(input())
for _ in range(n):
        x,y,z=map(int,input().split())
        li=[]
        li.append(x)
        li.append(y)
        li.append(z)
        p=sorted(li)
        print(p[1])
        
    
