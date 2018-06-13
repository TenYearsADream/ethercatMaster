#ifndef EC_INTERFACE_H
#define EC_INTERFACE_H
#include <stdint.h>
#include "ec_status.h"

//period dcˢ�����ڣ�Ӧ�úͲ岹����һ�£���λns
extern int ec_master_init(uint32_t period);
//��վ��ʹ�ܣ���ʹ�ܡ�jointΪ��վ����:0-5, enable:0-1 0:��ʹ�ܣ�1:��ʹ�ܡ�
extern void ec_slave_enable(uint8_t joint,uint8_t enable);
//��վ��λ ��joint��վ����:0-5
extern void ec_slave_reset(uint8_t joint);

//CSPģʽ�£�����Ŀ��λ�� jointΪ��վ����:0-5, target_position: Ŀ��λ�� ����λ:����
extern void ec_slave_csp_target_position(uint8_t joint,int32_t target_position);

//��ȡ�ŷ�������״̬����
extern void ec_slave_status(uint8_t joint,ec_user_statust_t *status);


extern void ec_call_back(void);

#endif
