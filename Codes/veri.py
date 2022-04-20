print("Enter m value");
m = int(input());
print("Enter n value");
n = int(input());
print("Enter a_m value");
a_m = int(input());
print("Enter a_n value");
a_n= int(input());
print("d comes out to be ");
d = (a_m - a_n) / (m - n);
print(d);
print ("a comes out to be ");
a = a_m - (m-1)*d;
print(a);
print("let k be")
k = int (input());
print("Sum till kth term is ")
S_k = (k/2)*((2*a) + (k-1)*d);
print(S_k);
