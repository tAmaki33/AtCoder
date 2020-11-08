function main()
	str = readline()
	cnt = 0
	for x = 1:3
		if str[x] == '1'
			cnt += 1
		end
	end
	println(cnt)
end

main()