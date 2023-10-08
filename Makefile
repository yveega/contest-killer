CFLAGS = -O2 -std=gnu2x -Wall -Werror -Wno-pointer-sign -Werror=vla -lm

CC = gcc

EXECS=$(SOURCES:%.c=%)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
subscribe:
	/opt/ejudge/bin/ejudge-fuse --user s02220008 --url https://unicorn.ejudge.ru/cgi-bin/ ~/contest -o use_ino
