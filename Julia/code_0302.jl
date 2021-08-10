N = 5
v = 7
A = [4 , 3 , 12 , 7 , 11]

found_id = -1

for i in 1:length(A)
    if A[i] == v
        found_id = i
        break
    end
end

println("found_id = $found_id")


"""
findfirst()で出力することも可能．
"""

findfirst(isequal(v),A)