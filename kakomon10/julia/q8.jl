function main()
	X,Y=parse.(Int,split(readline()))
	a,b,c,flg=-1,-1,-1,0
	for n= 0:X
		for m=0:X-n
			l=X-n-m
			if Y==1000n+5000m+10000l
				a=l
				b=m
				c=n
				flg+=1
				break
			end
		end
		if flg>0
			break
		end
	end
	println(string(a," ",b," ",c))
end

main()