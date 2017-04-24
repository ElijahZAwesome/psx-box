{\rtf1\ansi\ansicpg1252\cocoartf1504
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;\csgray\c100000;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #ifndef PSXBOX_TIMER_CORE_HPP\
#define PSXBOX_TIMER_CORE_HPP\
\
#include <cstdint>\
\
namespace timer \{\
    struct state_t \{\
        uint16_t counter;\
        uint16_t control;\
        uint16_t compare;\
        int divider;\
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0
\cf0     \};\
\
    uint32_t bus_read(int width, uint32_t address);\
\
    void bus_write(int width, uint32_t address, uint32_t data);\
\
    void run_timer_0();\
\
    void run_timer_1();\
\
    void tick_timer_2();\
\}\
\
#endif //PSXBOX_TIMER_CORE_HPP}