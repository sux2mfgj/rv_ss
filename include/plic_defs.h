#pragma once

#define SIFIVE_PLIC_PRIORITY_BASE 0x0c000000
#define SIFIVE_PLIC_PENDING_BASE 0x0c001000
#define SIFIVE_PLIC_M_ENABLE_BASE 0x0c002000
#define SIFIVE_PLIC_S_ENABLE_BASE 0x0c002080
#define SIFIVE_PLIC_PRIORITY_THRESHOLD 0x0c201000
#define SIFIVE_PLIC_M_CLAIM_COMPLETE 0x0c200004
#define SIFIVE_PLIC_S_CLAIM_COMPLETE 0x0c201004

#define SIFIVE_NUM_OF_INTERRUPT 5
