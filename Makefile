G = gcc
Gflags = -Wall -Werror -Wextra
all: s21_ceil s21_floor s21_log

s21_ceil: s21_ceil.c
		$(G) $(Gflags) -c s21_ceil.c 
		$(G) $(Gflags) s21_ceil.o -o s21_ceil

s21_floor: s21_floor.c
		$(G) $(Gflags) -c s21_floor.c 
		$(G) $(Gflags) s21_floor.o -o s21_floor

s21_log: s21_log.c
		$(G) $(Gflags) -c s21_log.c 
		$(G) $(Gflags) s21_log.o -o s21_log

clean:
		rm -rf s21_ceil.o s21_ceil s21_floor.o s21_floor s21_log.o s21_log

rebuild: clean all