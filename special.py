word=input()
n=0
for i in range(len(word)):
  if(word[i].isdigit()!=True and word[i].isalpha()!=True):
    n=n+1
print(n)
