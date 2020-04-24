a = int(input())
for i in range(a):
    x = int(input())
    
    m = set(map(int,input().split()))
    y = int(input())
    n = set(map(int,input().split()))
    if(m.intersection(n)==m):
        print("True")
    else:
        print("False")# Enter your code here. Read input from STDIN. Print output to STDOUT


    