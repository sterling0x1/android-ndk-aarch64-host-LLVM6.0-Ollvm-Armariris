/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * XCore Disassembler                                                      *|
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

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 0, 117, 0, // Skip to: 124
/* 7 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 10 */      MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 211, 2, 0, // Opcode: WAITEU_0R
/* 19 */      MCD::OPC_FilterValue, 237, 15, 4, 0, // Skip to: 28
/* 24 */      MCD::OPC_Decode, 155, 1, 0, // Opcode: CLRE_0R
/* 28 */      MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 37
/* 33 */      MCD::OPC_Decode, 186, 2, 0, // Opcode: SSYNC_0r
/* 37 */      MCD::OPC_FilterValue, 239, 15, 4, 0, // Skip to: 46
/* 42 */      MCD::OPC_Decode, 189, 1, 0, // Opcode: FREET_0R
/* 46 */      MCD::OPC_FilterValue, 252, 15, 4, 0, // Skip to: 55
/* 51 */      MCD::OPC_Decode, 164, 1, 0, // Opcode: DCALL_0R
/* 55 */      MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 64
/* 60 */      MCD::OPC_Decode, 221, 1, 0, // Opcode: KRET_0R
/* 64 */      MCD::OPC_FilterValue, 254, 15, 4, 0, // Skip to: 73
/* 69 */      MCD::OPC_Decode, 170, 1, 0, // Opcode: DRET_0R
/* 73 */      MCD::OPC_FilterValue, 255, 15, 4, 0, // Skip to: 82
/* 78 */      MCD::OPC_Decode, 167, 2, 0, // Opcode: SETKEP_0R
/* 82 */      MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 85 */      MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 93
/* 89 */      MCD::OPC_Decode, 173, 1, 1, // Opcode: EDU_1r
/* 93 */      MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 101
/* 97 */      MCD::OPC_Decode, 176, 1, 1, // Opcode: EEU_1r
/* 101 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 104 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 112
/* 108 */     MCD::OPC_Decode, 207, 1, 2, // Opcode: INITPC_2r
/* 112 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 120
/* 116 */     MCD::OPC_Decode, 201, 1, 2, // Opcode: GETST_2r
/* 120 */     MCD::OPC_Decode, 198, 2, 3, // Opcode: STW_2rus
/* 124 */     MCD::OPC_FilterValue, 1, 117, 0, // Skip to: 245
/* 128 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 131 */     MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 140
/* 136 */     MCD::OPC_Decode, 248, 1, 0, // Opcode: LDSPC_0R
/* 140 */     MCD::OPC_FilterValue, 237, 15, 4, 0, // Skip to: 149
/* 145 */     MCD::OPC_Decode, 191, 2, 0, // Opcode: STSPC_0R
/* 149 */     MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 158
/* 154 */     MCD::OPC_Decode, 249, 1, 0, // Opcode: LDSSR_0R
/* 158 */     MCD::OPC_FilterValue, 239, 15, 4, 0, // Skip to: 167
/* 163 */     MCD::OPC_Decode, 192, 2, 0, // Opcode: STSSR_0R
/* 167 */     MCD::OPC_FilterValue, 252, 15, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 190, 2, 0, // Opcode: STSED_0R
/* 176 */     MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 185
/* 181 */     MCD::OPC_Decode, 189, 2, 0, // Opcode: STET_0R
/* 185 */     MCD::OPC_FilterValue, 254, 15, 4, 0, // Skip to: 194
/* 190 */     MCD::OPC_Decode, 191, 1, 0, // Opcode: GETED_0R
/* 194 */     MCD::OPC_FilterValue, 255, 15, 4, 0, // Skip to: 203
/* 199 */     MCD::OPC_Decode, 192, 1, 0, // Opcode: GETET_0R
/* 203 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 206 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 214
/* 210 */     MCD::OPC_Decode, 210, 2, 1, // Opcode: WAITET_1R
/* 214 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 222
/* 218 */     MCD::OPC_Decode, 209, 2, 1, // Opcode: WAITEF_1R
/* 222 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 225 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 233
/* 229 */     MCD::OPC_Decode, 205, 1, 2, // Opcode: INITDP_2r
/* 233 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 241
/* 237 */     MCD::OPC_Decode, 151, 2, 4, // Opcode: OUTT_2r
/* 241 */     MCD::OPC_Decode, 131, 2, 3, // Opcode: LDW_2rus
/* 245 */     MCD::OPC_FilterValue, 2, 107, 0, // Skip to: 356
/* 249 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 252 */     MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 261
/* 257 */     MCD::OPC_Decode, 165, 1, 0, // Opcode: DENTSP_0R
/* 261 */     MCD::OPC_FilterValue, 237, 15, 4, 0, // Skip to: 270
/* 266 */     MCD::OPC_Decode, 169, 1, 0, // Opcode: DRESTSP_0R
/* 270 */     MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 279
/* 275 */     MCD::OPC_Decode, 193, 1, 0, // Opcode: GETID_0R
/* 279 */     MCD::OPC_FilterValue, 239, 15, 4, 0, // Skip to: 288
/* 284 */     MCD::OPC_Decode, 194, 1, 0, // Opcode: GETKEP_0R
/* 288 */     MCD::OPC_FilterValue, 252, 15, 4, 0, // Skip to: 297
/* 293 */     MCD::OPC_Decode, 195, 1, 0, // Opcode: GETKSP_0R
/* 297 */     MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 306
/* 302 */     MCD::OPC_Decode, 247, 1, 0, // Opcode: LDSED_0R
/* 306 */     MCD::OPC_FilterValue, 254, 15, 4, 0, // Skip to: 315
/* 311 */     MCD::OPC_Decode, 245, 1, 0, // Opcode: LDET_0R
/* 315 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 318 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 326
/* 322 */     MCD::OPC_Decode, 188, 1, 1, // Opcode: FREER_1r
/* 326 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 334
/* 330 */     MCD::OPC_Decode, 139, 2, 1, // Opcode: MJOIN_1r
/* 334 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 337 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 345
/* 341 */     MCD::OPC_Decode, 208, 1, 2, // Opcode: INITSP_2r
/* 345 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 353
/* 349 */     MCD::OPC_Decode, 165, 2, 4, // Opcode: SETD_2r
/* 353 */     MCD::OPC_Decode, 119, 5, // Opcode: ADD_3r
/* 356 */     MCD::OPC_FilterValue, 3, 42, 0, // Skip to: 402
/* 360 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 363 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 371
/* 367 */     MCD::OPC_Decode, 208, 2, 1, // Opcode: TSTART_1R
/* 371 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 379
/* 375 */     MCD::OPC_Decode, 142, 2, 1, // Opcode: MSYNC_1r
/* 379 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 382 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 390
/* 386 */     MCD::OPC_Decode, 204, 1, 2, // Opcode: INITCP_2r
/* 390 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 398
/* 394 */     MCD::OPC_Decode, 206, 2, 6, // Opcode: TSETMR_2r
/* 398 */     MCD::OPC_Decode, 201, 2, 5, // Opcode: SUB_3r
/* 402 */     MCD::OPC_FilterValue, 4, 32, 0, // Skip to: 438
/* 406 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 409 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 417
/* 413 */     MCD::OPC_Decode, 132, 1, 1, // Opcode: BLA_1r
/* 417 */     MCD::OPC_FilterValue, 127, 3, 0, // Skip to: 424
/* 421 */     MCD::OPC_Decode, 126, 1, // Opcode: BAU_1r
/* 424 */     MCD::OPC_CheckField, 4, 1, 1, 4, 0, // Skip to: 434
/* 430 */     MCD::OPC_Decode, 175, 1, 2, // Opcode: EET_2r
/* 434 */     MCD::OPC_Decode, 183, 2, 5, // Opcode: SHL_3r
/* 438 */     MCD::OPC_FilterValue, 5, 41, 0, // Skip to: 483
/* 442 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 445 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 453
/* 449 */     MCD::OPC_Decode, 149, 1, 1, // Opcode: BRU_1r
/* 453 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 461
/* 457 */     MCD::OPC_Decode, 173, 2, 1, // Opcode: SETSP_1r
/* 461 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 464 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 471
/* 468 */     MCD::OPC_Decode, 122, 7, // Opcode: ANDNOT_2r
/* 471 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 479
/* 475 */     MCD::OPC_Decode, 174, 1, 2, // Opcode: EEF_2r
/* 479 */     MCD::OPC_Decode, 185, 2, 5, // Opcode: SHR_3r
/* 483 */     MCD::OPC_FilterValue, 6, 42, 0, // Skip to: 529
/* 487 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 490 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 498
/* 494 */     MCD::OPC_Decode, 164, 2, 1, // Opcode: SETDP_1r
/* 498 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 506
/* 502 */     MCD::OPC_Decode, 160, 2, 1, // Opcode: SETCP_1r
/* 506 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 509 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 517
/* 513 */     MCD::OPC_Decode, 180, 2, 7, // Opcode: SEXT_2r
/* 517 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 525
/* 521 */     MCD::OPC_Decode, 181, 2, 8, // Opcode: SEXT_rus
/* 525 */     MCD::OPC_Decode, 182, 1, 5, // Opcode: EQ_3r
/* 529 */     MCD::OPC_FilterValue, 7, 41, 0, // Skip to: 574
/* 533 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 536 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 544
/* 540 */     MCD::OPC_Decode, 166, 1, 1, // Opcode: DGETREG_1r
/* 544 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 552
/* 548 */     MCD::OPC_Decode, 166, 2, 1, // Opcode: SETEV_1r
/* 552 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 555 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 563
/* 559 */     MCD::OPC_Decode, 202, 1, 2, // Opcode: GETTS_2r
/* 563 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 571
/* 567 */     MCD::OPC_Decode, 171, 2, 4, // Opcode: SETPT_2r
/* 571 */     MCD::OPC_Decode, 123, 5, // Opcode: AND_3r
/* 574 */     MCD::OPC_FilterValue, 8, 42, 0, // Skip to: 620
/* 578 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 581 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 589
/* 585 */     MCD::OPC_Decode, 214, 1, 1, // Opcode: KCALL_1r
/* 589 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 597
/* 593 */     MCD::OPC_Decode, 179, 2, 1, // Opcode: SETV_1r
/* 597 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 600 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 608
/* 604 */     MCD::OPC_Decode, 213, 2, 7, // Opcode: ZEXT_2r
/* 608 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 616
/* 612 */     MCD::OPC_Decode, 214, 2, 8, // Opcode: ZEXT_rus
/* 616 */     MCD::OPC_Decode, 146, 2, 5, // Opcode: OR_3r
/* 620 */     MCD::OPC_FilterValue, 9, 42, 0, // Skip to: 666
/* 624 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 627 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 635
/* 631 */     MCD::OPC_Decode, 171, 1, 1, // Opcode: ECALLF_1r
/* 635 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 643
/* 639 */     MCD::OPC_Decode, 172, 1, 1, // Opcode: ECALLT_1r
/* 643 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 646 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 654
/* 650 */     MCD::OPC_Decode, 147, 2, 2, // Opcode: OUTCT_2r
/* 654 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 662
/* 658 */     MCD::OPC_Decode, 148, 2, 9, // Opcode: OUTCT_rus
/* 662 */     MCD::OPC_Decode, 132, 2, 5, // Opcode: LDW_3r
/* 666 */     MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 689
/* 670 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 673 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 681
/* 677 */     MCD::OPC_Decode, 194, 2, 10, // Opcode: STWDP_ru6
/* 681 */     MCD::OPC_FilterValue, 1, 83, 2, // Skip to: 1280
/* 685 */     MCD::OPC_Decode, 197, 2, 10, // Opcode: STWSP_ru6
/* 689 */     MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 712
/* 693 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 696 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 704
/* 700 */     MCD::OPC_Decode, 255, 1, 10, // Opcode: LDWDP_ru6
/* 704 */     MCD::OPC_FilterValue, 1, 60, 2, // Skip to: 1280
/* 708 */     MCD::OPC_Decode, 130, 2, 10, // Opcode: LDWSP_ru6
/* 712 */     MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 735
/* 716 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 719 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 727
/* 723 */     MCD::OPC_Decode, 237, 1, 10, // Opcode: LDAWDP_ru6
/* 727 */     MCD::OPC_FilterValue, 1, 37, 2, // Skip to: 1280
/* 731 */     MCD::OPC_Decode, 242, 1, 10, // Opcode: LDAWSP_ru6
/* 735 */     MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 758
/* 739 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 742 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 750
/* 746 */     MCD::OPC_Decode, 244, 1, 10, // Opcode: LDC_ru6
/* 750 */     MCD::OPC_FilterValue, 1, 14, 2, // Skip to: 1280
/* 754 */     MCD::OPC_Decode, 252, 1, 10, // Opcode: LDWCP_ru6
/* 758 */     MCD::OPC_FilterValue, 14, 89, 0, // Skip to: 851
/* 762 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 765 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 808
/* 769 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 772 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 780
/* 776 */     MCD::OPC_Decode, 148, 1, 11, // Opcode: BRFU_u6
/* 780 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 788
/* 784 */     MCD::OPC_Decode, 131, 1, 11, // Opcode: BLAT_u6
/* 788 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 796
/* 792 */     MCD::OPC_Decode, 184, 1, 11, // Opcode: EXTDP_u6
/* 796 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 804
/* 800 */     MCD::OPC_Decode, 216, 1, 11, // Opcode: KCALL_u6
/* 804 */     MCD::OPC_Decode, 146, 1, 12, // Opcode: BRFT_ru6
/* 808 */     MCD::OPC_FilterValue, 1, 212, 1, // Skip to: 1280
/* 812 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 815 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 823
/* 819 */     MCD::OPC_Decode, 142, 1, 13, // Opcode: BRBU_u6
/* 823 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 831
/* 827 */     MCD::OPC_Decode, 180, 1, 11, // Opcode: ENTSP_u6
/* 831 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 839
/* 835 */     MCD::OPC_Decode, 186, 1, 11, // Opcode: EXTSP_u6
/* 839 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 847
/* 843 */     MCD::OPC_Decode, 157, 2, 11, // Opcode: RETSP_u6
/* 847 */     MCD::OPC_Decode, 140, 1, 14, // Opcode: BRBT_ru6
/* 851 */     MCD::OPC_FilterValue, 15, 73, 0, // Skip to: 928
/* 855 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 858 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 901
/* 862 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 865 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 873
/* 869 */     MCD::OPC_Decode, 160, 1, 11, // Opcode: CLRSR_u6
/* 873 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 881
/* 877 */     MCD::OPC_Decode, 177, 2, 11, // Opcode: SETSR_u6
/* 881 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 889
/* 885 */     MCD::OPC_Decode, 218, 1, 11, // Opcode: KENTSP_u6
/* 889 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 897
/* 893 */     MCD::OPC_Decode, 220, 1, 11, // Opcode: KRESTSP_u6
/* 897 */     MCD::OPC_Decode, 144, 1, 12, // Opcode: BRFF_ru6
/* 901 */     MCD::OPC_FilterValue, 1, 119, 1, // Skip to: 1280
/* 905 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 908 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 916
/* 912 */     MCD::OPC_Decode, 200, 1, 11, // Opcode: GETSR_u6
/* 916 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 924
/* 920 */     MCD::OPC_Decode, 235, 1, 11, // Opcode: LDAWCP_u6
/* 924 */     MCD::OPC_Decode, 138, 1, 14, // Opcode: BRBF_ru6
/* 928 */     MCD::OPC_FilterValue, 16, 42, 0, // Skip to: 974
/* 932 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 935 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 943
/* 939 */     MCD::OPC_Decode, 156, 1, 1, // Opcode: CLRPT_1R
/* 943 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 951
/* 947 */     MCD::OPC_Decode, 202, 2, 1, // Opcode: SYNCR_1r
/* 951 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 954 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 962
/* 958 */     MCD::OPC_Decode, 198, 1, 9, // Opcode: GETR_rus
/* 962 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 970
/* 966 */     MCD::OPC_Decode, 203, 1, 2, // Opcode: INCT_2r
/* 970 */     MCD::OPC_Decode, 223, 1, 5, // Opcode: LD16S_3r
/* 974 */     MCD::OPC_FilterValue, 17, 23, 0, // Skip to: 1001
/* 978 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 981 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 989
/* 985 */     MCD::OPC_Decode, 145, 2, 2, // Opcode: NOT
/* 989 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 997
/* 993 */     MCD::OPC_Decode, 211, 1, 2, // Opcode: INT_2r
/* 997 */     MCD::OPC_Decode, 224, 1, 5, // Opcode: LD8U_3r
/* 1001 */    MCD::OPC_FilterValue, 18, 22, 0, // Skip to: 1027
/* 1005 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1008 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1016
/* 1012 */    MCD::OPC_Decode, 144, 2, 2, // Opcode: NEG
/* 1016 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1024
/* 1020 */    MCD::OPC_Decode, 178, 1, 2, // Opcode: ENDIN_2r
/* 1024 */    MCD::OPC_Decode, 118, 3, // Opcode: ADD_2rus
/* 1027 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1035
/* 1031 */    MCD::OPC_Decode, 200, 2, 3, // Opcode: SUB_2rus
/* 1035 */    MCD::OPC_FilterValue, 20, 23, 0, // Skip to: 1062
/* 1039 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1042 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1050
/* 1046 */    MCD::OPC_Decode, 140, 2, 2, // Opcode: MKMSK_2r
/* 1050 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1058
/* 1054 */    MCD::OPC_Decode, 141, 2, 15, // Opcode: MKMSK_rus
/* 1058 */    MCD::OPC_Decode, 182, 2, 16, // Opcode: SHL_2rus
/* 1062 */    MCD::OPC_FilterValue, 21, 23, 0, // Skip to: 1089
/* 1066 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1069 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1077
/* 1073 */    MCD::OPC_Decode, 152, 2, 4, // Opcode: OUT_2r
/* 1077 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1085
/* 1081 */    MCD::OPC_Decode, 150, 2, 7, // Opcode: OUTSHR_2r
/* 1085 */    MCD::OPC_Decode, 184, 2, 16, // Opcode: SHR_2rus
/* 1089 */    MCD::OPC_FilterValue, 22, 23, 0, // Skip to: 1116
/* 1093 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1096 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1104
/* 1100 */    MCD::OPC_Decode, 212, 1, 2, // Opcode: IN_2r
/* 1104 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1112
/* 1108 */    MCD::OPC_Decode, 210, 1, 7, // Opcode: INSHR_2r
/* 1112 */    MCD::OPC_Decode, 181, 1, 3, // Opcode: EQ_2rus
/* 1116 */    MCD::OPC_FilterValue, 23, 23, 0, // Skip to: 1143
/* 1120 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1123 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1131
/* 1127 */    MCD::OPC_Decode, 153, 2, 2, // Opcode: PEEK_2r
/* 1131 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1139
/* 1135 */    MCD::OPC_Decode, 203, 2, 2, // Opcode: TESTCT_2r
/* 1139 */    MCD::OPC_Decode, 207, 2, 17, // Opcode: TSETR_3r
/* 1143 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1170
/* 1147 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1150 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1158
/* 1154 */    MCD::OPC_Decode, 169, 2, 4, // Opcode: SETPSC_2r
/* 1158 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1166
/* 1162 */    MCD::OPC_Decode, 205, 2, 2, // Opcode: TESTWCT_2r
/* 1166 */    MCD::OPC_Decode, 134, 2, 5, // Opcode: LSS_3r
/* 1170 */    MCD::OPC_FilterValue, 25, 23, 0, // Skip to: 1197
/* 1174 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1177 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1185
/* 1181 */    MCD::OPC_Decode, 153, 1, 2, // Opcode: CHKCT_2r
/* 1185 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1193
/* 1189 */    MCD::OPC_Decode, 154, 1, 15, // Opcode: CHKCT_rus
/* 1193 */    MCD::OPC_Decode, 136, 2, 5, // Opcode: LSU_3r
/* 1197 */    MCD::OPC_FilterValue, 26, 19, 0, // Skip to: 1220
/* 1201 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1204 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1212
/* 1208 */    MCD::OPC_Decode, 136, 1, 18, // Opcode: BLRF_u10
/* 1212 */    MCD::OPC_FilterValue, 1, 64, 0, // Skip to: 1280
/* 1216 */    MCD::OPC_Decode, 134, 1, 19, // Opcode: BLRB_u10
/* 1220 */    MCD::OPC_FilterValue, 27, 19, 0, // Skip to: 1243
/* 1224 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1227 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1235
/* 1231 */    MCD::OPC_Decode, 231, 1, 18, // Opcode: LDAPF_u10
/* 1235 */    MCD::OPC_FilterValue, 1, 41, 0, // Skip to: 1280
/* 1239 */    MCD::OPC_Decode, 228, 1, 19, // Opcode: LDAPB_u10
/* 1243 */    MCD::OPC_FilterValue, 28, 19, 0, // Skip to: 1266
/* 1247 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1250 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1258
/* 1254 */    MCD::OPC_Decode, 129, 1, 18, // Opcode: BLACP_u10
/* 1258 */    MCD::OPC_FilterValue, 1, 18, 0, // Skip to: 1280
/* 1262 */    MCD::OPC_Decode, 253, 1, 18, // Opcode: LDWCP_u10
/* 1266 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 1280
/* 1270 */    MCD::OPC_CheckField, 10, 1, 0, 4, 0, // Skip to: 1280
/* 1276 */    MCD::OPC_Decode, 163, 2, 12, // Opcode: SETC_ru6
/* 1280 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 3 */       MCD::OPC_FilterValue, 0, 92, 0, // Skip to: 99
/* 7 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 10 */      MCD::OPC_FilterValue, 31, 246, 3, // Skip to: 1028
/* 14 */      MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 17 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 31
/* 21 */      MCD::OPC_CheckField, 16, 11, 236, 15, 18, 0, // Skip to: 46
/* 28 */      MCD::OPC_Decode, 127, 20, // Opcode: BITREV_l2r
/* 31 */      MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 46
/* 35 */      MCD::OPC_CheckField, 16, 11, 236, 15, 4, 0, // Skip to: 46
/* 42 */      MCD::OPC_Decode, 152, 1, 20, // Opcode: BYTEREV_l2r
/* 46 */      MCD::OPC_CheckField, 16, 11, 236, 15, 4, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 199, 2, 21, // Opcode: STW_l3r
/* 57 */      MCD::OPC_ExtractField, 20, 7,  // Inst{26-20} ...
/* 60 */      MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 68
/* 64 */      MCD::OPC_Decode, 162, 1, 22, // Opcode: CRC8_l4r
/* 68 */      MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 76
/* 72 */      MCD::OPC_Decode, 138, 2, 23, // Opcode: MACCU_l4r
/* 76 */      MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 79 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 87
/* 83 */      MCD::OPC_Decode, 246, 1, 24, // Opcode: LDIVU_l5r
/* 87 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 95
/* 91 */      MCD::OPC_Decode, 222, 1, 24, // Opcode: LADD_l5r
/* 95 */      MCD::OPC_Decode, 133, 2, 25, // Opcode: LMUL_l6r
/* 99 */      MCD::OPC_FilterValue, 1, 87, 0, // Skip to: 190
/* 103 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 106 */     MCD::OPC_FilterValue, 31, 150, 3, // Skip to: 1028
/* 110 */     MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 113 */     MCD::OPC_FilterValue, 0, 143, 3, // Skip to: 1028
/* 117 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 120 */     MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 140
/* 124 */     MCD::OPC_CheckField, 21, 6, 63, 30, 0, // Skip to: 160
/* 130 */     MCD::OPC_CheckField, 16, 4, 12, 24, 0, // Skip to: 160
/* 136 */     MCD::OPC_Decode, 161, 1, 20, // Opcode: CLZ_l2r
/* 140 */     MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 160
/* 144 */     MCD::OPC_CheckField, 21, 6, 63, 10, 0, // Skip to: 160
/* 150 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 159, 2, 26, // Opcode: SETCLK_l2r
/* 160 */     MCD::OPC_CheckField, 21, 6, 63, 10, 0, // Skip to: 176
/* 166 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 212, 2, 21, // Opcode: XOR_l3r
/* 176 */     MCD::OPC_CheckField, 21, 6, 63, 4, 0, // Skip to: 186
/* 182 */     MCD::OPC_Decode, 137, 2, 23, // Opcode: MACCS_l4r
/* 186 */     MCD::OPC_Decode, 135, 2, 24, // Opcode: LSUB_l5r
/* 190 */     MCD::OPC_FilterValue, 2, 31, 0, // Skip to: 225
/* 194 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 197 */     MCD::OPC_FilterValue, 159, 251, 3, 57, 3, // Skip to: 1028
/* 203 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 206 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 214
/* 210 */     MCD::OPC_Decode, 206, 1, 20, // Opcode: INITLR_l2r
/* 214 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 222
/* 218 */     MCD::OPC_Decode, 197, 1, 20, // Opcode: GETPS_l2r
/* 222 */     MCD::OPC_Decode, 125, 21, // Opcode: ASHR_l3r
/* 225 */     MCD::OPC_FilterValue, 3, 32, 0, // Skip to: 261
/* 229 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 232 */     MCD::OPC_FilterValue, 159, 251, 3, 22, 3, // Skip to: 1028
/* 238 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 241 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 249
/* 245 */     MCD::OPC_Decode, 170, 2, 26, // Opcode: SETPS_l2r
/* 249 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 257
/* 253 */     MCD::OPC_Decode, 190, 1, 20, // Opcode: GETD_l2r
/* 257 */     MCD::OPC_Decode, 240, 1, 21, // Opcode: LDAWF_l3r
/* 261 */     MCD::OPC_FilterValue, 4, 32, 0, // Skip to: 297
/* 265 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 268 */     MCD::OPC_FilterValue, 159, 251, 3, 242, 2, // Skip to: 1028
/* 274 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 277 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 285
/* 281 */     MCD::OPC_Decode, 204, 2, 20, // Opcode: TESTLCL_l2r
/* 285 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 293
/* 289 */     MCD::OPC_Decode, 178, 2, 26, // Opcode: SETTW_l2r
/* 293 */     MCD::OPC_Decode, 233, 1, 21, // Opcode: LDAWB_l3r
/* 297 */     MCD::OPC_FilterValue, 5, 32, 0, // Skip to: 333
/* 301 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 304 */     MCD::OPC_FilterValue, 159, 251, 3, 206, 2, // Skip to: 1028
/* 310 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 313 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 321
/* 317 */     MCD::OPC_Decode, 172, 2, 26, // Opcode: SETRDY_l2r
/* 321 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 329
/* 325 */     MCD::OPC_Decode, 161, 2, 20, // Opcode: SETC_l2r
/* 329 */     MCD::OPC_Decode, 226, 1, 21, // Opcode: LDA16F_l3r
/* 333 */     MCD::OPC_FilterValue, 6, 32, 0, // Skip to: 369
/* 337 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 340 */     MCD::OPC_FilterValue, 159, 251, 3, 170, 2, // Skip to: 1028
/* 346 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 349 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 357
/* 353 */     MCD::OPC_Decode, 168, 2, 26, // Opcode: SETN_l2r
/* 357 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 365
/* 361 */     MCD::OPC_Decode, 196, 1, 20, // Opcode: GETN_l2r
/* 365 */     MCD::OPC_Decode, 225, 1, 21, // Opcode: LDA16B_l3r
/* 369 */     MCD::OPC_FilterValue, 7, 12, 0, // Skip to: 385
/* 373 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 135, 2, // Skip to: 1028
/* 381 */     MCD::OPC_Decode, 143, 2, 21, // Opcode: MUL_l3r
/* 385 */     MCD::OPC_FilterValue, 8, 12, 0, // Skip to: 401
/* 389 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 119, 2, // Skip to: 1028
/* 397 */     MCD::OPC_Decode, 167, 1, 21, // Opcode: DIVS_l3r
/* 401 */     MCD::OPC_FilterValue, 9, 12, 0, // Skip to: 417
/* 405 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 103, 2, // Skip to: 1028
/* 413 */     MCD::OPC_Decode, 168, 1, 21, // Opcode: DIVU_l3r
/* 417 */     MCD::OPC_FilterValue, 10, 31, 0, // Skip to: 452
/* 421 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 424 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 438
/* 428 */     MCD::OPC_CheckField, 10, 6, 60, 82, 2, // Skip to: 1028
/* 434 */     MCD::OPC_Decode, 193, 2, 27, // Opcode: STWDP_lru6
/* 438 */     MCD::OPC_FilterValue, 1, 74, 2, // Skip to: 1028
/* 442 */     MCD::OPC_CheckField, 10, 6, 60, 68, 2, // Skip to: 1028
/* 448 */     MCD::OPC_Decode, 196, 2, 27, // Opcode: STWSP_lru6
/* 452 */     MCD::OPC_FilterValue, 11, 31, 0, // Skip to: 487
/* 456 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 459 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 473
/* 463 */     MCD::OPC_CheckField, 10, 6, 60, 47, 2, // Skip to: 1028
/* 469 */     MCD::OPC_Decode, 254, 1, 27, // Opcode: LDWDP_lru6
/* 473 */     MCD::OPC_FilterValue, 1, 39, 2, // Skip to: 1028
/* 477 */     MCD::OPC_CheckField, 10, 6, 60, 33, 2, // Skip to: 1028
/* 483 */     MCD::OPC_Decode, 129, 2, 27, // Opcode: LDWSP_lru6
/* 487 */     MCD::OPC_FilterValue, 12, 31, 0, // Skip to: 522
/* 491 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 494 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 508
/* 498 */     MCD::OPC_CheckField, 10, 6, 60, 12, 2, // Skip to: 1028
/* 504 */     MCD::OPC_Decode, 236, 1, 27, // Opcode: LDAWDP_lru6
/* 508 */     MCD::OPC_FilterValue, 1, 4, 2, // Skip to: 1028
/* 512 */     MCD::OPC_CheckField, 10, 6, 60, 254, 1, // Skip to: 1028
/* 518 */     MCD::OPC_Decode, 241, 1, 27, // Opcode: LDAWSP_lru6
/* 522 */     MCD::OPC_FilterValue, 13, 31, 0, // Skip to: 557
/* 526 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 529 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 543
/* 533 */     MCD::OPC_CheckField, 10, 6, 60, 233, 1, // Skip to: 1028
/* 539 */     MCD::OPC_Decode, 243, 1, 27, // Opcode: LDC_lru6
/* 543 */     MCD::OPC_FilterValue, 1, 225, 1, // Skip to: 1028
/* 547 */     MCD::OPC_CheckField, 10, 6, 60, 219, 1, // Skip to: 1028
/* 553 */     MCD::OPC_Decode, 250, 1, 27, // Opcode: LDWCP_lru6
/* 557 */     MCD::OPC_FilterValue, 14, 103, 0, // Skip to: 664
/* 561 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 564 */     MCD::OPC_FilterValue, 0, 46, 0, // Skip to: 614
/* 568 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 571 */     MCD::OPC_FilterValue, 60, 197, 1, // Skip to: 1028
/* 575 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 578 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 586
/* 582 */     MCD::OPC_Decode, 147, 1, 28, // Opcode: BRFU_lu6
/* 586 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 594
/* 590 */     MCD::OPC_Decode, 130, 1, 28, // Opcode: BLAT_lu6
/* 594 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 602
/* 598 */     MCD::OPC_Decode, 183, 1, 28, // Opcode: EXTDP_lu6
/* 602 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 610
/* 606 */     MCD::OPC_Decode, 215, 1, 28, // Opcode: KCALL_lu6
/* 610 */     MCD::OPC_Decode, 145, 1, 29, // Opcode: BRFT_lru6
/* 614 */     MCD::OPC_FilterValue, 1, 154, 1, // Skip to: 1028
/* 618 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 621 */     MCD::OPC_FilterValue, 60, 147, 1, // Skip to: 1028
/* 625 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 628 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 636
/* 632 */     MCD::OPC_Decode, 141, 1, 30, // Opcode: BRBU_lu6
/* 636 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 644
/* 640 */     MCD::OPC_Decode, 179, 1, 28, // Opcode: ENTSP_lu6
/* 644 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 652
/* 648 */     MCD::OPC_Decode, 185, 1, 28, // Opcode: EXTSP_lu6
/* 652 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 660
/* 656 */     MCD::OPC_Decode, 156, 2, 28, // Opcode: RETSP_lu6
/* 660 */     MCD::OPC_Decode, 139, 1, 31, // Opcode: BRBT_lru6
/* 664 */     MCD::OPC_FilterValue, 15, 87, 0, // Skip to: 755
/* 668 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 671 */     MCD::OPC_FilterValue, 0, 46, 0, // Skip to: 721
/* 675 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 678 */     MCD::OPC_FilterValue, 60, 90, 1, // Skip to: 1028
/* 682 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 685 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 693
/* 689 */     MCD::OPC_Decode, 159, 1, 28, // Opcode: CLRSR_lu6
/* 693 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 701
/* 697 */     MCD::OPC_Decode, 176, 2, 28, // Opcode: SETSR_lu6
/* 701 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 709
/* 705 */     MCD::OPC_Decode, 217, 1, 28, // Opcode: KENTSP_lu6
/* 709 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 717
/* 713 */     MCD::OPC_Decode, 219, 1, 28, // Opcode: KRESTSP_lu6
/* 717 */     MCD::OPC_Decode, 143, 1, 29, // Opcode: BRFF_lru6
/* 721 */     MCD::OPC_FilterValue, 1, 47, 1, // Skip to: 1028
/* 725 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 728 */     MCD::OPC_FilterValue, 60, 40, 1, // Skip to: 1028
/* 732 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 735 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 743
/* 739 */     MCD::OPC_Decode, 199, 1, 28, // Opcode: GETSR_lu6
/* 743 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 751
/* 747 */     MCD::OPC_Decode, 234, 1, 28, // Opcode: LDAWCP_lu6
/* 751 */     MCD::OPC_Decode, 137, 1, 31, // Opcode: BRBF_lru6
/* 755 */     MCD::OPC_FilterValue, 16, 12, 0, // Skip to: 771
/* 759 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 5, 1, // Skip to: 1028
/* 767 */     MCD::OPC_Decode, 187, 2, 21, // Opcode: ST16_l3r
/* 771 */     MCD::OPC_FilterValue, 17, 12, 0, // Skip to: 787
/* 775 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 245, 0, // Skip to: 1028
/* 783 */     MCD::OPC_Decode, 188, 2, 21, // Opcode: ST8_l3r
/* 787 */     MCD::OPC_FilterValue, 18, 32, 0, // Skip to: 823
/* 791 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 794 */     MCD::OPC_FilterValue, 159, 251, 3, 3, 0, // Skip to: 803
/* 800 */     MCD::OPC_Decode, 124, 32, // Opcode: ASHR_l2rus
/* 803 */     MCD::OPC_FilterValue, 191, 251, 3, 4, 0, // Skip to: 813
/* 809 */     MCD::OPC_Decode, 149, 2, 32, // Opcode: OUTPW_l2rus
/* 813 */     MCD::OPC_FilterValue, 223, 251, 3, 209, 0, // Skip to: 1028
/* 819 */     MCD::OPC_Decode, 209, 1, 32, // Opcode: INPW_l2rus
/* 823 */     MCD::OPC_FilterValue, 19, 12, 0, // Skip to: 839
/* 827 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 193, 0, // Skip to: 1028
/* 835 */     MCD::OPC_Decode, 239, 1, 33, // Opcode: LDAWF_l2rus
/* 839 */     MCD::OPC_FilterValue, 20, 12, 0, // Skip to: 855
/* 843 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 177, 0, // Skip to: 1028
/* 851 */     MCD::OPC_Decode, 232, 1, 33, // Opcode: LDAWB_l2rus
/* 855 */     MCD::OPC_FilterValue, 21, 12, 0, // Skip to: 871
/* 859 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 161, 0, // Skip to: 1028
/* 867 */     MCD::OPC_Decode, 163, 1, 34, // Opcode: CRC_l3r
/* 871 */     MCD::OPC_FilterValue, 24, 12, 0, // Skip to: 887
/* 875 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 145, 0, // Skip to: 1028
/* 883 */     MCD::OPC_Decode, 154, 2, 21, // Opcode: REMS_l3r
/* 887 */     MCD::OPC_FilterValue, 25, 12, 0, // Skip to: 903
/* 891 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 129, 0, // Skip to: 1028
/* 899 */     MCD::OPC_Decode, 155, 2, 21, // Opcode: REMU_l3r
/* 903 */     MCD::OPC_FilterValue, 26, 31, 0, // Skip to: 938
/* 907 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 910 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 924
/* 914 */     MCD::OPC_CheckField, 10, 6, 60, 108, 0, // Skip to: 1028
/* 920 */     MCD::OPC_Decode, 135, 1, 35, // Opcode: BLRF_lu10
/* 924 */     MCD::OPC_FilterValue, 1, 100, 0, // Skip to: 1028
/* 928 */     MCD::OPC_CheckField, 10, 6, 60, 94, 0, // Skip to: 1028
/* 934 */     MCD::OPC_Decode, 133, 1, 36, // Opcode: BLRB_lu10
/* 938 */     MCD::OPC_FilterValue, 27, 31, 0, // Skip to: 973
/* 942 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 945 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 959
/* 949 */     MCD::OPC_CheckField, 10, 6, 60, 73, 0, // Skip to: 1028
/* 955 */     MCD::OPC_Decode, 229, 1, 35, // Opcode: LDAPF_lu10
/* 959 */     MCD::OPC_FilterValue, 1, 65, 0, // Skip to: 1028
/* 963 */     MCD::OPC_CheckField, 10, 6, 60, 59, 0, // Skip to: 1028
/* 969 */     MCD::OPC_Decode, 227, 1, 36, // Opcode: LDAPB_lu10
/* 973 */     MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 1008
/* 977 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 980 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 994
/* 984 */     MCD::OPC_CheckField, 10, 6, 60, 38, 0, // Skip to: 1028
/* 990 */     MCD::OPC_Decode, 128, 1, 35, // Opcode: BLACP_lu10
/* 994 */     MCD::OPC_FilterValue, 1, 30, 0, // Skip to: 1028
/* 998 */     MCD::OPC_CheckField, 10, 6, 60, 24, 0, // Skip to: 1028
/* 1004 */    MCD::OPC_Decode, 251, 1, 35, // Opcode: LDWCP_lu10
/* 1008 */    MCD::OPC_FilterValue, 29, 16, 0, // Skip to: 1028
/* 1012 */    MCD::OPC_CheckField, 26, 1, 0, 10, 0, // Skip to: 1028
/* 1018 */    MCD::OPC_CheckField, 10, 6, 60, 4, 0, // Skip to: 1028
/* 1024 */    MCD::OPC_Decode, 162, 2, 29, // Opcode: SETC_lru6
/* 1028 */    MCD::OPC_Fail,
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
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    if (Decode2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    if (Decode2RUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    if (DecodeR2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    if (Decode3RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    if (Decode2RImmInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    if (Decode2RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    if (DecodeRUSSrcDstBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    if (DecodeRUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 0, 6);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    if (DecodeRUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    if (Decode2RUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    if (Decode3RImmInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 0, 10);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    if (DecodeL2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    if (DecodeL3RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    if (DecodeL4RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    if (DecodeL4RSrcDstSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    if (DecodeL5RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    if (DecodeL6RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    if (DecodeLR2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 28:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 30:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    if (DecodeL2RUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    if (DecodeL2RUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    if (DecodeL3RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 10;
    tmp |= fieldFromInstruction(insn, 16, 10) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 36:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 10;
    tmp |= fieldFromInstruction(insn, 16, 10) << 0;
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
