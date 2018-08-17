matrix=[[1,2,3],[2,2,4],[2,5,2]]
firstD=0
secondD=0

i=0
while i<3:
        

        firstD=firstD+matrix[i][i];
        secondD= secondD+matrix[i][2-i];
        i=i+1


print("sum of first diagonal is ",firstD)
print("\n sum of second diagonal is ",secondD)
print('Absolute value or Magnitude of complex is:', abs(firstD-secondD))
