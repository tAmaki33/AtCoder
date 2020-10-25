function main()
	N = parse.(Int,readline())
	inputs = [parse.(Int,split(readline())) for _=1:N]
	
	p=0
	cnt=0
	for input in inputs
		if input[1] == input[2]
			p+=1
		else
			p=0
		end
		if p ==3
			cnt+=1
		end
	end
	println(cnt > 0 ? "Yes" : "No")
end

main()