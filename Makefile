PURPLE	= "\033[0;34m"
PINK	= "\033[0;35m"
RESET	= "\033[0m"

git:
	git add .
	@read -p "Enter the commit message: " halp; \
	git commit -m "$$halp"
	git push
	@echo $(PURPLE) ✨All added, commited and pushed✨ $(RESET)