def pro(F,FT):
    return [F[0]*FT[0],F[1]*FT[1],F[2]*FT[2],F[3]*FT[3],F[4]*FT[4],F[5]*FT[5],F[6]*FT[6]]
def NOC(N):
    if(N==1):
        return 10
    F=[3,4,4,5,3,5,2]
    I=[2,1,2,1,2,1,1]    
    F1=[1,1,1,0,0,0,0]
    F2=[2,1,0,1,0,0,0]
    F3=[1,0,1,1,1,0,0]
    F4=[0,1,2,1,0,1,0]
    F5=[0,0,1,0,1,1,0]
    F6=[0,0,0,1,2,1,1]
    F7=[0,0,0,0,0,1,1]
    for i in range(1,N-1):
        F=[sum(pro(F,F1)),sum(pro(F,F2)),sum(pro(F,F3)),sum(pro(F,F4)),sum(pro(F,F5)),sum(pro(F,F6)),sum(pro(F,F7))]
    return sum(pro(I,F))
for i in range(1,10):
    print("Count for numbers of length "+str(i)+": "+str(NOC(i)))
