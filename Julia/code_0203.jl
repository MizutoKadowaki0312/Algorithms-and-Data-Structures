count = 0

N = 100

for i in 1:100
    if i % 2 == 0
        println("i = $i")
        count += 1
    end
end

println("count = $count")