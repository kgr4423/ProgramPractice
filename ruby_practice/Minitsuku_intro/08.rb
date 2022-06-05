# Rubyがミニツク・Ruby入門コース
# 8章

class Foo
  def foo
    puts("foo")
  end
end

class Bar < Foo
  def bar
    puts("bar")
  end
end

bar = Bar.new
bar.foo
bar.bar

###

class Foo
end
class Bar < Foo
end
class Baz < Bar
end
baz = Baz.new
p baz.is_a?(Baz)
p baz.is_a?(Bar)
p baz.is_a?(Foo)

###



