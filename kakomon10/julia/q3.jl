function main()
	N = parse.(Int, readline())
	arr = parse.(Int, split(readline()))
	cnt=0
	while(true)
		flg = true
		for i = 1:N
			flg = arr[i]%2==0
			if flg
				arr[i]/=2
			else
				break
			end
		end

		if flg
			cnt+=1
		else
			println(cnt)
			break
		end
	end
end

main()