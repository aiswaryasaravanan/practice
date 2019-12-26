scores=[100,100,50,40,40,20,10]
alice=[5,25,50,120]
res=[]
board=[]
for x in alice:
    board=scores[:]
    board.append(x)
    board=sorted(list(dict.fromkeys(board)),reverse=True)
    res.append(board.index(x)+1)
print(res)




