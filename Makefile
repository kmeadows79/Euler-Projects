.PHONY: clean All

All:
	@echo "----------Building project:[ 2-Even-Fibonacci-numbers - Debug ]----------"
	@cd "2-Even-Fibonacci-numbers" && "$(MAKE)" -f  "2-Even-Fibonacci-numbers.mk"
clean:
	@echo "----------Cleaning project:[ 2-Even-Fibonacci-numbers - Debug ]----------"
	@cd "2-Even-Fibonacci-numbers" && "$(MAKE)" -f  "2-Even-Fibonacci-numbers.mk" clean
