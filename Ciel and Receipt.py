# cook your dish here
for i in range(int(input())):
        n=int(input())
        count=0
        for i in range(11,-1,-1):
                count+=n//pow(2,i)
                n%=pow(2,i)
        print(count)
