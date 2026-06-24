#ifndef UART_H
#define UART_H

void usart1_init(void);
void usart1_write_char(char c);
void DMA1_Channel5_IRQHandler();

#endif