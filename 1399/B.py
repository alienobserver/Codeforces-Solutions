t = int(input())
while t:
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    mna = min(a)
    mnb = min(b)
    ans = 0
    for i in range(n):
        ans += max(a[i] - mna, b[i] - mnb)
    print(ans)
    t-=1