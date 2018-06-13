#ifndef EC_STATUS_HH
#define EC_STATUS_HH
#include <unistd.h>
typedef struct
{
	uint16_t	status_word;			//�ŷ���վ״̬��
	uint8_t 	enabled;		 		//�ŷ��Ƿ���ʹ�� 0: ��ʹ��״̬��1:��ʹ��״̬��
	uint8_t		fault;				//�ŷ�����״̬��
	uint8_t 	error_code;			//�ŷ������룬0:�޴������� : ������
	int32_t		target_position;	//Ŀ��λ��		
	int32_t		actual_position;	//ʵ��λ��ֵ
}ec_user_statust_t;

typedef struct
{
	uint8_t 	enable;			//�ŷ���ʹ��ָ�1Ϊ��ʹ�ܣ����ŷ�״̬��Ϊʹ��ʱ�����㡣
	uint8_t 	disable;		//�ŷ���ʹ��ָ�1Ϊ��ʹ�ܣ����ŷ�Ϊ��ʹ��״̬ʱ�����㡣
	uint8_t		reset;			//�ŷ���λָ�1��ʾ��λ�����ŷ�״̬���±�Ϊ231(shutdown)ʱ����ֵ���㡣
	ec_user_statust_t status;		//�ŷ���������ǰ״̬��Ϣ
}ec_user_slave_t;

#endif