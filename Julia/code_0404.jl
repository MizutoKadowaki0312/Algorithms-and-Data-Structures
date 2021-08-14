function GCD(m, n)
    if n == 0
        return m
    else
        return GCD(n, m % n)
    end
end

GCD(36,12)
