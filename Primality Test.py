for _ in range(int(input())):
        n = int(input())
        prime = True
        if(n==0 or n==1):
            prime = False
        
        for i in range(2, (n//2)+1):
            if(n%i==0):
                prime = False
                break
        if prime:
            print("yes")
        else:
            print("no")
