#include "pch.h"
#include <stdlib.h>
#include <iostream>
#include<conio.h>
#include <stdio.h>
#include <math.h>
#include <thread>
#include <ctime>
#include<pthread.h>

using namespace std;

unsigned time0, time1, time2,time3;

int elementos[100000];
int elementos2[100000];

void agregar();
void cuadrado();
void cuadrado2();
void cuadrado3();
void cuadrado4();
void cuadrado5();

int main() {

	agregar();
	time0 = clock();
	thread t1(cuadrado);
	t1.join();
	time1 = clock();
	double taim = (double(time1 - time0) / CLOCKS_PER_SEC);
	cout << "TIEMPO DE EJECUCION 1: " << taim << endl;
	time2 = clock();
	thread t2(cuadrado2);
	t2.join();
	thread t3(cuadrado3);
	t3.join();
	thread t4(cuadrado4);
	t4.join();
	thread t5(cuadrado5);
	t5.join();
	time3 = clock();
	double taim2 = (double(time3 - time2) / CLOCKS_PER_SEC);
	cout << "TIEMPO DE EJECUCION 1: " << taim << endl;
	cout << "TIEMPO DE EJECUCION 2: " << taim2 << endl;
	
	
	return 0;
}

void agregar() {
	for (int i = 0;i <= 100000;i++) {
		if (i!=elementos[i]) {
			elementos2[i] = i;
		}
	}
	return;
}

void cuadrado() {
	unsigned t0, t1;
	for (int i = 0;i <= 10000;i++) {
		elementos[i] = pow(elementos2[i], 2);
		cout << elementos2[i] << " AL CUADRADO = " << elementos[i] << endl;
	}
	return;
}

void cuadrado2() {
	for (int i = 0;i <= 2500;i++) {
		elementos[i] = pow(elementos2[i], 2);
		cout << elementos2[i] << " AL CUADRADO = " << elementos[i] << endl;
	}
	return;
}

void cuadrado3() {
	for (int i = 2501;i <= 5000;i++) {
		elementos[i] = pow(elementos2[i], 2);
		cout << elementos2[i] << " AL CUADRADO = " << elementos[i] << endl;
	}
	return;
}

void cuadrado4() {
	for (int i = 5001;i <= 7500;i++) {
		elementos[i] = pow(elementos2[i], 2);
		cout << elementos2[i] << " AL CUADRADO = " << elementos[i] << endl;
	}
	return;
}

void cuadrado5() {
	for (int i = 7501;i <= 10000;i++) {
		elementos[i] = pow(elementos2[i], 2);
		cout<<elementos2[i]<<" AL CUADRADO = "<<elementos[i]<<endl;
	}
	return;
}
