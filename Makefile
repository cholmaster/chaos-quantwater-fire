quant:
	gcc -o chaos chaos.c
	gcc -o pat pat.c
	gcc -o pattern pattern.c
	cp -Rf ./* /usr/bin
