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
 * �������
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
   void ( *pPlaceQueens[] ) ( void ) = {
      place2Queens, //2�ʺ��㷨
      place3Queens, //3�ʺ��㷨
      place4Queens, //4�ʺ��㷨
      place5Queens  //5�ʺ��㷨
   };
   if ( argc < 2 ) //��������и�ʽ
      { cout << "Usage: " << argv[0] << " <-step | -cont>" << endl; return -1; }
   if ( !strcmp ( "-step", argv[1] ) ) runMode = Step; //�趨Ϊ������ʾģʽ
   else if ( !strcmp ( "-cont", argv[1] ) ) runMode = Continuous; //�趨Ϊ������ʾģʽ
   else { cout << "Unrecognizable running mode" << endl; return -2; }
   for ( int i = 2; i <= 5; i++ ) { //����2~5���ʺ��������ֱ�
      nSolu = 0; nCheck = 0; //��ʼ��������
      ( *pPlaceQueens[i-2] ) (); //�����㷨
      printf ( "#Queen = %d\t#Solution = %d\t#Check = %d\a\a\n", i, nSolu, nCheck ); //�����
      getchar();
   }
}