/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Lanai Disassembler                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTableLanai32[] = {
/* 0 */       MCD::OPC_ExtractField, 28, 4,  // Inst{31-28} ...
/* 3 */       MCD::OPC_FilterValue, 0, 119, 0, // Skip to: 126
/* 7 */       MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 10 */      MCD::OPC_FilterValue, 0, 91, 0, // Skip to: 105
/* 14 */      MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 17 */      MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 31
/* 21 */      MCD::OPC_CheckField, 18, 10, 0, 74, 0, // Skip to: 101
/* 27 */      MCD::OPC_Decode, 166, 1, 0, // Opcode: NOP
/* 31 */      MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 45
/* 35 */      MCD::OPC_CheckField, 18, 10, 0, 60, 0, // Skip to: 101
/* 41 */      MCD::OPC_Decode, 160, 1, 0, // Opcode: LOG0
/* 45 */      MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 59
/* 49 */      MCD::OPC_CheckField, 18, 10, 0, 46, 0, // Skip to: 101
/* 55 */      MCD::OPC_Decode, 161, 1, 0, // Opcode: LOG1
/* 59 */      MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 73
/* 63 */      MCD::OPC_CheckField, 18, 10, 0, 32, 0, // Skip to: 101
/* 69 */      MCD::OPC_Decode, 162, 1, 0, // Opcode: LOG2
/* 73 */      MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 87
/* 77 */      MCD::OPC_CheckField, 18, 10, 0, 18, 0, // Skip to: 101
/* 83 */      MCD::OPC_Decode, 163, 1, 0, // Opcode: LOG3
/* 87 */      MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 101
/* 91 */      MCD::OPC_CheckField, 18, 10, 0, 4, 0, // Skip to: 101
/* 97 */      MCD::OPC_Decode, 164, 1, 0, // Opcode: LOG4
/* 101 */     MCD::OPC_Decode, 128, 1, 1, // Opcode: ADD_I_LO
/* 105 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 112
/* 109 */     MCD::OPC_Decode, 127, 1, // Opcode: ADD_I_HI
/* 112 */     MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 119
/* 116 */     MCD::OPC_Decode, 125, 1, // Opcode: ADD_F_I_LO
/* 119 */     MCD::OPC_FilterValue, 3, 81, 3, // Skip to: 972
/* 123 */     MCD::OPC_Decode, 124, 1, // Opcode: ADD_F_I_HI
/* 126 */     MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 161
/* 130 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 133 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 140
/* 137 */     MCD::OPC_Decode, 122, 1, // Opcode: ADDC_I_LO
/* 140 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 147
/* 144 */     MCD::OPC_Decode, 121, 1, // Opcode: ADDC_I_HI
/* 147 */     MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 154
/* 151 */     MCD::OPC_Decode, 119, 1, // Opcode: ADDC_F_I_LO
/* 154 */     MCD::OPC_FilterValue, 3, 46, 3, // Skip to: 972
/* 158 */     MCD::OPC_Decode, 118, 1, // Opcode: ADDC_F_I_HI
/* 161 */     MCD::OPC_FilterValue, 2, 35, 0, // Skip to: 200
/* 165 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 168 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 206, 1, 1, // Opcode: SUB_I_LO
/* 176 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 205, 1, 1, // Opcode: SUB_I_HI
/* 184 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 192
/* 188 */     MCD::OPC_Decode, 203, 1, 1, // Opcode: SUB_F_I_LO
/* 192 */     MCD::OPC_FilterValue, 3, 8, 3, // Skip to: 972
/* 196 */     MCD::OPC_Decode, 202, 1, 1, // Opcode: SUB_F_I_HI
/* 200 */     MCD::OPC_FilterValue, 3, 35, 0, // Skip to: 239
/* 204 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 207 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 215
/* 211 */     MCD::OPC_Decode, 200, 1, 1, // Opcode: SUBB_I_LO
/* 215 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 223
/* 219 */     MCD::OPC_Decode, 199, 1, 1, // Opcode: SUBB_I_HI
/* 223 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 231
/* 227 */     MCD::OPC_Decode, 197, 1, 1, // Opcode: SUBB_F_I_LO
/* 231 */     MCD::OPC_FilterValue, 3, 225, 2, // Skip to: 972
/* 235 */     MCD::OPC_Decode, 196, 1, 1, // Opcode: SUBB_F_I_HI
/* 239 */     MCD::OPC_FilterValue, 4, 35, 0, // Skip to: 278
/* 243 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 246 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 254
/* 250 */     MCD::OPC_Decode, 137, 1, 1, // Opcode: AND_I_LO
/* 254 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 262
/* 258 */     MCD::OPC_Decode, 136, 1, 1, // Opcode: AND_I_HI
/* 262 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 270
/* 266 */     MCD::OPC_Decode, 134, 1, 1, // Opcode: AND_F_I_LO
/* 270 */     MCD::OPC_FilterValue, 3, 186, 2, // Skip to: 972
/* 274 */     MCD::OPC_Decode, 133, 1, 1, // Opcode: AND_F_I_HI
/* 278 */     MCD::OPC_FilterValue, 5, 35, 0, // Skip to: 317
/* 282 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 285 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 293
/* 289 */     MCD::OPC_Decode, 171, 1, 1, // Opcode: OR_I_LO
/* 293 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 301
/* 297 */     MCD::OPC_Decode, 170, 1, 1, // Opcode: OR_I_HI
/* 301 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 309
/* 305 */     MCD::OPC_Decode, 168, 1, 1, // Opcode: OR_F_I_LO
/* 309 */     MCD::OPC_FilterValue, 3, 147, 2, // Skip to: 972
/* 313 */     MCD::OPC_Decode, 167, 1, 1, // Opcode: OR_F_I_HI
/* 317 */     MCD::OPC_FilterValue, 6, 35, 0, // Skip to: 356
/* 321 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 324 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 332
/* 328 */     MCD::OPC_Decode, 215, 1, 1, // Opcode: XOR_I_LO
/* 332 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 340
/* 336 */     MCD::OPC_Decode, 214, 1, 1, // Opcode: XOR_I_HI
/* 340 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 348
/* 344 */     MCD::OPC_Decode, 212, 1, 1, // Opcode: XOR_F_I_LO
/* 348 */     MCD::OPC_FilterValue, 3, 108, 2, // Skip to: 972
/* 352 */     MCD::OPC_Decode, 211, 1, 1, // Opcode: XOR_F_I_HI
/* 356 */     MCD::OPC_FilterValue, 7, 35, 0, // Skip to: 395
/* 360 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 363 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 371
/* 367 */     MCD::OPC_Decode, 186, 1, 2, // Opcode: SL_I
/* 371 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 379
/* 375 */     MCD::OPC_Decode, 176, 1, 2, // Opcode: SA_I
/* 379 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 387
/* 383 */     MCD::OPC_Decode, 185, 1, 2, // Opcode: SL_F_I
/* 387 */     MCD::OPC_FilterValue, 3, 69, 2, // Skip to: 972
/* 391 */     MCD::OPC_Decode, 175, 1, 2, // Opcode: SA_F_I
/* 395 */     MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 416
/* 399 */     MCD::OPC_CheckField, 0, 28, 252, 255, 219, 8, 4, 0, // Skip to: 412
/* 408 */     MCD::OPC_Decode, 174, 1, 0, // Opcode: RET
/* 412 */     MCD::OPC_Decode, 156, 1, 3, // Opcode: LDW_RI
/* 416 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 424
/* 420 */     MCD::OPC_Decode, 208, 1, 3, // Opcode: SW_RI
/* 424 */     MCD::OPC_FilterValue, 10, 51, 0, // Skip to: 479
/* 428 */     MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 431 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 439
/* 435 */     MCD::OPC_Decode, 153, 1, 4, // Opcode: LDHs_RR
/* 439 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 447
/* 443 */     MCD::OPC_Decode, 155, 1, 4, // Opcode: LDHz_RR
/* 447 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 455
/* 451 */     MCD::OPC_Decode, 157, 1, 4, // Opcode: LDW_RR
/* 455 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 463
/* 459 */     MCD::OPC_Decode, 158, 1, 4, // Opcode: LDWz_RR
/* 463 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 471
/* 467 */     MCD::OPC_Decode, 149, 1, 4, // Opcode: LDBs_RR
/* 471 */     MCD::OPC_FilterValue, 5, 241, 1, // Skip to: 972
/* 475 */     MCD::OPC_Decode, 151, 1, 4, // Opcode: LDBz_RR
/* 479 */     MCD::OPC_FilterValue, 11, 27, 0, // Skip to: 510
/* 483 */     MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 486 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 494
/* 490 */     MCD::OPC_Decode, 195, 1, 4, // Opcode: STH_RR
/* 494 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 502
/* 498 */     MCD::OPC_Decode, 209, 1, 4, // Opcode: SW_RR
/* 502 */     MCD::OPC_FilterValue, 4, 210, 1, // Skip to: 972
/* 506 */     MCD::OPC_Decode, 193, 1, 4, // Opcode: STB_RR
/* 510 */     MCD::OPC_FilterValue, 12, 19, 1, // Skip to: 789
/* 514 */     MCD::OPC_ExtractField, 3, 8,  // Inst{10-3} ...
/* 517 */     MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 539
/* 521 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 524 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 532
/* 528 */     MCD::OPC_Decode, 129, 1, 5, // Opcode: ADD_R
/* 532 */     MCD::OPC_FilterValue, 1, 180, 1, // Skip to: 972
/* 536 */     MCD::OPC_Decode, 126, 5, // Opcode: ADD_F_R
/* 539 */     MCD::OPC_FilterValue, 32, 17, 0, // Skip to: 560
/* 543 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 546 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 553
/* 550 */     MCD::OPC_Decode, 123, 5, // Opcode: ADDC_R
/* 553 */     MCD::OPC_FilterValue, 1, 159, 1, // Skip to: 972
/* 557 */     MCD::OPC_Decode, 120, 5, // Opcode: ADDC_F_R
/* 560 */     MCD::OPC_FilterValue, 64, 19, 0, // Skip to: 583
/* 564 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 567 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 575
/* 571 */     MCD::OPC_Decode, 207, 1, 5, // Opcode: SUB_R
/* 575 */     MCD::OPC_FilterValue, 1, 137, 1, // Skip to: 972
/* 579 */     MCD::OPC_Decode, 204, 1, 5, // Opcode: SUB_F_R
/* 583 */     MCD::OPC_FilterValue, 96, 19, 0, // Skip to: 606
/* 587 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 590 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 598
/* 594 */     MCD::OPC_Decode, 201, 1, 5, // Opcode: SUBB_R
/* 598 */     MCD::OPC_FilterValue, 1, 114, 1, // Skip to: 972
/* 602 */     MCD::OPC_Decode, 198, 1, 5, // Opcode: SUBB_F_R
/* 606 */     MCD::OPC_FilterValue, 128, 1, 19, 0, // Skip to: 630
/* 611 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 614 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 622
/* 618 */     MCD::OPC_Decode, 138, 1, 5, // Opcode: AND_R
/* 622 */     MCD::OPC_FilterValue, 1, 90, 1, // Skip to: 972
/* 626 */     MCD::OPC_Decode, 135, 1, 5, // Opcode: AND_F_R
/* 630 */     MCD::OPC_FilterValue, 160, 1, 67, 0, // Skip to: 702
/* 635 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 638 */     MCD::OPC_FilterValue, 0, 52, 0, // Skip to: 694
/* 642 */     MCD::OPC_CheckField, 18, 10, 64, 16, 0, // Skip to: 664
/* 648 */     MCD::OPC_CheckField, 16, 1, 0, 10, 0, // Skip to: 664
/* 654 */     MCD::OPC_CheckField, 0, 3, 0, 4, 0, // Skip to: 664
/* 660 */     MCD::OPC_Decode, 146, 1, 6, // Opcode: JR
/* 664 */     MCD::OPC_CheckField, 23, 5, 2, 10, 0, // Skip to: 680
/* 670 */     MCD::OPC_CheckField, 11, 5, 0, 4, 0, // Skip to: 680
/* 676 */     MCD::OPC_Decode, 140, 1, 7, // Opcode: BRIND_CC
/* 680 */     MCD::OPC_CheckField, 23, 5, 2, 4, 0, // Skip to: 690
/* 686 */     MCD::OPC_Decode, 141, 1, 8, // Opcode: BRIND_CCA
/* 690 */     MCD::OPC_Decode, 172, 1, 5, // Opcode: OR_R
/* 694 */     MCD::OPC_FilterValue, 1, 18, 1, // Skip to: 972
/* 698 */     MCD::OPC_Decode, 169, 1, 5, // Opcode: OR_F_R
/* 702 */     MCD::OPC_FilterValue, 192, 1, 19, 0, // Skip to: 726
/* 707 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 710 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 718
/* 714 */     MCD::OPC_Decode, 216, 1, 5, // Opcode: XOR_R
/* 718 */     MCD::OPC_FilterValue, 1, 250, 0, // Skip to: 972
/* 722 */     MCD::OPC_Decode, 213, 1, 5, // Opcode: XOR_F_R
/* 726 */     MCD::OPC_FilterValue, 224, 1, 10, 0, // Skip to: 741
/* 731 */     MCD::OPC_CheckField, 17, 1, 0, 235, 0, // Skip to: 972
/* 737 */     MCD::OPC_Decode, 178, 1, 9, // Opcode: SELECT
/* 741 */     MCD::OPC_FilterValue, 240, 1, 19, 0, // Skip to: 765
/* 746 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 749 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 757
/* 753 */     MCD::OPC_Decode, 183, 1, 5, // Opcode: SHL_R
/* 757 */     MCD::OPC_FilterValue, 1, 211, 0, // Skip to: 972
/* 761 */     MCD::OPC_Decode, 182, 1, 5, // Opcode: SHL_F_R
/* 765 */     MCD::OPC_FilterValue, 248, 1, 202, 0, // Skip to: 972
/* 770 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 773 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 781
/* 777 */     MCD::OPC_Decode, 188, 1, 5, // Opcode: SRA_R
/* 781 */     MCD::OPC_FilterValue, 1, 187, 0, // Skip to: 972
/* 785 */     MCD::OPC_Decode, 187, 1, 5, // Opcode: SRA_F_R
/* 789 */     MCD::OPC_FilterValue, 13, 27, 0, // Skip to: 820
/* 793 */     MCD::OPC_ExtractField, 0, 18,  // Inst{17-0} ...
/* 796 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 804
/* 800 */     MCD::OPC_Decode, 173, 1, 10, // Opcode: POPC
/* 804 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 812
/* 808 */     MCD::OPC_Decode, 159, 1, 10, // Opcode: LEADZ
/* 812 */     MCD::OPC_FilterValue, 3, 156, 0, // Skip to: 972
/* 816 */     MCD::OPC_Decode, 210, 1, 10, // Opcode: TRAILZ
/* 820 */     MCD::OPC_FilterValue, 14, 62, 0, // Skip to: 886
/* 824 */     MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 827 */     MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 851
/* 831 */     MCD::OPC_CheckField, 25, 3, 0, 10, 0, // Skip to: 847
/* 837 */     MCD::OPC_CheckField, 0, 1, 0, 4, 0, // Skip to: 847
/* 843 */     MCD::OPC_Decode, 143, 1, 11, // Opcode: BT
/* 847 */     MCD::OPC_Decode, 139, 1, 12, // Opcode: BRCC
/* 851 */     MCD::OPC_FilterValue, 1, 117, 0, // Skip to: 972
/* 855 */     MCD::OPC_ExtractField, 23, 2,  // Inst{24-23} ...
/* 858 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 872
/* 862 */     MCD::OPC_CheckField, 2, 16, 0, 104, 0, // Skip to: 972
/* 868 */     MCD::OPC_Decode, 177, 1, 13, // Opcode: SCC
/* 872 */     MCD::OPC_FilterValue, 2, 96, 0, // Skip to: 972
/* 876 */     MCD::OPC_CheckField, 16, 7, 0, 90, 0, // Skip to: 972
/* 882 */     MCD::OPC_Decode, 142, 1, 14, // Opcode: BRR
/* 886 */     MCD::OPC_FilterValue, 15, 82, 0, // Skip to: 972
/* 890 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 893 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 901
/* 897 */     MCD::OPC_Decode, 147, 1, 15, // Opcode: LDADDR
/* 901 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 909
/* 905 */     MCD::OPC_Decode, 191, 1, 15, // Opcode: STADDR
/* 909 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 917
/* 913 */     MCD::OPC_Decode, 184, 1, 15, // Opcode: SLI
/* 917 */     MCD::OPC_FilterValue, 3, 51, 0, // Skip to: 972
/* 921 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 924 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 932
/* 928 */     MCD::OPC_Decode, 152, 1, 16, // Opcode: LDHs_RI
/* 932 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 940
/* 936 */     MCD::OPC_Decode, 154, 1, 16, // Opcode: LDHz_RI
/* 940 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 948
/* 944 */     MCD::OPC_Decode, 194, 1, 16, // Opcode: STH_RI
/* 948 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 956
/* 952 */     MCD::OPC_Decode, 148, 1, 16, // Opcode: LDBs_RI
/* 956 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 964
/* 960 */     MCD::OPC_Decode, 150, 1, 16, // Opcode: LDBz_RI
/* 964 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 972
/* 968 */     MCD::OPC_Decode, 192, 1, 16, // Opcode: STB_RI
/* 972 */     MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  llvm_unreachable("Invalid index!");
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeShiftImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 16) << 0;
    tmp |= fieldFromInstruction(insn, 18, 5) << 18;
    if (decodeRiMemoryValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 8) << 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 10;
    tmp |= fieldFromInstruction(insn, 18, 5) << 15;
    if (decodeRrMemoryValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 3) << 1;
    tmp |= fieldFromInstruction(insn, 16, 1) << 0;
    if (decodePredicateOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 3) << 1;
    tmp |= fieldFromInstruction(insn, 16, 1) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 3) << 1;
    tmp |= fieldFromInstruction(insn, 16, 1) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 3) << 1;
    tmp |= fieldFromInstruction(insn, 16, 1) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 2, 23) << 2;
    if (decodeBranch(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 2, 23) << 2;
    if (decodeBranch(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 0;
    tmp |= fieldFromInstruction(insn, 25, 3) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 0;
    tmp |= fieldFromInstruction(insn, 25, 3) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 2, 14) << 2;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 0;
    tmp |= fieldFromInstruction(insn, 25, 3) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 16) << 0;
    tmp |= fieldFromInstruction(insn, 18, 5) << 16;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 0;
    tmp |= fieldFromInstruction(insn, 18, 5) << 12;
    if (decodeSplsValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  const FeatureBitset& Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  while (true) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;

      MI.clear();
      MI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm, DecodeComplete);
      assert(DecodeComplete);

      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": "
                   << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
      return S;
    }
    case MCD::OPC_TryDecode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the decode operation.
      MCInst TmpMI;
      TmpMI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, TmpMI, Address, DisAsm, DecodeComplete);
      DEBUG(dbgs() << Loc << ": OPC_TryDecode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": ");

      if (DecodeComplete) {
        // Decoding complete.
        DEBUG(dbgs() << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
        MI = TmpMI;
        return S;
      } else {
        assert(S == MCDisassembler::Fail);
        // If the decoding was incomplete, skip.
        Ptr += NumToSkip;
        DEBUG(dbgs() << "FAIL: continuing at " << (Ptr - DecodeTable) << "\n");
        // Reset decode status. This also drops a SoftFail status that could be
        // set before the decode attempt.
        S = MCDisassembler::Success;
      }
      break;
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
