.PHONY: clean All

All:
	@echo "----------Building project:[ GROUP-1 - Debug ]----------"
	@cd "GROUP-1" && "$(MAKE)" -f  "GROUP-1.mk"
clean:
	@echo "----------Cleaning project:[ GROUP-1 - Debug ]----------"
	@cd "GROUP-1" && "$(MAKE)" -f  "GROUP-1.mk" clean
