#to find maximum no and minimum no from the tuple
def max_min(data):
    l = data[0]
    s = data[0]
    for num in data:
        if num>l:
            l = num
        elif num<s:
            s = num
    return l,s
print("maximum no and minimum no from the tuple")
print(max_min((10,20,30,40,50,60,70,80,90,100)))
print(max_min((1,2,3,4,5,6,7,8,9,10)))

#list of tuple having numbers and iyts cube 
def list_of_tuple(n):
    l = []
    for i in range(1,n+1):
        l.append((i,i**3))
    return l
print("list of tuple having numbers and iyts cube")
print(list_of_tuple(5))

#adding a tuple at a list 
l = [(1,2),(3,4),(5,6)]
def add_tuple(l,t):
    l.append(t)
    return l
print("adding a tuple at a list ")
print(add_tuple(l,(7,8)))

#sum of all the elements of a tuple
def sum_of_tuple(t):
    s = 0
    for i in t:
        s = s+i
    return s
print("sum of all the elements of a tuple")
print(sum_of_tuple((1,2,3,4,5)))