/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Matcher Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  uint64_t ComputeAvailableFeatures(const FeatureBitset& FB) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0);
  OperandMatchResultTy MatchOperandParserImpl(
    OperandVector &Operands,
    StringRef Mnemonic,
    bool ParseForAllFeatures = false);
  OperandMatchResultTy tryCustomParseOperand(
    OperandVector &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint8_t {
  Feature_UseSoftMulDiv = (1ULL << 4),
  Feature_HasV9 = (1ULL << 0),
  Feature_HasVIS = (1ULL << 1),
  Feature_HasVIS2 = (1ULL << 2),
  Feature_HasVIS3 = (1ULL << 3),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_UseSoftMulDiv: return "";
  case Feature_HasV9: return "";
  case Feature_HasVIS: return "";
  case Feature_HasVIS2: return "";
  case Feature_HasVIS3: return "";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static void applyMnemonicAliases(StringRef &Mnemonic, uint64_t Features, unsigned VariantID) {
  switch (VariantID) {
    case 0:
      switch (Mnemonic.size()) {
      default: break;
      case 4:	 // 3 strings to match.
        switch (Mnemonic[0]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ddc", 3) != 0)
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addc"
            Mnemonic = "addx";
          return;
        case 'l':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "duw", 3) != 0)
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "lduw"
            Mnemonic = "ld";
          return;
        case 's':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ubc", 3) != 0)
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subc"
            Mnemonic = "subx";
          return;
        }
        break;
      case 5:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "lduwa", 5) != 0)
          break;
        if ((Features & Feature_HasV9) == Feature_HasV9)	 // "lduwa"
          Mnemonic = "lda";
        return;
      case 6:	 // 3 strings to match.
        switch (Mnemonic[0]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ddccc", 5) != 0)
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addccc"
            Mnemonic = "addxcc";
          return;
        case 'r':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "eturn", 5) != 0)
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "return"
            Mnemonic = "rett";
          return;
        case 's':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ubccc", 5) != 0)
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subccc"
            Mnemonic = "subxcc";
          return;
        }
        break;
      }
    break;
  }
  switch (Mnemonic.size()) {
  default: break;
  case 4:	 // 3 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ddc", 3) != 0)
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addc"
        Mnemonic = "addx";
      return;
    case 'l':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "duw", 3) != 0)
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "lduw"
        Mnemonic = "ld";
      return;
    case 's':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ubc", 3) != 0)
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subc"
        Mnemonic = "subx";
      return;
    }
    break;
  case 5:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "lduwa", 5) != 0)
      break;
    if ((Features & Feature_HasV9) == Feature_HasV9)	 // "lduwa"
      Mnemonic = "lda";
    return;
  case 6:	 // 3 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ddccc", 5) != 0)
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addccc"
        Mnemonic = "addxcc";
      return;
    case 'r':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "eturn", 5) != 0)
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "return"
        Mnemonic = "rett";
      return;
    case 's':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ubccc", 5) != 0)
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subccc"
        Mnemonic = "subxcc";
      return;
    }
    break;
  }
}

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_Reg,
  CVT_95_addImmOperands,
  CVT_imm_95_8,
  CVT_imm_95_13,
  CVT_imm_95_5,
  CVT_imm_95_1,
  CVT_imm_95_10,
  CVT_imm_95_11,
  CVT_imm_95_12,
  CVT_imm_95_3,
  CVT_imm_95_2,
  CVT_imm_95_4,
  CVT_imm_95_0,
  CVT_imm_95_9,
  CVT_imm_95_6,
  CVT_imm_95_14,
  CVT_regG0,
  CVT_imm_95_15,
  CVT_imm_95_7,
  CVT_regO7,
  CVT_95_addMEMriOperands,
  CVT_95_addMEMrrOperands,
  CVT_regFCC0,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Reg1_2__Reg1_0__Reg1_1,
  Convert__Reg1_2__Reg1_0__Imm1_1,
  Convert__Imm1_0__imm_95_8,
  Convert__Imm1_1__imm_95_8,
  Convert__Imm1_1__Imm1_0,
  Convert__Imm1_2__imm_95_8,
  Convert__Imm1_2__Imm1_0,
  Convert__Imm1_3__imm_95_8,
  Convert__Imm1_3__Imm1_0,
  Convert__Imm1_4__Imm1_0,
  Convert__Imm1_0,
  Convert__Imm1_0__imm_95_13,
  Convert__Imm1_1__imm_95_13,
  Convert__Imm1_2__imm_95_13,
  Convert__Imm1_3__imm_95_13,
  Convert__Reg1_1__Reg1_1__Reg1_0,
  Convert__Reg1_1__Reg1_1__Imm1_0,
  Convert__Imm1_0__imm_95_5,
  Convert__Imm1_1__imm_95_5,
  Convert__Imm1_2__imm_95_5,
  Convert__Imm1_3__imm_95_5,
  Convert__Imm1_0__imm_95_1,
  Convert__Imm1_1__imm_95_1,
  Convert__Imm1_2__imm_95_1,
  Convert__Imm1_3__imm_95_1,
  Convert__Imm1_0__imm_95_10,
  Convert__Imm1_1__imm_95_10,
  Convert__Imm1_2__imm_95_10,
  Convert__Imm1_3__imm_95_10,
  Convert__Imm1_0__imm_95_11,
  Convert__Imm1_1__imm_95_11,
  Convert__Imm1_2__imm_95_11,
  Convert__Imm1_3__imm_95_11,
  Convert__Imm1_0__imm_95_12,
  Convert__Imm1_1__imm_95_12,
  Convert__Imm1_2__imm_95_12,
  Convert__Imm1_3__imm_95_12,
  Convert__Imm1_0__imm_95_3,
  Convert__Imm1_1__imm_95_3,
  Convert__Imm1_2__imm_95_3,
  Convert__Imm1_3__imm_95_3,
  Convert__Imm1_0__imm_95_2,
  Convert__Imm1_1__imm_95_2,
  Convert__Imm1_2__imm_95_2,
  Convert__Imm1_3__imm_95_2,
  Convert__Imm1_0__imm_95_4,
  Convert__Imm1_1__imm_95_4,
  Convert__Imm1_2__imm_95_4,
  Convert__Imm1_3__imm_95_4,
  Convert__Imm1_0__imm_95_0,
  Convert__Imm1_1__imm_95_0,
  Convert__Imm1_2__imm_95_0,
  Convert__Imm1_3__imm_95_0,
  Convert__Imm1_0__imm_95_9,
  Convert__Imm1_1__imm_95_9,
  Convert__Imm1_2__imm_95_9,
  Convert__Imm1_3__imm_95_9,
  Convert__Imm1_0__imm_95_6,
  Convert__Imm1_1__imm_95_6,
  Convert__Imm1_2__imm_95_6,
  Convert__Imm1_3__imm_95_6,
  Convert__Imm1_0__imm_95_14,
  Convert__Imm1_1__imm_95_14,
  Convert__Imm1_2__imm_95_14,
  Convert__Imm1_3__imm_95_14,
  Convert__Reg1_0__Imm1_1,
  Convert__Reg1_1__Imm1_2,
  Convert__Reg1_2__Imm1_3,
  Convert__regG0__Reg1_1__Reg1_0,
  Convert__regG0__Reg1_1__Imm1_0,
  Convert__Imm1_0__imm_95_15,
  Convert__Imm1_1__imm_95_15,
  Convert__Imm1_2__imm_95_15,
  Convert__Imm1_3__imm_95_15,
  Convert__Imm1_0__imm_95_7,
  Convert__Imm1_1__imm_95_7,
  Convert__Imm1_2__imm_95_7,
  Convert__Imm1_3__imm_95_7,
  Convert__regO7__MEMri2_0,
  Convert__regO7__MEMrr2_0,
  Convert__Reg1_4__Reg1_1__Reg1_3__Tie0,
  Convert__Reg1_5__Reg1_1__Reg1_4__Tie0,
  Convert__Reg1_5__Reg1_1__Reg1_4__Tie0__Imm1_3,
  Convert__Reg1_0__regG0__regG0,
  Convert__MEMri2_1__regG0,
  Convert__MEMrr2_1__regG0,
  Convert__Reg1_0,
  Convert__Reg1_0__Reg1_1,
  Convert__Reg1_0__Reg1_0__imm_95_1,
  Convert__Reg1_1__Reg1_0,
  Convert__Imm1_1__imm_95_8__Reg1_0,
  Convert__Imm1_2__imm_95_8__Reg1_1,
  Convert__Imm1_2__Imm1_0__Reg1_1,
  Convert__Imm1_3__imm_95_8__Reg1_2,
  Convert__Imm1_3__Imm1_0__Reg1_2,
  Convert__Imm1_4__Imm1_0__Reg1_3,
  Convert__Imm1_1__imm_95_9__Reg1_0,
  Convert__Imm1_2__imm_95_9__Reg1_1,
  Convert__Imm1_3__imm_95_9__Reg1_2,
  Convert__Imm1_1__imm_95_6__Reg1_0,
  Convert__Imm1_2__imm_95_6__Reg1_1,
  Convert__Imm1_3__imm_95_6__Reg1_2,
  Convert__Imm1_1__imm_95_11__Reg1_0,
  Convert__Imm1_2__imm_95_11__Reg1_1,
  Convert__Imm1_3__imm_95_11__Reg1_2,
  Convert__Imm1_1__imm_95_4__Reg1_0,
  Convert__Imm1_2__imm_95_4__Reg1_1,
  Convert__Imm1_3__imm_95_4__Reg1_2,
  Convert__Imm1_1__imm_95_13__Reg1_0,
  Convert__Imm1_2__imm_95_13__Reg1_1,
  Convert__Imm1_3__imm_95_13__Reg1_2,
  Convert__Imm1_1__imm_95_2__Reg1_0,
  Convert__Imm1_2__imm_95_2__Reg1_1,
  Convert__Imm1_3__imm_95_2__Reg1_2,
  Convert__Imm1_1__imm_95_0__Reg1_0,
  Convert__Imm1_2__imm_95_0__Reg1_1,
  Convert__Imm1_3__imm_95_0__Reg1_2,
  Convert__Imm1_1__imm_95_1__Reg1_0,
  Convert__Imm1_2__imm_95_1__Reg1_1,
  Convert__Imm1_3__imm_95_1__Reg1_2,
  Convert__Imm1_1__imm_95_15__Reg1_0,
  Convert__Imm1_2__imm_95_15__Reg1_1,
  Convert__Imm1_3__imm_95_15__Reg1_2,
  Convert__Imm1_1__imm_95_7__Reg1_0,
  Convert__Imm1_2__imm_95_7__Reg1_1,
  Convert__Imm1_3__imm_95_7__Reg1_2,
  Convert__Imm1_1__imm_95_10__Reg1_0,
  Convert__Imm1_2__imm_95_10__Reg1_1,
  Convert__Imm1_3__imm_95_10__Reg1_2,
  Convert__Imm1_1__imm_95_5__Reg1_0,
  Convert__Imm1_2__imm_95_5__Reg1_1,
  Convert__Imm1_3__imm_95_5__Reg1_2,
  Convert__Imm1_1__imm_95_12__Reg1_0,
  Convert__Imm1_2__imm_95_12__Reg1_1,
  Convert__Imm1_3__imm_95_12__Reg1_2,
  Convert__Imm1_1__imm_95_3__Reg1_0,
  Convert__Imm1_2__imm_95_3__Reg1_1,
  Convert__Imm1_3__imm_95_3__Reg1_2,
  Convert__Imm1_1__imm_95_14__Reg1_0,
  Convert__Imm1_2__imm_95_14__Reg1_1,
  Convert__Imm1_3__imm_95_14__Reg1_2,
  Convert__regFCC0__Reg1_0__Reg1_1,
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert_NoOperands,
  Convert__MEMri2_0,
  Convert__MEMrr2_0,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_8,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8,
  Convert__Reg1_3__Reg1_2__Tie0__Imm1_0,
  Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_13,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_5,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_1,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_10,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_11,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_12,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_3,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_2,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_4,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_0,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_9,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_6,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_14,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_15,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_7,
  Convert__Reg1_0__Tie0,
  Convert__regG0__MEMri2_0,
  Convert__regG0__MEMrr2_0,
  Convert__Reg1_1__MEMri2_0,
  Convert__Reg1_1__MEMrr2_0,
  Convert__MEMri2_1,
  Convert__Reg1_3__MEMri2_1,
  Convert__MEMrr2_1,
  Convert__Reg1_3__MEMrr2_1,
  Convert__Reg1_4__MEMrr2_1__Imm1_3,
  Convert__Reg1_1,
  Convert__regG0__Reg1_0,
  Convert__Reg1_1__regG0__Reg1_0,
  Convert__regG0__Imm1_0,
  Convert__Reg1_1__regG0__Imm1_0,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_8,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_8,
  Convert__Reg1_3__Imm1_2__Tie0__Imm1_0,
  Convert__Reg1_3__Reg1_1__Imm1_2__Tie0__Imm1_0,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_13,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_5,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_1,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_9,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_10,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_6,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_11,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_11,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_12,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_3,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_4,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_2,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_13,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_4,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_2,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_0,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_0,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_9,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_1,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_6,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_15,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_14,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_7,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_10,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_5,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_12,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_3,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_14,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_15,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_7,
  Convert__Reg1_0__regG0__Reg1_0,
  Convert__Reg1_0__Reg1_0__regG0,
  Convert__Reg1_1__Reg1_0__regG0,
  Convert__regG0__regG0__regG0,
  Convert__imm_95_8,
  Convert__Reg1_1__Imm1_0,
  Convert__Reg1_2__Reg1_0__Reg1_1__imm_95_0,
  Convert__Reg1_2__Reg1_0__Imm1_1__imm_95_0,
  Convert__MEMri2_2,
  Convert__MEMrr2_2,
  Convert__MEMri2_2__Reg1_0,
  Convert__MEMrr2_2__Reg1_0,
  Convert__MEMrr2_2__Reg1_0__Imm1_4,
  Convert__Reg1_3__MEMri2_1__Tie0,
  Convert__Reg1_3__MEMrr2_1__Tie0,
  Convert__Reg1_4__MEMrr2_1__Imm1_3__Tie0,
  Convert__regG0__Reg1_0__imm_95_8,
  Convert__regG0__Imm1_0__imm_95_8,
  Convert__regG0__Reg1_1__imm_95_8,
  Convert__regG0__Imm1_1__imm_95_8,
  Convert__Reg1_0__Reg1_2__imm_95_8,
  Convert__Reg1_0__Imm1_2__imm_95_8,
  Convert__Reg1_1__Reg1_3__imm_95_8,
  Convert__Reg1_1__Imm1_3__imm_95_8,
  Convert__Reg1_1__Reg1_3__Imm1_0,
  Convert__Reg1_1__Imm1_3__Imm1_0,
  Convert__Reg1_2__Reg1_4__Imm1_0,
  Convert__Reg1_2__Imm1_4__Imm1_0,
  Convert__regG0__Reg1_0__imm_95_13,
  Convert__regG0__Imm1_0__imm_95_13,
  Convert__regG0__Reg1_1__imm_95_13,
  Convert__regG0__Imm1_1__imm_95_13,
  Convert__Reg1_0__Reg1_2__imm_95_13,
  Convert__Reg1_0__Imm1_2__imm_95_13,
  Convert__Reg1_1__Reg1_3__imm_95_13,
  Convert__Reg1_1__Imm1_3__imm_95_13,
  Convert__regG0__Reg1_0__imm_95_5,
  Convert__regG0__Imm1_0__imm_95_5,
  Convert__regG0__Reg1_1__imm_95_5,
  Convert__regG0__Imm1_1__imm_95_5,
  Convert__Reg1_0__Reg1_2__imm_95_5,
  Convert__Reg1_0__Imm1_2__imm_95_5,
  Convert__Reg1_1__Reg1_3__imm_95_5,
  Convert__Reg1_1__Imm1_3__imm_95_5,
  Convert__regG0__Reg1_0__imm_95_1,
  Convert__regG0__Imm1_0__imm_95_1,
  Convert__regG0__Reg1_1__imm_95_1,
  Convert__regG0__Imm1_1__imm_95_1,
  Convert__Reg1_0__Reg1_2__imm_95_1,
  Convert__Reg1_0__Imm1_2__imm_95_1,
  Convert__Reg1_1__Reg1_3__imm_95_1,
  Convert__Reg1_1__Imm1_3__imm_95_1,
  Convert__regG0__Reg1_0__imm_95_10,
  Convert__regG0__Imm1_0__imm_95_10,
  Convert__regG0__Reg1_1__imm_95_10,
  Convert__regG0__Imm1_1__imm_95_10,
  Convert__Reg1_0__Reg1_2__imm_95_10,
  Convert__Reg1_0__Imm1_2__imm_95_10,
  Convert__Reg1_1__Reg1_3__imm_95_10,
  Convert__Reg1_1__Imm1_3__imm_95_10,
  Convert__regG0__Reg1_0__imm_95_11,
  Convert__regG0__Imm1_0__imm_95_11,
  Convert__regG0__Reg1_1__imm_95_11,
  Convert__regG0__Imm1_1__imm_95_11,
  Convert__Reg1_0__Reg1_2__imm_95_11,
  Convert__Reg1_0__Imm1_2__imm_95_11,
  Convert__Reg1_1__Reg1_3__imm_95_11,
  Convert__Reg1_1__Imm1_3__imm_95_11,
  Convert__regG0__Reg1_0__imm_95_12,
  Convert__regG0__Imm1_0__imm_95_12,
  Convert__regG0__Reg1_1__imm_95_12,
  Convert__regG0__Imm1_1__imm_95_12,
  Convert__Reg1_0__Reg1_2__imm_95_12,
  Convert__Reg1_0__Imm1_2__imm_95_12,
  Convert__Reg1_1__Reg1_3__imm_95_12,
  Convert__Reg1_1__Imm1_3__imm_95_12,
  Convert__regG0__Reg1_0__imm_95_3,
  Convert__regG0__Imm1_0__imm_95_3,
  Convert__regG0__Reg1_1__imm_95_3,
  Convert__regG0__Imm1_1__imm_95_3,
  Convert__Reg1_0__Reg1_2__imm_95_3,
  Convert__Reg1_0__Imm1_2__imm_95_3,
  Convert__Reg1_1__Reg1_3__imm_95_3,
  Convert__Reg1_1__Imm1_3__imm_95_3,
  Convert__regG0__Reg1_0__imm_95_2,
  Convert__regG0__Imm1_0__imm_95_2,
  Convert__regG0__Reg1_1__imm_95_2,
  Convert__regG0__Imm1_1__imm_95_2,
  Convert__Reg1_0__Reg1_2__imm_95_2,
  Convert__Reg1_0__Imm1_2__imm_95_2,
  Convert__Reg1_1__Reg1_3__imm_95_2,
  Convert__Reg1_1__Imm1_3__imm_95_2,
  Convert__regG0__Reg1_0__imm_95_4,
  Convert__regG0__Imm1_0__imm_95_4,
  Convert__regG0__Reg1_1__imm_95_4,
  Convert__regG0__Imm1_1__imm_95_4,
  Convert__Reg1_0__Reg1_2__imm_95_4,
  Convert__Reg1_0__Imm1_2__imm_95_4,
  Convert__Reg1_1__Reg1_3__imm_95_4,
  Convert__Reg1_1__Imm1_3__imm_95_4,
  Convert__regG0__Reg1_0__imm_95_0,
  Convert__regG0__Imm1_0__imm_95_0,
  Convert__regG0__Reg1_1__imm_95_0,
  Convert__regG0__Imm1_1__imm_95_0,
  Convert__Reg1_0__Reg1_2__imm_95_0,
  Convert__Reg1_0__Imm1_2__imm_95_0,
  Convert__Reg1_1__Reg1_3__imm_95_0,
  Convert__Reg1_1__Imm1_3__imm_95_0,
  Convert__regG0__Reg1_0__imm_95_9,
  Convert__regG0__Imm1_0__imm_95_9,
  Convert__regG0__Reg1_1__imm_95_9,
  Convert__regG0__Imm1_1__imm_95_9,
  Convert__Reg1_0__Reg1_2__imm_95_9,
  Convert__Reg1_0__Imm1_2__imm_95_9,
  Convert__Reg1_1__Reg1_3__imm_95_9,
  Convert__Reg1_1__Imm1_3__imm_95_9,
  Convert__regG0__Reg1_0__imm_95_6,
  Convert__regG0__Imm1_0__imm_95_6,
  Convert__regG0__Reg1_1__imm_95_6,
  Convert__regG0__Imm1_1__imm_95_6,
  Convert__Reg1_0__Reg1_2__imm_95_6,
  Convert__Reg1_0__Imm1_2__imm_95_6,
  Convert__Reg1_1__Reg1_3__imm_95_6,
  Convert__Reg1_1__Imm1_3__imm_95_6,
  Convert__regG0__Reg1_0__imm_95_14,
  Convert__regG0__Imm1_0__imm_95_14,
  Convert__regG0__Reg1_1__imm_95_14,
  Convert__regG0__Imm1_1__imm_95_14,
  Convert__Reg1_0__Reg1_2__imm_95_14,
  Convert__Reg1_0__Imm1_2__imm_95_14,
  Convert__Reg1_1__Reg1_3__imm_95_14,
  Convert__Reg1_1__Imm1_3__imm_95_14,
  Convert__regG0__Reg1_0__regG0,
  Convert__regG0__Reg1_0__imm_95_15,
  Convert__regG0__Imm1_0__imm_95_15,
  Convert__regG0__Reg1_1__imm_95_15,
  Convert__regG0__Imm1_1__imm_95_15,
  Convert__Reg1_0__Reg1_2__imm_95_15,
  Convert__Reg1_0__Imm1_2__imm_95_15,
  Convert__Reg1_1__Reg1_3__imm_95_15,
  Convert__Reg1_1__Imm1_3__imm_95_15,
  Convert__regG0__Reg1_0__imm_95_7,
  Convert__regG0__Imm1_0__imm_95_7,
  Convert__regG0__Reg1_1__imm_95_7,
  Convert__regG0__Imm1_1__imm_95_7,
  Convert__Reg1_0__Reg1_2__imm_95_7,
  Convert__Reg1_0__Imm1_2__imm_95_7,
  Convert__Reg1_1__Reg1_3__imm_95_7,
  Convert__Reg1_1__Imm1_3__imm_95_7,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__Reg1_2__Reg1_0__Reg1_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_0__imm_95_8
  { CVT_95_addImmOperands, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_8
  { CVT_95_addImmOperands, 2, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_1__Imm1_0
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_8
  { CVT_95_addImmOperands, 3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_2__Imm1_0
  { CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_3__imm_95_8
  { CVT_95_addImmOperands, 4, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_3__Imm1_0
  { CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_4__Imm1_0
  { CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0__imm_95_13
  { CVT_95_addImmOperands, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_13
  { CVT_95_addImmOperands, 2, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_13
  { CVT_95_addImmOperands, 3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_13
  { CVT_95_addImmOperands, 4, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_1__Reg1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_1__Imm1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0__imm_95_5
  { CVT_95_addImmOperands, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_5
  { CVT_95_addImmOperands, 2, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_5
  { CVT_95_addImmOperands, 3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_5
  { CVT_95_addImmOperands, 4, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_1
  { CVT_95_addImmOperands, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_1
  { CVT_95_addImmOperands, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_1
  { CVT_95_addImmOperands, 4, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_10
  { CVT_95_addImmOperands, 1, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_10
  { CVT_95_addImmOperands, 2, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_10
  { CVT_95_addImmOperands, 3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_10
  { CVT_95_addImmOperands, 4, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_11
  { CVT_95_addImmOperands, 1, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_11
  { CVT_95_addImmOperands, 2, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_11
  { CVT_95_addImmOperands, 3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_11
  { CVT_95_addImmOperands, 4, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_12
  { CVT_95_addImmOperands, 1, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_12
  { CVT_95_addImmOperands, 2, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_12
  { CVT_95_addImmOperands, 3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_12
  { CVT_95_addImmOperands, 4, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_3
  { CVT_95_addImmOperands, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_3
  { CVT_95_addImmOperands, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_3
  { CVT_95_addImmOperands, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_3
  { CVT_95_addImmOperands, 4, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_2
  { CVT_95_addImmOperands, 1, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_2
  { CVT_95_addImmOperands, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_2
  { CVT_95_addImmOperands, 3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_4
  { CVT_95_addImmOperands, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_4
  { CVT_95_addImmOperands, 2, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_4
  { CVT_95_addImmOperands, 3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_4
  { CVT_95_addImmOperands, 4, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_0
  { CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_0
  { CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_9
  { CVT_95_addImmOperands, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_9
  { CVT_95_addImmOperands, 2, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_9
  { CVT_95_addImmOperands, 3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_9
  { CVT_95_addImmOperands, 4, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_6
  { CVT_95_addImmOperands, 1, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_6
  { CVT_95_addImmOperands, 2, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_6
  { CVT_95_addImmOperands, 3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_6
  { CVT_95_addImmOperands, 4, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_14
  { CVT_95_addImmOperands, 1, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_14
  { CVT_95_addImmOperands, 2, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_14
  { CVT_95_addImmOperands, 3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_14
  { CVT_95_addImmOperands, 4, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_1__Imm1_2
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_2__Imm1_3
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__regG0__Reg1_1__Reg1_0
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__regG0__Reg1_1__Imm1_0
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0__imm_95_15
  { CVT_95_addImmOperands, 1, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_15
  { CVT_95_addImmOperands, 2, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_15
  { CVT_95_addImmOperands, 3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_15
  { CVT_95_addImmOperands, 4, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_7
  { CVT_95_addImmOperands, 1, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_7
  { CVT_95_addImmOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_7
  { CVT_95_addImmOperands, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_7
  { CVT_95_addImmOperands, 4, CVT_imm_95_7, 0, CVT_Done },
  // Convert__regO7__MEMri2_0
  { CVT_regO7, 0, CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__regO7__MEMrr2_0
  { CVT_regO7, 0, CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_4__Reg1_1__Reg1_3__Tie0
  { CVT_95_Reg, 5, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_5__Reg1_1__Reg1_4__Tie0
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_Reg, 5, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_5__Reg1_1__Reg1_4__Tie0__Imm1_3
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_Reg, 5, CVT_Tied, 0, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__regG0__regG0
  { CVT_95_Reg, 1, CVT_regG0, 0, CVT_regG0, 0, CVT_Done },
  // Convert__MEMri2_1__regG0
  { CVT_95_addMEMriOperands, 2, CVT_regG0, 0, CVT_Done },
  // Convert__MEMrr2_1__regG0
  { CVT_95_addMEMrrOperands, 2, CVT_regG0, 0, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_0__imm_95_1
  { CVT_95_Reg, 1, CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_1__imm_95_8__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_8, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_8__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_8, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_2__Imm1_0__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_8__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_8, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_3__Imm1_0__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 1, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_4__Imm1_0__Reg1_3
  { CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 1, CVT_95_Reg, 4, CVT_Done },
  // Convert__Imm1_1__imm_95_9__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_9, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_9__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_9, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_9__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_9, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_6__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_6, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_6__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_6, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_6__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_6, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_11__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_11, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_11__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_11, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_11__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_11, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_4__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_4, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_4__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_4, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_4__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_4, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_13__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_13, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_13__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_13, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_13__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_13, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_2__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_2, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_2__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_2, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_2__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_2, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_0__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_0__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_0__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_1__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_1, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_1__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_1, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_1__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_1, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_15__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_15, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_15__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_15, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_15__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_15, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_7__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_7, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_7__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_7, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_7__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_7, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_10__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_10, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_10__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_10, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_10__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_10, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_5__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_5, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_5__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_5, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_5__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_5, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_12__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_12, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_12__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_12, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_12__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_12, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_3__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_3, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_3__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_3, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_3__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_3, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_14__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_14, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_14__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_14, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_14__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_14, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__regFCC0__Reg1_0__Reg1_1
  { CVT_regFCC0, 0, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__MEMri2_0
  { CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__MEMrr2_0
  { CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_8
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_3__Reg1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_13
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_5
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_1
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_10
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_11
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_12
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_3
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_2
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_4
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_9
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_6
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_14
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_15
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_7
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Tie0
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_Done },
  // Convert__regG0__MEMri2_0
  { CVT_regG0, 0, CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__regG0__MEMrr2_0
  { CVT_regG0, 0, CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_1__MEMri2_0
  { CVT_95_Reg, 2, CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__Reg1_1__MEMrr2_0
  { CVT_95_Reg, 2, CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__MEMri2_1
  { CVT_95_addMEMriOperands, 2, CVT_Done },
  // Convert__Reg1_3__MEMri2_1
  { CVT_95_Reg, 4, CVT_95_addMEMriOperands, 2, CVT_Done },
  // Convert__MEMrr2_1
  { CVT_95_addMEMrrOperands, 2, CVT_Done },
  // Convert__Reg1_3__MEMrr2_1
  { CVT_95_Reg, 4, CVT_95_addMEMrrOperands, 2, CVT_Done },
  // Convert__Reg1_4__MEMrr2_1__Imm1_3
  { CVT_95_Reg, 5, CVT_95_addMEMrrOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_1
  { CVT_95_Reg, 2, CVT_Done },
  // Convert__regG0__Reg1_0
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_1__regG0__Reg1_0
  { CVT_95_Reg, 2, CVT_regG0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__regG0__Imm1_0
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_1__regG0__Imm1_0
  { CVT_95_Reg, 2, CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_8
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_8
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_3__Imm1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_addImmOperands, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_1__Imm1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_13
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_5
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_1
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_9
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_10
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_6
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_11
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_11
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_12
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_3
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_4
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_2
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_13
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_4
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_2
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_0
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_9
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_6
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_15
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_14
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_7
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_10
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_5
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_12
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_3
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_14
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_15
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_7
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__regG0__Reg1_0
  { CVT_95_Reg, 1, CVT_regG0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_0__regG0
  { CVT_95_Reg, 1, CVT_95_Reg, 1, CVT_regG0, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_0__regG0
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_regG0, 0, CVT_Done },
  // Convert__regG0__regG0__regG0
  { CVT_regG0, 0, CVT_regG0, 0, CVT_regG0, 0, CVT_Done },
  // Convert__imm_95_8
  { CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__MEMri2_2
  { CVT_95_addMEMriOperands, 3, CVT_Done },
  // Convert__MEMrr2_2
  { CVT_95_addMEMrrOperands, 3, CVT_Done },
  // Convert__MEMri2_2__Reg1_0
  { CVT_95_addMEMriOperands, 3, CVT_95_Reg, 1, CVT_Done },
  // Convert__MEMrr2_2__Reg1_0
  { CVT_95_addMEMrrOperands, 3, CVT_95_Reg, 1, CVT_Done },
  // Convert__MEMrr2_2__Reg1_0__Imm1_4
  { CVT_95_addMEMrrOperands, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_3__MEMri2_1__Tie0
  { CVT_95_Reg, 4, CVT_95_addMEMriOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_3__MEMrr2_1__Tie0
  { CVT_95_Reg, 4, CVT_95_addMEMrrOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_4__MEMrr2_1__Imm1_3__Tie0
  { CVT_95_Reg, 5, CVT_95_addMEMrrOperands, 2, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_8
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_8
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_8
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_8, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_8
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_8
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_8
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_8
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_8
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__Imm1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_1__Imm1_3__Imm1_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_4__Imm1_0
  { CVT_95_Reg, 3, CVT_95_Reg, 5, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Imm1_4__Imm1_0
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_13
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_13
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_13
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_13
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_13
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_13
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_13
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_13
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_5
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_5
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_5
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_5
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_5
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_5
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_5
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_5
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_1
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_1
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_1
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_1
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_1
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_1
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_1
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_10
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_10
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_10
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_10
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_10
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_10
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_10
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_10
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_11
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_11
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_11
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_11
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_11
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_11
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_11
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_11
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_12
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_12
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_12
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_12
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_12
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_12
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_12
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_12
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_3
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_3
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_3
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_3
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_3
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_3
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_3
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_2
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_2
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_2
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_2
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_2
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_2
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_2
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_4
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_4
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_4
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_4
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_4
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_4
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_4
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_0
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_0
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_0
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_0
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_0
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_9
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_9
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_9
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_9
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_9
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_9
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_9
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_9
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_6
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_6
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_6
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_6
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_6
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_6
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_6
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_6
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_14
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_14
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_14
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_14
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_14
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_14
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_14
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_14
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Reg1_0__regG0
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_regG0, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_15
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_15
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_15
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_15
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_15
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_15
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_15
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_15
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_7
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_7, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_7
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_7, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_7
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_7
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_7
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_7
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_7
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_7
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_7, 0, CVT_Done },
};

void SparcAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  unsigned OpIdx;
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    OpIdx = *(p + 1);
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<SparcOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(OpIdx));
      break;
    case CVT_95_Reg:
      static_cast<SparcOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<SparcOperand&>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_imm_95_8:
      Inst.addOperand(MCOperand::createImm(8));
      break;
    case CVT_imm_95_13:
      Inst.addOperand(MCOperand::createImm(13));
      break;
    case CVT_imm_95_5:
      Inst.addOperand(MCOperand::createImm(5));
      break;
    case CVT_imm_95_1:
      Inst.addOperand(MCOperand::createImm(1));
      break;
    case CVT_imm_95_10:
      Inst.addOperand(MCOperand::createImm(10));
      break;
    case CVT_imm_95_11:
      Inst.addOperand(MCOperand::createImm(11));
      break;
    case CVT_imm_95_12:
      Inst.addOperand(MCOperand::createImm(12));
      break;
    case CVT_imm_95_3:
      Inst.addOperand(MCOperand::createImm(3));
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::createImm(2));
      break;
    case CVT_imm_95_4:
      Inst.addOperand(MCOperand::createImm(4));
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_imm_95_9:
      Inst.addOperand(MCOperand::createImm(9));
      break;
    case CVT_imm_95_6:
      Inst.addOperand(MCOperand::createImm(6));
      break;
    case CVT_imm_95_14:
      Inst.addOperand(MCOperand::createImm(14));
      break;
    case CVT_regG0:
      Inst.addOperand(MCOperand::createReg(SP::G0));
      break;
    case CVT_imm_95_15:
      Inst.addOperand(MCOperand::createImm(15));
      break;
    case CVT_imm_95_7:
      Inst.addOperand(MCOperand::createImm(7));
      break;
    case CVT_regO7:
      Inst.addOperand(MCOperand::createReg(SP::O7));
      break;
    case CVT_95_addMEMriOperands:
      static_cast<SparcOperand&>(*Operands[OpIdx]).addMEMriOperands(Inst, 2);
      break;
    case CVT_95_addMEMrrOperands:
      static_cast<SparcOperand&>(*Operands[OpIdx]).addMEMrrOperands(Inst, 2);
      break;
    case CVT_regFCC0:
      Inst.addOperand(MCOperand::createReg(SP::FCC0));
      break;
    }
  }
}

void SparcAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_13:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_10:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_11:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_12:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_9:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_14:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regG0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_95_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regO7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addMEMriOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addMEMrrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_regFCC0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  OptionalMatchClass = 1,
  MCK__PCT_cq, // '%cq'
  MCK__PCT_csr, // '%csr'
  MCK__PCT_fcc0, // '%fcc0'
  MCK__PCT_fq, // '%fq'
  MCK__PCT_fsr, // '%fsr'
  MCK__PCT_g0, // '%g0'
  MCK__PCT_icc, // '%icc'
  MCK__PCT_psr, // '%psr'
  MCK__PCT_tbr, // '%tbr'
  MCK__PCT_wim, // '%wim'
  MCK__PCT_xcc, // '%xcc'
  MCK__43_, // '+'
  MCK_10, // '10'
  MCK_3, // '3'
  MCK_5, // '5'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK_a, // 'a'
  MCK_pn, // 'pn'
  MCK_pt, // 'pt'
  MCK_LAST_TOKEN = MCK_pt,
  MCK_FCCRegs, // register class 'FCCRegs'
  MCK_LowQFPRegs, // register class 'LowQFPRegs'
  MCK_PRRegs, // register class 'PRRegs'
  MCK_CoprocPair, // register class 'CoprocPair'
  MCK_IntPair, // register class 'IntPair'
  MCK_LowDFPRegs, // register class 'LowDFPRegs'
  MCK_QFPRegs, // register class 'QFPRegs'
  MCK_ASRRegs, // register class 'ASRRegs'
  MCK_CoprocRegs, // register class 'CoprocRegs'
  MCK_DFPRegs, // register class 'DFPRegs'
  MCK_FPRegs, // register class 'FPRegs'
  MCK_IntRegs, // register class 'IntRegs,I64Regs'
  MCK_LAST_REGISTER = MCK_IntRegs,
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_MEMri, // user defined class 'SparcMEMriAsmOperand'
  MCK_MEMrr, // user defined class 'SparcMEMrrAsmOperand'
  NumMatchClassKinds
};

}

static unsigned getDiagKindFromRegisterClass(MatchClassKind RegisterClass) {
  return MCTargetAsmParser::Match_InvalidOperand;
}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 6 strings to match.
    switch (Name[0]) {
    default: break;
    case '+':	 // 1 string to match.
      return MCK__43_;	 // "+"
    case '3':	 // 1 string to match.
      return MCK_3;	 // "3"
    case '5':	 // 1 string to match.
      return MCK_5;	 // "5"
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    case 'a':	 // 1 string to match.
      return MCK_a;	 // "a"
    }
    break;
  case 2:	 // 3 strings to match.
    switch (Name[0]) {
    default: break;
    case '1':	 // 1 string to match.
      if (Name[1] != '0')
        break;
      return MCK_10;	 // "10"
    case 'p':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'n':	 // 1 string to match.
        return MCK_pn;	 // "pn"
      case 't':	 // 1 string to match.
        return MCK_pt;	 // "pt"
      }
      break;
    }
    break;
  case 3:	 // 3 strings to match.
    if (Name[0] != '%')
      break;
    switch (Name[1]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (Name[2] != 'q')
        break;
      return MCK__PCT_cq;	 // "%cq"
    case 'f':	 // 1 string to match.
      if (Name[2] != 'q')
        break;
      return MCK__PCT_fq;	 // "%fq"
    case 'g':	 // 1 string to match.
      if (Name[2] != '0')
        break;
      return MCK__PCT_g0;	 // "%g0"
    }
    break;
  case 4:	 // 7 strings to match.
    if (Name[0] != '%')
      break;
    switch (Name[1]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sr", 2) != 0)
        break;
      return MCK__PCT_csr;	 // "%csr"
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sr", 2) != 0)
        break;
      return MCK__PCT_fsr;	 // "%fsr"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+2, "cc", 2) != 0)
        break;
      return MCK__PCT_icc;	 // "%icc"
    case 'p':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sr", 2) != 0)
        break;
      return MCK__PCT_psr;	 // "%psr"
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+2, "br", 2) != 0)
        break;
      return MCK__PCT_tbr;	 // "%tbr"
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+2, "im", 2) != 0)
        break;
      return MCK__PCT_wim;	 // "%wim"
    case 'x':	 // 1 string to match.
      if (memcmp(Name.data()+2, "cc", 2) != 0)
        break;
      return MCK__PCT_xcc;	 // "%xcc"
    }
    break;
  case 5:	 // 1 string to match.
    if (memcmp(Name.data()+0, "%fcc0", 5) != 0)
      break;
    return MCK__PCT_fcc0;	 // "%fcc0"
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_LowQFPRegs:
    return B == MCK_QFPRegs;

  case MCK_LowDFPRegs:
    return B == MCK_DFPRegs;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  SparcOperand &Operand = (SparcOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken() && Kind <= MCK_LAST_TOKEN)
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'Imm' class
  case MCK_Imm:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'MEMri' class
  case MCK_MEMri:
    if (Operand.isMEMri())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'MEMrr' class
  case MCK_MEMrr:
    if (Operand.isMEMrr())
      return MCTargetAsmParser::Match_Success;
    break;
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case SP::FCC0: OpKind = MCK_FCCRegs; break;
    case SP::FCC1: OpKind = MCK_FCCRegs; break;
    case SP::FCC2: OpKind = MCK_FCCRegs; break;
    case SP::FCC3: OpKind = MCK_FCCRegs; break;
    case SP::Y: OpKind = MCK_ASRRegs; break;
    case SP::ASR1: OpKind = MCK_ASRRegs; break;
    case SP::ASR2: OpKind = MCK_ASRRegs; break;
    case SP::ASR3: OpKind = MCK_ASRRegs; break;
    case SP::ASR4: OpKind = MCK_ASRRegs; break;
    case SP::ASR5: OpKind = MCK_ASRRegs; break;
    case SP::ASR6: OpKind = MCK_ASRRegs; break;
    case SP::ASR7: OpKind = MCK_ASRRegs; break;
    case SP::ASR8: OpKind = MCK_ASRRegs; break;
    case SP::ASR9: OpKind = MCK_ASRRegs; break;
    case SP::ASR10: OpKind = MCK_ASRRegs; break;
    case SP::ASR11: OpKind = MCK_ASRRegs; break;
    case SP::ASR12: OpKind = MCK_ASRRegs; break;
    case SP::ASR13: OpKind = MCK_ASRRegs; break;
    case SP::ASR14: OpKind = MCK_ASRRegs; break;
    case SP::ASR15: OpKind = MCK_ASRRegs; break;
    case SP::ASR16: OpKind = MCK_ASRRegs; break;
    case SP::ASR17: OpKind = MCK_ASRRegs; break;
    case SP::ASR18: OpKind = MCK_ASRRegs; break;
    case SP::ASR19: OpKind = MCK_ASRRegs; break;
    case SP::ASR20: OpKind = MCK_ASRRegs; break;
    case SP::ASR21: OpKind = MCK_ASRRegs; break;
    case SP::ASR22: OpKind = MCK_ASRRegs; break;
    case SP::ASR23: OpKind = MCK_ASRRegs; break;
    case SP::ASR24: OpKind = MCK_ASRRegs; break;
    case SP::ASR25: OpKind = MCK_ASRRegs; break;
    case SP::ASR26: OpKind = MCK_ASRRegs; break;
    case SP::ASR27: OpKind = MCK_ASRRegs; break;
    case SP::ASR28: OpKind = MCK_ASRRegs; break;
    case SP::ASR29: OpKind = MCK_ASRRegs; break;
    case SP::ASR30: OpKind = MCK_ASRRegs; break;
    case SP::ASR31: OpKind = MCK_ASRRegs; break;
    case SP::TPC: OpKind = MCK_PRRegs; break;
    case SP::TNPC: OpKind = MCK_PRRegs; break;
    case SP::TSTATE: OpKind = MCK_PRRegs; break;
    case SP::TT: OpKind = MCK_PRRegs; break;
    case SP::TICK: OpKind = MCK_PRRegs; break;
    case SP::TBA: OpKind = MCK_PRRegs; break;
    case SP::PSTATE: OpKind = MCK_PRRegs; break;
    case SP::TL: OpKind = MCK_PRRegs; break;
    case SP::PIL: OpKind = MCK_PRRegs; break;
    case SP::CWP: OpKind = MCK_PRRegs; break;
    case SP::CANSAVE: OpKind = MCK_PRRegs; break;
    case SP::CANRESTORE: OpKind = MCK_PRRegs; break;
    case SP::CLEANWIN: OpKind = MCK_PRRegs; break;
    case SP::OTHERWIN: OpKind = MCK_PRRegs; break;
    case SP::WSTATE: OpKind = MCK_PRRegs; break;
    case SP::G0: OpKind = MCK_IntRegs; break;
    case SP::G1: OpKind = MCK_IntRegs; break;
    case SP::G2: OpKind = MCK_IntRegs; break;
    case SP::G3: OpKind = MCK_IntRegs; break;
    case SP::G4: OpKind = MCK_IntRegs; break;
    case SP::G5: OpKind = MCK_IntRegs; break;
    case SP::G6: OpKind = MCK_IntRegs; break;
    case SP::G7: OpKind = MCK_IntRegs; break;
    case SP::O0: OpKind = MCK_IntRegs; break;
    case SP::O1: OpKind = MCK_IntRegs; break;
    case SP::O2: OpKind = MCK_IntRegs; break;
    case SP::O3: OpKind = MCK_IntRegs; break;
    case SP::O4: OpKind = MCK_IntRegs; break;
    case SP::O5: OpKind = MCK_IntRegs; break;
    case SP::O6: OpKind = MCK_IntRegs; break;
    case SP::O7: OpKind = MCK_IntRegs; break;
    case SP::L0: OpKind = MCK_IntRegs; break;
    case SP::L1: OpKind = MCK_IntRegs; break;
    case SP::L2: OpKind = MCK_IntRegs; break;
    case SP::L3: OpKind = MCK_IntRegs; break;
    case SP::L4: OpKind = MCK_IntRegs; break;
    case SP::L5: OpKind = MCK_IntRegs; break;
    case SP::L6: OpKind = MCK_IntRegs; break;
    case SP::L7: OpKind = MCK_IntRegs; break;
    case SP::I0: OpKind = MCK_IntRegs; break;
    case SP::I1: OpKind = MCK_IntRegs; break;
    case SP::I2: OpKind = MCK_IntRegs; break;
    case SP::I3: OpKind = MCK_IntRegs; break;
    case SP::I4: OpKind = MCK_IntRegs; break;
    case SP::I5: OpKind = MCK_IntRegs; break;
    case SP::I6: OpKind = MCK_IntRegs; break;
    case SP::I7: OpKind = MCK_IntRegs; break;
    case SP::F0: OpKind = MCK_FPRegs; break;
    case SP::F1: OpKind = MCK_FPRegs; break;
    case SP::F2: OpKind = MCK_FPRegs; break;
    case SP::F3: OpKind = MCK_FPRegs; break;
    case SP::F4: OpKind = MCK_FPRegs; break;
    case SP::F5: OpKind = MCK_FPRegs; break;
    case SP::F6: OpKind = MCK_FPRegs; break;
    case SP::F7: OpKind = MCK_FPRegs; break;
    case SP::F8: OpKind = MCK_FPRegs; break;
    case SP::F9: OpKind = MCK_FPRegs; break;
    case SP::F10: OpKind = MCK_FPRegs; break;
    case SP::F11: OpKind = MCK_FPRegs; break;
    case SP::F12: OpKind = MCK_FPRegs; break;
    case SP::F13: OpKind = MCK_FPRegs; break;
    case SP::F14: OpKind = MCK_FPRegs; break;
    case SP::F15: OpKind = MCK_FPRegs; break;
    case SP::F16: OpKind = MCK_FPRegs; break;
    case SP::F17: OpKind = MCK_FPRegs; break;
    case SP::F18: OpKind = MCK_FPRegs; break;
    case SP::F19: OpKind = MCK_FPRegs; break;
    case SP::F20: OpKind = MCK_FPRegs; break;
    case SP::F21: OpKind = MCK_FPRegs; break;
    case SP::F22: OpKind = MCK_FPRegs; break;
    case SP::F23: OpKind = MCK_FPRegs; break;
    case SP::F24: OpKind = MCK_FPRegs; break;
    case SP::F25: OpKind = MCK_FPRegs; break;
    case SP::F26: OpKind = MCK_FPRegs; break;
    case SP::F27: OpKind = MCK_FPRegs; break;
    case SP::F28: OpKind = MCK_FPRegs; break;
    case SP::F29: OpKind = MCK_FPRegs; break;
    case SP::F30: OpKind = MCK_FPRegs; break;
    case SP::F31: OpKind = MCK_FPRegs; break;
    case SP::D0: OpKind = MCK_LowDFPRegs; break;
    case SP::D1: OpKind = MCK_LowDFPRegs; break;
    case SP::D2: OpKind = MCK_LowDFPRegs; break;
    case SP::D3: OpKind = MCK_LowDFPRegs; break;
    case SP::D4: OpKind = MCK_LowDFPRegs; break;
    case SP::D5: OpKind = MCK_LowDFPRegs; break;
    case SP::D6: OpKind = MCK_LowDFPRegs; break;
    case SP::D7: OpKind = MCK_LowDFPRegs; break;
    case SP::D8: OpKind = MCK_LowDFPRegs; break;
    case SP::D9: OpKind = MCK_LowDFPRegs; break;
    case SP::D10: OpKind = MCK_LowDFPRegs; break;
    case SP::D11: OpKind = MCK_LowDFPRegs; break;
    case SP::D12: OpKind = MCK_LowDFPRegs; break;
    case SP::D13: OpKind = MCK_LowDFPRegs; break;
    case SP::D14: OpKind = MCK_LowDFPRegs; break;
    case SP::D15: OpKind = MCK_LowDFPRegs; break;
    case SP::C0: OpKind = MCK_CoprocRegs; break;
    case SP::C1: OpKind = MCK_CoprocRegs; break;
    case SP::C2: OpKind = MCK_CoprocRegs; break;
    case SP::C3: OpKind = MCK_CoprocRegs; break;
    case SP::C4: OpKind = MCK_CoprocRegs; break;
    case SP::C5: OpKind = MCK_CoprocRegs; break;
    case SP::C6: OpKind = MCK_CoprocRegs; break;
    case SP::C7: OpKind = MCK_CoprocRegs; break;
    case SP::C8: OpKind = MCK_CoprocRegs; break;
    case SP::C9: OpKind = MCK_CoprocRegs; break;
    case SP::C10: OpKind = MCK_CoprocRegs; break;
    case SP::C11: OpKind = MCK_CoprocRegs; break;
    case SP::C12: OpKind = MCK_CoprocRegs; break;
    case SP::C13: OpKind = MCK_CoprocRegs; break;
    case SP::C14: OpKind = MCK_CoprocRegs; break;
    case SP::C15: OpKind = MCK_CoprocRegs; break;
    case SP::C16: OpKind = MCK_CoprocRegs; break;
    case SP::C17: OpKind = MCK_CoprocRegs; break;
    case SP::C18: OpKind = MCK_CoprocRegs; break;
    case SP::C19: OpKind = MCK_CoprocRegs; break;
    case SP::C20: OpKind = MCK_CoprocRegs; break;
    case SP::C21: OpKind = MCK_CoprocRegs; break;
    case SP::C22: OpKind = MCK_CoprocRegs; break;
    case SP::C23: OpKind = MCK_CoprocRegs; break;
    case SP::C24: OpKind = MCK_CoprocRegs; break;
    case SP::C25: OpKind = MCK_CoprocRegs; break;
    case SP::C26: OpKind = MCK_CoprocRegs; break;
    case SP::C27: OpKind = MCK_CoprocRegs; break;
    case SP::C28: OpKind = MCK_CoprocRegs; break;
    case SP::C29: OpKind = MCK_CoprocRegs; break;
    case SP::C30: OpKind = MCK_CoprocRegs; break;
    case SP::C31: OpKind = MCK_CoprocRegs; break;
    case SP::D16: OpKind = MCK_DFPRegs; break;
    case SP::D17: OpKind = MCK_DFPRegs; break;
    case SP::D18: OpKind = MCK_DFPRegs; break;
    case SP::D19: OpKind = MCK_DFPRegs; break;
    case SP::D20: OpKind = MCK_DFPRegs; break;
    case SP::D21: OpKind = MCK_DFPRegs; break;
    case SP::D22: OpKind = MCK_DFPRegs; break;
    case SP::D23: OpKind = MCK_DFPRegs; break;
    case SP::D24: OpKind = MCK_DFPRegs; break;
    case SP::D25: OpKind = MCK_DFPRegs; break;
    case SP::D26: OpKind = MCK_DFPRegs; break;
    case SP::D27: OpKind = MCK_DFPRegs; break;
    case SP::D28: OpKind = MCK_DFPRegs; break;
    case SP::D29: OpKind = MCK_DFPRegs; break;
    case SP::D30: OpKind = MCK_DFPRegs; break;
    case SP::D31: OpKind = MCK_DFPRegs; break;
    case SP::Q0: OpKind = MCK_LowQFPRegs; break;
    case SP::Q1: OpKind = MCK_LowQFPRegs; break;
    case SP::Q2: OpKind = MCK_LowQFPRegs; break;
    case SP::Q3: OpKind = MCK_LowQFPRegs; break;
    case SP::Q4: OpKind = MCK_LowQFPRegs; break;
    case SP::Q5: OpKind = MCK_LowQFPRegs; break;
    case SP::Q6: OpKind = MCK_LowQFPRegs; break;
    case SP::Q7: OpKind = MCK_LowQFPRegs; break;
    case SP::Q8: OpKind = MCK_QFPRegs; break;
    case SP::Q9: OpKind = MCK_QFPRegs; break;
    case SP::Q10: OpKind = MCK_QFPRegs; break;
    case SP::Q11: OpKind = MCK_QFPRegs; break;
    case SP::Q12: OpKind = MCK_QFPRegs; break;
    case SP::Q13: OpKind = MCK_QFPRegs; break;
    case SP::Q14: OpKind = MCK_QFPRegs; break;
    case SP::Q15: OpKind = MCK_QFPRegs; break;
    case SP::G0_G1: OpKind = MCK_IntPair; break;
    case SP::G2_G3: OpKind = MCK_IntPair; break;
    case SP::G4_G5: OpKind = MCK_IntPair; break;
    case SP::G6_G7: OpKind = MCK_IntPair; break;
    case SP::O0_O1: OpKind = MCK_IntPair; break;
    case SP::O2_O3: OpKind = MCK_IntPair; break;
    case SP::O4_O5: OpKind = MCK_IntPair; break;
    case SP::O6_O7: OpKind = MCK_IntPair; break;
    case SP::L0_L1: OpKind = MCK_IntPair; break;
    case SP::L2_L3: OpKind = MCK_IntPair; break;
    case SP::L4_L5: OpKind = MCK_IntPair; break;
    case SP::L6_L7: OpKind = MCK_IntPair; break;
    case SP::I0_I1: OpKind = MCK_IntPair; break;
    case SP::I2_I3: OpKind = MCK_IntPair; break;
    case SP::I4_I5: OpKind = MCK_IntPair; break;
    case SP::I6_I7: OpKind = MCK_IntPair; break;
    case SP::C0_C1: OpKind = MCK_CoprocPair; break;
    case SP::C2_C3: OpKind = MCK_CoprocPair; break;
    case SP::C4_C5: OpKind = MCK_CoprocPair; break;
    case SP::C6_C7: OpKind = MCK_CoprocPair; break;
    case SP::C8_C9: OpKind = MCK_CoprocPair; break;
    case SP::C10_C11: OpKind = MCK_CoprocPair; break;
    case SP::C12_C13: OpKind = MCK_CoprocPair; break;
    case SP::C14_C15: OpKind = MCK_CoprocPair; break;
    case SP::C16_C17: OpKind = MCK_CoprocPair; break;
    case SP::C18_C19: OpKind = MCK_CoprocPair; break;
    case SP::C20_C21: OpKind = MCK_CoprocPair; break;
    case SP::C22_C23: OpKind = MCK_CoprocPair; break;
    case SP::C24_C25: OpKind = MCK_CoprocPair; break;
    case SP::C26_C27: OpKind = MCK_CoprocPair; break;
    case SP::C28_C29: OpKind = MCK_CoprocPair; break;
    case SP::C30_C31: OpKind = MCK_CoprocPair; break;
    }
    return isSubclass(OpKind, Kind) ? (unsigned)MCTargetAsmParser::Match_Success :
                                      getDiagKindFromRegisterClass(Kind);
  }

  if (Kind > MCK_LAST_TOKEN && Kind <= MCK_LAST_REGISTER)
    return getDiagKindFromRegisterClass(Kind);

  return MCTargetAsmParser::Match_InvalidOperand;
}

#ifndef NDEBUG
const char *getMatchClassName(MatchClassKind Kind) {
  switch (Kind) {
  case InvalidMatchClass: return "InvalidMatchClass";
  case OptionalMatchClass: return "OptionalMatchClass";
  case MCK__PCT_cq: return "MCK__PCT_cq";
  case MCK__PCT_csr: return "MCK__PCT_csr";
  case MCK__PCT_fcc0: return "MCK__PCT_fcc0";
  case MCK__PCT_fq: return "MCK__PCT_fq";
  case MCK__PCT_fsr: return "MCK__PCT_fsr";
  case MCK__PCT_g0: return "MCK__PCT_g0";
  case MCK__PCT_icc: return "MCK__PCT_icc";
  case MCK__PCT_psr: return "MCK__PCT_psr";
  case MCK__PCT_tbr: return "MCK__PCT_tbr";
  case MCK__PCT_wim: return "MCK__PCT_wim";
  case MCK__PCT_xcc: return "MCK__PCT_xcc";
  case MCK__43_: return "MCK__43_";
  case MCK_10: return "MCK_10";
  case MCK_3: return "MCK_3";
  case MCK_5: return "MCK_5";
  case MCK__91_: return "MCK__91_";
  case MCK__93_: return "MCK__93_";
  case MCK_a: return "MCK_a";
  case MCK_pn: return "MCK_pn";
  case MCK_pt: return "MCK_pt";
  case MCK_FCCRegs: return "MCK_FCCRegs";
  case MCK_LowQFPRegs: return "MCK_LowQFPRegs";
  case MCK_PRRegs: return "MCK_PRRegs";
  case MCK_CoprocPair: return "MCK_CoprocPair";
  case MCK_IntPair: return "MCK_IntPair";
  case MCK_LowDFPRegs: return "MCK_LowDFPRegs";
  case MCK_QFPRegs: return "MCK_QFPRegs";
  case MCK_ASRRegs: return "MCK_ASRRegs";
  case MCK_CoprocRegs: return "MCK_CoprocRegs";
  case MCK_DFPRegs: return "MCK_DFPRegs";
  case MCK_FPRegs: return "MCK_FPRegs";
  case MCK_IntRegs: return "MCK_IntRegs";
  case MCK_Imm: return "MCK_Imm";
  case MCK_MEMri: return "MCK_MEMri";
  case MCK_MEMrr: return "MCK_MEMrr";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
uint64_t SparcAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  if ((FB[Sparc::FeatureSoftMulDiv]))
    Features |= Feature_UseSoftMulDiv;
  if ((FB[Sparc::FeatureV9]))
    Features |= Feature_HasV9;
  if ((FB[Sparc::FeatureVIS]))
    Features |= Feature_HasVIS;
  if ((FB[Sparc::FeatureVIS2]))
    Features |= Feature_HasVIS2;
  if ((FB[Sparc::FeatureVIS3]))
    Features |= Feature_HasVIS3;
  return Features;
}

static const char *const MnemonicTable =
    "\003add\005addcc\004addx\005addxc\006addxcc\007addxccc\talignaddr\nalig"
    "naddrl\003and\005andcc\004andn\006andncc\007array16\007array32\006array"
    "8\001b\002ba\003bcc\004bclr\003bcs\002be\003beq\002bg\003bge\004bgeu\003"
    "bgu\002bl\003ble\004bleu\003blu\005bmask\002bn\003bne\004bneg\003bnz\004"
    "bpos\005brgez\004brgz\005brlez\004brlz\004brnz\003brz\004bset\010bshuff"
    "le\004btog\004btst\003bvc\003bvs\002bz\004call\003cas\004casa\004casx\002"
    "cb\003cb0\004cb01\005cb012\005cb013\004cb02\005cb023\004cb03\003cb1\004"
    "cb12\005cb123\004cb13\003cb2\004cb23\003cb3\003cba\003cbn\003clr\004clr"
    "b\004clrh\007cmask16\007cmask32\006cmask8\003cmp\003dec\005deccc\006edg"
    "e16\007edge16l\010edge16ln\007edge16n\006edge32\007edge32l\010edge32ln\007"
    "edge32n\005edge8\006edge8l\007edge8ln\006edge8n\005fabsd\005fabsq\005fa"
    "bss\005faddd\005faddq\005fadds\nfaligndata\004fand\010fandnot1\tfandnot"
    "1s\010fandnot2\tfandnot2s\005fands\002fb\003fba\003fbe\003fbg\004fbge\003"
    "fbl\004fble\004fblg\003fbn\004fbne\004fbnz\003fbo\003fbu\004fbue\004fbu"
    "g\005fbuge\004fbul\005fbule\003fbz\010fchksm16\005fcmpd\006fcmped\006fc"
    "mpeq\010fcmpeq16\010fcmpeq32\006fcmpes\010fcmpgt16\010fcmpgt32\010fcmpl"
    "e16\010fcmple32\010fcmpne16\010fcmpne32\005fcmpq\005fcmps\005fdivd\005f"
    "divq\005fdivs\006fdmulq\005fdtoi\005fdtoq\005fdtos\005fdtox\007fexpand\006"
    "fhaddd\006fhadds\006fhsubd\006fhsubs\005fitod\005fitoq\005fitos\006flcm"
    "pd\006flcmps\005flush\006flushw\007fmean16\005fmovd\006fmovda\007fmovdc"
    "c\007fmovdcs\006fmovde\007fmovdeq\006fmovdg\007fmovdge\010fmovdgeu\007f"
    "movdgu\006fmovdl\007fmovdle\010fmovdleu\007fmovdlg\007fmovdlu\006fmovdn"
    "\007fmovdne\010fmovdneg\007fmovdnz\006fmovdo\010fmovdpos\006fmovdu\007f"
    "movdue\007fmovdug\010fmovduge\007fmovdul\010fmovdule\007fmovdvc\007fmov"
    "dvs\006fmovdz\005fmovq\006fmovqa\007fmovqcc\007fmovqcs\006fmovqe\007fmo"
    "vqeq\006fmovqg\007fmovqge\010fmovqgeu\007fmovqgu\006fmovql\007fmovqle\010"
    "fmovqleu\007fmovqlg\007fmovqlu\006fmovqn\007fmovqne\010fmovqneg\007fmov"
    "qnz\006fmovqo\010fmovqpos\006fmovqu\007fmovque\007fmovqug\010fmovquge\007"
    "fmovqul\010fmovqule\007fmovqvc\007fmovqvs\006fmovqz\tfmovrdgez\010fmovr"
    "dgz\tfmovrdlez\010fmovrdlz\010fmovrdnz\007fmovrdz\tfmovrqgez\010fmovrqg"
    "z\tfmovrqlez\010fmovrqlz\010fmovrqnz\007fmovrqz\tfmovrsgez\010fmovrsgz\t"
    "fmovrslez\010fmovrslz\010fmovrsnz\007fmovrsz\005fmovs\006fmovsa\007fmov"
    "scc\007fmovscs\006fmovse\007fmovseq\006fmovsg\007fmovsge\010fmovsgeu\007"
    "fmovsgu\006fmovsl\007fmovsle\010fmovsleu\007fmovslg\007fmovslu\006fmovs"
    "n\007fmovsne\010fmovsneg\007fmovsnz\006fmovso\010fmovspos\006fmovsu\007"
    "fmovsue\007fmovsug\010fmovsuge\007fmovsul\010fmovsule\007fmovsvc\007fmo"
    "vsvs\006fmovsz\nfmul8sux16\nfmul8ulx16\010fmul8x16\nfmul8x16al\nfmul8x1"
    "6au\005fmuld\013fmuld8sux16\013fmuld8ulx16\005fmulq\005fmuls\006fnaddd\006"
    "fnadds\005fnand\006fnands\005fnegd\005fnegq\005fnegs\007fnhaddd\007fnha"
    "dds\004fnor\005fnors\005fnot1\006fnot1s\005fnot2\006fnot2s\004fone\005f"
    "ones\003for\007fornot1\010fornot1s\007fornot2\010fornot2s\004fors\007fp"
    "ack16\007fpack32\010fpackfix\007fpadd16\010fpadd16s\007fpadd32\010fpadd"
    "32s\007fpadd64\007fpmerge\007fpsub16\010fpsub16S\007fpsub32\010fpsub32S"
    "\005fqtod\005fqtoi\005fqtos\005fqtox\007fslas16\007fslas32\006fsll16\006"
    "fsll32\006fsmuld\006fsqrtd\006fsqrtq\006fsqrts\006fsra16\006fsra32\005f"
    "src1\006fsrc1s\005fsrc2\006fsrc2s\006fsrl16\006fsrl32\005fstod\005fstoi"
    "\005fstoq\005fstox\005fsubd\005fsubq\005fsubs\005fxnor\006fxnors\004fxo"
    "r\005fxors\005fxtod\005fxtoq\005fxtos\005fzero\006fzeros\003inc\005incc"
    "c\003jmp\004jmpl\002ld\003lda\003ldd\004ldda\003ldq\004ldqa\004ldsb\005"
    "ldsba\004ldsh\005ldsha\006ldstub\007ldstuba\004ldsw\004ldub\005lduba\004"
    "lduh\005lduha\003ldx\005lzcnt\006membar\003mov\004mova\005movcc\005movc"
    "s\007movdtox\004move\005moveq\004movg\005movge\006movgeu\005movgu\004mo"
    "vl\005movle\006movleu\005movlg\005movlu\004movn\005movne\006movneg\005m"
    "ovnz\004movo\006movpos\007movrgez\006movrgz\007movrlez\006movrlz\006mov"
    "rnz\005movrz\010movstosw\010movstouw\004movu\005movue\005movug\006movug"
    "e\005movul\006movule\005movvc\005movvs\004movz\006mulscc\004mulx\003neg"
    "\003nop\003not\002or\004orcc\003orn\005orncc\005pdist\006pdistn\004popc"
    "\002rd\004rdpr\007restore\003ret\004retl\004rett\004save\004sdiv\006sdi"
    "vcc\005sdivx\003set\005sethi\010shutdown\004siam\005signx\003sll\004sll"
    "x\004smac\004smul\006smulcc\003sra\004srax\003srl\004srlx\002st\003sta\003"
    "stb\004stba\005stbar\003std\004stda\003sth\004stha\003stq\004stqa\003st"
    "x\003sub\005subcc\004subx\006subxcc\004swap\005swapa\001t\002ta\006tadd"
    "cc\010taddcctv\003tcc\003tcs\002te\003teq\002tg\003tge\004tgeu\003tgu\002"
    "tl\003tle\004tleu\003tlu\002tn\003tne\004tneg\003tnz\004tpos\003tst\006"
    "tsubcc\010tsubcctv\003tvc\003tvs\002tz\004udiv\006udivcc\005udivx\004um"
    "ac\004umul\006umulcc\007umulxhi\005unimp\002wr\004wrpr\005xmulx\007xmul"
    "xhi\004xnor\006xnorcc\003xor\005xorcc";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeatures;
    uint8_t Classes[6];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable0[] = {
  { 0 /* add */, SP::ADDrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 0 /* add */, SP::ADDri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 4 /* addcc */, SP::ADDCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 4 /* addcc */, SP::ADDCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 10 /* addx */, SP::ADDCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 10 /* addx */, SP::ADDCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 15 /* addxc */, SP::ADDXC, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 21 /* addxcc */, SP::ADDErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 21 /* addxcc */, SP::ADDEri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 28 /* addxccc */, SP::ADDXCCC, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 36 /* alignaddr */, SP::ALIGNADDR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 46 /* alignaddrl */, SP::ALIGNADDRL, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 57 /* and */, SP::ANDrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 57 /* and */, SP::ANDri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 61 /* andcc */, SP::ANDCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 61 /* andcc */, SP::ANDCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 67 /* andn */, SP::ANDNrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 67 /* andn */, SP::ANDNri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 72 /* andncc */, SP::ANDNCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 72 /* andncc */, SP::ANDNCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 79 /* array16 */, SP::ARRAY16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 87 /* array32 */, SP::ARRAY32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 95 /* array8 */, SP::ARRAY8, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 102 /* b */, SP::BCOND, Convert__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 102 /* b */, SP::BPICC, Convert__Imm1_1__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCC, Convert__Imm1_1__imm_95_8, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BCONDA, Convert__Imm1_1__imm_95_8, 0, { MCK_a, MCK_Imm }, },
  { 102 /* b */, SP::BCOND, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 102 /* b */, SP::BPICCA, Convert__Imm1_2__imm_95_8, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCCA, Convert__Imm1_2__imm_95_8, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BPICCNT, Convert__Imm1_2__imm_95_8, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCCNT, Convert__Imm1_2__imm_95_8, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BPICC, Convert__Imm1_2__imm_95_8, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCC, Convert__Imm1_2__imm_95_8, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BPICC, Convert__Imm1_2__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCC, Convert__Imm1_2__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BCONDA, Convert__Imm1_2__Imm1_0, 0, { MCK_Imm, MCK_a, MCK_Imm }, },
  { 102 /* b */, SP::BPICCANT, Convert__Imm1_3__imm_95_8, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCCANT, Convert__Imm1_3__imm_95_8, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BPICCA, Convert__Imm1_3__imm_95_8, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCCA, Convert__Imm1_3__imm_95_8, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BPICCA, Convert__Imm1_3__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCCA, Convert__Imm1_3__Imm1_0, 0, { MCK_Imm, MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BPICCNT, Convert__Imm1_3__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCCNT, Convert__Imm1_3__Imm1_0, 0, { MCK_Imm, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BPICCANT, Convert__Imm1_4__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCCANT, Convert__Imm1_4__Imm1_0, 0, { MCK_Imm, MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, SP::BA, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 104 /* ba */, SP::BCOND, Convert__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 104 /* ba */, SP::BPICC, Convert__Imm1_1__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, SP::BPXCC, Convert__Imm1_1__imm_95_8, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, SP::BCONDA, Convert__Imm1_1__imm_95_8, 0, { MCK_a, MCK_Imm }, },
  { 104 /* ba */, SP::BPICCA, Convert__Imm1_2__imm_95_8, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, SP::BPXCCA, Convert__Imm1_2__imm_95_8, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, SP::BPICCNT, Convert__Imm1_2__imm_95_8, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, SP::BPXCCNT, Convert__Imm1_2__imm_95_8, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, SP::BPICC, Convert__Imm1_2__imm_95_8, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, SP::BPXCC, Convert__Imm1_2__imm_95_8, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, SP::BPICCANT, Convert__Imm1_3__imm_95_8, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, SP::BPXCCANT, Convert__Imm1_3__imm_95_8, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, SP::BPICCA, Convert__Imm1_3__imm_95_8, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, SP::BPXCCA, Convert__Imm1_3__imm_95_8, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, SP::BCOND, Convert__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 107 /* bcc */, SP::BPICC, Convert__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPXCC, Convert__Imm1_1__imm_95_13, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, SP::BCONDA, Convert__Imm1_1__imm_95_13, 0, { MCK_a, MCK_Imm }, },
  { 107 /* bcc */, SP::BPICCA, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPXCCA, Convert__Imm1_2__imm_95_13, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPICCNT, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPXCCNT, Convert__Imm1_2__imm_95_13, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPICC, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPXCC, Convert__Imm1_2__imm_95_13, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPICCANT, Convert__Imm1_3__imm_95_13, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPXCCANT, Convert__Imm1_3__imm_95_13, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPICCA, Convert__Imm1_3__imm_95_13, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPXCCA, Convert__Imm1_3__imm_95_13, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 111 /* bclr */, SP::ANDNrr, Convert__Reg1_1__Reg1_1__Reg1_0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 111 /* bclr */, SP::ANDNri, Convert__Reg1_1__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 116 /* bcs */, SP::BCOND, Convert__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 116 /* bcs */, SP::BPICC, Convert__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPXCC, Convert__Imm1_1__imm_95_5, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 116 /* bcs */, SP::BCONDA, Convert__Imm1_1__imm_95_5, 0, { MCK_a, MCK_Imm }, },
  { 116 /* bcs */, SP::BPICCA, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPXCCA, Convert__Imm1_2__imm_95_5, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPICCNT, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPXCCNT, Convert__Imm1_2__imm_95_5, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPICC, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPXCC, Convert__Imm1_2__imm_95_5, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPICCANT, Convert__Imm1_3__imm_95_5, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPXCCANT, Convert__Imm1_3__imm_95_5, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPICCA, Convert__Imm1_3__imm_95_5, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPXCCA, Convert__Imm1_3__imm_95_5, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, SP::BCOND, Convert__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 120 /* be */, SP::BPICC, Convert__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, SP::BPXCC, Convert__Imm1_1__imm_95_1, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, SP::BCONDA, Convert__Imm1_1__imm_95_1, 0, { MCK_a, MCK_Imm }, },
  { 120 /* be */, SP::BPICCA, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, SP::BPXCCA, Convert__Imm1_2__imm_95_1, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, SP::BPICCNT, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, SP::BPXCCNT, Convert__Imm1_2__imm_95_1, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, SP::BPICC, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, SP::BPXCC, Convert__Imm1_2__imm_95_1, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, SP::BPICCANT, Convert__Imm1_3__imm_95_1, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, SP::BPXCCANT, Convert__Imm1_3__imm_95_1, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, SP::BPICCA, Convert__Imm1_3__imm_95_1, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, SP::BPXCCA, Convert__Imm1_3__imm_95_1, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* beq */, SP::BCOND, Convert__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 123 /* beq */, SP::BPICC, Convert__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 123 /* beq */, SP::BPXCC, Convert__Imm1_1__imm_95_1, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* beq */, SP::BCONDA, Convert__Imm1_1__imm_95_1, 0, { MCK_a, MCK_Imm }, },
  { 123 /* beq */, SP::BPICCA, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 123 /* beq */, SP::BPXCCA, Convert__Imm1_2__imm_95_1, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* beq */, SP::BPICCNT, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 123 /* beq */, SP::BPXCCNT, Convert__Imm1_2__imm_95_1, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* beq */, SP::BPICC, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 123 /* beq */, SP::BPXCC, Convert__Imm1_2__imm_95_1, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* beq */, SP::BPICCANT, Convert__Imm1_3__imm_95_1, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 123 /* beq */, SP::BPXCCANT, Convert__Imm1_3__imm_95_1, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* beq */, SP::BPICCA, Convert__Imm1_3__imm_95_1, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 123 /* beq */, SP::BPXCCA, Convert__Imm1_3__imm_95_1, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 127 /* bg */, SP::BCOND, Convert__Imm1_0__imm_95_10, 0, { MCK_Imm }, },
  { 127 /* bg */, SP::BPICC, Convert__Imm1_1__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 127 /* bg */, SP::BPXCC, Convert__Imm1_1__imm_95_10, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 127 /* bg */, SP::BCONDA, Convert__Imm1_1__imm_95_10, 0, { MCK_a, MCK_Imm }, },
  { 127 /* bg */, SP::BPICCA, Convert__Imm1_2__imm_95_10, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 127 /* bg */, SP::BPXCCA, Convert__Imm1_2__imm_95_10, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 127 /* bg */, SP::BPICCNT, Convert__Imm1_2__imm_95_10, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 127 /* bg */, SP::BPXCCNT, Convert__Imm1_2__imm_95_10, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 127 /* bg */, SP::BPICC, Convert__Imm1_2__imm_95_10, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 127 /* bg */, SP::BPXCC, Convert__Imm1_2__imm_95_10, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 127 /* bg */, SP::BPICCANT, Convert__Imm1_3__imm_95_10, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 127 /* bg */, SP::BPXCCANT, Convert__Imm1_3__imm_95_10, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 127 /* bg */, SP::BPICCA, Convert__Imm1_3__imm_95_10, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 127 /* bg */, SP::BPXCCA, Convert__Imm1_3__imm_95_10, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bge */, SP::BCOND, Convert__Imm1_0__imm_95_11, 0, { MCK_Imm }, },
  { 130 /* bge */, SP::BPICC, Convert__Imm1_1__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bge */, SP::BPXCC, Convert__Imm1_1__imm_95_11, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bge */, SP::BCONDA, Convert__Imm1_1__imm_95_11, 0, { MCK_a, MCK_Imm }, },
  { 130 /* bge */, SP::BPICCA, Convert__Imm1_2__imm_95_11, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bge */, SP::BPXCCA, Convert__Imm1_2__imm_95_11, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bge */, SP::BPICCNT, Convert__Imm1_2__imm_95_11, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bge */, SP::BPXCCNT, Convert__Imm1_2__imm_95_11, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bge */, SP::BPICC, Convert__Imm1_2__imm_95_11, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bge */, SP::BPXCC, Convert__Imm1_2__imm_95_11, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bge */, SP::BPICCANT, Convert__Imm1_3__imm_95_11, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bge */, SP::BPXCCANT, Convert__Imm1_3__imm_95_11, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bge */, SP::BPICCA, Convert__Imm1_3__imm_95_11, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bge */, SP::BPXCCA, Convert__Imm1_3__imm_95_11, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BCOND, Convert__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 134 /* bgeu */, SP::BPICC, Convert__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPXCC, Convert__Imm1_1__imm_95_13, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BCONDA, Convert__Imm1_1__imm_95_13, 0, { MCK_a, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPICCA, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPXCCA, Convert__Imm1_2__imm_95_13, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPICCNT, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPXCCNT, Convert__Imm1_2__imm_95_13, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPICC, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPXCC, Convert__Imm1_2__imm_95_13, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPICCANT, Convert__Imm1_3__imm_95_13, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPXCCANT, Convert__Imm1_3__imm_95_13, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPICCA, Convert__Imm1_3__imm_95_13, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPXCCA, Convert__Imm1_3__imm_95_13, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bgu */, SP::BCOND, Convert__Imm1_0__imm_95_12, 0, { MCK_Imm }, },
  { 139 /* bgu */, SP::BPICC, Convert__Imm1_1__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPXCC, Convert__Imm1_1__imm_95_12, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bgu */, SP::BCONDA, Convert__Imm1_1__imm_95_12, 0, { MCK_a, MCK_Imm }, },
  { 139 /* bgu */, SP::BPICCA, Convert__Imm1_2__imm_95_12, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPXCCA, Convert__Imm1_2__imm_95_12, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPICCNT, Convert__Imm1_2__imm_95_12, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPXCCNT, Convert__Imm1_2__imm_95_12, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPICC, Convert__Imm1_2__imm_95_12, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPXCC, Convert__Imm1_2__imm_95_12, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPICCANT, Convert__Imm1_3__imm_95_12, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPXCCANT, Convert__Imm1_3__imm_95_12, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPICCA, Convert__Imm1_3__imm_95_12, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPXCCA, Convert__Imm1_3__imm_95_12, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 143 /* bl */, SP::BCOND, Convert__Imm1_0__imm_95_3, 0, { MCK_Imm }, },
  { 143 /* bl */, SP::BPICC, Convert__Imm1_1__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 143 /* bl */, SP::BPXCC, Convert__Imm1_1__imm_95_3, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 143 /* bl */, SP::BCONDA, Convert__Imm1_1__imm_95_3, 0, { MCK_a, MCK_Imm }, },
  { 143 /* bl */, SP::BPICCA, Convert__Imm1_2__imm_95_3, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 143 /* bl */, SP::BPXCCA, Convert__Imm1_2__imm_95_3, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 143 /* bl */, SP::BPICCNT, Convert__Imm1_2__imm_95_3, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 143 /* bl */, SP::BPXCCNT, Convert__Imm1_2__imm_95_3, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 143 /* bl */, SP::BPICC, Convert__Imm1_2__imm_95_3, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 143 /* bl */, SP::BPXCC, Convert__Imm1_2__imm_95_3, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 143 /* bl */, SP::BPICCANT, Convert__Imm1_3__imm_95_3, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 143 /* bl */, SP::BPXCCANT, Convert__Imm1_3__imm_95_3, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 143 /* bl */, SP::BPICCA, Convert__Imm1_3__imm_95_3, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 143 /* bl */, SP::BPXCCA, Convert__Imm1_3__imm_95_3, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* ble */, SP::BCOND, Convert__Imm1_0__imm_95_2, 0, { MCK_Imm }, },
  { 146 /* ble */, SP::BPICC, Convert__Imm1_1__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 146 /* ble */, SP::BPXCC, Convert__Imm1_1__imm_95_2, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* ble */, SP::BCONDA, Convert__Imm1_1__imm_95_2, 0, { MCK_a, MCK_Imm }, },
  { 146 /* ble */, SP::BPICCA, Convert__Imm1_2__imm_95_2, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* ble */, SP::BPXCCA, Convert__Imm1_2__imm_95_2, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* ble */, SP::BPICCNT, Convert__Imm1_2__imm_95_2, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* ble */, SP::BPXCCNT, Convert__Imm1_2__imm_95_2, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* ble */, SP::BPICC, Convert__Imm1_2__imm_95_2, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* ble */, SP::BPXCC, Convert__Imm1_2__imm_95_2, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* ble */, SP::BPICCANT, Convert__Imm1_3__imm_95_2, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* ble */, SP::BPXCCANT, Convert__Imm1_3__imm_95_2, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* ble */, SP::BPICCA, Convert__Imm1_3__imm_95_2, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* ble */, SP::BPXCCA, Convert__Imm1_3__imm_95_2, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bleu */, SP::BCOND, Convert__Imm1_0__imm_95_4, 0, { MCK_Imm }, },
  { 150 /* bleu */, SP::BPICC, Convert__Imm1_1__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPXCC, Convert__Imm1_1__imm_95_4, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bleu */, SP::BCONDA, Convert__Imm1_1__imm_95_4, 0, { MCK_a, MCK_Imm }, },
  { 150 /* bleu */, SP::BPICCA, Convert__Imm1_2__imm_95_4, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPXCCA, Convert__Imm1_2__imm_95_4, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPICCNT, Convert__Imm1_2__imm_95_4, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPXCCNT, Convert__Imm1_2__imm_95_4, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPICC, Convert__Imm1_2__imm_95_4, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPXCC, Convert__Imm1_2__imm_95_4, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPICCANT, Convert__Imm1_3__imm_95_4, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPXCCANT, Convert__Imm1_3__imm_95_4, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPICCA, Convert__Imm1_3__imm_95_4, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPXCCA, Convert__Imm1_3__imm_95_4, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 155 /* blu */, SP::BCOND, Convert__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 155 /* blu */, SP::BPICC, Convert__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 155 /* blu */, SP::BPXCC, Convert__Imm1_1__imm_95_5, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 155 /* blu */, SP::BCONDA, Convert__Imm1_1__imm_95_5, 0, { MCK_a, MCK_Imm }, },
  { 155 /* blu */, SP::BPICCA, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 155 /* blu */, SP::BPXCCA, Convert__Imm1_2__imm_95_5, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 155 /* blu */, SP::BPICCNT, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 155 /* blu */, SP::BPXCCNT, Convert__Imm1_2__imm_95_5, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 155 /* blu */, SP::BPICC, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 155 /* blu */, SP::BPXCC, Convert__Imm1_2__imm_95_5, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 155 /* blu */, SP::BPICCANT, Convert__Imm1_3__imm_95_5, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 155 /* blu */, SP::BPXCCANT, Convert__Imm1_3__imm_95_5, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 155 /* blu */, SP::BPICCA, Convert__Imm1_3__imm_95_5, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 155 /* blu */, SP::BPXCCA, Convert__Imm1_3__imm_95_5, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 159 /* bmask */, SP::BMASK, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 165 /* bn */, SP::BCOND, Convert__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 165 /* bn */, SP::BPICC, Convert__Imm1_1__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 165 /* bn */, SP::BPXCC, Convert__Imm1_1__imm_95_0, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 165 /* bn */, SP::BCONDA, Convert__Imm1_1__imm_95_0, 0, { MCK_a, MCK_Imm }, },
  { 165 /* bn */, SP::BPICCA, Convert__Imm1_2__imm_95_0, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 165 /* bn */, SP::BPXCCA, Convert__Imm1_2__imm_95_0, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 165 /* bn */, SP::BPICCNT, Convert__Imm1_2__imm_95_0, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 165 /* bn */, SP::BPXCCNT, Convert__Imm1_2__imm_95_0, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 165 /* bn */, SP::BPICC, Convert__Imm1_2__imm_95_0, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 165 /* bn */, SP::BPXCC, Convert__Imm1_2__imm_95_0, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 165 /* bn */, SP::BPICCANT, Convert__Imm1_3__imm_95_0, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 165 /* bn */, SP::BPXCCANT, Convert__Imm1_3__imm_95_0, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 165 /* bn */, SP::BPICCA, Convert__Imm1_3__imm_95_0, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 165 /* bn */, SP::BPXCCA, Convert__Imm1_3__imm_95_0, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bne */, SP::BCOND, Convert__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 168 /* bne */, SP::BPICC, Convert__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bne */, SP::BPXCC, Convert__Imm1_1__imm_95_9, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bne */, SP::BCONDA, Convert__Imm1_1__imm_95_9, 0, { MCK_a, MCK_Imm }, },
  { 168 /* bne */, SP::BPICCA, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bne */, SP::BPXCCA, Convert__Imm1_2__imm_95_9, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bne */, SP::BPICCNT, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bne */, SP::BPXCCNT, Convert__Imm1_2__imm_95_9, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bne */, SP::BPICC, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bne */, SP::BPXCC, Convert__Imm1_2__imm_95_9, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bne */, SP::BPICCANT, Convert__Imm1_3__imm_95_9, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bne */, SP::BPXCCANT, Convert__Imm1_3__imm_95_9, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bne */, SP::BPICCA, Convert__Imm1_3__imm_95_9, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bne */, SP::BPXCCA, Convert__Imm1_3__imm_95_9, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bneg */, SP::BCOND, Convert__Imm1_0__imm_95_6, 0, { MCK_Imm }, },
  { 172 /* bneg */, SP::BPICC, Convert__Imm1_1__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPXCC, Convert__Imm1_1__imm_95_6, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bneg */, SP::BCONDA, Convert__Imm1_1__imm_95_6, 0, { MCK_a, MCK_Imm }, },
  { 172 /* bneg */, SP::BPICCA, Convert__Imm1_2__imm_95_6, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPXCCA, Convert__Imm1_2__imm_95_6, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPICCNT, Convert__Imm1_2__imm_95_6, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPXCCNT, Convert__Imm1_2__imm_95_6, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPICC, Convert__Imm1_2__imm_95_6, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPXCC, Convert__Imm1_2__imm_95_6, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPICCANT, Convert__Imm1_3__imm_95_6, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPXCCANT, Convert__Imm1_3__imm_95_6, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPICCA, Convert__Imm1_3__imm_95_6, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPXCCA, Convert__Imm1_3__imm_95_6, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bnz */, SP::BCOND, Convert__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 177 /* bnz */, SP::BPICC, Convert__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPXCC, Convert__Imm1_1__imm_95_9, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bnz */, SP::BCONDA, Convert__Imm1_1__imm_95_9, 0, { MCK_a, MCK_Imm }, },
  { 177 /* bnz */, SP::BPICCA, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPXCCA, Convert__Imm1_2__imm_95_9, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPICCNT, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPXCCNT, Convert__Imm1_2__imm_95_9, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPICC, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPXCC, Convert__Imm1_2__imm_95_9, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPICCANT, Convert__Imm1_3__imm_95_9, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPXCCANT, Convert__Imm1_3__imm_95_9, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPICCA, Convert__Imm1_3__imm_95_9, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPXCCA, Convert__Imm1_3__imm_95_9, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 181 /* bpos */, SP::BCOND, Convert__Imm1_0__imm_95_14, 0, { MCK_Imm }, },
  { 181 /* bpos */, SP::BPICC, Convert__Imm1_1__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPXCC, Convert__Imm1_1__imm_95_14, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 181 /* bpos */, SP::BCONDA, Convert__Imm1_1__imm_95_14, 0, { MCK_a, MCK_Imm }, },
  { 181 /* bpos */, SP::BPICCA, Convert__Imm1_2__imm_95_14, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPXCCA, Convert__Imm1_2__imm_95_14, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPICCNT, Convert__Imm1_2__imm_95_14, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPXCCNT, Convert__Imm1_2__imm_95_14, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPICC, Convert__Imm1_2__imm_95_14, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPXCC, Convert__Imm1_2__imm_95_14, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPICCANT, Convert__Imm1_3__imm_95_14, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPXCCANT, Convert__Imm1_3__imm_95_14, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPICCA, Convert__Imm1_3__imm_95_14, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPXCCA, Convert__Imm1_3__imm_95_14, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 186 /* brgez */, SP::BPGEZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 186 /* brgez */, SP::BPGEZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 186 /* brgez */, SP::BPGEZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 186 /* brgez */, SP::BPGEZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 186 /* brgez */, SP::BPGEZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 186 /* brgez */, SP::BPGEZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 192 /* brgz */, SP::BPGZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 192 /* brgz */, SP::BPGZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 192 /* brgz */, SP::BPGZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 192 /* brgz */, SP::BPGZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 192 /* brgz */, SP::BPGZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 192 /* brgz */, SP::BPGZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 197 /* brlez */, SP::BPLEZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 197 /* brlez */, SP::BPLEZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 197 /* brlez */, SP::BPLEZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 197 /* brlez */, SP::BPLEZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 197 /* brlez */, SP::BPLEZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 197 /* brlez */, SP::BPLEZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 203 /* brlz */, SP::BPLZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 203 /* brlz */, SP::BPLZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 203 /* brlz */, SP::BPLZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 203 /* brlz */, SP::BPLZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 203 /* brlz */, SP::BPLZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 203 /* brlz */, SP::BPLZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 208 /* brnz */, SP::BPNZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 208 /* brnz */, SP::BPNZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 208 /* brnz */, SP::BPNZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 208 /* brnz */, SP::BPNZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 208 /* brnz */, SP::BPNZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 208 /* brnz */, SP::BPNZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 213 /* brz */, SP::BPZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 213 /* brz */, SP::BPZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 213 /* brz */, SP::BPZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 213 /* brz */, SP::BPZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 213 /* brz */, SP::BPZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 213 /* brz */, SP::BPZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 217 /* bset */, SP::ORrr, Convert__Reg1_1__Reg1_1__Reg1_0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 217 /* bset */, SP::ORri, Convert__Reg1_1__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 222 /* bshuffle */, SP::BSHUFFLE, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 231 /* btog */, SP::XORrr, Convert__Reg1_1__Reg1_1__Reg1_0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 231 /* btog */, SP::XORri, Convert__Reg1_1__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 236 /* btst */, SP::ANDCCrr, Convert__regG0__Reg1_1__Reg1_0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 236 /* btst */, SP::ANDCCri, Convert__regG0__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 241 /* bvc */, SP::BCOND, Convert__Imm1_0__imm_95_15, 0, { MCK_Imm }, },
  { 241 /* bvc */, SP::BPICC, Convert__Imm1_1__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPXCC, Convert__Imm1_1__imm_95_15, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvc */, SP::BCONDA, Convert__Imm1_1__imm_95_15, 0, { MCK_a, MCK_Imm }, },
  { 241 /* bvc */, SP::BPICCA, Convert__Imm1_2__imm_95_15, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPXCCA, Convert__Imm1_2__imm_95_15, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPICCNT, Convert__Imm1_2__imm_95_15, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPXCCNT, Convert__Imm1_2__imm_95_15, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPICC, Convert__Imm1_2__imm_95_15, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPXCC, Convert__Imm1_2__imm_95_15, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPICCANT, Convert__Imm1_3__imm_95_15, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPXCCANT, Convert__Imm1_3__imm_95_15, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPICCA, Convert__Imm1_3__imm_95_15, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPXCCA, Convert__Imm1_3__imm_95_15, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bvs */, SP::BCOND, Convert__Imm1_0__imm_95_7, 0, { MCK_Imm }, },
  { 245 /* bvs */, SP::BPICC, Convert__Imm1_1__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPXCC, Convert__Imm1_1__imm_95_7, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bvs */, SP::BCONDA, Convert__Imm1_1__imm_95_7, 0, { MCK_a, MCK_Imm }, },
  { 245 /* bvs */, SP::BPICCA, Convert__Imm1_2__imm_95_7, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPXCCA, Convert__Imm1_2__imm_95_7, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPICCNT, Convert__Imm1_2__imm_95_7, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPXCCNT, Convert__Imm1_2__imm_95_7, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPICC, Convert__Imm1_2__imm_95_7, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPXCC, Convert__Imm1_2__imm_95_7, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPICCANT, Convert__Imm1_3__imm_95_7, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPXCCANT, Convert__Imm1_3__imm_95_7, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPICCA, Convert__Imm1_3__imm_95_7, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPXCCA, Convert__Imm1_3__imm_95_7, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 249 /* bz */, SP::BCOND, Convert__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 249 /* bz */, SP::BPICC, Convert__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 249 /* bz */, SP::BPXCC, Convert__Imm1_1__imm_95_1, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 249 /* bz */, SP::BCONDA, Convert__Imm1_1__imm_95_1, 0, { MCK_a, MCK_Imm }, },
  { 249 /* bz */, SP::BPICCA, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 249 /* bz */, SP::BPXCCA, Convert__Imm1_2__imm_95_1, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 249 /* bz */, SP::BPICCNT, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 249 /* bz */, SP::BPXCCNT, Convert__Imm1_2__imm_95_1, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 249 /* bz */, SP::BPICC, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 249 /* bz */, SP::BPXCC, Convert__Imm1_2__imm_95_1, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 249 /* bz */, SP::BPICCANT, Convert__Imm1_3__imm_95_1, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 249 /* bz */, SP::BPXCCANT, Convert__Imm1_3__imm_95_1, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 249 /* bz */, SP::BPICCA, Convert__Imm1_3__imm_95_1, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 249 /* bz */, SP::BPXCCA, Convert__Imm1_3__imm_95_1, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 252 /* call */, SP::CALL, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 252 /* call */, SP::JMPLri, Convert__regO7__MEMri2_0, 0, { MCK_MEMri }, },
  { 252 /* call */, SP::JMPLrr, Convert__regO7__MEMrr2_0, 0, { MCK_MEMrr }, },
  { 257 /* cas */, SP::CASrr, Convert__Reg1_4__Reg1_1__Reg1_3__Tie0, Feature_HasV9, { MCK__91_, MCK_IntRegs, MCK__93_, MCK_IntRegs, MCK_IntRegs }, },
  { 261 /* casa */, SP::CASAasi10, Convert__Reg1_5__Reg1_1__Reg1_4__Tie0, 0, { MCK__91_, MCK_IntRegs, MCK__93_, MCK_10, MCK_IntRegs, MCK_IntRegs }, },
  { 261 /* casa */, SP::CASArr, Convert__Reg1_5__Reg1_1__Reg1_4__Tie0__Imm1_3, 0, { MCK__91_, MCK_IntRegs, MCK__93_, MCK_Imm, MCK_IntRegs, MCK_IntRegs }, },
  { 266 /* casx */, SP::CASXrr, Convert__Reg1_4__Reg1_1__Reg1_3__Tie0, 0, { MCK__91_, MCK_IntRegs, MCK__93_, MCK_IntRegs, MCK_IntRegs }, },
  { 271 /* cb */, SP::CBCOND, Convert__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 271 /* cb */, SP::CBCONDA, Convert__Imm1_1__imm_95_8, 0, { MCK_a, MCK_Imm }, },
  { 271 /* cb */, SP::CBCOND, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 271 /* cb */, SP::CBCONDA, Convert__Imm1_2__Imm1_0, 0, { MCK_Imm, MCK_a, MCK_Imm }, },
  { 274 /* cb0 */, SP::CBCOND, Convert__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 274 /* cb0 */, SP::CBCONDA, Convert__Imm1_1__imm_95_9, 0, { MCK_a, MCK_Imm }, },
  { 278 /* cb01 */, SP::CBCOND, Convert__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 278 /* cb01 */, SP::CBCONDA, Convert__Imm1_1__imm_95_13, 0, { MCK_a, MCK_Imm }, },
  { 283 /* cb012 */, SP::CBCOND, Convert__Imm1_0__imm_95_15, 0, { MCK_Imm }, },
  { 283 /* cb012 */, SP::CBCONDA, Convert__Imm1_1__imm_95_15, 0, { MCK_a, MCK_Imm }, },
  { 289 /* cb013 */, SP::CBCOND, Convert__Imm1_0__imm_95_14, 0, { MCK_Imm }, },
  { 289 /* cb013 */, SP::CBCONDA, Convert__Imm1_1__imm_95_14, 0, { MCK_a, MCK_Imm }, },
  { 295 /* cb02 */, SP::CBCOND, Convert__Imm1_0__imm_95_11, 0, { MCK_Imm }, },
  { 295 /* cb02 */, SP::CBCONDA, Convert__Imm1_1__imm_95_11, 0, { MCK_a, MCK_Imm }, },
  { 300 /* cb023 */, SP::CBCOND, Convert__Imm1_0__imm_95_12, 0, { MCK_Imm }, },
  { 300 /* cb023 */, SP::CBCONDA, Convert__Imm1_1__imm_95_12, 0, { MCK_a, MCK_Imm }, },
  { 306 /* cb03 */, SP::CBCOND, Convert__Imm1_0__imm_95_10, 0, { MCK_Imm }, },
  { 306 /* cb03 */, SP::CBCONDA, Convert__Imm1_1__imm_95_10, 0, { MCK_a, MCK_Imm }, },
  { 311 /* cb1 */, SP::CBCOND, Convert__Imm1_0__imm_95_4, 0, { MCK_Imm }, },
  { 311 /* cb1 */, SP::CBCONDA, Convert__Imm1_1__imm_95_4, 0, { MCK_a, MCK_Imm }, },
  { 315 /* cb12 */, SP::CBCOND, Convert__Imm1_0__imm_95_2, 0, { MCK_Imm }, },
  { 315 /* cb12 */, SP::CBCONDA, Convert__Imm1_1__imm_95_2, 0, { MCK_a, MCK_Imm }, },
  { 320 /* cb123 */, SP::CBCOND, Convert__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 320 /* cb123 */, SP::CBCONDA, Convert__Imm1_1__imm_95_1, 0, { MCK_a, MCK_Imm }, },
  { 326 /* cb13 */, SP::CBCOND, Convert__Imm1_0__imm_95_3, 0, { MCK_Imm }, },
  { 326 /* cb13 */, SP::CBCONDA, Convert__Imm1_1__imm_95_3, 0, { MCK_a, MCK_Imm }, },
  { 331 /* cb2 */, SP::CBCOND, Convert__Imm1_0__imm_95_6, 0, { MCK_Imm }, },
  { 331 /* cb2 */, SP::CBCONDA, Convert__Imm1_1__imm_95_6, 0, { MCK_a, MCK_Imm }, },
  { 335 /* cb23 */, SP::CBCOND, Convert__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 335 /* cb23 */, SP::CBCONDA, Convert__Imm1_1__imm_95_5, 0, { MCK_a, MCK_Imm }, },
  { 340 /* cb3 */, SP::CBCOND, Convert__Imm1_0__imm_95_7, 0, { MCK_Imm }, },
  { 340 /* cb3 */, SP::CBCONDA, Convert__Imm1_1__imm_95_7, 0, { MCK_a, MCK_Imm }, },
  { 344 /* cba */, SP::CBCOND, Convert__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 344 /* cba */, SP::CBCONDA, Convert__Imm1_1__imm_95_8, 0, { MCK_a, MCK_Imm }, },
  { 348 /* cbn */, SP::CBCOND, Convert__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 348 /* cbn */, SP::CBCONDA, Convert__Imm1_1__imm_95_0, 0, { MCK_a, MCK_Imm }, },
  { 352 /* clr */, SP::ORrr, Convert__Reg1_0__regG0__regG0, 0, { MCK_IntRegs }, },
  { 352 /* clr */, SP::STri, Convert__MEMri2_1__regG0, 0, { MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 352 /* clr */, SP::STrr, Convert__MEMrr2_1__regG0, 0, { MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 356 /* clrb */, SP::STBri, Convert__MEMri2_1__regG0, 0, { MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 356 /* clrb */, SP::STBrr, Convert__MEMrr2_1__regG0, 0, { MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 361 /* clrh */, SP::STHri, Convert__MEMri2_1__regG0, 0, { MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 361 /* clrh */, SP::STHrr, Convert__MEMrr2_1__regG0, 0, { MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 366 /* cmask16 */, SP::CMASK16, Convert__Reg1_0, Feature_HasVIS3, { MCK_IntRegs }, },
  { 374 /* cmask32 */, SP::CMASK32, Convert__Reg1_0, Feature_HasVIS3, { MCK_IntRegs }, },
  { 382 /* cmask8 */, SP::CMASK8, Convert__Reg1_0, Feature_HasVIS3, { MCK_IntRegs }, },
  { 389 /* cmp */, SP::CMPrr, Convert__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 389 /* cmp */, SP::CMPri, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 393 /* dec */, SP::SUBri, Convert__Reg1_0__Reg1_0__imm_95_1, 0, { MCK_IntRegs }, },
  { 393 /* dec */, SP::SUBri, Convert__Reg1_1__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 397 /* deccc */, SP::SUBCCri, Convert__Reg1_0__Reg1_0__imm_95_1, 0, { MCK_IntRegs }, },
  { 397 /* deccc */, SP::SUBCCri, Convert__Reg1_1__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 403 /* edge16 */, SP::EDGE16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 410 /* edge16l */, SP::EDGE16L, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 418 /* edge16ln */, SP::EDGE16LN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 427 /* edge16n */, SP::EDGE16N, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 435 /* edge32 */, SP::EDGE32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 442 /* edge32l */, SP::EDGE32L, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 450 /* edge32ln */, SP::EDGE32LN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 459 /* edge32n */, SP::EDGE32N, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 467 /* edge8 */, SP::EDGE8, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 473 /* edge8l */, SP::EDGE8L, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 480 /* edge8ln */, SP::EDGE8LN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 488 /* edge8n */, SP::EDGE8N, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 495 /* fabsd */, SP::FABSD, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 501 /* fabsq */, SP::FABSQ, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 507 /* fabss */, SP::FABSS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 513 /* faddd */, SP::FADDD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 519 /* faddq */, SP::FADDQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 525 /* fadds */, SP::FADDS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 531 /* faligndata */, SP::FALIGNADATA, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 542 /* fand */, SP::FAND, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 547 /* fandnot1 */, SP::FANDNOT1, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 556 /* fandnot1s */, SP::FANDNOT1S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 566 /* fandnot2 */, SP::FANDNOT2, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 575 /* fandnot2s */, SP::FANDNOT2S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 585 /* fands */, SP::FANDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 591 /* fb */, SP::FBCOND, Convert__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 591 /* fb */, SP::FBCONDA, Convert__Imm1_1__imm_95_8, 0, { MCK_a, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCC, Convert__Imm1_1__imm_95_8__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::FBCOND, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCCA, Convert__Imm1_2__imm_95_8__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCCNT, Convert__Imm1_2__imm_95_8__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCC, Convert__Imm1_2__imm_95_8__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::FBCONDA, Convert__Imm1_2__Imm1_0, 0, { MCK_Imm, MCK_a, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCC, Convert__Imm1_2__Imm1_0__Reg1_1, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCCANT, Convert__Imm1_3__imm_95_8__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCCA, Convert__Imm1_3__imm_95_8__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCCA, Convert__Imm1_3__Imm1_0__Reg1_2, Feature_HasV9, { MCK_Imm, MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCCNT, Convert__Imm1_3__Imm1_0__Reg1_2, Feature_HasV9, { MCK_Imm, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCCANT, Convert__Imm1_4__Imm1_0__Reg1_3, Feature_HasV9, { MCK_Imm, MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 594 /* fba */, SP::FBCOND, Convert__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 594 /* fba */, SP::FBCONDA, Convert__Imm1_1__imm_95_8, 0, { MCK_a, MCK_Imm }, },
  { 594 /* fba */, SP::BPFCC, Convert__Imm1_1__imm_95_8__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 594 /* fba */, SP::BPFCCA, Convert__Imm1_2__imm_95_8__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 594 /* fba */, SP::BPFCCNT, Convert__Imm1_2__imm_95_8__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 594 /* fba */, SP::BPFCC, Convert__Imm1_2__imm_95_8__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 594 /* fba */, SP::BPFCCANT, Convert__Imm1_3__imm_95_8__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 594 /* fba */, SP::BPFCCA, Convert__Imm1_3__imm_95_8__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 598 /* fbe */, SP::FBCOND, Convert__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 598 /* fbe */, SP::FBCONDA, Convert__Imm1_1__imm_95_9, 0, { MCK_a, MCK_Imm }, },
  { 598 /* fbe */, SP::BPFCC, Convert__Imm1_1__imm_95_9__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 598 /* fbe */, SP::BPFCCA, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 598 /* fbe */, SP::BPFCCNT, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 598 /* fbe */, SP::BPFCC, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 598 /* fbe */, SP::BPFCCANT, Convert__Imm1_3__imm_95_9__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 598 /* fbe */, SP::BPFCCA, Convert__Imm1_3__imm_95_9__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 602 /* fbg */, SP::FBCOND, Convert__Imm1_0__imm_95_6, 0, { MCK_Imm }, },
  { 602 /* fbg */, SP::FBCONDA, Convert__Imm1_1__imm_95_6, 0, { MCK_a, MCK_Imm }, },
  { 602 /* fbg */, SP::BPFCC, Convert__Imm1_1__imm_95_6__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 602 /* fbg */, SP::BPFCCA, Convert__Imm1_2__imm_95_6__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 602 /* fbg */, SP::BPFCCNT, Convert__Imm1_2__imm_95_6__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 602 /* fbg */, SP::BPFCC, Convert__Imm1_2__imm_95_6__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 602 /* fbg */, SP::BPFCCANT, Convert__Imm1_3__imm_95_6__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 602 /* fbg */, SP::BPFCCA, Convert__Imm1_3__imm_95_6__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 606 /* fbge */, SP::FBCOND, Convert__Imm1_0__imm_95_11, 0, { MCK_Imm }, },
  { 606 /* fbge */, SP::FBCONDA, Convert__Imm1_1__imm_95_11, 0, { MCK_a, MCK_Imm }, },
  { 606 /* fbge */, SP::BPFCC, Convert__Imm1_1__imm_95_11__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 606 /* fbge */, SP::BPFCCA, Convert__Imm1_2__imm_95_11__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 606 /* fbge */, SP::BPFCCNT, Convert__Imm1_2__imm_95_11__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 606 /* fbge */, SP::BPFCC, Convert__Imm1_2__imm_95_11__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 606 /* fbge */, SP::BPFCCANT, Convert__Imm1_3__imm_95_11__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 606 /* fbge */, SP::BPFCCA, Convert__Imm1_3__imm_95_11__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 611 /* fbl */, SP::FBCOND, Convert__Imm1_0__imm_95_4, 0, { MCK_Imm }, },
  { 611 /* fbl */, SP::FBCONDA, Convert__Imm1_1__imm_95_4, 0, { MCK_a, MCK_Imm }, },
  { 611 /* fbl */, SP::BPFCC, Convert__Imm1_1__imm_95_4__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 611 /* fbl */, SP::BPFCCA, Convert__Imm1_2__imm_95_4__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 611 /* fbl */, SP::BPFCCNT, Convert__Imm1_2__imm_95_4__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 611 /* fbl */, SP::BPFCC, Convert__Imm1_2__imm_95_4__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 611 /* fbl */, SP::BPFCCANT, Convert__Imm1_3__imm_95_4__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 611 /* fbl */, SP::BPFCCA, Convert__Imm1_3__imm_95_4__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 615 /* fble */, SP::FBCOND, Convert__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 615 /* fble */, SP::FBCONDA, Convert__Imm1_1__imm_95_13, 0, { MCK_a, MCK_Imm }, },
  { 615 /* fble */, SP::BPFCC, Convert__Imm1_1__imm_95_13__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 615 /* fble */, SP::BPFCCA, Convert__Imm1_2__imm_95_13__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 615 /* fble */, SP::BPFCCNT, Convert__Imm1_2__imm_95_13__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 615 /* fble */, SP::BPFCC, Convert__Imm1_2__imm_95_13__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 615 /* fble */, SP::BPFCCANT, Convert__Imm1_3__imm_95_13__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 615 /* fble */, SP::BPFCCA, Convert__Imm1_3__imm_95_13__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 620 /* fblg */, SP::FBCOND, Convert__Imm1_0__imm_95_2, 0, { MCK_Imm }, },
  { 620 /* fblg */, SP::FBCONDA, Convert__Imm1_1__imm_95_2, 0, { MCK_a, MCK_Imm }, },
  { 620 /* fblg */, SP::BPFCC, Convert__Imm1_1__imm_95_2__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 620 /* fblg */, SP::BPFCCA, Convert__Imm1_2__imm_95_2__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 620 /* fblg */, SP::BPFCCNT, Convert__Imm1_2__imm_95_2__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 620 /* fblg */, SP::BPFCC, Convert__Imm1_2__imm_95_2__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 620 /* fblg */, SP::BPFCCANT, Convert__Imm1_3__imm_95_2__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 620 /* fblg */, SP::BPFCCA, Convert__Imm1_3__imm_95_2__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 625 /* fbn */, SP::FBCOND, Convert__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 625 /* fbn */, SP::FBCONDA, Convert__Imm1_1__imm_95_0, 0, { MCK_a, MCK_Imm }, },
  { 625 /* fbn */, SP::BPFCC, Convert__Imm1_1__imm_95_0__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 625 /* fbn */, SP::BPFCCA, Convert__Imm1_2__imm_95_0__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 625 /* fbn */, SP::BPFCCNT, Convert__Imm1_2__imm_95_0__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 625 /* fbn */, SP::BPFCC, Convert__Imm1_2__imm_95_0__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 625 /* fbn */, SP::BPFCCANT, Convert__Imm1_3__imm_95_0__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 625 /* fbn */, SP::BPFCCA, Convert__Imm1_3__imm_95_0__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 629 /* fbne */, SP::FBCOND, Convert__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 629 /* fbne */, SP::FBCONDA, Convert__Imm1_1__imm_95_1, 0, { MCK_a, MCK_Imm }, },
  { 629 /* fbne */, SP::BPFCC, Convert__Imm1_1__imm_95_1__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 629 /* fbne */, SP::BPFCCA, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 629 /* fbne */, SP::BPFCCNT, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 629 /* fbne */, SP::BPFCC, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 629 /* fbne */, SP::BPFCCANT, Convert__Imm1_3__imm_95_1__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 629 /* fbne */, SP::BPFCCA, Convert__Imm1_3__imm_95_1__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 634 /* fbnz */, SP::FBCOND, Convert__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 634 /* fbnz */, SP::FBCONDA, Convert__Imm1_1__imm_95_1, 0, { MCK_a, MCK_Imm }, },
  { 634 /* fbnz */, SP::BPFCC, Convert__Imm1_1__imm_95_1__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 634 /* fbnz */, SP::BPFCCA, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 634 /* fbnz */, SP::BPFCCNT, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 634 /* fbnz */, SP::BPFCC, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 634 /* fbnz */, SP::BPFCCANT, Convert__Imm1_3__imm_95_1__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 634 /* fbnz */, SP::BPFCCA, Convert__Imm1_3__imm_95_1__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 639 /* fbo */, SP::FBCOND, Convert__Imm1_0__imm_95_15, 0, { MCK_Imm }, },
  { 639 /* fbo */, SP::FBCONDA, Convert__Imm1_1__imm_95_15, 0, { MCK_a, MCK_Imm }, },
  { 639 /* fbo */, SP::BPFCC, Convert__Imm1_1__imm_95_15__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 639 /* fbo */, SP::BPFCCA, Convert__Imm1_2__imm_95_15__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 639 /* fbo */, SP::BPFCCNT, Convert__Imm1_2__imm_95_15__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 639 /* fbo */, SP::BPFCC, Convert__Imm1_2__imm_95_15__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 639 /* fbo */, SP::BPFCCANT, Convert__Imm1_3__imm_95_15__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 639 /* fbo */, SP::BPFCCA, Convert__Imm1_3__imm_95_15__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 643 /* fbu */, SP::FBCOND, Convert__Imm1_0__imm_95_7, 0, { MCK_Imm }, },
  { 643 /* fbu */, SP::FBCONDA, Convert__Imm1_1__imm_95_7, 0, { MCK_a, MCK_Imm }, },
  { 643 /* fbu */, SP::BPFCC, Convert__Imm1_1__imm_95_7__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 643 /* fbu */, SP::BPFCCA, Convert__Imm1_2__imm_95_7__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 643 /* fbu */, SP::BPFCCNT, Convert__Imm1_2__imm_95_7__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 643 /* fbu */, SP::BPFCC, Convert__Imm1_2__imm_95_7__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 643 /* fbu */, SP::BPFCCANT, Convert__Imm1_3__imm_95_7__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 643 /* fbu */, SP::BPFCCA, Convert__Imm1_3__imm_95_7__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 647 /* fbue */, SP::FBCOND, Convert__Imm1_0__imm_95_10, 0, { MCK_Imm }, },
  { 647 /* fbue */, SP::FBCONDA, Convert__Imm1_1__imm_95_10, 0, { MCK_a, MCK_Imm }, },
  { 647 /* fbue */, SP::BPFCC, Convert__Imm1_1__imm_95_10__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 647 /* fbue */, SP::BPFCCA, Convert__Imm1_2__imm_95_10__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 647 /* fbue */, SP::BPFCCNT, Convert__Imm1_2__imm_95_10__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 647 /* fbue */, SP::BPFCC, Convert__Imm1_2__imm_95_10__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 647 /* fbue */, SP::BPFCCANT, Convert__Imm1_3__imm_95_10__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 647 /* fbue */, SP::BPFCCA, Convert__Imm1_3__imm_95_10__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 652 /* fbug */, SP::FBCOND, Convert__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 652 /* fbug */, SP::FBCONDA, Convert__Imm1_1__imm_95_5, 0, { MCK_a, MCK_Imm }, },
  { 652 /* fbug */, SP::BPFCC, Convert__Imm1_1__imm_95_5__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 652 /* fbug */, SP::BPFCCA, Convert__Imm1_2__imm_95_5__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 652 /* fbug */, SP::BPFCCNT, Convert__Imm1_2__imm_95_5__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 652 /* fbug */, SP::BPFCC, Convert__Imm1_2__imm_95_5__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 652 /* fbug */, SP::BPFCCANT, Convert__Imm1_3__imm_95_5__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 652 /* fbug */, SP::BPFCCA, Convert__Imm1_3__imm_95_5__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 657 /* fbuge */, SP::FBCOND, Convert__Imm1_0__imm_95_12, 0, { MCK_Imm }, },
  { 657 /* fbuge */, SP::FBCONDA, Convert__Imm1_1__imm_95_12, 0, { MCK_a, MCK_Imm }, },
  { 657 /* fbuge */, SP::BPFCC, Convert__Imm1_1__imm_95_12__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 657 /* fbuge */, SP::BPFCCA, Convert__Imm1_2__imm_95_12__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 657 /* fbuge */, SP::BPFCCNT, Convert__Imm1_2__imm_95_12__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 657 /* fbuge */, SP::BPFCC, Convert__Imm1_2__imm_95_12__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 657 /* fbuge */, SP::BPFCCANT, Convert__Imm1_3__imm_95_12__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 657 /* fbuge */, SP::BPFCCA, Convert__Imm1_3__imm_95_12__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 663 /* fbul */, SP::FBCOND, Convert__Imm1_0__imm_95_3, 0, { MCK_Imm }, },
  { 663 /* fbul */, SP::FBCONDA, Convert__Imm1_1__imm_95_3, 0, { MCK_a, MCK_Imm }, },
  { 663 /* fbul */, SP::BPFCC, Convert__Imm1_1__imm_95_3__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 663 /* fbul */, SP::BPFCCA, Convert__Imm1_2__imm_95_3__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 663 /* fbul */, SP::BPFCCNT, Convert__Imm1_2__imm_95_3__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 663 /* fbul */, SP::BPFCC, Convert__Imm1_2__imm_95_3__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 663 /* fbul */, SP::BPFCCANT, Convert__Imm1_3__imm_95_3__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 663 /* fbul */, SP::BPFCCA, Convert__Imm1_3__imm_95_3__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 668 /* fbule */, SP::FBCOND, Convert__Imm1_0__imm_95_14, 0, { MCK_Imm }, },
  { 668 /* fbule */, SP::FBCONDA, Convert__Imm1_1__imm_95_14, 0, { MCK_a, MCK_Imm }, },
  { 668 /* fbule */, SP::BPFCC, Convert__Imm1_1__imm_95_14__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 668 /* fbule */, SP::BPFCCA, Convert__Imm1_2__imm_95_14__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 668 /* fbule */, SP::BPFCCNT, Convert__Imm1_2__imm_95_14__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 668 /* fbule */, SP::BPFCC, Convert__Imm1_2__imm_95_14__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 668 /* fbule */, SP::BPFCCANT, Convert__Imm1_3__imm_95_14__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 668 /* fbule */, SP::BPFCCA, Convert__Imm1_3__imm_95_14__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 674 /* fbz */, SP::FBCOND, Convert__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 674 /* fbz */, SP::FBCONDA, Convert__Imm1_1__imm_95_9, 0, { MCK_a, MCK_Imm }, },
  { 674 /* fbz */, SP::BPFCC, Convert__Imm1_1__imm_95_9__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 674 /* fbz */, SP::BPFCCA, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 674 /* fbz */, SP::BPFCCNT, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 674 /* fbz */, SP::BPFCC, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 674 /* fbz */, SP::BPFCCANT, Convert__Imm1_3__imm_95_9__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 674 /* fbz */, SP::BPFCCA, Convert__Imm1_3__imm_95_9__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 678 /* fchksm16 */, SP::FCHKSM16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 687 /* fcmpd */, SP::V9FCMPD, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 687 /* fcmpd */, SP::V9FCMPD, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 693 /* fcmped */, SP::V9FCMPED, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 693 /* fcmped */, SP::V9FCMPED, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 700 /* fcmpeq */, SP::V9FCMPEQ, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 700 /* fcmpeq */, SP::V9FCMPEQ, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 707 /* fcmpeq16 */, SP::FCMPEQ16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 716 /* fcmpeq32 */, SP::FCMPEQ32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 725 /* fcmpes */, SP::V9FCMPES, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 725 /* fcmpes */, SP::V9FCMPES, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 732 /* fcmpgt16 */, SP::FCMPGT16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 741 /* fcmpgt32 */, SP::FCMPGT32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 750 /* fcmple16 */, SP::FCMPLE16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 759 /* fcmple32 */, SP::FCMPLE32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 768 /* fcmpne16 */, SP::FCMPNE16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 777 /* fcmpne32 */, SP::FCMPNE32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 786 /* fcmpq */, SP::V9FCMPQ, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 786 /* fcmpq */, SP::V9FCMPQ, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 792 /* fcmps */, SP::V9FCMPS, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 792 /* fcmps */, SP::V9FCMPS, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 798 /* fdivd */, SP::FDIVD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 804 /* fdivq */, SP::FDIVQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 810 /* fdivs */, SP::FDIVS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 816 /* fdmulq */, SP::FDMULQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_QFPRegs }, },
  { 823 /* fdtoi */, SP::FDTOI, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_FPRegs }, },
  { 829 /* fdtoq */, SP::FDTOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_QFPRegs }, },
  { 835 /* fdtos */, SP::FDTOS, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_FPRegs }, },
  { 841 /* fdtox */, SP::FDTOX, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 847 /* fexpand */, SP::FEXPAND, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 855 /* fhaddd */, SP::FHADDD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 862 /* fhadds */, SP::FHADDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 869 /* fhsubd */, SP::FHSUBD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 876 /* fhsubs */, SP::FHSUBS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 883 /* fitod */, SP::FITOD, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_DFPRegs }, },
  { 889 /* fitoq */, SP::FITOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_QFPRegs }, },
  { 895 /* fitos */, SP::FITOS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 901 /* flcmpd */, SP::FLCMPD, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasVIS3, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 908 /* flcmps */, SP::FLCMPS, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasVIS3, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 915 /* flush */, SP::FLUSH, Convert_NoOperands, 0, {  }, },
  { 915 /* flush */, SP::FLUSH, Convert_NoOperands, 0, { MCK__PCT_g0 }, },
  { 915 /* flush */, SP::FLUSHri, Convert__MEMri2_0, 0, { MCK_MEMri }, },
  { 915 /* flush */, SP::FLUSHrr, Convert__MEMrr2_0, 0, { MCK_MEMrr }, },
  { 921 /* flushw */, SP::FLUSHW, Convert_NoOperands, Feature_HasV9, {  }, },
  { 928 /* fmean16 */, SP::FMEAN16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::FMOVD, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::FMOVD_FCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::FMOVD_ICC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::FMOVD_XCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::V9FMOVD_FCC, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 942 /* fmovda */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 942 /* fmovda */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 942 /* fmovda */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 949 /* fmovdcc */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 949 /* fmovdcc */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 957 /* fmovdcs */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 957 /* fmovdcs */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 965 /* fmovde */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 965 /* fmovde */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 965 /* fmovde */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 972 /* fmovdeq */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 972 /* fmovdeq */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 980 /* fmovdg */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 980 /* fmovdg */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 980 /* fmovdg */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 987 /* fmovdge */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 987 /* fmovdge */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 987 /* fmovdge */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 995 /* fmovdgeu */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 995 /* fmovdgeu */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1004 /* fmovdgu */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1004 /* fmovdgu */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1012 /* fmovdl */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1012 /* fmovdl */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1012 /* fmovdl */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1019 /* fmovdle */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1019 /* fmovdle */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1019 /* fmovdle */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1027 /* fmovdleu */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1027 /* fmovdleu */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1036 /* fmovdlg */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1044 /* fmovdlu */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1044 /* fmovdlu */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1052 /* fmovdn */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1052 /* fmovdn */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1052 /* fmovdn */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1059 /* fmovdne */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1059 /* fmovdne */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1059 /* fmovdne */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1067 /* fmovdneg */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1067 /* fmovdneg */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1076 /* fmovdnz */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1076 /* fmovdnz */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1076 /* fmovdnz */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1084 /* fmovdo */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1091 /* fmovdpos */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1091 /* fmovdpos */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1100 /* fmovdu */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1107 /* fmovdue */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1115 /* fmovdug */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1123 /* fmovduge */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1132 /* fmovdul */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1140 /* fmovdule */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1149 /* fmovdvc */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1149 /* fmovdvc */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1157 /* fmovdvs */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1157 /* fmovdvs */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1165 /* fmovdz */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1165 /* fmovdz */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1165 /* fmovdz */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1172 /* fmovq */, SP::FMOVQ, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 1172 /* fmovq */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1172 /* fmovq */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1172 /* fmovq */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1172 /* fmovq */, SP::FMOVQ_FCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1172 /* fmovq */, SP::FMOVQ_ICC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1172 /* fmovq */, SP::FMOVQ_XCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1172 /* fmovq */, SP::V9FMOVQ_FCC, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1178 /* fmovqa */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1178 /* fmovqa */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1178 /* fmovqa */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1185 /* fmovqcc */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1185 /* fmovqcc */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1193 /* fmovqcs */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1193 /* fmovqcs */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1201 /* fmovqe */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1201 /* fmovqe */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1201 /* fmovqe */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1208 /* fmovqeq */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1208 /* fmovqeq */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1216 /* fmovqg */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1216 /* fmovqg */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1216 /* fmovqg */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1223 /* fmovqge */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1223 /* fmovqge */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1223 /* fmovqge */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1231 /* fmovqgeu */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1231 /* fmovqgeu */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1240 /* fmovqgu */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1240 /* fmovqgu */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1248 /* fmovql */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1248 /* fmovql */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1248 /* fmovql */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1255 /* fmovqle */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1255 /* fmovqle */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1255 /* fmovqle */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1263 /* fmovqleu */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1263 /* fmovqleu */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1272 /* fmovqlg */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1280 /* fmovqlu */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1280 /* fmovqlu */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1288 /* fmovqn */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1288 /* fmovqn */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1288 /* fmovqn */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1295 /* fmovqne */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1295 /* fmovqne */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1295 /* fmovqne */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1303 /* fmovqneg */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1303 /* fmovqneg */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1312 /* fmovqnz */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1312 /* fmovqnz */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1312 /* fmovqnz */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1320 /* fmovqo */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1327 /* fmovqpos */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1327 /* fmovqpos */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1336 /* fmovqu */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1343 /* fmovque */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1351 /* fmovqug */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1359 /* fmovquge */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1368 /* fmovqul */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1376 /* fmovqule */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1385 /* fmovqvc */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1385 /* fmovqvc */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1393 /* fmovqvs */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1393 /* fmovqvs */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1401 /* fmovqz */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1401 /* fmovqz */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1401 /* fmovqz */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1408 /* fmovrdgez */, SP::FMOVRGEZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1418 /* fmovrdgz */, SP::FMOVRGZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1427 /* fmovrdlez */, SP::FMOVRLEZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1437 /* fmovrdlz */, SP::FMOVRLZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1446 /* fmovrdnz */, SP::FMOVRNZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1455 /* fmovrdz */, SP::FMOVRZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1463 /* fmovrqgez */, SP::FMOVRGEZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1473 /* fmovrqgz */, SP::FMOVRGZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1482 /* fmovrqlez */, SP::FMOVRLEZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1492 /* fmovrqlz */, SP::FMOVRLZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1501 /* fmovrqnz */, SP::FMOVRNZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1510 /* fmovrqz */, SP::FMOVRZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1518 /* fmovrsgez */, SP::FMOVRGEZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1528 /* fmovrsgz */, SP::FMOVRGZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1537 /* fmovrslez */, SP::FMOVRLEZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1547 /* fmovrslz */, SP::FMOVRLZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1556 /* fmovrsnz */, SP::FMOVRNZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1565 /* fmovrsz */, SP::FMOVRZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1573 /* fmovs */, SP::FMOVS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 1573 /* fmovs */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1573 /* fmovs */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1573 /* fmovs */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1573 /* fmovs */, SP::FMOVS_FCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_FPRegs, MCK_FPRegs }, },
  { 1573 /* fmovs */, SP::FMOVS_ICC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1573 /* fmovs */, SP::FMOVS_XCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1573 /* fmovs */, SP::V9FMOVS_FCC, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1579 /* fmovsa */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1579 /* fmovsa */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1579 /* fmovsa */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1586 /* fmovscc */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1586 /* fmovscc */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1594 /* fmovscs */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1594 /* fmovscs */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1602 /* fmovse */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1602 /* fmovse */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1602 /* fmovse */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1609 /* fmovseq */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1609 /* fmovseq */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1617 /* fmovsg */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1617 /* fmovsg */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1617 /* fmovsg */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1624 /* fmovsge */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1624 /* fmovsge */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1624 /* fmovsge */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1632 /* fmovsgeu */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1632 /* fmovsgeu */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1641 /* fmovsgu */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1641 /* fmovsgu */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1649 /* fmovsl */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1649 /* fmovsl */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1649 /* fmovsl */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1656 /* fmovsle */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1656 /* fmovsle */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1656 /* fmovsle */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1664 /* fmovsleu */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1664 /* fmovsleu */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1673 /* fmovslg */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1681 /* fmovslu */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1681 /* fmovslu */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1689 /* fmovsn */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1689 /* fmovsn */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1689 /* fmovsn */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1696 /* fmovsne */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1696 /* fmovsne */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1696 /* fmovsne */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1704 /* fmovsneg */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1704 /* fmovsneg */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1713 /* fmovsnz */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1713 /* fmovsnz */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1713 /* fmovsnz */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1721 /* fmovso */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1728 /* fmovspos */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1728 /* fmovspos */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1737 /* fmovsu */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1744 /* fmovsue */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1752 /* fmovsug */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1760 /* fmovsuge */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1769 /* fmovsul */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1777 /* fmovsule */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1786 /* fmovsvc */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1786 /* fmovsvc */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1794 /* fmovsvs */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1794 /* fmovsvs */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1802 /* fmovsz */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1802 /* fmovsz */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1802 /* fmovsz */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1809 /* fmul8sux16 */, SP::FMUL8SUX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1820 /* fmul8ulx16 */, SP::FMUL8ULX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1831 /* fmul8x16 */, SP::FMUL8X16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1840 /* fmul8x16al */, SP::FMUL8X16AL, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1851 /* fmul8x16au */, SP::FMUL8X16AU, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1862 /* fmuld */, SP::FMULD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1868 /* fmuld8sux16 */, SP::FMULD8SUX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1880 /* fmuld8ulx16 */, SP::FMULD8ULX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1892 /* fmulq */, SP::FMULQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1898 /* fmuls */, SP::FMULS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1904 /* fnaddd */, SP::FNADDD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1911 /* fnadds */, SP::FNADDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1918 /* fnand */, SP::FNAND, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1924 /* fnands */, SP::FNANDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1931 /* fnegd */, SP::FNEGD, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1937 /* fnegq */, SP::FNEGQ, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 1943 /* fnegs */, SP::FNEGS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 1949 /* fnhaddd */, SP::FNHADDD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1949 /* fnhaddd */, SP::FNMULD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1957 /* fnhadds */, SP::FNHADDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1957 /* fnhadds */, SP::FNMULS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1957 /* fnhadds */, SP::FNSMULD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1965 /* fnor */, SP::FNOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1970 /* fnors */, SP::FNORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1976 /* fnot1 */, SP::FNOT1, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1982 /* fnot1s */, SP::FNOT1S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 1989 /* fnot2 */, SP::FNOT2, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1995 /* fnot2s */, SP::FNOT2S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 2002 /* fone */, SP::FONE, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_DFPRegs }, },
  { 2007 /* fones */, SP::FONES, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_FPRegs }, },
  { 2013 /* for */, SP::FOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2017 /* fornot1 */, SP::FORNOT1, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2025 /* fornot1s */, SP::FORNOT1S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2034 /* fornot2 */, SP::FORNOT2, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2042 /* fornot2s */, SP::FORNOT2S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2051 /* fors */, SP::FORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2056 /* fpack16 */, SP::FPACK16, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2064 /* fpack32 */, SP::FPACK32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2072 /* fpackfix */, SP::FPACKFIX, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2081 /* fpadd16 */, SP::FPADD16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2089 /* fpadd16s */, SP::FPADD16S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2098 /* fpadd32 */, SP::FPADD32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2106 /* fpadd32s */, SP::FPADD32S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2115 /* fpadd64 */, SP::FPADD64, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2123 /* fpmerge */, SP::FPMERGE, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2131 /* fpsub16 */, SP::FPSUB16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2139 /* fpsub16S */, SP::FPSUB16S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2148 /* fpsub32 */, SP::FPSUB32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2156 /* fpsub32S */, SP::FPSUB32S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2165 /* fqtod */, SP::FQTOD, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_DFPRegs }, },
  { 2171 /* fqtoi */, SP::FQTOI, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_FPRegs }, },
  { 2177 /* fqtos */, SP::FQTOS, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_FPRegs }, },
  { 2183 /* fqtox */, SP::FQTOX, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_DFPRegs }, },
  { 2189 /* fslas16 */, SP::FSLAS16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2197 /* fslas32 */, SP::FSLAS32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2205 /* fsll16 */, SP::FSLL16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2212 /* fsll32 */, SP::FSLL32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2219 /* fsmuld */, SP::FSMULD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_DFPRegs }, },
  { 2226 /* fsqrtd */, SP::FSQRTD, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2233 /* fsqrtq */, SP::FSQRTQ, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 2240 /* fsqrts */, SP::FSQRTS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 2247 /* fsra16 */, SP::FSRA16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2254 /* fsra32 */, SP::FSRA32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2261 /* fsrc1 */, SP::FSRC1, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2267 /* fsrc1s */, SP::FSRC1S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 2274 /* fsrc2 */, SP::FSRC2, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2280 /* fsrc2s */, SP::FSRC2S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 2287 /* fsrl16 */, SP::FSRL16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2294 /* fsrl32 */, SP::FSRL32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2301 /* fstod */, SP::FSTOD, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_DFPRegs }, },
  { 2307 /* fstoi */, SP::FSTOI, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 2313 /* fstoq */, SP::FSTOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_QFPRegs }, },
  { 2319 /* fstox */, SP::FSTOX, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_DFPRegs }, },
  { 2325 /* fsubd */, SP::FSUBD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2331 /* fsubq */, SP::FSUBQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 2337 /* fsubs */, SP::FSUBS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2343 /* fxnor */, SP::FXNOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2349 /* fxnors */, SP::FXNORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2356 /* fxor */, SP::FXOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2361 /* fxors */, SP::FXORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2367 /* fxtod */, SP::FXTOD, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2373 /* fxtoq */, SP::FXTOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_QFPRegs }, },
  { 2379 /* fxtos */, SP::FXTOS, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_FPRegs }, },
  { 2385 /* fzero */, SP::FZERO, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_DFPRegs }, },
  { 2391 /* fzeros */, SP::FZEROS, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_FPRegs }, },
  { 2398 /* inc */, SP::ADDri, Convert__Reg1_0__Reg1_0__imm_95_1, 0, { MCK_IntRegs }, },
  { 2398 /* inc */, SP::ADDri, Convert__Reg1_1__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 2402 /* inccc */, SP::ADDCCri, Convert__Reg1_0__Reg1_0__imm_95_1, 0, { MCK_IntRegs }, },
  { 2402 /* inccc */, SP::ADDCCri, Convert__Reg1_1__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 2408 /* jmp */, SP::JMPLri, Convert__regG0__MEMri2_0, 0, { MCK_MEMri }, },
  { 2408 /* jmp */, SP::JMPLrr, Convert__regG0__MEMrr2_0, 0, { MCK_MEMrr }, },
  { 2412 /* jmpl */, SP::JMPLri, Convert__Reg1_1__MEMri2_0, 0, { MCK_MEMri, MCK_IntRegs }, },
  { 2412 /* jmpl */, SP::JMPLrr, Convert__Reg1_1__MEMrr2_0, 0, { MCK_MEMrr, MCK_IntRegs }, },
  { 2417 /* ld */, SP::LDCSRri, Convert__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK__PCT_csr }, },
  { 2417 /* ld */, SP::LDFSRri, Convert__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK__PCT_fsr }, },
  { 2417 /* ld */, SP::LDCri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_CoprocRegs }, },
  { 2417 /* ld */, SP::LDFri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_FPRegs }, },
  { 2417 /* ld */, SP::LDri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2417 /* ld */, SP::LDCSRrr, Convert__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK__PCT_csr }, },
  { 2417 /* ld */, SP::LDFSRrr, Convert__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK__PCT_fsr }, },
  { 2417 /* ld */, SP::LDCrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_CoprocRegs }, },
  { 2417 /* ld */, SP::LDFrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_FPRegs }, },
  { 2417 /* ld */, SP::LDrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2420 /* lda */, SP::LDFArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, Feature_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_FPRegs }, },
  { 2420 /* lda */, SP::LDArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2424 /* ldd */, SP::LDDCri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_CoprocPair }, },
  { 2424 /* ldd */, SP::LDDri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntPair }, },
  { 2424 /* ldd */, SP::LDDFri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_DFPRegs }, },
  { 2424 /* ldd */, SP::LDDCrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_CoprocPair }, },
  { 2424 /* ldd */, SP::LDDrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntPair }, },
  { 2424 /* ldd */, SP::LDDFrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_DFPRegs }, },
  { 2428 /* ldda */, SP::LDDArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntPair }, },
  { 2428 /* ldda */, SP::LDDFArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, Feature_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_DFPRegs }, },
  { 2433 /* ldq */, SP::LDQFri, Convert__Reg1_3__MEMri2_1, Feature_HasV9, { MCK__91_, MCK_MEMri, MCK__93_, MCK_QFPRegs }, },
  { 2433 /* ldq */, SP::LDQFrr, Convert__Reg1_3__MEMrr2_1, Feature_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_QFPRegs }, },
  { 2437 /* ldqa */, SP::LDQFArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, Feature_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_QFPRegs }, },
  { 2442 /* ldsb */, SP::LDSBri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2442 /* ldsb */, SP::LDSBrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2447 /* ldsba */, SP::LDSBArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2453 /* ldsh */, SP::LDSHri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2453 /* ldsh */, SP::LDSHrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2458 /* ldsha */, SP::LDSHArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2464 /* ldstub */, SP::LDSTUBri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2464 /* ldstub */, SP::LDSTUBrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2471 /* ldstuba */, SP::LDSTUBArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2479 /* ldsw */, SP::LDSWri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2479 /* ldsw */, SP::LDSWrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2484 /* ldub */, SP::LDUBri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2484 /* ldub */, SP::LDUBrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2489 /* lduba */, SP::LDUBArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2495 /* lduh */, SP::LDUHri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2495 /* lduh */, SP::LDUHrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2500 /* lduha */, SP::LDUHArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2506 /* ldx */, SP::LDXFSRri, Convert__MEMri2_1, Feature_HasV9, { MCK__91_, MCK_MEMri, MCK__93_, MCK__PCT_fsr }, },
  { 2506 /* ldx */, SP::LDXri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2506 /* ldx */, SP::LDXFSRrr, Convert__MEMrr2_1, Feature_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK__PCT_fsr }, },
  { 2506 /* ldx */, SP::LDXrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2510 /* lzcnt */, SP::LZCNT, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs }, },
  { 2516 /* membar */, SP::MEMBARi, Convert__Imm1_0, Feature_HasV9, { MCK_Imm }, },
  { 2523 /* mov */, SP::RDPSR, Convert__Reg1_1, 0, { MCK__PCT_psr, MCK_IntRegs }, },
  { 2523 /* mov */, SP::RDTBR, Convert__Reg1_1, 0, { MCK__PCT_tbr, MCK_IntRegs }, },
  { 2523 /* mov */, SP::RDWIM, Convert__Reg1_1, 0, { MCK__PCT_wim, MCK_IntRegs }, },
  { 2523 /* mov */, SP::RDASR, Convert__Reg1_1__Reg1_0, 0, { MCK_ASRRegs, MCK_IntRegs }, },
  { 2523 /* mov */, SP::WRPSRrr, Convert__regG0__Reg1_0, 0, { MCK_IntRegs, MCK__PCT_psr }, },
  { 2523 /* mov */, SP::WRTBRrr, Convert__regG0__Reg1_0, 0, { MCK_IntRegs, MCK__PCT_tbr }, },
  { 2523 /* mov */, SP::WRWIMrr, Convert__regG0__Reg1_0, 0, { MCK_IntRegs, MCK__PCT_wim }, },
  { 2523 /* mov */, SP::WRASRrr, Convert__Reg1_1__regG0__Reg1_0, 0, { MCK_IntRegs, MCK_ASRRegs }, },
  { 2523 /* mov */, SP::ORrr, Convert__Reg1_1__regG0__Reg1_0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 2523 /* mov */, SP::WRPSRri, Convert__regG0__Imm1_0, 0, { MCK_Imm, MCK__PCT_psr }, },
  { 2523 /* mov */, SP::WRTBRri, Convert__regG0__Imm1_0, 0, { MCK_Imm, MCK__PCT_tbr }, },
  { 2523 /* mov */, SP::WRWIMri, Convert__regG0__Imm1_0, 0, { MCK_Imm, MCK__PCT_wim }, },
  { 2523 /* mov */, SP::WRASRri, Convert__Reg1_1__regG0__Imm1_0, 0, { MCK_Imm, MCK_ASRRegs }, },
  { 2523 /* mov */, SP::ORri, Convert__Reg1_1__regG0__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 2523 /* mov */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2523 /* mov */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2523 /* mov */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2523 /* mov */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2523 /* mov */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2523 /* mov */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2523 /* mov */, SP::MOVFCCrr, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_IntRegs, MCK_IntRegs }, },
  { 2523 /* mov */, SP::MOVFCCri, Convert__Reg1_3__Imm1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_Imm, MCK_IntRegs }, },
  { 2523 /* mov */, SP::MOVICCrr, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2523 /* mov */, SP::MOVICCri, Convert__Reg1_3__Imm1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2523 /* mov */, SP::MOVXCCrr, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2523 /* mov */, SP::MOVXCCri, Convert__Reg1_3__Imm1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2523 /* mov */, SP::V9MOVFCCrr, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2523 /* mov */, SP::V9MOVFCCri, Convert__Reg1_3__Reg1_1__Imm1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2527 /* mova */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2527 /* mova */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2527 /* mova */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2527 /* mova */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2527 /* mova */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2527 /* mova */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2532 /* movcc */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2532 /* movcc */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2532 /* movcc */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2532 /* movcc */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2538 /* movcs */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2538 /* movcs */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2538 /* movcs */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2538 /* movcs */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2544 /* movdtox */, SP::MOVDTOX, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_DFPRegs, MCK_IntRegs }, },
  { 2544 /* movdtox */, SP::MOVWTOS, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_IntRegs, MCK_DFPRegs }, },
  { 2544 /* movdtox */, SP::MOVXTOD, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_IntRegs, MCK_DFPRegs }, },
  { 2552 /* move */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2552 /* move */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2552 /* move */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2552 /* move */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2552 /* move */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2552 /* move */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2557 /* moveq */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2557 /* moveq */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2557 /* moveq */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2557 /* moveq */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2563 /* movg */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2563 /* movg */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2563 /* movg */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2563 /* movg */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_10, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2563 /* movg */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2563 /* movg */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_6, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2568 /* movge */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2568 /* movge */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2568 /* movge */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2568 /* movge */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_11, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2568 /* movge */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2568 /* movge */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_11, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2574 /* movgeu */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2574 /* movgeu */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2574 /* movgeu */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2574 /* movgeu */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2581 /* movgu */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2581 /* movgu */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2581 /* movgu */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2581 /* movgu */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_12, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2587 /* movl */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2587 /* movl */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2587 /* movl */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2587 /* movl */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_3, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2587 /* movl */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2587 /* movl */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_4, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2592 /* movle */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2592 /* movle */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2592 /* movle */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2592 /* movle */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_2, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2592 /* movle */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2592 /* movle */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_13, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2598 /* movleu */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2598 /* movleu */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2598 /* movleu */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2598 /* movleu */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_4, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2605 /* movlg */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2605 /* movlg */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_2, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2611 /* movlu */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2611 /* movlu */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2611 /* movlu */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2611 /* movlu */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2617 /* movn */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2617 /* movn */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2617 /* movn */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2617 /* movn */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_0, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2617 /* movn */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2617 /* movn */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2622 /* movne */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2622 /* movne */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2622 /* movne */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2622 /* movne */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2622 /* movne */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2622 /* movne */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2628 /* movneg */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2628 /* movneg */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2628 /* movneg */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2628 /* movneg */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_6, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2635 /* movnz */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2635 /* movnz */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2635 /* movnz */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2635 /* movnz */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2635 /* movnz */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2635 /* movnz */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2641 /* movo */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2641 /* movo */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_15, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2646 /* movpos */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2646 /* movpos */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2646 /* movpos */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2646 /* movpos */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_14, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2653 /* movrgez */, SP::MOVRGEZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2653 /* movrgez */, SP::MOVRGEZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2661 /* movrgz */, SP::MOVRGZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2661 /* movrgz */, SP::MOVRGZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2668 /* movrlez */, SP::MOVRLEZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2668 /* movrlez */, SP::MOVRLEZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2676 /* movrlz */, SP::MOVRLZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2676 /* movrlz */, SP::MOVRLZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2683 /* movrnz */, SP::MOVRNZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2683 /* movrnz */, SP::MOVRNZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2690 /* movrz */, SP::MOVRRZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2690 /* movrz */, SP::MOVRRZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2696 /* movstosw */, SP::MOVSTOSW, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_DFPRegs, MCK_IntRegs }, },
  { 2705 /* movstouw */, SP::MOVSTOUW, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_DFPRegs, MCK_IntRegs }, },
  { 2714 /* movu */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2714 /* movu */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_7, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2719 /* movue */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2719 /* movue */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_10, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2725 /* movug */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2725 /* movug */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_5, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2731 /* movuge */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2731 /* movuge */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_12, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2738 /* movul */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2738 /* movul */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_3, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2744 /* movule */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2744 /* movule */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_14, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2751 /* movvc */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2751 /* movvc */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2751 /* movvc */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2751 /* movvc */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_15, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2757 /* movvs */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2757 /* movvs */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2757 /* movvs */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2757 /* movvs */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_7, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2763 /* movz */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2763 /* movz */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2763 /* movz */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2763 /* movz */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2763 /* movz */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2763 /* movz */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2768 /* mulscc */, SP::MULSCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2768 /* mulscc */, SP::MULSCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2775 /* mulx */, SP::MULXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2775 /* mulx */, SP::MULXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2780 /* neg */, SP::SUBrr, Convert__Reg1_0__regG0__Reg1_0, 0, { MCK_IntRegs }, },
  { 2780 /* neg */, SP::SUBrr, Convert__Reg1_1__regG0__Reg1_0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 2784 /* nop */, SP::NOP, Convert_NoOperands, 0, {  }, },
  { 2788 /* not */, SP::XNORrr, Convert__Reg1_0__Reg1_0__regG0, 0, { MCK_IntRegs }, },
  { 2788 /* not */, SP::XNORrr, Convert__Reg1_1__Reg1_0__regG0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 2792 /* or */, SP::ORrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2792 /* or */, SP::ORri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2795 /* orcc */, SP::ORCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2795 /* orcc */, SP::ORCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2800 /* orn */, SP::ORNrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2800 /* orn */, SP::ORNri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2804 /* orncc */, SP::ORNCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2804 /* orncc */, SP::ORNCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2810 /* pdist */, SP::PDIST, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2816 /* pdistn */, SP::PDISTN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2823 /* popc */, SP::POPCrr, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_IntRegs, MCK_IntRegs }, },
  { 2828 /* rd */, SP::RDPSR, Convert__Reg1_1, 0, { MCK__PCT_psr, MCK_IntRegs }, },
  { 2828 /* rd */, SP::RDTBR, Convert__Reg1_1, 0, { MCK__PCT_tbr, MCK_IntRegs }, },
  { 2828 /* rd */, SP::RDWIM, Convert__Reg1_1, 0, { MCK__PCT_wim, MCK_IntRegs }, },
  { 2828 /* rd */, SP::RDASR, Convert__Reg1_1__Reg1_0, 0, { MCK_ASRRegs, MCK_IntRegs }, },
  { 2831 /* rdpr */, SP::RDPR, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_PRRegs, MCK_IntRegs }, },
  { 2836 /* restore */, SP::RESTORErr, Convert__regG0__regG0__regG0, 0, {  }, },
  { 2836 /* restore */, SP::RESTORErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2836 /* restore */, SP::RESTOREri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2844 /* ret */, SP::RET, Convert__imm_95_8, 0, {  }, },
  { 2848 /* retl */, SP::RETL, Convert__imm_95_8, 0, {  }, },
  { 2853 /* rett */, SP::RETTri, Convert__MEMri2_0, 0, { MCK_MEMri }, },
  { 2853 /* rett */, SP::RETTrr, Convert__MEMrr2_0, 0, { MCK_MEMrr }, },
  { 2858 /* save */, SP::SAVErr, Convert__regG0__regG0__regG0, 0, {  }, },
  { 2858 /* save */, SP::SAVErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2858 /* save */, SP::SAVEri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2863 /* sdiv */, SP::SDIVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2863 /* sdiv */, SP::SDIVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2868 /* sdivcc */, SP::SDIVCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2868 /* sdivcc */, SP::SDIVCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2875 /* sdivx */, SP::SDIVXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2875 /* sdivx */, SP::SDIVXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2881 /* set */, SP::SET, Convert__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 2885 /* sethi */, SP::SETHIi, Convert__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 2891 /* shutdown */, SP::SHUTDOWN, Convert_NoOperands, Feature_HasVIS, {  }, },
  { 2900 /* siam */, SP::SIAM, Convert_NoOperands, Feature_HasVIS2, {  }, },
  { 2905 /* signx */, SP::SRArr, Convert__Reg1_0__Reg1_0__regG0, Feature_HasV9, { MCK_IntRegs }, },
  { 2905 /* signx */, SP::SRArr, Convert__Reg1_1__Reg1_0__regG0, Feature_HasV9, { MCK_IntRegs, MCK_IntRegs }, },
  { 2911 /* sll */, SP::SLLrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2911 /* sll */, SP::SLLri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2915 /* sllx */, SP::SLLXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2915 /* sllx */, SP::SLLXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2920 /* smac */, SP::SMACrr, Convert__Reg1_2__Reg1_0__Reg1_1__imm_95_0, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2920 /* smac */, SP::SMACri, Convert__Reg1_2__Reg1_0__Imm1_1__imm_95_0, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2925 /* smul */, SP::SMULrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2925 /* smul */, SP::SMULri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2930 /* smulcc */, SP::SMULCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2930 /* smulcc */, SP::SMULCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2937 /* sra */, SP::SRArr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2937 /* sra */, SP::SRAri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2941 /* srax */, SP::SRAXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2941 /* srax */, SP::SRAXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2946 /* srl */, SP::SRLrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2946 /* srl */, SP::SRLri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2950 /* srlx */, SP::SRLXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2950 /* srlx */, SP::SRLXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2955 /* st */, SP::STCSRri, Convert__MEMri2_2, 0, { MCK__PCT_csr, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2955 /* st */, SP::STCSRrr, Convert__MEMrr2_2, 0, { MCK__PCT_csr, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2955 /* st */, SP::STFSRri, Convert__MEMri2_2, 0, { MCK__PCT_fsr, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2955 /* st */, SP::STFSRrr, Convert__MEMrr2_2, 0, { MCK__PCT_fsr, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2955 /* st */, SP::STCri, Convert__MEMri2_2__Reg1_0, 0, { MCK_CoprocRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2955 /* st */, SP::STCrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_CoprocRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2955 /* st */, SP::STFri, Convert__MEMri2_2__Reg1_0, 0, { MCK_FPRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2955 /* st */, SP::STFrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_FPRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2955 /* st */, SP::STri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2955 /* st */, SP::STrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2958 /* sta */, SP::STFArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, Feature_HasV9, { MCK_FPRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2958 /* sta */, SP::STArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2962 /* stb */, SP::STBri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2962 /* stb */, SP::STBrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2966 /* stba */, SP::STBArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2971 /* stbar */, SP::STBAR, Convert_NoOperands, 0, {  }, },
  { 2977 /* std */, SP::STDCQri, Convert__MEMri2_2, 0, { MCK__PCT_cq, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2977 /* std */, SP::STDCQrr, Convert__MEMrr2_2, 0, { MCK__PCT_cq, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2977 /* std */, SP::STDFQri, Convert__MEMri2_2, 0, { MCK__PCT_fq, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2977 /* std */, SP::STDFQrr, Convert__MEMrr2_2, 0, { MCK__PCT_fq, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2977 /* std */, SP::STDCri, Convert__MEMri2_2__Reg1_0, 0, { MCK_CoprocPair, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2977 /* std */, SP::STDCrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_CoprocPair, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2977 /* std */, SP::STDri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntPair, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2977 /* std */, SP::STDrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntPair, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2977 /* std */, SP::STDFri, Convert__MEMri2_2__Reg1_0, 0, { MCK_DFPRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2977 /* std */, SP::STDFrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_DFPRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2981 /* stda */, SP::STDArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, 0, { MCK_IntPair, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2981 /* stda */, SP::STDFArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, Feature_HasV9, { MCK_DFPRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2986 /* sth */, SP::STHri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2986 /* sth */, SP::STHrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2990 /* stha */, SP::STHArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2995 /* stq */, SP::STQFri, Convert__MEMri2_2__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2995 /* stq */, SP::STQFrr, Convert__MEMrr2_2__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2999 /* stqa */, SP::STQFArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, Feature_HasV9, { MCK_QFPRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 3004 /* stx */, SP::STXFSRri, Convert__MEMri2_2, Feature_HasV9, { MCK__PCT_fsr, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 3004 /* stx */, SP::STXFSRrr, Convert__MEMrr2_2, Feature_HasV9, { MCK__PCT_fsr, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 3004 /* stx */, SP::STXri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 3004 /* stx */, SP::STXrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 3008 /* sub */, SP::SUBrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3008 /* sub */, SP::SUBri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3012 /* subcc */, SP::SUBCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3012 /* subcc */, SP::SUBCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3018 /* subx */, SP::SUBCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3018 /* subx */, SP::SUBCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3023 /* subxcc */, SP::SUBErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3023 /* subxcc */, SP::SUBEri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3030 /* swap */, SP::SWAPri, Convert__Reg1_3__MEMri2_1__Tie0, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 3030 /* swap */, SP::SWAPrr, Convert__Reg1_3__MEMrr2_1__Tie0, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 3035 /* swapa */, SP::SWAPArr, Convert__Reg1_4__MEMrr2_1__Imm1_3__Tie0, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 3041 /* t */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_8, 0, { MCK_IntRegs }, },
  { 3041 /* t */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 3041 /* t */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3041 /* t */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3041 /* t */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3041 /* t */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3041 /* t */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_8, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3041 /* t */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_8, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3041 /* t */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3041 /* t */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3041 /* t */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3041 /* t */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3041 /* t */, SP::TRAPrr, Convert__Reg1_1__Reg1_3__Imm1_0, 0, { MCK_Imm, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3041 /* t */, SP::TRAPri, Convert__Reg1_1__Imm1_3__Imm1_0, 0, { MCK_Imm, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3041 /* t */, SP::TICCrr, Convert__Reg1_2__Reg1_4__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3041 /* t */, SP::TICCri, Convert__Reg1_2__Imm1_4__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3041 /* t */, SP::TXCCrr, Convert__Reg1_2__Reg1_4__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3041 /* t */, SP::TXCCri, Convert__Reg1_2__Imm1_4__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3043 /* ta */, SP::TA3, Convert_NoOperands, 0, { MCK_3 }, },
  { 3043 /* ta */, SP::TA5, Convert_NoOperands, 0, { MCK_5 }, },
  { 3043 /* ta */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_8, 0, { MCK_IntRegs }, },
  { 3043 /* ta */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 3043 /* ta */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3043 /* ta */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3043 /* ta */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3043 /* ta */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3043 /* ta */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_8, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3043 /* ta */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_8, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3043 /* ta */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3043 /* ta */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3043 /* ta */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3043 /* ta */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3046 /* taddcc */, SP::TADDCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3046 /* taddcc */, SP::TADDCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3053 /* taddcctv */, SP::TADDCCTVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3053 /* taddcctv */, SP::TADDCCTVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3062 /* tcc */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_13, 0, { MCK_IntRegs }, },
  { 3062 /* tcc */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 3062 /* tcc */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3062 /* tcc */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3062 /* tcc */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3062 /* tcc */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3062 /* tcc */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_13, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3062 /* tcc */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_13, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3062 /* tcc */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3062 /* tcc */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3062 /* tcc */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3062 /* tcc */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3066 /* tcs */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_5, 0, { MCK_IntRegs }, },
  { 3066 /* tcs */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 3066 /* tcs */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3066 /* tcs */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3066 /* tcs */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3066 /* tcs */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3066 /* tcs */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_5, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3066 /* tcs */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_5, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3066 /* tcs */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3066 /* tcs */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3066 /* tcs */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3066 /* tcs */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3070 /* te */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_1, 0, { MCK_IntRegs }, },
  { 3070 /* te */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 3070 /* te */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3070 /* te */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3070 /* te */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3070 /* te */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3070 /* te */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_1, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3070 /* te */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_1, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3070 /* te */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3070 /* te */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3070 /* te */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3070 /* te */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3073 /* teq */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_1, 0, { MCK_IntRegs }, },
  { 3073 /* teq */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 3073 /* teq */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3073 /* teq */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3073 /* teq */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3073 /* teq */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3073 /* teq */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_1, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3073 /* teq */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_1, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3073 /* teq */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3073 /* teq */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3073 /* teq */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3073 /* teq */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3077 /* tg */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_10, 0, { MCK_IntRegs }, },
  { 3077 /* tg */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_10, 0, { MCK_Imm }, },
  { 3077 /* tg */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3077 /* tg */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3077 /* tg */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_10, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3077 /* tg */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_10, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3077 /* tg */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_10, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3077 /* tg */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_10, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3077 /* tg */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3077 /* tg */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3077 /* tg */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_10, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3077 /* tg */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_10, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3080 /* tge */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_11, 0, { MCK_IntRegs }, },
  { 3080 /* tge */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_11, 0, { MCK_Imm }, },
  { 3080 /* tge */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3080 /* tge */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3080 /* tge */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_11, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3080 /* tge */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_11, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3080 /* tge */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_11, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3080 /* tge */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_11, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3080 /* tge */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3080 /* tge */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3080 /* tge */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_11, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3080 /* tge */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_11, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3084 /* tgeu */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_13, 0, { MCK_IntRegs }, },
  { 3084 /* tgeu */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 3084 /* tgeu */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3084 /* tgeu */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3084 /* tgeu */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3084 /* tgeu */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3084 /* tgeu */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_13, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3084 /* tgeu */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_13, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3084 /* tgeu */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3084 /* tgeu */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3084 /* tgeu */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3084 /* tgeu */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3089 /* tgu */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_12, 0, { MCK_IntRegs }, },
  { 3089 /* tgu */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_12, 0, { MCK_Imm }, },
  { 3089 /* tgu */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3089 /* tgu */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3089 /* tgu */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_12, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3089 /* tgu */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_12, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3089 /* tgu */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_12, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3089 /* tgu */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_12, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3089 /* tgu */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3089 /* tgu */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3089 /* tgu */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_12, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3089 /* tgu */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_12, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3093 /* tl */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_3, 0, { MCK_IntRegs }, },
  { 3093 /* tl */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_3, 0, { MCK_Imm }, },
  { 3093 /* tl */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3093 /* tl */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3093 /* tl */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_3, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3093 /* tl */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_3, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3093 /* tl */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_3, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3093 /* tl */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_3, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3093 /* tl */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3093 /* tl */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3093 /* tl */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_3, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3093 /* tl */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_3, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3096 /* tle */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_2, 0, { MCK_IntRegs }, },
  { 3096 /* tle */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_2, 0, { MCK_Imm }, },
  { 3096 /* tle */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3096 /* tle */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3096 /* tle */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_2, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3096 /* tle */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_2, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3096 /* tle */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_2, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3096 /* tle */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_2, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3096 /* tle */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3096 /* tle */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3096 /* tle */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_2, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3096 /* tle */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_2, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3100 /* tleu */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_4, 0, { MCK_IntRegs }, },
  { 3100 /* tleu */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_4, 0, { MCK_Imm }, },
  { 3100 /* tleu */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3100 /* tleu */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3100 /* tleu */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_4, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3100 /* tleu */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_4, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3100 /* tleu */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_4, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3100 /* tleu */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_4, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3100 /* tleu */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3100 /* tleu */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3100 /* tleu */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_4, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3100 /* tleu */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_4, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3105 /* tlu */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_5, 0, { MCK_IntRegs }, },
  { 3105 /* tlu */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 3105 /* tlu */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3105 /* tlu */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3105 /* tlu */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3105 /* tlu */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3105 /* tlu */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_5, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3105 /* tlu */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_5, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3105 /* tlu */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3105 /* tlu */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3105 /* tlu */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3105 /* tlu */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3109 /* tn */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_0, 0, { MCK_IntRegs }, },
  { 3109 /* tn */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 3109 /* tn */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3109 /* tn */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3109 /* tn */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_0, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3109 /* tn */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_0, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3109 /* tn */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_0, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3109 /* tn */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_0, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3109 /* tn */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3109 /* tn */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3109 /* tn */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_0, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3109 /* tn */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_0, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3112 /* tne */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_9, 0, { MCK_IntRegs }, },
  { 3112 /* tne */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 3112 /* tne */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3112 /* tne */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3112 /* tne */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3112 /* tne */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3112 /* tne */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_9, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3112 /* tne */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_9, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3112 /* tne */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3112 /* tne */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3112 /* tne */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3112 /* tne */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3116 /* tneg */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_6, 0, { MCK_IntRegs }, },
  { 3116 /* tneg */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_6, 0, { MCK_Imm }, },
  { 3116 /* tneg */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3116 /* tneg */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3116 /* tneg */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_6, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3116 /* tneg */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_6, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3116 /* tneg */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_6, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3116 /* tneg */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_6, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3116 /* tneg */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3116 /* tneg */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3116 /* tneg */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_6, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3116 /* tneg */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_6, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3121 /* tnz */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_9, 0, { MCK_IntRegs }, },
  { 3121 /* tnz */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 3121 /* tnz */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3121 /* tnz */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3121 /* tnz */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3121 /* tnz */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3121 /* tnz */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_9, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3121 /* tnz */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_9, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3121 /* tnz */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3121 /* tnz */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3121 /* tnz */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3121 /* tnz */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3125 /* tpos */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_14, 0, { MCK_IntRegs }, },
  { 3125 /* tpos */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_14, 0, { MCK_Imm }, },
  { 3125 /* tpos */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3125 /* tpos */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3125 /* tpos */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_14, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3125 /* tpos */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_14, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3125 /* tpos */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_14, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3125 /* tpos */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_14, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3125 /* tpos */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3125 /* tpos */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3125 /* tpos */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_14, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3125 /* tpos */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_14, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3130 /* tst */, SP::ORCCrr, Convert__regG0__Reg1_0__regG0, 0, { MCK_IntRegs }, },
  { 3134 /* tsubcc */, SP::TSUBCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3134 /* tsubcc */, SP::TSUBCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3141 /* tsubcctv */, SP::TSUBCCTVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3141 /* tsubcctv */, SP::TSUBCCTVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3150 /* tvc */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_15, 0, { MCK_IntRegs }, },
  { 3150 /* tvc */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_15, 0, { MCK_Imm }, },
  { 3150 /* tvc */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3150 /* tvc */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3150 /* tvc */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_15, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3150 /* tvc */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_15, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3150 /* tvc */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_15, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3150 /* tvc */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_15, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3150 /* tvc */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3150 /* tvc */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3150 /* tvc */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_15, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3150 /* tvc */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_15, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3154 /* tvs */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_7, 0, { MCK_IntRegs }, },
  { 3154 /* tvs */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_7, 0, { MCK_Imm }, },
  { 3154 /* tvs */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3154 /* tvs */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3154 /* tvs */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_7, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3154 /* tvs */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_7, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3154 /* tvs */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_7, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3154 /* tvs */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_7, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3154 /* tvs */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3154 /* tvs */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3154 /* tvs */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_7, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3154 /* tvs */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_7, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3158 /* tz */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_1, 0, { MCK_IntRegs }, },
  { 3158 /* tz */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 3158 /* tz */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3158 /* tz */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3158 /* tz */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3158 /* tz */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3158 /* tz */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_1, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3158 /* tz */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_1, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3158 /* tz */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3158 /* tz */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3158 /* tz */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3158 /* tz */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3161 /* udiv */, SP::UDIVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3161 /* udiv */, SP::UDIVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3166 /* udivcc */, SP::UDIVCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3166 /* udivcc */, SP::UDIVCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3173 /* udivx */, SP::UDIVXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3173 /* udivx */, SP::UDIVXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3179 /* umac */, SP::UMACrr, Convert__Reg1_2__Reg1_0__Reg1_1__imm_95_0, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3179 /* umac */, SP::UMACri, Convert__Reg1_2__Reg1_0__Imm1_1__imm_95_0, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3184 /* umul */, SP::UMULrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3184 /* umul */, SP::UMULri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3189 /* umulcc */, SP::UMULCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3189 /* umulcc */, SP::UMULCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3196 /* umulxhi */, SP::UMULXHI, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3204 /* unimp */, SP::UNIMP, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 3210 /* wr */, SP::WRPSRrr, Convert__regG0__Reg1_0, 0, { MCK_IntRegs, MCK__PCT_psr }, },
  { 3210 /* wr */, SP::WRTBRrr, Convert__regG0__Reg1_0, 0, { MCK_IntRegs, MCK__PCT_tbr }, },
  { 3210 /* wr */, SP::WRWIMrr, Convert__regG0__Reg1_0, 0, { MCK_IntRegs, MCK__PCT_wim }, },
  { 3210 /* wr */, SP::WRASRrr, Convert__Reg1_1__regG0__Reg1_0, 0, { MCK_IntRegs, MCK_ASRRegs }, },
  { 3210 /* wr */, SP::WRPSRri, Convert__regG0__Imm1_0, 0, { MCK_Imm, MCK__PCT_psr }, },
  { 3210 /* wr */, SP::WRTBRri, Convert__regG0__Imm1_0, 0, { MCK_Imm, MCK__PCT_tbr }, },
  { 3210 /* wr */, SP::WRWIMri, Convert__regG0__Imm1_0, 0, { MCK_Imm, MCK__PCT_wim }, },
  { 3210 /* wr */, SP::WRASRri, Convert__Reg1_1__regG0__Imm1_0, 0, { MCK_Imm, MCK_ASRRegs }, },
  { 3210 /* wr */, SP::WRPSRrr, Convert__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK__PCT_psr }, },
  { 3210 /* wr */, SP::WRTBRrr, Convert__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK__PCT_tbr }, },
  { 3210 /* wr */, SP::WRWIMrr, Convert__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK__PCT_wim }, },
  { 3210 /* wr */, SP::WRASRrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_ASRRegs }, },
  { 3210 /* wr */, SP::WRPSRri, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK__PCT_psr }, },
  { 3210 /* wr */, SP::WRTBRri, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK__PCT_tbr }, },
  { 3210 /* wr */, SP::WRWIMri, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK__PCT_wim }, },
  { 3210 /* wr */, SP::WRASRri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_ASRRegs }, },
  { 3213 /* wrpr */, SP::WRPRrr, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_IntRegs, MCK_PRRegs }, },
  { 3213 /* wrpr */, SP::WRPRri, Convert__Reg1_2__Reg1_0__Imm1_1, Feature_HasV9, { MCK_IntRegs, MCK_Imm, MCK_PRRegs }, },
  { 3218 /* xmulx */, SP::XMULX, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3224 /* xmulxhi */, SP::XMULXHI, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3232 /* xnor */, SP::XNORrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3232 /* xnor */, SP::XNORri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3237 /* xnorcc */, SP::XNORCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3237 /* xnorcc */, SP::XNORCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3244 /* xor */, SP::XORrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3244 /* xor */, SP::XORri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3248 /* xorcc */, SP::XORCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3248 /* xorcc */, SP::XORCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned SparcAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
                     uint64_t &ErrorInfo,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 7) {
    ErrorInfo = 7;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((SparcOperand&)*Operands[0]).getToken();

  // Process all MnemonicAliases to remap the mnemonic.
  applyMnemonicAliases(Mnemonic, AvailableFeatures, VariantID);

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  uint64_t MissingFeatures = ~0ULL;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0ULL;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  DEBUG_WITH_TYPE("asm-matcher", dbgs() << "AsmMatcher: found " <<
  std::distance(MnemonicRange.first, MnemonicRange.second) << 
  " encodings with mnemonic '" << Mnemonic << "'\n");

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    bool HasRequiredFeatures =
      (AvailableFeatures & it->RequiredFeatures) == it->RequiredFeatures;
    DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Trying to match opcode "
                                          << MII.getName(it->Opcode) << "\n");
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 6; ++FormalIdx) {
      auto Formal = static_cast<MatchClassKind>(it->Classes[FormalIdx]);
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "  Matching formal operand class " << getMatchClassName(Formal)
                             << " against actual operand at index " << ActualIdx);
      if (ActualIdx < Operands.size())
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << " (";
                        Operands[ActualIdx]->print(dbgs()); dbgs() << "): ");
      else
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << ": ");
      if (ActualIdx >= Operands.size()) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "actual operand index out of range ");
        OperandsValid = (Formal == InvalidMatchClass) || isSubclass(Formal, OptionalMatchClass);
        if (!OperandsValid) ErrorInfo = ActualIdx;
        break;
      }
      MCParsedAsmOperand &Actual = *Operands[ActualIdx];
      unsigned Diag = validateOperandClass(Actual, Formal);
      if (Diag == Match_Success) {
        DEBUG_WITH_TYPE("asm-matcher",
                        dbgs() << "match success using generic matcher\n");
        ++ActualIdx;
        continue;
      }
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag != Match_Success) {
        unsigned TargetDiag = validateTargetOperandClass(Actual, Formal);
        if (TargetDiag == Match_Success) {
          DEBUG_WITH_TYPE("asm-matcher",
                          dbgs() << "match success using target matcher\n");
          ++ActualIdx;
          continue;
        }
        // If the target matcher returned a specific error code use
        // that, else use the one from the generic matcher.
        if (TargetDiag != Match_InvalidOperand && HasRequiredFeatures)
          Diag = TargetDiag;
      }
      // If current formal operand wasn't matched and it is optional
      // then try to match next formal operand
      if (Diag == Match_InvalidOperand && isSubclass(Formal, OptionalMatchClass)) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "ignoring optional operand\n");
        continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= ActualIdx)) {
        if (HasRequiredFeatures && (ErrorInfo != ActualIdx || Diag != Match_InvalidOperand))
          RetCode = Diag;
        ErrorInfo = ActualIdx;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) {
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Opcode result: multiple "
                                               "operand mismatches, ignoring "
                                               "this opcode\n");
      continue;
    }
    if (!HasRequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      uint64_t NewMissingFeatures = it->RequiredFeatures & ~AvailableFeatures;
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Missing target features: "
                                            << format_hex(NewMissingFeatures, 18)
                                            << "\n");
      if (countPopulation(NewMissingFeatures) <=
          countPopulation(MissingFeatures))
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    Inst.setOpcode(it->Opcode);
    // We have a potential match but have not rendered the operands.
    // Check the target predicate to handle any context sensitive
    // constraints.
    // For example, Ties that are referenced multiple times must be
    // checked here to ensure the input is the same for each match
    // constraints. If we leave it any later the ties will have been
    // canonicalized
    unsigned MatchResult;
    if ((MatchResult = checkEarlyTargetMatchPredicate(Inst, Operands)) != Match_Success) {
      Inst.clear();
      DEBUG_WITH_TYPE(
          "asm-matcher",
          dbgs() << "Early target match predicate failed with diag code "
                 << MatchResult << "\n");
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    if (matchingInlineAsm) {
      convertToMapAndConstraints(it->ConvertFn, Operands);
      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "Target match predicate failed with diag code "
                             << MatchResult << "\n");
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    DEBUG_WITH_TYPE(
        "asm-matcher",
        dbgs() << "Opcode result: complete match, selecting this opcode\n");
    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  // Missing feature matches return which features were missing
  ErrorInfo = MissingFeatures;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    uint8_t RequiredFeatures;
    uint16_t Mnemonic;
    uint8_t Class;
    uint8_t OperandMask;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const OperandMatchEntry OperandMatchTable[100] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 252 /* call */, MCK_MEMri, 1 /* 0 */ },
  { 0, 252 /* call */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 352 /* clr */, MCK_MEMri, 2 /* 1 */ },
  { 0, 352 /* clr */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 356 /* clrb */, MCK_MEMri, 2 /* 1 */ },
  { 0, 356 /* clrb */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 361 /* clrh */, MCK_MEMri, 2 /* 1 */ },
  { 0, 361 /* clrh */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 915 /* flush */, MCK_MEMri, 1 /* 0 */ },
  { 0, 915 /* flush */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2408 /* jmp */, MCK_MEMri, 1 /* 0 */ },
  { 0, 2408 /* jmp */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2412 /* jmpl */, MCK_MEMri, 1 /* 0 */ },
  { 0, 2412 /* jmpl */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2417 /* ld */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2417 /* ld */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2417 /* ld */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2417 /* ld */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2417 /* ld */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2417 /* ld */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2417 /* ld */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2417 /* ld */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2417 /* ld */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2417 /* ld */, MCK_MEMrr, 2 /* 1 */ },
  { Feature_HasV9, 2420 /* lda */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2420 /* lda */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2424 /* ldd */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2424 /* ldd */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2424 /* ldd */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2424 /* ldd */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2424 /* ldd */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2424 /* ldd */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2428 /* ldda */, MCK_MEMrr, 2 /* 1 */ },
  { Feature_HasV9, 2428 /* ldda */, MCK_MEMrr, 2 /* 1 */ },
  { Feature_HasV9, 2433 /* ldq */, MCK_MEMri, 2 /* 1 */ },
  { Feature_HasV9, 2433 /* ldq */, MCK_MEMrr, 2 /* 1 */ },
  { Feature_HasV9, 2437 /* ldqa */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2442 /* ldsb */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2442 /* ldsb */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2447 /* ldsba */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2453 /* ldsh */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2453 /* ldsh */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2458 /* ldsha */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2464 /* ldstub */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2464 /* ldstub */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2471 /* ldstuba */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2479 /* ldsw */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2479 /* ldsw */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2484 /* ldub */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2484 /* ldub */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2489 /* lduba */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2495 /* lduh */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2495 /* lduh */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2500 /* lduha */, MCK_MEMrr, 2 /* 1 */ },
  { Feature_HasV9, 2506 /* ldx */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2506 /* ldx */, MCK_MEMri, 2 /* 1 */ },
  { Feature_HasV9, 2506 /* ldx */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2506 /* ldx */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2853 /* rett */, MCK_MEMri, 1 /* 0 */ },
  { 0, 2853 /* rett */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2955 /* st */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2955 /* st */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2955 /* st */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2955 /* st */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2955 /* st */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2955 /* st */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2955 /* st */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2955 /* st */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2955 /* st */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2955 /* st */, MCK_MEMrr, 4 /* 2 */ },
  { Feature_HasV9, 2958 /* sta */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2958 /* sta */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2962 /* stb */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2962 /* stb */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2966 /* stba */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2977 /* std */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2977 /* std */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2977 /* std */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2977 /* std */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2977 /* std */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2977 /* std */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2977 /* std */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2977 /* std */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2977 /* std */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2977 /* std */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2981 /* stda */, MCK_MEMrr, 4 /* 2 */ },
  { Feature_HasV9, 2981 /* stda */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2986 /* sth */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2986 /* sth */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2990 /* stha */, MCK_MEMrr, 4 /* 2 */ },
  { Feature_HasV9, 2995 /* stq */, MCK_MEMri, 4 /* 2 */ },
  { Feature_HasV9, 2995 /* stq */, MCK_MEMrr, 4 /* 2 */ },
  { Feature_HasV9, 2999 /* stqa */, MCK_MEMrr, 4 /* 2 */ },
  { Feature_HasV9, 3004 /* stx */, MCK_MEMri, 4 /* 2 */ },
  { Feature_HasV9, 3004 /* stx */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 3004 /* stx */, MCK_MEMri, 4 /* 2 */ },
  { 0, 3004 /* stx */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 3030 /* swap */, MCK_MEMri, 2 /* 1 */ },
  { 0, 3030 /* swap */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 3035 /* swapa */, MCK_MEMrr, 2 /* 1 */ },
};

OperandMatchResultTy SparcAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_MEMri:
    return parseMEMOperand(Operands);
  case MCK_MEMrr:
    return parseMEMOperand(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

OperandMatchResultTy SparcAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic,
                       bool ParseForAllFeatures) {
  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size() - 1;
  // Search the table.
  auto MnemonicRange =
    std::equal_range(std::begin(OperandMatchTable), std::end(OperandMatchTable),
                     Mnemonic, LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    if (!ParseForAllFeatures && (AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures)
        continue;

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION


#ifdef GET_MNEMONIC_SPELL_CHECKER
#undef GET_MNEMONIC_SPELL_CHECKER

static std::string SparcMnemonicSpellCheck(StringRef S, uint64_t FBS, unsigned VariantID) {
  const unsigned MaxEditDist = 2;
  std::vector<StringRef> Candidates;
  StringRef Prev = "";

  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }

  for (auto I = Start; I < End; I++) {
    // Ignore unsupported instructions.
    if ((FBS & I->RequiredFeatures) != I->RequiredFeatures)
      continue;

    StringRef T = I->getMnemonic();
    // Avoid recomputing the edit distance for the same string.
    if (T.equals(Prev))
      continue;

    Prev = T;
    unsigned Dist = S.edit_distance(T, false, MaxEditDist);
    if (Dist <= MaxEditDist)
      Candidates.push_back(T);
  }

  if (Candidates.empty())
    return "";

  std::string Res = ", did you mean: ";
  unsigned i = 0;
  for( ; i < Candidates.size() - 1; i++)
    Res += Candidates[i].str() + ", ";
  return Res + Candidates[i].str() + "?";
}

#endif // GET_MNEMONIC_SPELL_CHECKER

