def Sticks(Ar):
    Ar.sort(reverse=True)
    while len(Ar) > 0:
        print len(Ar)
        cut = Ar.pop()
        while len(Ar) > 0 and Ar[-1] <= cut:
            Ar.pop()
 
if __name__ == '__main__':
    n = int(raw_input())
    Ar = map(int, raw_input().split())
    Sticks(Ar)