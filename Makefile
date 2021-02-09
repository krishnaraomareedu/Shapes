src = shape.cpp test_shape.cpp
project = Shapes
target: $(src)
	g++ $^ -lgtest -lgtest_main -lpthread -o $@
run: $(project)
	./$^