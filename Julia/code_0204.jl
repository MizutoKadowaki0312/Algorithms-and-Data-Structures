function calc_dist(x1, y1, x2, y2)
    return sqrt((x1 - x2)^2 + (y1 - y2)^2)
end

"""
値はREADME.md参照．
x座標の値はx配列に，y座標の値はy配列に入れている．
"""

x = [1,2,5]
y = [2,3,2]

minimum_dist = 100000000.0

for i in 1:length(x)
    for j in (i + 1):length(y)
        dist_i_j = calc_dist(x[i], y[i], x[j], y[j])
        println("distance = $dist_i_j")

        if dist_i_j < minimum_dist
            minimum_dist = dist_i_j
        end
    end
end

println("minimum_dist = $minimum_dist")