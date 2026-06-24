#ifndef UART_H
#define UART_H

typedef void (*dma_cc_callback_t)(const char *s);

void usart1_init(void);
void usart1_write_char(char c);
void set_dma_cc_callback(dma_cc_callback_t cb);
void DMA1_Channel5_IRQHandler();

#endif