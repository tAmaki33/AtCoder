function main()
	N=parse.(Int,readline())
	a=sort(parse.(Int,split(readline())),rev=true)
	
	diff=0
	for i=1:length(a)
		if i%2==0
			diff-=a[i]
		else
			diff+=a[i]
		end
	end
	println(diff)
end

main()