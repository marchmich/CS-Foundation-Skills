serial-skills: serial-skills.c
    gcc serial-skills.c -o serial-skills

clean:
    rm -f serial-skills

run:
	time ./serial-skills -a 1 -b 1000000000
