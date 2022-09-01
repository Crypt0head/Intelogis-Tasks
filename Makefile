all: task1 task2 task3 task4 task5

task1: build-task1
	echo Task1
	./Task1/bin/task1.out

task2: build-task2
	echo Task2
	./Task2/bin/task2.out

task3: build-task3
	echo Task3
	./Task3/bin/task3.out

task4: build-task4
	echo Task4
	./Task4/bin/task4.out

task5: build-task5
	echo Task5
	./Task5/bin/task5.out

build-task1:
	g++ -O3 includes/utils.h source/Cargo.cpp source/CargoCar.cpp Task1/task1.cpp -o Task1/bin/task1.out

build-task2:
	g++ -O3 includes/utils.h source/Cargo.cpp source/CargoCar.cpp source/CargoCar_Volumeless.cpp Task2/task2.cpp -o Task2/bin/task2.out

build-task3:
	g++ -O3 Task3/task3.cpp -o Task3/bin/task3.out

build-task4:
	g++ -O3 includes/utils.h source/Cargo.cpp source/CargoCar.cpp Task4/task4.cpp -o Task4/bin/task4.out

build-task5:
	g++ -O3 includes/utils.h source/Cargo.cpp source/CargoCar.cpp Task5/task5.cpp -o Task5/bin/task5.out

clear-all:
	rm -f Task1/bin/*.out
	rm -f Task2/bin/*.out
	rm -f Task3/bin/*.out
	rm -f Task4/bin/*.out
	rm -f Task5/bin/*.out