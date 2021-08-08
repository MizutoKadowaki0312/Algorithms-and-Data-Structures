N = 5
v = 7
A = [4 3 12 7 11]

exist = false

for i in 1:length(A)
    if A[i] == v
        exist = true
    end
end

if exist
    println("Yes")
else
    println("No")
end