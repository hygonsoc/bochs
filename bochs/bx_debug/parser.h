#ifndef YYERRCODE
#define YYERRCODE 256
#endif

#define BX_TOKEN_8BH_REG 257
#define BX_TOKEN_8BL_REG 258
#define BX_TOKEN_16B_REG 259
#define BX_TOKEN_32B_REG 260
#define BX_TOKEN_64B_REG 261
#define BX_TOKEN_CS 262
#define BX_TOKEN_ES 263
#define BX_TOKEN_SS 264
#define BX_TOKEN_DS 265
#define BX_TOKEN_FS 266
#define BX_TOKEN_GS 267
#define BX_TOKEN_FLAGS 268
#define BX_TOKEN_ON 269
#define BX_TOKEN_OFF 270
#define BX_TOKEN_CONTINUE 271
#define BX_TOKEN_STEPN 272
#define BX_TOKEN_STEP_OVER 273
#define BX_TOKEN_NEXT_STEP 274
#define BX_TOKEN_SET 275
#define BX_TOKEN_DEBUGGER 276
#define BX_TOKEN_LIST_BREAK 277
#define BX_TOKEN_VBREAKPOINT 278
#define BX_TOKEN_LBREAKPOINT 279
#define BX_TOKEN_PBREAKPOINT 280
#define BX_TOKEN_DEL_BREAKPOINT 281
#define BX_TOKEN_ENABLE_BREAKPOINT 282
#define BX_TOKEN_DISABLE_BREAKPOINT 283
#define BX_TOKEN_INFO 284
#define BX_TOKEN_QUIT 285
#define BX_TOKEN_REGISTERS 286
#define BX_TOKEN_CPU 287
#define BX_TOKEN_FPU 288
#define BX_TOKEN_SSE 289
#define BX_TOKEN_ALL 290
#define BX_TOKEN_IDT 291
#define BX_TOKEN_IVT 292
#define BX_TOKEN_GDT 293
#define BX_TOKEN_LDT 294
#define BX_TOKEN_TSS 295
#define BX_TOKEN_TAB 296
#define BX_TOKEN_DIRTY 297
#define BX_TOKEN_LINUX 298
#define BX_TOKEN_CONTROL_REGS 299
#define BX_TOKEN_EXAMINE 300
#define BX_TOKEN_XFORMAT 301
#define BX_TOKEN_DISFORMAT 302
#define BX_TOKEN_SETPMEM 303
#define BX_TOKEN_SYMBOLNAME 304
#define BX_TOKEN_QUERY 305
#define BX_TOKEN_PENDING 306
#define BX_TOKEN_TAKE 307
#define BX_TOKEN_DMA 308
#define BX_TOKEN_IRQ 309
#define BX_TOKEN_DUMP_CPU 310
#define BX_TOKEN_SET_CPU 311
#define BX_TOKEN_DISASSEMBLE 312
#define BX_TOKEN_INSTRUMENT 313
#define BX_TOKEN_STRING 314
#define BX_TOKEN_STOP 315
#define BX_TOKEN_DOIT 316
#define BX_TOKEN_CRC 317
#define BX_TOKEN_TRACE 318
#define BX_TOKEN_TRACEREG 319
#define BX_TOKEN_SWITCH_MODE 320
#define BX_TOKEN_SIZE 321
#define BX_TOKEN_PTIME 322
#define BX_TOKEN_TIMEBP_ABSOLUTE 323
#define BX_TOKEN_TIMEBP 324
#define BX_TOKEN_RECORD 325
#define BX_TOKEN_PLAYBACK 326
#define BX_TOKEN_MODEBP 327
#define BX_TOKEN_PRINT_STACK 328
#define BX_TOKEN_WATCH 329
#define BX_TOKEN_UNWATCH 330
#define BX_TOKEN_READ 331
#define BX_TOKEN_WRITE 332
#define BX_TOKEN_SHOW 333
#define BX_TOKEN_LOAD_SYMBOLS 334
#define BX_TOKEN_SYMBOLS 335
#define BX_TOKEN_LIST_SYMBOLS 336
#define BX_TOKEN_GLOBAL 337
#define BX_TOKEN_WHERE 338
#define BX_TOKEN_PRINT_STRING 339
#define BX_TOKEN_NUMERIC 340
#define BX_TOKEN_NE2000 341
#define BX_TOKEN_PIC 342
#define BX_TOKEN_PAGE 343
#define BX_TOKEN_HELP 344
#define BX_TOKEN_CALC 345
#define BX_TOKEN_VGA 346
#define BX_TOKEN_COMMAND 347
#define BX_TOKEN_GENERIC 348
#define BX_TOKEN_RSHIFT 349
#define BX_TOKEN_LSHIFT 350
#define BX_TOKEN_REG_IP 351
#define BX_TOKEN_REG_EIP 352
#define BX_TOKEN_REG_RIP 353
#define NOT 354
#define NEG 355
typedef union {
  char    *sval;
  Bit64u   uval;
  bx_bool  bval;
  bx_num_range uval_range;
} YYSTYPE;
extern YYSTYPE bxlval;
