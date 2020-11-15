for _ in range(int(input())):
    n = int(input())
    List = []
    for _ in range(n):
        List.append(list(map(int, input().split())))
    for i in reversed(range(n-1)):
        for j in range(i+1):
           List[i][j] += max(List[i+1][j], List[i+1][j+1])
    print(List[0][0])
