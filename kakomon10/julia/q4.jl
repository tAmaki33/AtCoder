function main()
	a = parse.(Int,readline())
	b = parse.(Int,readline())
	c = parse.(Int,readline())
	x = parse.(Int,readline())

	cnt=0
	for i=0:a
		for j=0:b
			for k=0:c
				if x == 500i+100j+50k
					cnt+=1
				end
			end
		end
	end
	println(cnt)
end

main()