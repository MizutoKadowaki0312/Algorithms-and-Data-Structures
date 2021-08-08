function is_prime(N)
    if N <= 1
        return false
    end
    for i in 2:N
        if N % i == 0
            println("最小公倍数p = $i")
            q = N / i
            println("q = N/i = $q")
            return false
        end
        return true
    end
end

@time is_prime(71919919)