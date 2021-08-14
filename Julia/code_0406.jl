function fibo(N)
    println("fibo($N)を呼び出しました．")

    # ベースケース
    if N == 0
        return 0
    elseif N == 1
        return 1
    else
        result = fibo(N - 1) + fibo(N - 2);
        println("fibo($N) = $result")

        """
        println()で処理を終えると，関数がNothing型になるので，@ showやreturnで数値を返すこと．
        """

        return result
    end
end


fibo(6)