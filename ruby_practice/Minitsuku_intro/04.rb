# Rubyがミニツク・Ruby入門コース
# 4章

flag = false
unless flag then
  puts "偽ならば実行する"
end

puts "\n"

ary = ["foo", "bar", "baz"]
ary.each do |i|
  p i if i == "bar"
end