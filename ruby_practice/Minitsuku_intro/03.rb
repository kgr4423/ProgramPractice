# Rubyがミニツク・Ruby入門コース
# 2章

print("#{42 + 23}\n")

puts "\n"

greeting = "Hello, Ruby!"
print("greeting Hello, Ruby!\n")     #=> greeting Hello, Ruby!
print("#{greeting} Hello, Ruby!\n")  #=> Hello, Ruby! Hello, Ruby!

puts "\n"

p /bc/ =~ "abcde"

puts "\n"

ary = [1, 2, 3]
p ary[0]   #=> 1
p ary[1]   #=> 2
p ary[2]   #=> 3

puts "\n"

ary = [1, 2, 3]
ary[0] = 10
p ary  #=> [10, 2, 3]

puts "\n"

p [1, 2, 3].length  #=> 3

puts "\n"

["foo", "bar", "baz"].each do |n|
  puts(n)
end

puts "\n"

hash = {:foo => "foo", :bar => "bar", :baz => "baz"}
p hash[:foo]  #=> "foo"
p hash[:bar]  #=> "bar"
p hash[:baz]  #=> "baz"

puts "\n"

hash = {:ary => ["foo", "bar"]}
p hash[:ary][0]  #=> "foo"
p hash[:ary][1]  #=> "bar"

puts "\n"

hash = {:hash => {:foo => 23, :bar => 42}}
p hash[:hash][:foo]  #=> 23
p hash[:hash][:bar]  #=> 42

puts "\n"

hash = {:foo => 23}
hash.delete(:foo)
p hash  #=> {} 

puts "\n"

hash = {:foo => 23} 
p hash[:foo]  #=> 42
hash.clear
p hash        #=> {}

puts "\n"

