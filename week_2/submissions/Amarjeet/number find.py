mylist=[]
newlist=[]
N=int(input("Enter size of the list:\n"))
 
for i in range(0,N):
    temp=int(input("Enter number to append:\n"))
    mylist.append(temp)
 
print(mylist)
X=int(input("enter the no.you want to find:"))
from itertools import combinations
comb=combinations(mylist,4)
for j in list(comb):
    newlist.append(j)
    
l=0

for num in range(0,len(newlist)-1):
    sum1=sum(newlist[num])
    if sum1==X:
        l=1
if l==1:
    print(1)
else:
    print(0)
        
