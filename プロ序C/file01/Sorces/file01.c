#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *outputfile;         // �o�̓X�g���[��

  outputfile = fopen("d.txt", "w");  // �t�@�C�����������ݗp�ɃI�[�v��(�J��)
  if (outputfile == NULL) {          // �I�[�v���Ɏ��s�����ꍇ
    printf("cannot open\n");         // �G���[���b�Z�[�W���o����
    exit(1);                         // �ُ�I��
  }

  fprintf(outputfile, "My name is Enokida Yuuichirou.\n"); // �t�@�C���ɏ���

  fclose(outputfile);          // �t�@�C�����N���[�Y(����)
  return 0;
}
