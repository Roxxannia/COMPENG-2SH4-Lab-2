#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "CuTest.h"
#include "Questions.h"
    

    
    
//=========Question 1==================================
void TestQ1_add(CuTest *tc) {

	int n = 5;
	double input1[5] = {3.60, 4.78, 6.00, 10.00, 0.01};
	double input2[5] = {1.50, 2.00, 3.30, 9.90, 1.00};
	double actual[5];
	double expected [5] = {5.10, 6.78, 9.30, 19.90, 1.01};
	add_vectors(input1,input2,actual,n);
	int i;
	for (i=0; i<n; i++)
		CuAssertDblEquals(tc, expected[i], actual[i],0.009);
}


//=========Additional Test Cases==================================
void TestQ1_add1(CuTest *tc) {

	int n = 7;
	double input1[7] = {-5.00, 6.03, 9.75, 1.00, 0.50, 20.55, 7.89};
	double input2[7] = {8.00, -0.35, -10.00, 9.90, 3.45, -5.67, 10.84};
	double actual[7];
	double expected [7] = {3.00, 5.68, -0.25, 10.90, 3.95, 14.88, 18.73};
	add_vectors(input1,input2,actual,n);
	int i;
	for (i=0; i<n; i++)
		CuAssertDblEquals(tc, expected[i], actual[i],0.009);
}

void TestQ1_add2(CuTest *tc) {

	int n = 10;
	double input1[10] = {42.71, -16.55, -21.98, -39.45, -47.37, 42.82, 5.83, -48.83, -13.54, 37.68};
	double input2[10] = {-12.68, 9.27, -29.35, 39.02, 7.44, 0.55, -6.48, -40.84, 21.38, 9.84};
	double actual[10];
	double expected [10] = {30.03, -7.28, -51.33, -0.43, -39.93, 43.37, -0.65, -89.67, 7.84, 47.52};
	add_vectors(input1,input2,actual,n);
	int i;
	for (i=0; i<n; i++)
		CuAssertDblEquals(tc, expected[i], actual[i],0.009);
}

void TestQ1_add3(CuTest *tc) {

	int n = 3;
	double input1[3] = {40.85, -46.19, 39.36};
	double input2[3] = {3.20, -23.14, 42.77};
	double actual[3];
	double expected [3] = {44.05, -69.33, 82.13};
	add_vectors(input1,input2,actual,n);
	int i;
	for (i=0; i<n; i++)
		CuAssertDblEquals(tc, expected[i], actual[i],0.009);
}


//============//  
void TestQ1_scalar_prod(CuTest *tc) {

	int n = 5;
	double input1[5] = {3.60, 4.78, 6.00, 10.00, 0.01};
	double input2[5] = {1.50, 2.00, 3.30, 9.90, 1.00};
	double expected=133.770 ;
	double actual = scalar_prod(input1,input2,n);

	CuAssertDblEquals(tc, expected, actual,0.009);
}

//===================Additional Test Cases=======================

void TestQ1_scalar_prod1(CuTest *tc) {

	int n = 20;
	double input1[20] = {35.37, -8.29, 12.38, -14.99, -43.44, 33.80, -41.42 ,-18.35, 
						28.36, -27.20, -24.84, 37.46,- 9.42, -33.35, -16.43, 24.43, 
						31.92, -23.69, 11.29, -18.82};
	double input2[20] = {35.37, -8.29, 12.38, -14.99, -43.44, 33.80, -41.42 ,-18.35, 
						28.36, -27.20, -24.84, 37.46,- 9.42, -33.35, -16.43, 24.43, 
						31.92, -23.69, 11.29, -18.82};
	double expected=14473.43;
	double actual = scalar_prod(input1,input2,n);

	CuAssertDblEquals(tc, expected, actual,0.009);
}

void TestQ1_scalar_prod2(CuTest *tc) {

	int n = 2;
	double input1[2] = {7.89, 14.57};
	double input2[2] = {67.33, -19.14};
	double expected= 252.36;
	double actual = scalar_prod(input1,input2,n);

	CuAssertDblEquals(tc, expected, actual,0.009);
}

void TestQ1_scalar_prod3(CuTest *tc) {

	int n = 10;
	double input1[10] = {-13.80, -35.29, 5.52, 8.18, -11.96, 4.99, -47.76, 19.83, 32.11, 42.12};
	double input2[10] = {38.04, -45.73, -42.91, -48.06, -28.47, 8.55, -40.30, 14.28, -19.19, -48.95};
	double expected=371.97;
	double actual = scalar_prod(input1,input2,n);

	CuAssertDblEquals(tc, expected, actual,0.009);
}


//================//
void TestQ1_norm(CuTest *tc) {

	int n = 5;
	double input1[5] = {3.60, 4.78, 6.00, 10.00, 0.01};
	double expected=13.108 ;
    double actual = norm2(input1,n);

    CuAssertDblEquals(tc, expected, actual,0.009);
}
//====================Additional Test Cases=====================
void TestQ1_norm1(CuTest *tc) {

	int n = 20;
	double input1[20] =  {35.37, -8.29, 12.38, -14.99, -43.44, 33.80, -41.42 ,-18.35, 
						28.36, -27.20, -24.84, 37.46,- 9.42, -33.35, -16.43, 24.43, 
						31.92, -23.69, 11.29, -18.82};
	double expected= 120.31;
    double actual = norm2(input1,n);

    CuAssertDblEquals(tc, expected, actual,0.009);
}

void TestQ1_norm2(CuTest *tc) {

	int n = 10;
	double input1[10] = {-13.80, -35.29, 5.52, 8.18, -11.96, 4.99, -47.76, 19.83, 32.11, 42.12};
	double expected=84.74;
    double actual = norm2(input1,n);

    CuAssertDblEquals(tc, expected, actual,0.009);
}

void TestQ1_norm3(CuTest *tc) {

	int n = 2;
	double input1[2] = {7.89, 14.57};
	double expected=16.57;
    double actual = norm2(input1,n);

    CuAssertDblEquals(tc, expected, actual,0.009);
}

//===========================================================
//=================Question 2================================  

void TestQ2(CuTest *tc) {
	int n = 3;
	int input[3][3] = {{1, 2, 3},{ 5, 8, 9},{ 0, 3, 5}};
	int expected[9]= {1, 2, 5, 3, 8, 0, 9, 3, 5};
	int actual[9];
	diag_scan(input,actual);

	int i;
	for (i=0; i<n*n; i++)
		CuAssertIntEquals(tc, expected[i], actual[i]);
}

//===============Addiional test cases=================
void TestQ2_1(CuTest *tc) {
	int n = 3;
	int input[3][3] = {{15,-17,20}, {8,44,49}, {-15,31,-13}};
	int expected[9]= {15,-17,8,20,44,-15,49,31,-13};
	int actual[9];
	diag_scan(input,actual);

	int i;
	for (i=0; i<n*n; i++)
		CuAssertIntEquals(tc, expected[i], actual[i]);
}

void TestQ2_2(CuTest *tc) {
	int n = 3;
	int input[3][3] = {{-3,47,35},{37,-13,39},{12,39,8}};
	int expected[9]= {-3,47,37,35,-13,12, 39,39,8};
	int actual[9];
	diag_scan(input,actual);

	int i;
	for (i=0; i<n*n; i++)
		CuAssertIntEquals(tc, expected[i], actual[i]);
}

void TestQ2_3(CuTest *tc) {
	int n = 3;
	int input[3][3] = {{1,0,0},{ 0,1,0},{0,0,1}};
	int expected[9]= {1, 0, 0, 0, 1, 0, 0, 0, 1};
	int actual[9];
	diag_scan(input,actual);

	int i;
	for (i=0; i<n*n; i++)
		CuAssertIntEquals(tc, expected[i], actual[i]);
}
    
//===========================================================
//=================Question 3================================   
void TestQ3_1(CuTest *tc) {
	int n=8;
	int input[]={0,0,23,0,-7,0,0,48};
	struct Q3Struct actual[8] = {0};
	struct Q3Struct expected[8] = {{23, 2}, {-7, 4}, {48, 7}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}};
	efficient(input,actual,n);
    
	int i;
	for (i=0; i<n; i++){
		CuAssertIntEquals(tc, expected[i].val, actual[i].val);
		CuAssertIntEquals(tc, expected[i].pos, actual[i].pos);
	}
}

void TestQ3_zeros(CuTest *tc) {
	int n=8;
	int input[]={0,0,0,0,0,0,0,0};
	struct Q3Struct actual[8] = {0};
	struct Q3Struct expected[8] = {0};
	efficient(input,actual,n);
    
	int i;
	for (i=0; i<n; i++){
		CuAssertIntEquals(tc, expected[i].val, actual[i].val);
		CuAssertIntEquals(tc, expected[i].pos, actual[i].pos);
	}
}

//==========Additional Test Cases for Efficient===================
void TestQ3_eff1(CuTest *tc) {
	int n=10;
	int input[]={-19, 0, -17, 40, 0, 0, 9, 0, 16, -6};
	struct Q3Struct actual[10] = {0};
	struct Q3Struct expected[10] = {{-19, 0}, {-17, 2}, {40, 3}, {9, 6}, {16, 8}, {-6, 9}, {0, 0}, {0, 0}, {0, 0}, {0, 0}};
	efficient(input,actual,n);
    
	int i;
	for (i=0; i<n; i++){
		CuAssertIntEquals(tc, expected[i].val, actual[i].val);
		CuAssertIntEquals(tc, expected[i].pos, actual[i].pos);
	}
}

void TestQ3_eff2(CuTest *tc) {
	int n=15;
	int input[]={0, 0, 0, 0, 0, 0, 0, -13, 43, 11, 31, -15, -18, 9, 29};
	struct Q3Struct actual[15] = {0};
	struct Q3Struct expected[15] = {{-13, 7}, {43, 8}, {11, 9}, {31, 10}, {-15, 11}, {-18, 12}, {9, 13}, {29, 14}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}};
	efficient(input,actual,n);
    
	int i;
	for (i=0; i<n; i++){
		CuAssertIntEquals(tc, expected[i].val, actual[i].val);
		CuAssertIntEquals(tc, expected[i].pos, actual[i].pos);
	}
}

void TestQ3_eff3(CuTest *tc) {
	int n=5;
	int input[]={1,2,3,4,5};
	struct Q3Struct actual[5] = {0};
	struct Q3Struct expected[5] = {{1,0},{2,1},{3,2},{4,3},{5,4}};
	efficient(input,actual,n);
    
	int i;
	for (i=0; i<n; i++){
		CuAssertIntEquals(tc, expected[i].val, actual[i].val);
		CuAssertIntEquals(tc, expected[i].pos, actual[i].pos);
	}
}


//===========================
void TestQ3_combined(CuTest *tc) {
	int n=8;
	int input[]={0,0,23,0,-7,0,0,48};
	struct Q3Struct int_result[8] = {0};
	int expected[8] = {0,0,23,0,-7,0,0,48};
	int actual[8] = {0};
	efficient(input,int_result,n);
	reconstruct(actual, 8, int_result, 3);

	int i;
	for (i=0; i<n; i++){
		CuAssertIntEquals(tc, expected[i], actual[i]);
	}
}

//===========Additional Test Cases for Reconstruct===================
void TestQ3_reconstruct1(CuTest *tc) {
	int n=7;
	int input[]={34, 0, 43, 0, 18, 48, 0};
	struct Q3Struct int_result[7] = {0};
	int expected[7] = {34, 0, 43, 0, 18, 48, 0};
	int actual[7] = {0};
	efficient(input,int_result,n);
	reconstruct(actual, 7, int_result, 4);

	int i;
	for (i=0; i<n; i++){
		CuAssertIntEquals(tc, expected[i], actual[i]);
	}
}

void TestQ3_reconstruct2(CuTest *tc) {
	int n=20;
	int input[]={-15, -17, -4, 0, 5, 0, -9, 0, 36, -2, -6, 0, 0, 27, 32, 44, 0, 9, 0, 0};
	struct Q3Struct int_result[20] = {0};
	int expected[20] = {-15, -17, -4, 0, 5, 0, -9, 0, 36, -2, -6, 0, 0, 27, 32, 44, 0, 9, 0, 0};
	int actual[20] = {0};
	efficient(input,int_result,n);
	reconstruct(actual, 20, int_result, 12);

	int i;
	for (i=0; i<n; i++){
		CuAssertIntEquals(tc, expected[i], actual[i]);
	}
}

void TestQ3_reconstruct3(CuTest *tc) {
	int n=15;
	int input[]={45, 0, 8, 0, -13, 0, -13, 0, 43, 0, 35, 0, 11, 0, 34};
	struct Q3Struct int_result[15] = {0};
	int expected[15] = {45, 0, 8, 0, -13, 0, -13, 0, 43, 0, 35, 0, 11, 0, 34};
	int actual[15] = {0};
	efficient(input,int_result,n);
	reconstruct(actual, 15, int_result, 8);

	int i;
	for (i=0; i<n; i++){
		CuAssertIntEquals(tc, expected[i], actual[i]);
	}
}
    

//===========================================================
//=================Question 4================================   
void TestQ4_BubbleSort_1(CuTest *tc) 
{
	int n=6;
	struct Q4Struct input[]={{10, 'c'}, {2, 'B'}, {-5, 'k'}, {12, 'z'}, {77, 'a'}, {-42, '?'}};	
	struct Q4Struct expected[]={{-42, '?'}, {-5, 'k'}, {2, 'B'}, {10, 'c'}, {12, 'z'}, {77, 'a'}};		
	
	sortDatabyBubble(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		CuAssertIntEquals(tc, expected[i].intData, input[i].intData);
		CuAssertIntEquals(tc, expected[i].charData, input[i].charData);
	}
}

void TestQ4_BubbleSort_2(CuTest *tc) 
{
	int n=8;
	struct Q4Struct input[]={{-23, '='}, {78, ' '}, {11, 'Y'}, {-2, '0'}, {41, '+'}, {0, 'm'}, {55, 'T'}, {-9, 'o'}};	
	struct Q4Struct expected[]={{-23, '='}, {-9, 'o'}, {-2, '0'}, {0, 'm'}, {11, 'Y'}, {41, '+'}, {55, 'T'}, {78, ' '}};		
	
	sortDatabyBubble(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		CuAssertIntEquals(tc, expected[i].intData, input[i].intData);
		CuAssertIntEquals(tc, expected[i].charData, input[i].charData);
	}
}

//===========Additional Test Cases for BubbleSort===============
void TestQ4_BubbleSort_add1(CuTest *tc) 
{
	int n=5;
	struct Q4Struct input[]={{-28, '+'}, {-9, '-'}, {22, 'x'}, {-11, 'T'}, {63, 'L'}};	
	struct Q4Struct expected[]={{-28, '+'}, {-11, 'T'}, {-9, '-'}, {22, 'x'}, {63, 'L'}};			
	
	sortDatabyBubble(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		CuAssertIntEquals(tc, expected[i].intData, input[i].intData);
		CuAssertIntEquals(tc, expected[i].charData, input[i].charData);
	}
}

void TestQ4_BubbleSort_add2(CuTest *tc) 
{
	int n=8;
	struct Q4Struct input[]={{-26, '='}, {68, ' '}, {11, 'Y'}, {-2, '0'}, {38, '+'}, {0, 'm'}, {57, 'T'}, {-8, 'o'}};	
	struct Q4Struct expected[]={{-26, '='}, {-8, 'o'}, {-2, '0'}, {0, 'm'}, {11, 'Y'}, {38, '+'}, {57, 'T'}, {68, ' '}};		
	
	sortDatabyBubble(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		CuAssertIntEquals(tc, expected[i].intData, input[i].intData);
		CuAssertIntEquals(tc, expected[i].charData, input[i].charData);
	}
}

void TestQ4_BubbleSort_add3(CuTest *tc) 
{
	int n=9;
	struct Q4Struct input[]={{4, '='}, {3, ' '}, {2, 'Y'}, {1, '0'}, {0, '+'}, {-1, 'm'}, {-2, 'T'}, {-3, 'o'},{-4, 'R'}};	
	struct Q4Struct expected[]={{-4, 'R'},{-3, 'o'},{-2, 'T'},{-1, 'm'},{0, '+'},{1, '0'},{2, 'Y'},{3, ' '},{4, '='}};		
	
	sortDatabyBubble(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		CuAssertIntEquals(tc, expected[i].intData, input[i].intData);
		CuAssertIntEquals(tc, expected[i].charData, input[i].charData);
	}
}

//=================

void TestQ4_SelectionSort_1(CuTest *tc) 
{
	int n=6;
	struct Q4Struct input[]={{10, 'c'}, {2, 'B'}, {-5, 'k'}, {12, 'z'}, {77, 'a'}, {-42, '?'}};	
	struct Q4Struct expected[]={{-42, '?'}, {-5, 'k'}, {2, 'B'}, {10, 'c'}, {12, 'z'}, {77, 'a'}};		
	
	sortDatabySelection(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		CuAssertIntEquals(tc, expected[i].intData, input[i].intData);
		CuAssertIntEquals(tc, expected[i].charData, input[i].charData);
	}
}

void TestQ4_SelectionSort_2(CuTest *tc) 
{
	int n=8;
	struct Q4Struct input[]={{-23, '='}, {78, ' '}, {11, 'Y'}, {-2, '0'}, {41, '+'}, {0, 'm'}, {55, 'T'}, {-9, 'o'}};	
	struct Q4Struct expected[]={{-23, '='}, {-9, 'o'}, {-2, '0'}, {0, 'm'}, {11, 'Y'}, {41, '+'}, {55, 'T'}, {78, ' '}};			
	
	sortDatabySelection(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		CuAssertIntEquals(tc, expected[i].intData, input[i].intData);
		CuAssertIntEquals(tc, expected[i].charData, input[i].charData);
	}
}

//============Additional Test Cases for selection sort================
void TestQ4_SelectionSort_add1(CuTest *tc) 
{
	int n=5;
	struct Q4Struct input[]={{-20, '+'}, {-7, '-'}, {42, 'x'}, {-41, 'T'}, {-43, 'L'}};	
	struct Q4Struct expected[]={{-43, 'L'}, {-41, 'T'}, {-20, '+'}, {-7, '-'}, {42, 'x'}};			
	
	sortDatabySelection(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		CuAssertIntEquals(tc, expected[i].intData, input[i].intData);
		CuAssertIntEquals(tc, expected[i].charData, input[i].charData);
	}
}


void TestQ4_SelectionSort_add2(CuTest *tc) 
{
	int n=10;
	struct Q4Struct input[]={{26, '='}, {-9, ' '}, {-39, 'Y'}, {33, '0'}, {16, '+'}, {38, 'm'}, {27, 'T'}, {-45, 'o'}, {25, '-'}, {55, 'H'}};	
	struct Q4Struct expected[]={{-45, 'o'},{-39, 'Y'}, {-9, ' '},{16, '+'},{25, '-'},{26, '='},{27, 'T'}, {33, '0'}, {38, 'm'},{55, 'H'}};			
	
	sortDatabySelection(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		CuAssertIntEquals(tc, expected[i].intData, input[i].intData);
		CuAssertIntEquals(tc, expected[i].charData, input[i].charData);
	}
}

void TestQ4_SelectionSort_add3(CuTest *tc) 
{
	int n=9;
	struct Q4Struct input[]={{4, '='}, {3, ' '}, {2, 'Y'}, {1, '0'}, {0, '+'}, {-1, 'm'}, {-2, 'T'}, {-3, 'o'},{-4, 'R'}};	
	struct Q4Struct expected[]={{-4, 'R'},{-3, 'o'},{-2, 'T'},{-1, 'm'},{0, '+'},{1, '0'},{2, 'Y'},{3, ' '},{4, '='}};			
	
	sortDatabySelection(input, n);
	
	int i;
	for (i=0; i<n; i++)
	{
		CuAssertIntEquals(tc, expected[i].intData, input[i].intData);
		CuAssertIntEquals(tc, expected[i].charData, input[i].charData);
	}
}



CuSuite* Lab2GetSuite() {

	CuSuite* suite = CuSuiteNew();

	SUITE_ADD_TEST(suite, TestQ1_add);
	SUITE_ADD_TEST(suite, TestQ1_add1);
	SUITE_ADD_TEST(suite, TestQ1_add2);
	SUITE_ADD_TEST(suite, TestQ1_add3);

	SUITE_ADD_TEST(suite, TestQ1_scalar_prod);
	SUITE_ADD_TEST(suite, TestQ1_scalar_prod1);
	SUITE_ADD_TEST(suite, TestQ1_scalar_prod2);
	SUITE_ADD_TEST(suite, TestQ1_scalar_prod3);

	SUITE_ADD_TEST(suite, TestQ1_norm);
	SUITE_ADD_TEST(suite, TestQ1_norm1);
	SUITE_ADD_TEST(suite, TestQ1_norm2);
	SUITE_ADD_TEST(suite, TestQ1_norm3);

	SUITE_ADD_TEST(suite, TestQ2);
	SUITE_ADD_TEST(suite, TestQ2_1);
	SUITE_ADD_TEST(suite, TestQ2_2);
	SUITE_ADD_TEST(suite, TestQ2_3);

	SUITE_ADD_TEST(suite, TestQ3_1);
	SUITE_ADD_TEST(suite, TestQ3_zeros);
	SUITE_ADD_TEST(suite, TestQ3_eff1);
	SUITE_ADD_TEST(suite, TestQ3_eff2);
	SUITE_ADD_TEST(suite, TestQ3_eff3);

	SUITE_ADD_TEST(suite, TestQ3_combined);
	SUITE_ADD_TEST(suite, TestQ3_reconstruct1);
	SUITE_ADD_TEST(suite, TestQ3_reconstruct2);
	SUITE_ADD_TEST(suite, TestQ3_reconstruct3);

	SUITE_ADD_TEST(suite, TestQ4_BubbleSort_1);
	SUITE_ADD_TEST(suite, TestQ4_BubbleSort_2);
	SUITE_ADD_TEST(suite, TestQ4_BubbleSort_add1);
	SUITE_ADD_TEST(suite, TestQ4_BubbleSort_add2);
	SUITE_ADD_TEST(suite, TestQ4_BubbleSort_add3);

	SUITE_ADD_TEST(suite, TestQ4_SelectionSort_1);
	SUITE_ADD_TEST(suite, TestQ4_SelectionSort_2);
	SUITE_ADD_TEST(suite, TestQ4_SelectionSort_add1);
	SUITE_ADD_TEST(suite, TestQ4_SelectionSort_add2);
	SUITE_ADD_TEST(suite, TestQ4_SelectionSort_add3);



	return suite;
}
    
