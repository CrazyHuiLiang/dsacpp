/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#include   "queen_brute_force_1/queen.h"

/******************************************************************************************
 * ȫ�ֱ���
 ******************************************************************************************/
RunMode runMode; //��ʾģʽ
int nSolu = 0; //�������
int nCheck = 0; //���Ե��ܴ���

/******************************************************************************************
 * n�ʺ󣨵ݹ�棩
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
   if ( argc < 3 ) //��������и�ʽ
      { cout << "Usage: " << argv[0] << " <-step | -cont> <#Queen>" << endl; return -1; }
   if ( !strcmp ( "-step", argv[1] ) ) runMode = Step; //�趨Ϊ������ʾģʽ
   else if ( !strcmp ( "-cont", argv[1] ) ) runMode = Continuous; //�趨Ϊ������ʾģʽ
   else { cout << "Unrecognizable running mode" << endl; return -2; }
   int nQueen = atoi ( argv[2] ); //#queens
   if ( 1 > nQueen || nQueen > QUEEN_MAX )
      { cout << "Make sure 1 <= #queen <= " << QUEEN_MAX << endl; return -2; }
   placeQueens ( nQueen, 0 ); //�����㷨
   cout  << nSolu << " solution(s) found after "
         << nCheck << " check(s) for "
         << nQueen << " queen(s)\n"; //����������
   return 0;
}