/** @file z80/z80.h
    Common definitions between the z80 and gbz80 parts.
*/
#include "common.h"
#include "ralloc.h"
#include "gen.h"
#include "peep.h"
#include "support.h"

typedef enum
  {
    SUB_Z80,
    SUB_GBZ80
  }
Z80_SUB_PORT;

typedef struct
  {
    Z80_SUB_PORT sub;
    int calleeSavesBC;
    int port_mode;
    int port_back;
    int reserveIY;
    int dump_graphs;
	int optralloc_exact_cost;
  }
Z80_OPTS;

extern Z80_OPTS z80_opts;

#define IS_GB  (z80_opts.sub == SUB_GBZ80)
#define IS_Z80 (z80_opts.sub == SUB_Z80)
#define IY_RESERVED (z80_opts.reserveIY)

#define OPTRALLOC_EXACT_COST (z80_opts.optralloc_exact_cost)

// For debugging only - remove these lines before merge!
//#undef OPTRALLOC_EXACT_COST
//#define OPTRALLOC_EXACT_COST 1

#define OPTRALLOC_HL IS_Z80
#define OPTRALLOC_A 1

enum
  {
    ACCUSE_A = 1,
    ACCUSE_SCRATCH,
    ACCUSE_IY
  };
