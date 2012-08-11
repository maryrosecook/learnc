s = "mrc"
p s.split("").each_with_index.map{|x,i|x[0]*10**(i+1..s.length-1).reduce(0){|a,j|a+s[j].to_s.length}}.reduce{|a,x|a+x}

