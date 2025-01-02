#!/bin/sh
#SBATCH --time=120
#SBATCH --job-name serial-skills
#SBATCH --nodes=1 
#SBATCH -c 1 # ask for one core
time ./serial-skills -a 1 -b 10000000
