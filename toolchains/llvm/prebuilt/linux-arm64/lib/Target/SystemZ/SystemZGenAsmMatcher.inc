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
enum SubtargetFeatureFlag : uint32_t {
  Feature_FeatureDistinctOps = (1ULL << 2),
  Feature_FeatureFastSerialization = (1ULL << 6),
  Feature_FeatureFPExtension = (1ULL << 5),
  Feature_FeatureHighWord = (1ULL << 8),
  Feature_FeatureInterlockedAccess1 = (1ULL << 10),
  Feature_FeatureLoadStoreOnCond = (1ULL << 13),
  Feature_FeaturePopulationCount = (1ULL << 22),
  Feature_FeatureMessageSecurityAssist3 = (1ULL << 15),
  Feature_FeatureMessageSecurityAssist4 = (1ULL << 16),
  Feature_FeatureResetReferenceBitsMultiple = (1ULL << 24),
  Feature_FeatureExecutionHint = (1ULL << 4),
  Feature_FeatureLoadAndTrap = (1ULL << 11),
  Feature_FeatureMiscellaneousExtensions = (1ULL << 20),
  Feature_FeatureProcessorAssist = (1ULL << 23),
  Feature_FeatureTransactionalExecution = (1ULL << 25),
  Feature_FeatureDFPZonedConversion = (1ULL << 1),
  Feature_FeatureEnhancedDAT2 = (1ULL << 3),
  Feature_FeatureLoadAndZeroRightmostByte = (1ULL << 12),
  Feature_FeatureLoadStoreOnCond2 = (1ULL << 14),
  Feature_FeatureMessageSecurityAssist5 = (1ULL << 17),
  Feature_FeatureDFPPackedConversion = (1ULL << 0),
  Feature_FeatureVector = (1ULL << 26),
  Feature_FeatureMiscellaneousExtensions2 = (1ULL << 21),
  Feature_FeatureGuardedStorage = (1ULL << 7),
  Feature_FeatureMessageSecurityAssist7 = (1ULL << 18),
  Feature_FeatureMessageSecurityAssist8 = (1ULL << 19),
  Feature_FeatureVectorEnhancements1 = (1ULL << 27),
  Feature_FeatureVectorPackedDecimal = (1ULL << 28),
  Feature_FeatureInsertReferenceBitsMultiple = (1ULL << 9),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_FeatureDistinctOps: return "distinct-ops";
  case Feature_FeatureFastSerialization: return "fast-serialization";
  case Feature_FeatureFPExtension: return "fp-extension";
  case Feature_FeatureHighWord: return "high-word";
  case Feature_FeatureInterlockedAccess1: return "interlocked-access1";
  case Feature_FeatureLoadStoreOnCond: return "load-store-on-cond";
  case Feature_FeaturePopulationCount: return "population-count";
  case Feature_FeatureMessageSecurityAssist3: return "message-security-assist-extension3";
  case Feature_FeatureMessageSecurityAssist4: return "message-security-assist-extension4";
  case Feature_FeatureResetReferenceBitsMultiple: return "reset-reference-bits-multiple";
  case Feature_FeatureExecutionHint: return "execution-hint";
  case Feature_FeatureLoadAndTrap: return "load-and-trap";
  case Feature_FeatureMiscellaneousExtensions: return "miscellaneous-extensions";
  case Feature_FeatureProcessorAssist: return "processor-assist";
  case Feature_FeatureTransactionalExecution: return "transactional-execution";
  case Feature_FeatureDFPZonedConversion: return "dfp-zoned-conversion";
  case Feature_FeatureEnhancedDAT2: return "enhanced-dat-2";
  case Feature_FeatureLoadAndZeroRightmostByte: return "load-and-zero-rightmost-byte";
  case Feature_FeatureLoadStoreOnCond2: return "load-store-on-cond-2";
  case Feature_FeatureMessageSecurityAssist5: return "message-security-assist-extension5";
  case Feature_FeatureDFPPackedConversion: return "dfp-packed-conversion";
  case Feature_FeatureVector: return "vector";
  case Feature_FeatureMiscellaneousExtensions2: return "miscellaneous-extensions-2";
  case Feature_FeatureGuardedStorage: return "guarded-storage";
  case Feature_FeatureMessageSecurityAssist7: return "message-security-assist-extension7";
  case Feature_FeatureMessageSecurityAssist8: return "message-security-assist-extension8";
  case Feature_FeatureVectorEnhancements1: return "vector-enhancements-1";
  case Feature_FeatureVectorPackedDecimal: return "vector-packed-decimal";
  case Feature_FeatureInsertReferenceBitsMultiple: return "insert-reference-bits-multiple";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addRegOperands,
  CVT_95_addBDXAddrOperands,
  CVT_95_addImmOperands,
  CVT_95_addBDAddrOperands,
  CVT_95_addBDLAddrOperands,
  CVT_95_addImmTLSOperands,
  CVT_95_addBDRAddrOperands,
  CVT_imm_95_0,
  CVT_95_addBDVAddrOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__GR321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__FP641_1,
  Convert__FP641_0__FP641_1__FP641_2,
  Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP321_0__Tie0__FP321_1,
  Convert__GR321_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR641_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__GR321_1,
  Convert__GR641_0__Tie0__S16Imm1_1,
  Convert__GR641_0__GR641_1__S16Imm1_2,
  Convert__GR641_0__Tie0__GR641_1,
  Convert__GR641_0__GR641_1__GR641_2,
  Convert__BDAddr64Disp202_0__S8Imm1_1,
  Convert__GRH321_0__GRH321_1__GRH321_2,
  Convert__GRH321_0__GRH321_1__GR321_2,
  Convert__GR321_0__Tie0__S16Imm1_1,
  Convert__GR321_0__GR321_1__S16Imm1_2,
  Convert__GR321_0__Tie0__BDXAddr64Disp203_1,
  Convert__GRH321_0__Tie0__S32Imm1_1,
  Convert__GR321_0__Tie0__GR321_1,
  Convert__GR321_0__Tie0__U32Imm1_1,
  Convert__GR641_0__Tie0__U32Imm1_1,
  Convert__GR321_0__GR321_1__GR321_2,
  Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1,
  Convert__FP1281_0__Tie0__FP1281_1,
  Convert__FP1281_0__FP1281_1__FP1281_2,
  Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3,
  Convert__BDXAddr64Disp123_0,
  Convert__GR641_0__GR641_1,
  Convert__GR641_0__BDXAddr64Disp123_1,
  Convert__GR641_0__ADDR641_1,
  Convert__U4Imm1_0__BDXAddr64Disp123_1,
  Convert__U4Imm1_0__GR641_1,
  Convert__GR321_0__Tie0__GR641_1,
  Convert__ADDR641_0,
  Convert__BDXAddr64Disp203_0,
  Convert__U4Imm1_0__BDXAddr64Disp203_1,
  Convert__U4Imm1_0__PCRel161_1__BDXAddr64Disp123_2,
  Convert__U4Imm1_0__PCRel121_1__PCRel241_2,
  Convert__GR641_0__PCRelTLS162_1,
  Convert__GR641_0__PCRelTLS322_1,
  Convert__U4Imm1_0__PCRel161_1,
  Convert__U4Imm1_0__PCRel321_1,
  Convert__GR321_0__Tie0__PCRel161_1,
  Convert__GR641_0__Tie0__PCRel161_1,
  Convert__GRH321_0__Tie0__PCRel321_1,
  Convert__GR321_0__Tie0__GR321_1__PCRel161_2,
  Convert__GR641_0__Tie0__GR641_1__PCRel161_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2,
  Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2,
  Convert__GR321_0__BDXAddr64Disp123_1,
  Convert__FP641_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP641_1,
  Convert__FP641_0__GR321_1,
  Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP641_0__GR641_1,
  Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2,
  Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp122_2,
  Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp202_2,
  Convert__FP321_0__BDXAddr64Disp123_1,
  Convert__FP321_0__FP321_1,
  Convert__FP321_0__GR321_1,
  Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP321_0__GR641_1,
  Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP1281_0__FP1281_1,
  Convert__BDAddr64Disp122_0,
  Convert__GR321_0__U4Imm1_1__FP641_2,
  Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR321_0__U4Imm1_1__FP321_2,
  Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__GR321_0__S32Imm1_1,
  Convert__GR321_0__U4Imm1_1__FP1281_2,
  Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR641_0__BDXAddr64Disp203_1,
  Convert__GR641_0__U4Imm1_1__FP641_2,
  Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR641_0__U4Imm1_1__FP321_2,
  Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__GR641_0__S32Imm1_1,
  Convert__GR641_0__GR321_1,
  Convert__GR641_0__PCRel321_1,
  Convert__GR641_0__S16Imm1_1,
  Convert__BDAddr64Disp122_0__S16Imm1_1,
  Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2,
  Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__S8Imm1_1__PCRel161_2,
  Convert__GR641_0__S16Imm1_1__U4Imm1_2,
  Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR641_0__GR641_1__BDAddr64Disp122_2,
  Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__GR641_1__PCRel161_2,
  Convert__GR641_0__GR641_1__U4Imm1_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GRH321_0__BDXAddr64Disp203_1,
  Convert__GRH321_0__GRH321_1,
  Convert__GR321_0__S16Imm1_1,
  Convert__GRH321_0__GR321_1,
  Convert__GR321_0__PCRel321_1,
  Convert__GR321_0__BDXAddr64Disp203_1,
  Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__S32Imm1_1,
  Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__S8Imm1_1__PCRel161_2,
  Convert__GR321_0__S16Imm1_1__U4Imm1_2,
  Convert__GR641_0__GR1281_1__Tie0__Tie1,
  Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1,
  Convert__GR1281_0__GR1281_1__Tie0__Tie1,
  Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp122_2,
  Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp202_2,
  Convert__BDAddr64Disp122_0__U16Imm1_1,
  Convert__GR321_0__U32Imm1_1,
  Convert__GR321_0__U16Imm1_1__U4Imm1_2,
  Convert__GR321_0__U16Imm1_1,
  Convert__GR641_0__U32Imm1_1,
  Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2,
  Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__U8Imm1_1__PCRel161_2,
  Convert__GR641_0__U16Imm1_1__U4Imm1_2,
  Convert__GR641_0__U16Imm1_1,
  Convert__GR641_0__BDAddr64Disp202_2__U4Imm1_1,
  Convert__GR641_0__BDAddr64Disp202_1,
  Convert__BDAddr64Disp122_0__U8Imm1_1,
  Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__U32Imm1_1,
  Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__U8Imm1_1__PCRel161_2,
  Convert__BDAddr64Disp202_0__U8Imm1_1,
  Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR321_0__GR321_1,
  Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR321_0__GR321_1__BDAddr64Disp122_2,
  Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__GR321_1__PCRel161_2,
  Convert__GR321_0__GR321_1__U4Imm1_2,
  Convert__GR641_0__GR641_1__Tie0__Tie1,
  Convert__GR321_0__BDAddr64Disp202_2__U4Imm1_1,
  Convert__GR321_0__BDAddr64Disp202_1,
  Convert__FP641_0__FP641_2__FP641_1,
  Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2,
  Convert__AR321_0__AR321_1,
  Convert__GR1281_0__GR1281_2__GR641_1,
  Convert__GR1281_0__GR1281_2__GR641_1__U4Imm1_3,
  Convert_NoOperands,
  Convert__GR641_0__FP641_1__U4Imm1_2,
  Convert__GR1281_0__Tie0__GR641_1,
  Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2,
  Convert__GR1281_0__FP1281_1__U4Imm1_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2,
  Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2,
  Convert__GR641_0__FP641_1,
  Convert__GR1281_0__FP1281_1,
  Convert__FP1281_0__GR321_1,
  Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP1281_0__GR641_1,
  Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP1281_0__GR1281_1,
  Convert__GR1281_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP641_1__Tie0__FP641_2__U4Imm1_3,
  Convert__FP321_0__FP321_1__Tie0__FP321_2__U4Imm1_3,
  Convert__GR1281_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR1281_0__Tie0__GR321_1,
  Convert__GR321_0__AR321_1,
  Convert__GR641_0__GR641_1__BDAddr32Disp202_2,
  Convert__GR321_0__GR641_1,
  Convert__GR321_0,
  Convert__GR641_0,
  Convert__GR321_0__Tie0,
  Convert__GR1281_0__GR321_1,
  Convert__FP641_0__U4Imm1_1__FP641_2,
  Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__U4Imm1_1__FP321_2,
  Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__FP1281_0__U4Imm1_1__FP1281_2,
  Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR1281_0__GR641_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp123_1,
  Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR641_0__GR641_2__GR641_1,
  Convert__GR641_0__GR641_2__GR641_1__U4Imm1_3,
  Convert__FP1281_0__FP1281_2__FP1281_1,
  Convert__GRH321_0__Tie0__U16Imm1_1,
  Convert__GR321_0__Tie0__U16Imm1_1,
  Convert__GR641_0__GR321_1__GR321_2,
  Convert__GR641_0__GR321_1__GR321_2__U4Imm1_3,
  Convert__PCRel161_0,
  Convert__PCRel321_0,
  Convert__GR1281_1__GR641_0__Tie0,
  Convert__GR1281_0__GR1281_2__GR1281_1__Tie0__Tie1__Tie2,
  Convert__GR321_0__GR321_1__BDAddr64Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr64Disp202_2,
  Convert__AR321_0__AR321_1__BDAddr64Disp122_2,
  Convert__AR321_0__AR321_1__BDAddr64Disp202_2,
  Convert__BDAddr64Disp122_0__BDAddr64Disp122_1,
  Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__CR641_0__CR641_1__BDAddr64Disp122_2,
  Convert__CR641_0__CR641_1__BDAddr64Disp202_2,
  Convert__FP641_0__FP321_1,
  Convert__FP641_0__FP321_1__U4Imm1_2,
  Convert__FP641_0__FP1281_1,
  Convert__FP641_0__BDXAddr64Disp203_1,
  Convert__FP321_0__FP641_1,
  Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__FP1281_1,
  Convert__FP321_0__BDXAddr64Disp203_1,
  Convert__GR641_0__GR641_1__BDAddr64Disp122_2__BDAddr64Disp122_3,
  Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR321_0__Tie0__BDAddr64Disp202_1,
  Convert__GRH321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GRH321_0__Tie0__BDAddr64Disp202_1,
  Convert__GRH321_0__Tie0__GRH321_1__U4Imm1_2,
  Convert__GRH321_0__Tie0__GRH321_1,
  Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR641_0__Tie0__BDAddr64Disp202_1,
  Convert__GR641_0__Tie0__S16Imm1_1__U4Imm1_2,
  Convert__GR641_0__Tie0__GR641_1__U4Imm1_2,
  Convert__GRH321_0__Tie0__S16Imm1_1__U4Imm1_2,
  Convert__GRH321_0__Tie0__S16Imm1_1,
  Convert__GR321_0__Tie0__S16Imm1_1__U4Imm1_2,
  Convert__GR321_0__Tie0__GR321_1__U4Imm1_2,
  Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2,
  Convert__GR1281_0__BDXAddr64Disp203_1,
  Convert__GR641_0__GR641_1__Tie0__GR641_2__U4Imm1_3,
  Convert__FP1281_0__BDXAddr64Disp123_1,
  Convert__FP1281_0__FP641_1,
  Convert__FP1281_0__FP641_1__U4Imm1_2,
  Convert__FP1281_0__FP321_1,
  Convert__FP641_0,
  Convert__FP321_0,
  Convert__FP1281_0,
  Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__Tie0__FP641_1__FP641_2,
  Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2,
  Convert__FP321_0__Tie0__FP321_1__FP321_2,
  Convert__FP1281_0__Tie0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP1281_0__Tie0__FP641_1__FP641_2,
  Convert__FP641_0__Tie0__FP321_1,
  Convert__GR1281_0__GR641_1__GR641_2,
  Convert__GR1281_0,
  Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2,
  Convert__FP1281_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP1281_0__Tie0__FP641_1,
  Convert__FP1281_0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP1281_0__FP641_1__FP641_2,
  Convert__U4Imm1_0__U4Imm1_1,
  Convert__GRH321_0__Tie0__U32Imm1_1,
  Convert__imm_95_0__BDXAddr64Disp123_0,
  Convert__imm_95_0__GR641_0,
  Convert__GR641_1__GR321_0__Tie0,
  Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1,
  Convert__GR641_0__BDAddr64Disp122_1__GR641_2__BDAddr64Disp122_3,
  Convert__GR641_0__Tie0,
  Convert__FP1281_0__FP1281_1__Tie0__FP1281_2__U4Imm1_3,
  Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__GR321_1__BDAddr32Disp202_2,
  Convert__AR321_0__GR321_1,
  Convert__GR321_0__Tie0__BDAddr32Disp122_1,
  Convert__GR1281_0__Tie0__BDAddr32Disp122_1,
  Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2,
  Convert__BDAddr32Disp122_0,
  Convert__BDLAddr64Disp12Len43_0__BDAddr32Disp122_1__U4Imm1_2,
  Convert__GR321_0__GR641_1__U4Imm1_2,
  Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GRH321_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GRH321_0__BDAddr64Disp202_1,
  Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__U8Imm1_0,
  Convert__FP321_0__U4Imm1_1__FP641_2,
  Convert__GRH321_0__U16Imm1_1,
  Convert__BDLAddr64Disp12Len43_0,
  Convert__GR1281_0__GR641_1__Tie0__Tie1,
  Convert__GR1281_0__GR641_1__Tie0__Tie1__U4Imm1_2,
  Convert__GR641_1__GR1281_0__Tie1,
  Convert__GR641_1__GR1281_0__Tie1__U4Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__VR1281_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3,
  Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U4Imm1_2,
  Convert__VR1281_0__VR1281_1,
  Convert__GR321_0__VR1281_1__U4Imm1_2,
  Convert__GR641_0__VR1281_1__U4Imm1_2,
  Convert__VR1281_0__GR321_1__U8Imm1_2__U4Imm1_3,
  Convert__VR1281_0__GR641_1__U8Imm1_2__U4Imm1_3,
  Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4,
  Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3,
  Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5,
  Convert__VR1281_0__VR1281_1__U12Imm1_2__U4Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U12Imm1_2,
  Convert__VR1281_0__U16Imm1_1,
  Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__U8Imm1_1__U8Imm1_2__U4Imm1_3,
  Convert__VR1281_0__U8Imm1_1__U8Imm1_2,
  Convert__VR1281_0__VR1281_1__U4Imm1_2__imm_95_0,
  Convert__VR1281_0__VR1281_1__imm_95_0,
  Convert__VR1281_0__BDXAddr64Disp123_1,
  Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U3Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U4Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U2Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U1Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U3Imm1_2,
  Convert__GR641_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3,
  Convert__GR641_0__VR1281_1__BDAddr32Disp122_2,
  Convert__VR1281_0__U16Imm1_1__U4Imm1_2,
  Convert__VR1281_0__GR321_1__BDAddr64Disp122_2,
  Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2,
  Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2,
  Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2__U4Imm1_3,
  Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2,
  Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2,
  Convert__VR1281_0__GR641_1__GR641_2,
  Convert__VR1281_0__VR1281_1__VR1281_1,
  Convert__VR1281_0,
  Convert__VR1281_0__VR1281_1__U8Imm1_2__U8Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U16Imm1_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__U16Imm1_2,
  Convert__VR1281_0__S16Imm1_1__U4Imm1_2,
  Convert__VR1281_0__S16Imm1_1,
  Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3,
  Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0,
  Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3,
  Convert__VR641_0__VR641_1__VR641_2,
  Convert__VR321_0__VR321_1__VR321_2,
  Convert__VR641_0__VR641_1,
  Convert__VR321_0__VR321_1,
  Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3,
  Convert__VR1281_0__VR641_1,
  Convert__VR641_0__VR321_1,
  Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3,
  Convert__VR641_0__VR1281_1__U4Imm1_2__U4Imm1_3,
  Convert__VR641_0__VR641_1__VR641_2__VR641_3,
  Convert__VR321_0__VR321_1__VR321_2__VR321_3,
  Convert__VR641_0__VR641_1__VR641_2__U4Imm1_3,
  Convert__VR321_0__VR321_1__VR321_2__U4Imm1_3,
  Convert__VR641_0__VR641_1__U4Imm1_2,
  Convert__VR321_0__VR321_1__U4Imm1_2,
  Convert__VR641_0__VR641_1__U12Imm1_2,
  Convert__VR321_0__VR321_1__U12Imm1_2,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__GR321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__S8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__GRH321_1__GRH321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GRH321_0__GRH321_1__GR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__GR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP1281_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__BDXAddr64Disp123_0
  { CVT_95_addBDXAddrOperands, 1, CVT_Done },
  // Convert__GR641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__ADDR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__BDXAddr64Disp123_1
  { CVT_95_addImmOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__GR641_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__ADDR641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__BDXAddr64Disp203_0
  { CVT_95_addBDXAddrOperands, 1, CVT_Done },
  // Convert__U4Imm1_0__BDXAddr64Disp203_1
  { CVT_95_addImmOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel161_1__BDXAddr64Disp123_2
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__U4Imm1_0__PCRel121_1__PCRel241_2
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__PCRelTLS162_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmTLSOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRelTLS322_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmTLSOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel161_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel321_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0
  { CVT_95_addBDAddrOperands, 1, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__S16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__GR641_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GRH321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__GRH321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR1281_1__Tie0__Tie1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_Done },
  // Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0__Tie1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp122_0__U16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__Tie0__Tie1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_2__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__AR321_0__AR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR1281_2__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR1281_2__GR641_1__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__GR641_0__FP641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR1281_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2
  { CVT_95_addBDAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR1281_0__FP1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__GR1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1__Tie0__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__FP321_1__Tie0__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__AR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR321_0__Tie0
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_Done },
  // Convert__GR1281_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_2__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_2__GR641_1__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__FP1281_2__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR321_1__GR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__GR321_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__PCRel161_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__PCRel321_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GR1281_1__GR641_0__Tie0
  { CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_Done },
  // Convert__GR1281_0__GR1281_2__GR1281_1__Tie0__Tie1__Tie2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_Tied, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__AR321_0__AR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__AR321_0__AR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp122_0__BDAddr64Disp122_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__CR641_0__CR641_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__CR641_0__CR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__FP321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FP641_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp122_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__GRH321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0__GRH321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__Tie0__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2
  { CVT_95_addBDRAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__U4Imm1_0__U4Imm1_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_95_0__BDXAddr64Disp123_0
  { CVT_imm_95_0, 0, CVT_95_addBDXAddrOperands, 1, CVT_Done },
  // Convert__imm_95_0__GR641_0
  { CVT_imm_95_0, 0, CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR641_1__GR321_0__Tie0
  { CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_Done },
  // Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp122_1__GR641_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__Tie0
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_Done },
  // Convert__FP1281_0__FP1281_1__Tie0__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__AR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__BDAddr32Disp122_0
  { CVT_95_addBDAddrOperands, 1, CVT_Done },
  // Convert__BDLAddr64Disp12Len43_0__BDAddr32Disp122_1__U4Imm1_2
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__U8Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GRH321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDLAddr64Disp12Len43_0
  { CVT_95_addBDLAddrOperands, 1, CVT_Done },
  // Convert__GR1281_0__GR641_1__Tie0__Tie1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_Done },
  // Convert__GR1281_0__GR641_1__Tie0__Tie1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_1__GR1281_0__Tie1
  { CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 1, CVT_Tied, 1, CVT_Done },
  // Convert__GR641_1__GR1281_0__Tie1__U4Imm1_2
  { CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 1, CVT_Tied, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__VR1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__VR1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__GR321_1__U8Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__GR641_1__U8Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U12Imm1_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U12Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__U8Imm1_1__U8Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__U8Imm1_1__U8Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__VR1281_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__U16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U8Imm1_2__U8Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U16Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__VR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR321_0__VR321_1__VR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR641_0__VR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR321_0__VR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR641_0__VR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR641_0__VR1281_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__VR641_2__VR641_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__VR321_0__VR321_1__VR321_2__VR321_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__VR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR321_0__VR321_1__VR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR321_0__VR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR641_0__VR641_1__U12Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR321_0__VR321_1__U12Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
};

void SystemZAsmParser::
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
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(OpIdx));
      break;
    case CVT_95_addRegOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addBDXAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDXAddrOperands(Inst, 3);
      break;
    case CVT_95_addImmOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addBDAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDAddrOperands(Inst, 2);
      break;
    case CVT_95_addBDLAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDLAddrOperands(Inst, 3);
      break;
    case CVT_95_addImmTLSOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addImmTLSOperands(Inst, 2);
      break;
    case CVT_95_addBDRAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDRAddrOperands(Inst, 3);
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addBDVAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDVAddrOperands(Inst, 3);
      break;
    }
  }
}

void SystemZAsmParser::
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
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDXAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addBDLAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addImmTLSOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addBDRAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addBDVAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
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
  MCK_LAST_TOKEN = OptionalMatchClass,
  MCK_CCRegs, // register class 'CCRegs'
  MCK_ADDR128Bit, // register class 'ADDR128Bit'
  MCK_FP128Bit, // register class 'FP128Bit'
  MCK_GR128Bit, // register class 'GR128Bit'
  MCK_ADDR32Bit, // register class 'ADDR32Bit'
  MCK_ADDR64Bit, // register class 'ADDR64Bit'
  MCK_AR32Bit, // register class 'AR32Bit'
  MCK_CR64Bit, // register class 'CR64Bit'
  MCK_FP32Bit, // register class 'FP32Bit'
  MCK_FP64Bit, // register class 'FP64Bit'
  MCK_GR32Bit, // register class 'GR32Bit'
  MCK_GR64Bit, // register class 'GR64Bit'
  MCK_GRH32Bit, // register class 'GRH32Bit'
  MCK_VF128Bit, // register class 'VF128Bit'
  MCK_Reg13, // derived register class
  MCK_GRX32Bit, // register class 'GRX32Bit'
  MCK_VR128Bit, // register class 'VR128Bit'
  MCK_VR32Bit, // register class 'VR32Bit'
  MCK_VR64Bit, // register class 'VR64Bit'
  MCK_AnyRegBit, // register class 'AnyRegBit'
  MCK_LAST_REGISTER = MCK_AnyRegBit,
  MCK_ADDR128, // user defined class 'ADDR128AsmOperand'
  MCK_ADDR32, // user defined class 'ADDR32AsmOperand'
  MCK_ADDR64, // user defined class 'ADDR64AsmOperand'
  MCK_AR32, // user defined class 'AR32AsmOperand'
  MCK_AnyReg, // user defined class 'AnyRegAsmOperand'
  MCK_BDAddr32Disp12, // user defined class 'BDAddr32Disp12'
  MCK_BDAddr32Disp20, // user defined class 'BDAddr32Disp20'
  MCK_BDAddr64Disp12, // user defined class 'BDAddr64Disp12'
  MCK_BDAddr64Disp20, // user defined class 'BDAddr64Disp20'
  MCK_BDLAddr64Disp12Len4, // user defined class 'BDLAddr64Disp12Len4'
  MCK_BDLAddr64Disp12Len8, // user defined class 'BDLAddr64Disp12Len8'
  MCK_BDRAddr64Disp12, // user defined class 'BDRAddr64Disp12'
  MCK_BDVAddr64Disp12, // user defined class 'BDVAddr64Disp12'
  MCK_BDXAddr64Disp12, // user defined class 'BDXAddr64Disp12'
  MCK_BDXAddr64Disp20, // user defined class 'BDXAddr64Disp20'
  MCK_CR64, // user defined class 'CR64AsmOperand'
  MCK_FP128, // user defined class 'FP128AsmOperand'
  MCK_FP32, // user defined class 'FP32AsmOperand'
  MCK_FP64, // user defined class 'FP64AsmOperand'
  MCK_GR128, // user defined class 'GR128AsmOperand'
  MCK_GR32, // user defined class 'GR32AsmOperand'
  MCK_GR64, // user defined class 'GR64AsmOperand'
  MCK_GRH32, // user defined class 'GRH32AsmOperand'
  MCK_GRX32, // user defined class 'GRX32AsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_PCRel12, // user defined class 'PCRel12'
  MCK_PCRel16, // user defined class 'PCRel16'
  MCK_PCRel24, // user defined class 'PCRel24'
  MCK_PCRel32, // user defined class 'PCRel32'
  MCK_PCRelTLS16, // user defined class 'PCRelTLS16'
  MCK_PCRelTLS32, // user defined class 'PCRelTLS32'
  MCK_S16Imm, // user defined class 'S16Imm'
  MCK_S32Imm, // user defined class 'S32Imm'
  MCK_S8Imm, // user defined class 'S8Imm'
  MCK_U12Imm, // user defined class 'U12Imm'
  MCK_U16Imm, // user defined class 'U16Imm'
  MCK_U1Imm, // user defined class 'U1Imm'
  MCK_U2Imm, // user defined class 'U2Imm'
  MCK_U32Imm, // user defined class 'U32Imm'
  MCK_U3Imm, // user defined class 'U3Imm'
  MCK_U48Imm, // user defined class 'U48Imm'
  MCK_U4Imm, // user defined class 'U4Imm'
  MCK_U6Imm, // user defined class 'U6Imm'
  MCK_U8Imm, // user defined class 'U8Imm'
  MCK_VF128, // user defined class 'VF128AsmOperand'
  MCK_VR128, // user defined class 'VR128AsmOperand'
  MCK_VR32, // user defined class 'VR32AsmOperand'
  MCK_VR64, // user defined class 'VR64AsmOperand'
  NumMatchClassKinds
};

}

static unsigned getDiagKindFromRegisterClass(MatchClassKind RegisterClass) {
  return MCTargetAsmParser::Match_InvalidOperand;
}

static MatchClassKind matchTokenString(StringRef Name) {
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_ADDR128Bit:
    return B == MCK_GR128Bit;

  case MCK_ADDR32Bit:
    switch (B) {
    default: return false;
    case MCK_GR32Bit: return true;
    case MCK_GRX32Bit: return true;
    }

  case MCK_ADDR64Bit:
    switch (B) {
    default: return false;
    case MCK_GR64Bit: return true;
    case MCK_AnyRegBit: return true;
    }

  case MCK_FP32Bit:
    return B == MCK_VR32Bit;

  case MCK_FP64Bit:
    switch (B) {
    default: return false;
    case MCK_Reg13: return true;
    case MCK_VR64Bit: return true;
    case MCK_AnyRegBit: return true;
    }

  case MCK_GR32Bit:
    return B == MCK_GRX32Bit;

  case MCK_GR64Bit:
    return B == MCK_AnyRegBit;

  case MCK_GRH32Bit:
    return B == MCK_GRX32Bit;

  case MCK_VF128Bit:
    switch (B) {
    default: return false;
    case MCK_Reg13: return true;
    case MCK_VR128Bit: return true;
    case MCK_AnyRegBit: return true;
    }

  case MCK_Reg13:
    return B == MCK_AnyRegBit;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  SystemZOperand &Operand = (SystemZOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken() && Kind <= MCK_LAST_TOKEN)
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'ADDR128' class
  case MCK_ADDR128:
    if (Operand.isADDR128())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'ADDR32' class
  case MCK_ADDR32:
    if (Operand.isADDR32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'ADDR64' class
  case MCK_ADDR64:
    if (Operand.isADDR64())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'AR32' class
  case MCK_AR32:
    if (Operand.isAR32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'AnyReg' class
  case MCK_AnyReg:
    if (Operand.isAnyReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDAddr32Disp12' class
  case MCK_BDAddr32Disp12:
    if (Operand.isBDAddr32Disp12())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDAddr32Disp20' class
  case MCK_BDAddr32Disp20:
    if (Operand.isBDAddr32Disp20())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDAddr64Disp12' class
  case MCK_BDAddr64Disp12:
    if (Operand.isBDAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDAddr64Disp20' class
  case MCK_BDAddr64Disp20:
    if (Operand.isBDAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDLAddr64Disp12Len4' class
  case MCK_BDLAddr64Disp12Len4:
    if (Operand.isBDLAddr64Disp12Len4())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDLAddr64Disp12Len8' class
  case MCK_BDLAddr64Disp12Len8:
    if (Operand.isBDLAddr64Disp12Len8())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDRAddr64Disp12' class
  case MCK_BDRAddr64Disp12:
    if (Operand.isBDRAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDVAddr64Disp12' class
  case MCK_BDVAddr64Disp12:
    if (Operand.isBDVAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDXAddr64Disp12' class
  case MCK_BDXAddr64Disp12:
    if (Operand.isBDXAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDXAddr64Disp20' class
  case MCK_BDXAddr64Disp20:
    if (Operand.isBDXAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'CR64' class
  case MCK_CR64:
    if (Operand.isCR64())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'FP128' class
  case MCK_FP128:
    if (Operand.isFP128())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'FP32' class
  case MCK_FP32:
    if (Operand.isFP32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'FP64' class
  case MCK_FP64:
    if (Operand.isFP64())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GR128' class
  case MCK_GR128:
    if (Operand.isGR128())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GR32' class
  case MCK_GR32:
    if (Operand.isGR32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GR64' class
  case MCK_GR64:
    if (Operand.isGR64())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GRH32' class
  case MCK_GRH32:
    if (Operand.isGRH32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GRX32' class
  case MCK_GRX32:
    if (Operand.isGRX32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'Imm' class
  case MCK_Imm:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRel12' class
  case MCK_PCRel12:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRel16' class
  case MCK_PCRel16:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRel24' class
  case MCK_PCRel24:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRel32' class
  case MCK_PCRel32:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRelTLS16' class
  case MCK_PCRelTLS16:
    if (Operand.isImmTLS())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRelTLS32' class
  case MCK_PCRelTLS32:
    if (Operand.isImmTLS())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'S16Imm' class
  case MCK_S16Imm:
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'S32Imm' class
  case MCK_S32Imm:
    if (Operand.isS32Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'S8Imm' class
  case MCK_S8Imm:
    if (Operand.isS8Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U12Imm' class
  case MCK_U12Imm:
    if (Operand.isU12Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U16Imm' class
  case MCK_U16Imm:
    if (Operand.isU16Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U1Imm' class
  case MCK_U1Imm:
    if (Operand.isU1Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U2Imm' class
  case MCK_U2Imm:
    if (Operand.isU2Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U32Imm' class
  case MCK_U32Imm:
    if (Operand.isU32Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U3Imm' class
  case MCK_U3Imm:
    if (Operand.isU3Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U48Imm' class
  case MCK_U48Imm:
    if (Operand.isU48Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U4Imm' class
  case MCK_U4Imm:
    if (Operand.isU4Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U6Imm' class
  case MCK_U6Imm:
    if (Operand.isU6Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U8Imm' class
  case MCK_U8Imm:
    if (Operand.isU8Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'VF128' class
  case MCK_VF128:
    if (Operand.isVF128())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'VR128' class
  case MCK_VR128:
    if (Operand.isVR128())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'VR32' class
  case MCK_VR32:
    if (Operand.isVR32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'VR64' class
  case MCK_VR64:
    if (Operand.isVR64())
      return MCTargetAsmParser::Match_Success;
    break;
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case SystemZ::R0L: OpKind = MCK_GR32Bit; break;
    case SystemZ::R1L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R2L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R3L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R4L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R5L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R6L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R7L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R8L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R9L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R10L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R11L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R12L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R13L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R14L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R15L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R0H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R1H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R2H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R3H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R4H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R5H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R6H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R7H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R8H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R9H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R10H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R11H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R12H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R13H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R14H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R15H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R0D: OpKind = MCK_GR64Bit; break;
    case SystemZ::R1D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R2D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R3D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R4D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R5D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R6D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R7D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R8D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R9D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R10D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R11D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R12D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R13D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R14D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R15D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R0Q: OpKind = MCK_GR128Bit; break;
    case SystemZ::R2Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R4Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R6Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R8Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R10Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R12Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R14Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::F0S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F1S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F2S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F3S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F4S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F5S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F6S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F7S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F8S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F9S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F10S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F11S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F12S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F13S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F14S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F15S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F0D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F1D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F2D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F3D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F4D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F5D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F6D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F7D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F8D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F9D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F10D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F11D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F12D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F13D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F14D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F15D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F16S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F17S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F18S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F19S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F20S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F21S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F22S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F23S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F24S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F25S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F26S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F27S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F28S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F29S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F30S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F31S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F16D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F17D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F18D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F19D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F20D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F21D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F22D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F23D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F24D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F25D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F26D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F27D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F28D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F29D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F30D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F31D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F0Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F1Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F4Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F5Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F8Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F9Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F12Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F13Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::V0: OpKind = MCK_VF128Bit; break;
    case SystemZ::V1: OpKind = MCK_VF128Bit; break;
    case SystemZ::V2: OpKind = MCK_VF128Bit; break;
    case SystemZ::V3: OpKind = MCK_VF128Bit; break;
    case SystemZ::V4: OpKind = MCK_VF128Bit; break;
    case SystemZ::V5: OpKind = MCK_VF128Bit; break;
    case SystemZ::V6: OpKind = MCK_VF128Bit; break;
    case SystemZ::V7: OpKind = MCK_VF128Bit; break;
    case SystemZ::V8: OpKind = MCK_VF128Bit; break;
    case SystemZ::V9: OpKind = MCK_VF128Bit; break;
    case SystemZ::V10: OpKind = MCK_VF128Bit; break;
    case SystemZ::V11: OpKind = MCK_VF128Bit; break;
    case SystemZ::V12: OpKind = MCK_VF128Bit; break;
    case SystemZ::V13: OpKind = MCK_VF128Bit; break;
    case SystemZ::V14: OpKind = MCK_VF128Bit; break;
    case SystemZ::V15: OpKind = MCK_VF128Bit; break;
    case SystemZ::V16: OpKind = MCK_VR128Bit; break;
    case SystemZ::V17: OpKind = MCK_VR128Bit; break;
    case SystemZ::V18: OpKind = MCK_VR128Bit; break;
    case SystemZ::V19: OpKind = MCK_VR128Bit; break;
    case SystemZ::V20: OpKind = MCK_VR128Bit; break;
    case SystemZ::V21: OpKind = MCK_VR128Bit; break;
    case SystemZ::V22: OpKind = MCK_VR128Bit; break;
    case SystemZ::V23: OpKind = MCK_VR128Bit; break;
    case SystemZ::V24: OpKind = MCK_VR128Bit; break;
    case SystemZ::V25: OpKind = MCK_VR128Bit; break;
    case SystemZ::V26: OpKind = MCK_VR128Bit; break;
    case SystemZ::V27: OpKind = MCK_VR128Bit; break;
    case SystemZ::V28: OpKind = MCK_VR128Bit; break;
    case SystemZ::V29: OpKind = MCK_VR128Bit; break;
    case SystemZ::V30: OpKind = MCK_VR128Bit; break;
    case SystemZ::V31: OpKind = MCK_VR128Bit; break;
    case SystemZ::CC: OpKind = MCK_CCRegs; break;
    case SystemZ::A0: OpKind = MCK_AR32Bit; break;
    case SystemZ::A1: OpKind = MCK_AR32Bit; break;
    case SystemZ::A2: OpKind = MCK_AR32Bit; break;
    case SystemZ::A3: OpKind = MCK_AR32Bit; break;
    case SystemZ::A4: OpKind = MCK_AR32Bit; break;
    case SystemZ::A5: OpKind = MCK_AR32Bit; break;
    case SystemZ::A6: OpKind = MCK_AR32Bit; break;
    case SystemZ::A7: OpKind = MCK_AR32Bit; break;
    case SystemZ::A8: OpKind = MCK_AR32Bit; break;
    case SystemZ::A9: OpKind = MCK_AR32Bit; break;
    case SystemZ::A10: OpKind = MCK_AR32Bit; break;
    case SystemZ::A11: OpKind = MCK_AR32Bit; break;
    case SystemZ::A12: OpKind = MCK_AR32Bit; break;
    case SystemZ::A13: OpKind = MCK_AR32Bit; break;
    case SystemZ::A14: OpKind = MCK_AR32Bit; break;
    case SystemZ::A15: OpKind = MCK_AR32Bit; break;
    case SystemZ::C0: OpKind = MCK_CR64Bit; break;
    case SystemZ::C1: OpKind = MCK_CR64Bit; break;
    case SystemZ::C2: OpKind = MCK_CR64Bit; break;
    case SystemZ::C3: OpKind = MCK_CR64Bit; break;
    case SystemZ::C4: OpKind = MCK_CR64Bit; break;
    case SystemZ::C5: OpKind = MCK_CR64Bit; break;
    case SystemZ::C6: OpKind = MCK_CR64Bit; break;
    case SystemZ::C7: OpKind = MCK_CR64Bit; break;
    case SystemZ::C8: OpKind = MCK_CR64Bit; break;
    case SystemZ::C9: OpKind = MCK_CR64Bit; break;
    case SystemZ::C10: OpKind = MCK_CR64Bit; break;
    case SystemZ::C11: OpKind = MCK_CR64Bit; break;
    case SystemZ::C12: OpKind = MCK_CR64Bit; break;
    case SystemZ::C13: OpKind = MCK_CR64Bit; break;
    case SystemZ::C14: OpKind = MCK_CR64Bit; break;
    case SystemZ::C15: OpKind = MCK_CR64Bit; break;
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
  case MCK_CCRegs: return "MCK_CCRegs";
  case MCK_ADDR128Bit: return "MCK_ADDR128Bit";
  case MCK_FP128Bit: return "MCK_FP128Bit";
  case MCK_GR128Bit: return "MCK_GR128Bit";
  case MCK_ADDR32Bit: return "MCK_ADDR32Bit";
  case MCK_ADDR64Bit: return "MCK_ADDR64Bit";
  case MCK_AR32Bit: return "MCK_AR32Bit";
  case MCK_CR64Bit: return "MCK_CR64Bit";
  case MCK_FP32Bit: return "MCK_FP32Bit";
  case MCK_FP64Bit: return "MCK_FP64Bit";
  case MCK_GR32Bit: return "MCK_GR32Bit";
  case MCK_GR64Bit: return "MCK_GR64Bit";
  case MCK_GRH32Bit: return "MCK_GRH32Bit";
  case MCK_VF128Bit: return "MCK_VF128Bit";
  case MCK_Reg13: return "MCK_Reg13";
  case MCK_GRX32Bit: return "MCK_GRX32Bit";
  case MCK_VR128Bit: return "MCK_VR128Bit";
  case MCK_VR32Bit: return "MCK_VR32Bit";
  case MCK_VR64Bit: return "MCK_VR64Bit";
  case MCK_AnyRegBit: return "MCK_AnyRegBit";
  case MCK_ADDR128: return "MCK_ADDR128";
  case MCK_ADDR32: return "MCK_ADDR32";
  case MCK_ADDR64: return "MCK_ADDR64";
  case MCK_AR32: return "MCK_AR32";
  case MCK_AnyReg: return "MCK_AnyReg";
  case MCK_BDAddr32Disp12: return "MCK_BDAddr32Disp12";
  case MCK_BDAddr32Disp20: return "MCK_BDAddr32Disp20";
  case MCK_BDAddr64Disp12: return "MCK_BDAddr64Disp12";
  case MCK_BDAddr64Disp20: return "MCK_BDAddr64Disp20";
  case MCK_BDLAddr64Disp12Len4: return "MCK_BDLAddr64Disp12Len4";
  case MCK_BDLAddr64Disp12Len8: return "MCK_BDLAddr64Disp12Len8";
  case MCK_BDRAddr64Disp12: return "MCK_BDRAddr64Disp12";
  case MCK_BDVAddr64Disp12: return "MCK_BDVAddr64Disp12";
  case MCK_BDXAddr64Disp12: return "MCK_BDXAddr64Disp12";
  case MCK_BDXAddr64Disp20: return "MCK_BDXAddr64Disp20";
  case MCK_CR64: return "MCK_CR64";
  case MCK_FP128: return "MCK_FP128";
  case MCK_FP32: return "MCK_FP32";
  case MCK_FP64: return "MCK_FP64";
  case MCK_GR128: return "MCK_GR128";
  case MCK_GR32: return "MCK_GR32";
  case MCK_GR64: return "MCK_GR64";
  case MCK_GRH32: return "MCK_GRH32";
  case MCK_GRX32: return "MCK_GRX32";
  case MCK_Imm: return "MCK_Imm";
  case MCK_PCRel12: return "MCK_PCRel12";
  case MCK_PCRel16: return "MCK_PCRel16";
  case MCK_PCRel24: return "MCK_PCRel24";
  case MCK_PCRel32: return "MCK_PCRel32";
  case MCK_PCRelTLS16: return "MCK_PCRelTLS16";
  case MCK_PCRelTLS32: return "MCK_PCRelTLS32";
  case MCK_S16Imm: return "MCK_S16Imm";
  case MCK_S32Imm: return "MCK_S32Imm";
  case MCK_S8Imm: return "MCK_S8Imm";
  case MCK_U12Imm: return "MCK_U12Imm";
  case MCK_U16Imm: return "MCK_U16Imm";
  case MCK_U1Imm: return "MCK_U1Imm";
  case MCK_U2Imm: return "MCK_U2Imm";
  case MCK_U32Imm: return "MCK_U32Imm";
  case MCK_U3Imm: return "MCK_U3Imm";
  case MCK_U48Imm: return "MCK_U48Imm";
  case MCK_U4Imm: return "MCK_U4Imm";
  case MCK_U6Imm: return "MCK_U6Imm";
  case MCK_U8Imm: return "MCK_U8Imm";
  case MCK_VF128: return "MCK_VF128";
  case MCK_VR128: return "MCK_VR128";
  case MCK_VR32: return "MCK_VR32";
  case MCK_VR64: return "MCK_VR64";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
uint64_t SystemZAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  if ((FB[SystemZ::FeatureDistinctOps]))
    Features |= Feature_FeatureDistinctOps;
  if ((FB[SystemZ::FeatureFastSerialization]))
    Features |= Feature_FeatureFastSerialization;
  if ((FB[SystemZ::FeatureFPExtension]))
    Features |= Feature_FeatureFPExtension;
  if ((FB[SystemZ::FeatureHighWord]))
    Features |= Feature_FeatureHighWord;
  if ((FB[SystemZ::FeatureInterlockedAccess1]))
    Features |= Feature_FeatureInterlockedAccess1;
  if ((FB[SystemZ::FeatureLoadStoreOnCond]))
    Features |= Feature_FeatureLoadStoreOnCond;
  if ((FB[SystemZ::FeaturePopulationCount]))
    Features |= Feature_FeaturePopulationCount;
  if ((FB[SystemZ::FeatureMessageSecurityAssist3]))
    Features |= Feature_FeatureMessageSecurityAssist3;
  if ((FB[SystemZ::FeatureMessageSecurityAssist4]))
    Features |= Feature_FeatureMessageSecurityAssist4;
  if ((FB[SystemZ::FeatureResetReferenceBitsMultiple]))
    Features |= Feature_FeatureResetReferenceBitsMultiple;
  if ((FB[SystemZ::FeatureExecutionHint]))
    Features |= Feature_FeatureExecutionHint;
  if ((FB[SystemZ::FeatureLoadAndTrap]))
    Features |= Feature_FeatureLoadAndTrap;
  if ((FB[SystemZ::FeatureMiscellaneousExtensions]))
    Features |= Feature_FeatureMiscellaneousExtensions;
  if ((FB[SystemZ::FeatureProcessorAssist]))
    Features |= Feature_FeatureProcessorAssist;
  if ((FB[SystemZ::FeatureTransactionalExecution]))
    Features |= Feature_FeatureTransactionalExecution;
  if ((FB[SystemZ::FeatureDFPZonedConversion]))
    Features |= Feature_FeatureDFPZonedConversion;
  if ((FB[SystemZ::FeatureEnhancedDAT2]))
    Features |= Feature_FeatureEnhancedDAT2;
  if ((FB[SystemZ::FeatureLoadAndZeroRightmostByte]))
    Features |= Feature_FeatureLoadAndZeroRightmostByte;
  if ((FB[SystemZ::FeatureLoadStoreOnCond2]))
    Features |= Feature_FeatureLoadStoreOnCond2;
  if ((FB[SystemZ::FeatureMessageSecurityAssist5]))
    Features |= Feature_FeatureMessageSecurityAssist5;
  if ((FB[SystemZ::FeatureDFPPackedConversion]))
    Features |= Feature_FeatureDFPPackedConversion;
  if ((FB[SystemZ::FeatureVector]))
    Features |= Feature_FeatureVector;
  if ((FB[SystemZ::FeatureMiscellaneousExtensions2]))
    Features |= Feature_FeatureMiscellaneousExtensions2;
  if ((FB[SystemZ::FeatureGuardedStorage]))
    Features |= Feature_FeatureGuardedStorage;
  if ((FB[SystemZ::FeatureMessageSecurityAssist7]))
    Features |= Feature_FeatureMessageSecurityAssist7;
  if ((FB[SystemZ::FeatureMessageSecurityAssist8]))
    Features |= Feature_FeatureMessageSecurityAssist8;
  if ((FB[SystemZ::FeatureVectorEnhancements1]))
    Features |= Feature_FeatureVectorEnhancements1;
  if ((FB[SystemZ::FeatureVectorPackedDecimal]))
    Features |= Feature_FeatureVectorPackedDecimal;
  if ((FB[SystemZ::FeatureInsertReferenceBitsMultiple]))
    Features |= Feature_FeatureInsertReferenceBitsMultiple;
  return Features;
}

static const char *const MnemonicTable =
    "\001a\002ad\003adb\004adbr\003adr\004adtr\005adtra\002ae\003aeb\004aebr"
    "\003aer\003afi\002ag\003agf\004agfi\004agfr\003agh\004aghi\005aghik\003"
    "agr\004agrk\004agsi\002ah\005ahhhr\005ahhlr\003ahi\004ahik\003ahy\003ai"
    "h\002al\003alc\004alcg\005alcgr\004alcr\004alfi\003alg\004algf\005algfi"
    "\005algfr\007alghsik\004algr\005algrk\005algsi\006alhhhr\006alhhlr\006a"
    "lhsik\003alr\004alrk\004alsi\005alsih\006alsihn\003aly\002ap\002ar\003a"
    "rk\003asi\002au\003aur\002aw\003awr\004axbr\003axr\004axtr\005axtra\002"
    "ay\001b\004bakr\003bal\004balr\003bas\004basr\005bassm\002bc\003bcr\003"
    "bct\004bctg\005bctgr\004bctr\002be\003ber\002bh\003bhe\004bher\003bhr\002"
    "bi\003bic\003bie\003bih\004bihe\003bil\004bile\004bilh\003bim\004bine\004"
    "binh\005binhe\004binl\005binle\005binlh\004binm\004bino\004binp\004binz"
    "\003bio\003bip\003biz\002bl\003ble\004bler\003blh\004blhr\003blr\002bm\003"
    "bmr\003bne\004bner\003bnh\004bnhe\005bnher\004bnhr\003bnl\004bnle\005bn"
    "ler\004bnlh\005bnlhr\004bnlr\003bnm\004bnmr\003bno\004bnor\003bnp\004bn"
    "pr\003bnz\004bnzr\002bo\003bor\002bp\003bpp\003bpr\004bprp\002br\004bra"
    "s\005brasl\003brc\004brcl\004brct\005brctg\005brcth\004brxh\005brxhg\005"
    "brxle\005brxlg\003bsa\003bsg\003bsm\003bxh\004bxhg\004bxle\005bxleg\002"
    "bz\003bzr\001c\002cd\003cdb\004cdbr\005cdfbr\006cdfbra\004cdfr\005cdftr"
    "\005cdgbr\006cdgbra\004cdgr\005cdgtr\006cdgtra\006cdlfbr\006cdlftr\006c"
    "dlgbr\006cdlgtr\004cdpt\003cdr\003cds\004cdsg\005cdstr\004cdsy\004cdtr\005"
    "cdutr\004cdzt\002ce\003ceb\004cebr\005cedtr\005cefbr\006cefbra\004cefr\005"
    "cegbr\006cegbra\004cegr\006celfbr\006celgbr\003cer\005cextr\003cfc\005c"
    "fdbr\006cfdbra\004cfdr\005cfdtr\005cfebr\006cfebra\004cfer\003cfi\005cf"
    "xbr\006cfxbra\004cfxr\005cfxtr\002cg\005cgdbr\006cgdbra\004cgdr\005cgdt"
    "r\006cgdtra\005cgebr\006cgebra\004cger\003cgf\004cgfi\004cgfr\005cgfrl\003"
    "cgh\004cghi\005cghrl\005cghsi\004cgib\005cgibe\005cgibh\006cgibhe\005cg"
    "ibl\006cgible\006cgiblh\006cgibne\006cgibnh\007cgibnhe\006cgibnl\007cgi"
    "bnle\007cgibnlh\004cgij\005cgije\005cgijh\006cgijhe\005cgijl\006cgijle\006"
    "cgijlh\006cgijne\006cgijnh\007cgijnhe\006cgijnl\007cgijnle\007cgijnlh\004"
    "cgit\005cgite\005cgith\006cgithe\005cgitl\006cgitle\006cgitlh\006cgitne"
    "\006cgitnh\007cgitnhe\006cgitnl\007cgitnle\007cgitnlh\003cgr\004cgrb\005"
    "cgrbe\005cgrbh\006cgrbhe\005cgrbl\006cgrble\006cgrblh\006cgrbne\006cgrb"
    "nh\007cgrbnhe\006cgrbnl\007cgrbnle\007cgrbnlh\004cgrj\005cgrje\005cgrjh"
    "\006cgrjhe\005cgrjl\006cgrjle\006cgrjlh\006cgrjne\006cgrjnh\007cgrjnhe\006"
    "cgrjnl\007cgrjnle\007cgrjnlh\004cgrl\004cgrt\005cgrte\005cgrth\006cgrth"
    "e\005cgrtl\006cgrtle\006cgrtlh\006cgrtne\006cgrtnh\007cgrtnhe\006cgrtnl"
    "\007cgrtnle\007cgrtnlh\005cgxbr\006cgxbra\004cgxr\005cgxtr\006cgxtra\002"
    "ch\003chf\004chhr\005chhsi\003chi\004chlr\004chrl\004chsi\003chy\003cib"
    "\004cibe\004cibh\005cibhe\004cibl\005cible\005ciblh\005cibne\005cibnh\006"
    "cibnhe\005cibnl\006cibnle\006cibnlh\003cih\003cij\004cije\004cijh\005ci"
    "jhe\004cijl\005cijle\005cijlh\005cijne\005cijnh\006cijnhe\005cijnl\006c"
    "ijnle\006cijnlh\003cit\004cite\004cith\005cithe\004citl\005citle\005cit"
    "lh\005citne\005citnh\006citnhe\005citnl\006citnle\006citnlh\004cksm\002"
    "cl\003clc\004clcl\005clcle\005clclu\006clfdbr\006clfdtr\006clfebr\006cl"
    "fhsi\004clfi\005clfit\006clfite\006clfith\007clfithe\006clfitl\007clfit"
    "le\007clfitlh\007clfitne\007clfitnh\010clfitnhe\007clfitnl\010clfitnle\010"
    "clfitnlh\006clfxbr\006clfxtr\003clg\006clgdbr\006clgdtr\006clgebr\004cl"
    "gf\005clgfi\005clgfr\006clgfrl\006clghrl\006clghsi\005clgib\006clgibe\006"
    "clgibh\007clgibhe\006clgibl\007clgible\007clgiblh\007clgibne\007clgibnh"
    "\010clgibnhe\007clgibnl\010clgibnle\010clgibnlh\005clgij\006clgije\006c"
    "lgijh\007clgijhe\006clgijl\007clgijle\007clgijlh\007clgijne\007clgijnh\010"
    "clgijnhe\007clgijnl\010clgijnle\010clgijnlh\005clgit\006clgite\006clgit"
    "h\007clgithe\006clgitl\007clgitle\007clgitlh\007clgitne\007clgitnh\010c"
    "lgitnhe\007clgitnl\010clgitnle\010clgitnlh\004clgr\005clgrb\006clgrbe\006"
    "clgrbh\007clgrbhe\006clgrbl\007clgrble\007clgrblh\007clgrbne\007clgrbnh"
    "\010clgrbnhe\007clgrbnl\010clgrbnle\010clgrbnlh\005clgrj\006clgrje\006c"
    "lgrjh\007clgrjhe\006clgrjl\007clgrjle\007clgrjlh\007clgrjne\007clgrjnh\010"
    "clgrjnhe\007clgrjnl\010clgrjnle\010clgrjnlh\005clgrl\005clgrt\006clgrte"
    "\006clgrth\007clgrthe\006clgrtl\007clgrtle\007clgrtlh\007clgrtne\007clg"
    "rtnh\010clgrtnhe\007clgrtnl\010clgrtnle\010clgrtnlh\004clgt\005clgte\005"
    "clgth\006clgthe\005clgtl\006clgtle\006clgtlh\006clgtne\006clgtnh\007clg"
    "tnhe\006clgtnl\007clgtnle\007clgtnlh\006clgxbr\006clgxtr\004clhf\005clh"
    "hr\006clhhsi\005clhlr\005clhrl\003cli\004clib\005clibe\005clibh\006clib"
    "he\005clibl\006clible\006cliblh\006clibne\006clibnh\007clibnhe\006clibn"
    "l\007clibnle\007clibnlh\004clih\004clij\005clije\005clijh\006clijhe\005"
    "clijl\006clijle\006clijlh\006clijne\006clijnh\007clijnhe\006clijnl\007c"
    "lijnle\007clijnlh\004cliy\003clm\004clmh\004clmy\003clr\004clrb\005clrb"
    "e\005clrbh\006clrbhe\005clrbl\006clrble\006clrblh\006clrbne\006clrbnh\007"
    "clrbnhe\006clrbnl\007clrbnle\007clrbnlh\004clrj\005clrje\005clrjh\006cl"
    "rjhe\005clrjl\006clrjle\006clrjlh\006clrjne\006clrjnh\007clrjnhe\006clr"
    "jnl\007clrjnle\007clrjnlh\004clrl\004clrt\005clrte\005clrth\006clrthe\005"
    "clrtl\006clrtle\006clrtlh\006clrtne\006clrtnh\007clrtnhe\006clrtnl\007c"
    "lrtnle\007clrtnlh\004clst\003clt\004clte\004clth\005clthe\004cltl\005cl"
    "tle\005cltlh\005cltne\005cltnh\006cltnhe\005cltnl\006cltnle\006cltnlh\003"
    "cly\005cmpsc\002cp\004cpdt\005cpsdr\004cpxt\004cpya\002cr\003crb\004crb"
    "e\004crbh\005crbhe\004crbl\005crble\005crblh\005crbne\005crbnh\006crbnh"
    "e\005crbnl\006crbnle\006crbnlh\005crdte\003crj\004crje\004crjh\005crjhe"
    "\004crjl\005crjle\005crjlh\005crjne\005crjnh\006crjnhe\005crjnl\006crjn"
    "le\006crjnlh\003crl\003crt\004crte\004crth\005crthe\004crtl\005crtle\005"
    "crtlh\005crtne\005crtnh\006crtnhe\005crtnl\006crtnle\006crtnlh\002cs\004"
    "csch\005csdtr\003csg\003csp\004cspg\004csst\005csxtr\003csy\004cu12\004"
    "cu14\004cu21\004cu24\004cu41\004cu42\005cudtr\004cuse\005cutfu\005cuutf"
    "\005cuxtr\003cvb\004cvbg\004cvby\003cvd\004cvdg\004cvdy\004cxbr\005cxfb"
    "r\006cxfbra\004cxfr\005cxftr\005cxgbr\006cxgbra\004cxgr\005cxgtr\006cxg"
    "tra\006cxlfbr\006cxlftr\006cxlgbr\006cxlgtr\004cxpt\003cxr\005cxstr\004"
    "cxtr\005cxutr\004cxzt\002cy\004czdt\004czxt\001d\002dd\003ddb\004ddbr\003"
    "ddr\004ddtr\005ddtra\002de\003deb\004debr\003der\004diag\005didbr\005di"
    "ebr\002dl\003dlg\004dlgr\003dlr\002dp\002dr\003dsg\004dsgf\005dsgfr\004"
    "dsgr\004dxbr\003dxr\004dxtr\005dxtra\003ear\004ecag\005ecctr\005ecpga\004"
    "ectg\002ed\004edmk\005eedtr\005eextr\004efpc\005epair\004epar\005epctr\004"
    "epsw\004ereg\005eregg\005esair\004esar\005esdtr\004esea\004esta\005esxt"
    "r\004etnd\002ex\004exrl\005fidbr\006fidbra\004fidr\005fidtr\005fiebr\006"
    "fiebra\004fier\005fixbr\006fixbra\004fixr\005fixtr\005flogr\003hdr\003h"
    "er\004hsch\003iac\002ic\003icm\004icmh\004icmy\003icy\004idte\005iedtr\005"
    "iextr\004iihf\004iihh\004iihl\004iilf\004iilh\004iill\003ipk\003ipm\004"
    "ipte\004irbm\004iske\004ivsk\001j\002je\002jg\003jge\003jgh\004jghe\003"
    "jgl\004jgle\004jglh\003jgm\004jgne\004jgnh\005jgnhe\004jgnl\005jgnle\005"
    "jgnlh\004jgnm\004jgno\004jgnp\004jgnz\003jgo\003jgp\003jgz\002jh\003jhe"
    "\002jl\003jle\003jlh\002jm\003jne\003jnh\004jnhe\003jnl\004jnle\004jnlh"
    "\003jnm\003jno\003jnp\003jnz\002jo\002jp\002jz\003kdb\004kdbr\004kdtr\003"
    "keb\004kebr\004kimd\004klmd\002km\003kma\004kmac\003kmc\005kmctr\003kmf"
    "\003kmo\004kxbr\004kxtr\001l\002la\003laa\004laag\004laal\005laalg\003l"
    "ae\004laey\003lam\004lamy\003lan\004lang\003lao\004laog\004larl\004lasp"
    "\003lat\003lax\004laxg\003lay\002lb\003lbh\003lbr\004lcbb\005lcctl\005l"
    "cdbr\005lcdfr\004lcdr\005lcebr\004lcer\005lcgfr\004lcgr\003lcr\004lctl\005"
    "lctlg\005lcxbr\004lcxr\002ld\003lde\004ldeb\005ldebr\004lder\005ldetr\004"
    "ldgr\003ldr\005ldxbr\006ldxbra\004ldxr\005ldxtr\003ldy\002le\005ledbr\006"
    "ledbra\004ledr\005ledtr\003ler\005lexbr\006lexbra\004lexr\003ley\004lfa"
    "s\003lfh\005lfhat\004lfpc\002lg\004lgat\003lgb\004lgbr\004lgdr\003lgf\004"
    "lgfi\004lgfr\005lgfrl\003lgg\003lgh\004lghi\004lghr\005lghrl\003lgr\004"
    "lgrl\004lgsc\002lh\003lhh\003lhi\003lhr\004lhrl\003lhy\003llc\004llch\004"
    "llcr\004llgc\005llgcr\004llgf\006llgfat\005llgfr\006llgfrl\006llgfsg\004"
    "llgh\005llghr\006llghrl\004llgt\006llgtat\005llgtr\003llh\004llhh\004ll"
    "hr\005llhrl\005llihf\005llihh\005llihl\005llilf\005llilh\005llill\006ll"
    "zrgf\002lm\003lmd\003lmg\003lmh\003lmy\005lndbr\005lndfr\004lndr\005lne"
    "br\004lner\005lngfr\004lngr\003lnr\005lnxbr\004lnxr\003loc\004loce\005l"
    "ocfh\006locfhe\006locfhh\007locfhhe\006locfhl\007locfhle\007locfhlh\006"
    "locfhm\007locfhne\007locfhnh\010locfhnhe\007locfhnl\010locfhnle\010locf"
    "hnlh\007locfhnm\007locfhno\007locfhnp\007locfhnz\006locfho\006locfhp\006"
    "locfhr\007locfhre\007locfhrh\010locfhrhe\007locfhrl\010locfhrle\010locf"
    "hrlh\007locfhrm\010locfhrne\010locfhrnh\tlocfhrnhe\010locfhrnl\tlocfhrn"
    "le\tlocfhrnlh\010locfhrnm\010locfhrno\010locfhrnp\010locfhrnz\007locfhr"
    "o\007locfhrp\007locfhrz\006locfhz\004locg\005locge\005locgh\006locghe\006"
    "locghi\007locghie\007locghih\010locghihe\007locghil\010locghile\010locg"
    "hilh\007locghim\010locghine\010locghinh\tlocghinhe\010locghinl\tlocghin"
    "le\tlocghinlh\010locghinm\010locghino\010locghinp\010locghinz\007locghi"
    "o\007locghip\007locghiz\005locgl\006locgle\006locglh\005locgm\006locgne"
    "\006locgnh\007locgnhe\006locgnl\007locgnle\007locgnlh\006locgnm\006locg"
    "no\006locgnp\006locgnz\005locgo\005locgp\005locgr\006locgre\006locgrh\007"
    "locgrhe\006locgrl\007locgrle\007locgrlh\006locgrm\007locgrne\007locgrnh"
    "\010locgrnhe\007locgrnl\010locgrnle\010locgrnlh\007locgrnm\007locgrno\007"
    "locgrnp\007locgrnz\006locgro\006locgrp\006locgrz\005locgz\004loch\005lo"
    "che\006lochhi\007lochhie\007lochhih\010lochhihe\007lochhil\010lochhile\010"
    "lochhilh\007lochhim\010lochhine\010lochhinh\tlochhinhe\010lochhinl\tloc"
    "hhinle\tlochhinlh\010lochhinm\010lochhino\010lochhinp\010lochhinz\007lo"
    "chhio\007lochhip\007lochhiz\005lochi\006lochie\006lochih\007lochihe\006"
    "lochil\007lochile\007lochilh\006lochim\007lochine\007lochinh\010lochinh"
    "e\007lochinl\010lochinle\010lochinlh\007lochinm\007lochino\007lochinp\007"
    "lochinz\006lochio\006lochip\006lochiz\004locl\005locle\005loclh\004locm"
    "\005locne\005locnh\006locnhe\005locnl\006locnle\006locnlh\005locnm\005l"
    "ocno\005locnp\005locnz\004loco\004locp\004locr\005locre\005locrh\006loc"
    "rhe\005locrl\006locrle\006locrlh\005locrm\006locrne\006locrnh\007locrnh"
    "e\006locrnl\007locrnle\007locrnlh\006locrnm\006locrno\006locrnp\006locr"
    "nz\005locro\005locrp\005locrz\004locz\005lpctl\003lpd\005lpdbr\005lpdfr"
    "\004lpdg\004lpdr\005lpebr\004lper\005lpgfr\004lpgr\003lpp\003lpq\003lpr"
    "\004lpsw\005lpswe\005lptea\005lpxbr\004lpxr\002lr\003lra\004lrag\004lra"
    "y\004lrdr\004lrer\003lrl\003lrv\004lrvg\005lrvgr\004lrvh\004lrvr\005lsc"
    "tl\002lt\005ltdbr\004ltdr\005ltdtr\005ltebr\004lter\003ltg\004ltgf\005l"
    "tgfr\004ltgr\003ltr\005ltxbr\004ltxr\005ltxtr\004lura\005lurag\003lxd\004"
    "lxdb\005lxdbr\004lxdr\005lxdtr\003lxe\004lxeb\005lxebr\004lxer\003lxr\002"
    "ly\004lzdr\004lzer\004lzrf\004lzrg\004lzxr\001m\003mad\004madb\005madbr"
    "\004madr\003mae\004maeb\005maebr\004maer\003may\004mayh\005mayhr\004may"
    "l\005maylr\004mayr\002mc\002md\003mdb\004mdbr\003mde\004mdeb\005mdebr\004"
    "mder\003mdr\004mdtr\005mdtra\002me\003mee\004meeb\005meebr\004meer\003m"
    "er\003mfy\002mg\003mgh\004mghi\004mgrk\002mh\003mhi\003mhy\002ml\003mlg"
    "\004mlgr\003mlr\002mp\002mr\002ms\003msc\004msch\003msd\004msdb\005msdb"
    "r\004msdr\003mse\004mseb\005msebr\004mser\004msfi\003msg\004msgc\004msg"
    "f\005msgfi\005msgfr\004msgr\006msgrkc\003msr\005msrkc\004msta\003msy\003"
    "mvc\005mvcdk\005mvcin\004mvck\004mvcl\005mvcle\005mvclu\005mvcos\004mvc"
    "p\004mvcs\005mvcsk\005mvghi\005mvhhi\004mvhi\003mvi\004mviy\003mvn\003m"
    "vo\004mvpg\004mvst\003mvz\004mxbr\003mxd\004mxdb\005mxdbr\004mxdr\003mx"
    "r\004mxtr\005mxtra\002my\003myh\004myhr\003myl\004mylr\003myr\001n\002n"
    "c\002ng\003ngr\004ngrk\002ni\004niai\004nihf\004nihh\004nihl\004nilf\004"
    "nilh\004nill\003niy\003nop\004nopr\002nr\003nrk\005ntstg\002ny\001o\002"
    "oc\002og\003ogr\004ogrk\002oi\004oihf\004oihh\004oihl\004oilf\004oilh\004"
    "oill\003oiy\002or\003ork\002oy\004pack\004palb\002pc\003pcc\005pckmo\003"
    "pfd\005pfdrl\004pfmf\004pfpo\004pgin\005pgout\003pka\003pku\003plo\006p"
    "opcnt\003ppa\004ppno\002pr\004prno\002pt\003ptf\004ptff\003pti\004ptlb\005"
    "qadtr\005qaxtr\005qctri\003qsi\004rchp\005risbg\006risbgn\006risbhg\006"
    "risblg\003rll\004rllg\005rnsbg\005rosbg\002rp\004rrbe\004rrbm\005rrdtr\005"
    "rrxtr\004rsch\005rxsbg\001s\003sac\004sacf\003sal\005sam24\005sam31\005"
    "sam64\003sar\005scctr\004schm\003sck\004sckc\005sckpf\002sd\003sdb\004s"
    "dbr\003sdr\004sdtr\005sdtra\002se\003seb\004sebr\003ser\005sfasr\004sfp"
    "c\002sg\003sgf\004sgfr\003sgh\003sgr\004sgrk\002sh\005shhhr\005shhlr\003"
    "shy\003sie\004siga\004sigp\002sl\003sla\004slag\004slak\003slb\004slbg\005"
    "slbgr\004slbr\004slda\004sldl\004sldt\004slfi\003slg\004slgf\005slgfi\005"
    "slgfr\004slgr\005slgrk\006slhhhr\006slhhlr\003sll\004sllg\004sllk\003sl"
    "r\004slrk\004slxt\003sly\002sp\005spctr\004spka\003spm\003spt\003spx\003"
    "sqd\004sqdb\005sqdbr\004sqdr\003sqe\004sqeb\005sqebr\004sqer\005sqxbr\004"
    "sqxr\002sr\003sra\004srag\004srak\004srda\004srdl\004srdt\003srk\003srl"
    "\004srlg\004srlk\004srnm\005srnmb\005srnmt\003srp\004srst\005srstu\004s"
    "rxt\005ssair\004ssar\004ssch\004sske\003ssm\002st\004stam\005stamy\004s"
    "tap\003stc\004stch\004stck\005stckc\005stcke\005stckf\004stcm\005stcmh\005"
    "stcmy\005stcps\005stcrw\005stctg\005stctl\004stcy\003std\004stdy\003ste"
    "\004stey\004stfh\004stfl\005stfle\005stfpc\003stg\005stgrl\005stgsc\003"
    "sth\004sthh\005sthrl\004sthy\005stidp\003stm\004stmg\004stmh\004stmy\005"
    "stnsm\004stoc\005stoce\006stocfh\007stocfhe\007stocfhh\010stocfhhe\007s"
    "tocfhl\010stocfhle\010stocfhlh\007stocfhm\010stocfhne\010stocfhnh\tstoc"
    "fhnhe\010stocfhnl\tstocfhnle\tstocfhnlh\010stocfhnm\010stocfhno\010stoc"
    "fhnp\010stocfhnz\007stocfho\007stocfhp\007stocfhz\005stocg\006stocge\006"
    "stocgh\007stocghe\006stocgl\007stocgle\007stocglh\006stocgm\007stocgne\007"
    "stocgnh\010stocgnhe\007stocgnl\010stocgnle\010stocgnlh\007stocgnm\007st"
    "ocgno\007stocgnp\007stocgnz\006stocgo\006stocgp\006stocgz\005stoch\006s"
    "toche\005stocl\006stocle\006stoclh\005stocm\006stocne\006stocnh\007stoc"
    "nhe\006stocnl\007stocnle\007stocnlh\006stocnm\006stocno\006stocnp\006st"
    "ocnz\005stoco\005stocp\005stocz\005stosm\004stpq\004stpt\004stpx\005str"
    "ag\004strl\004strv\005strvg\005strvh\005stsch\004stsi\005stura\005sturg"
    "\003sty\002su\003sur\003svc\002sw\003swr\004sxbr\003sxr\004sxtr\005sxtr"
    "a\002sy\006tabort\003tam\003tar\002tb\004tbdr\005tbedr\006tbegin\007tbe"
    "ginc\004tcdb\004tceb\004tcxb\005tdcdt\005tdcet\005tdcxt\005tdgdt\005tdg"
    "et\005tdgxt\004tend\005thder\004thdr\002tm\003tmh\004tmhh\004tmhl\003tm"
    "l\004tmlh\004tmll\003tmy\002tp\003tpi\005tprot\002tr\005trace\005tracg\005"
    "trap2\005trap4\003tre\004troo\004trot\003trt\004trte\004trto\004trtr\005"
    "trtre\004trtt\002ts\004tsch\004unpk\005unpka\005unpku\003upt\002va\003v"
    "ab\003vac\004vacc\005vaccb\005vaccc\006vacccq\005vaccf\005vaccg\005vacc"
    "h\005vaccq\004vacq\003vaf\003vag\003vah\003vap\003vaq\004vavg\005vavgb\005"
    "vavgf\005vavgg\005vavgh\005vavgl\006vavglb\006vavglf\006vavglg\006vavgl"
    "h\006vbperm\004vcdg\005vcdgb\005vcdlg\006vcdlgb\004vceq\005vceqb\006vce"
    "qbs\005vceqf\006vceqfs\005vceqg\006vceqgs\005vceqh\006vceqhs\004vcgd\005"
    "vcgdb\003vch\004vchb\005vchbs\004vchf\005vchfs\004vchg\005vchgs\004vchh"
    "\005vchhs\004vchl\005vchlb\006vchlbs\005vchlf\006vchlfs\005vchlg\006vch"
    "lgs\005vchlh\006vchlhs\005vcksm\005vclgd\006vclgdb\004vclz\005vclzb\005"
    "vclzf\005vclzg\005vclzh\003vcp\004vctz\005vctzb\005vctzf\005vctzg\005vc"
    "tzh\004vcvb\005vcvbg\004vcvd\005vcvdg\003vdp\003vec\004vecb\004vecf\004"
    "vecg\004vech\004vecl\005veclb\005veclf\005veclg\005veclh\005verim\006ve"
    "rimb\006verimf\006verimg\006verimh\005verll\006verllb\006verllf\006verl"
    "lg\006verllh\006verllv\007verllvb\007verllvf\007verllvg\007verllvh\004v"
    "esl\005veslb\005veslf\005veslg\005veslh\005veslv\006veslvb\006veslvf\006"
    "veslvg\006veslvh\005vesra\006vesrab\006vesraf\006vesrag\006vesrah\006ve"
    "srav\007vesravb\007vesravf\007vesravg\007vesravh\005vesrl\006vesrlb\006"
    "vesrlf\006vesrlg\006vesrlh\006vesrlv\007vesrlvb\007vesrlvf\007vesrlvg\007"
    "vesrlvh\003vfa\005vfadb\004vfae\005vfaeb\006vfaebs\005vfaef\006vfaefs\005"
    "vfaeh\006vfaehs\006vfaezb\007vfaezbs\006vfaezf\007vfaezfs\006vfaezh\007"
    "vfaezhs\005vfasb\004vfce\006vfcedb\007vfcedbs\006vfcesb\007vfcesbs\004v"
    "fch\006vfchdb\007vfchdbs\005vfche\007vfchedb\010vfchedbs\007vfchesb\010"
    "vfchesbs\006vfchsb\007vfchsbs\003vfd\005vfddb\005vfdsb\004vfee\005vfeeb"
    "\006vfeebs\005vfeef\006vfeefs\005vfeeh\006vfeehs\006vfeezb\007vfeezbs\006"
    "vfeezf\007vfeezfs\006vfeezh\007vfeezhs\005vfene\006vfeneb\007vfenebs\006"
    "vfenef\007vfenefs\006vfeneh\007vfenehs\007vfenezb\010vfenezbs\007vfenez"
    "f\010vfenezfs\007vfenezh\010vfenezhs\003vfi\005vfidb\005vfisb\006vfkedb"
    "\007vfkedbs\006vfkesb\007vfkesbs\006vfkhdb\007vfkhdbs\007vfkhedb\010vfk"
    "hedbs\007vfkhesb\010vfkhesbs\006vfkhsb\007vfkhsbs\006vflcdb\006vflcsb\004"
    "vfll\005vflls\006vflndb\006vflnsb\006vflpdb\006vflpsb\004vflr\005vflrd\003"
    "vfm\004vfma\006vfmadb\006vfmasb\005vfmax\007vfmaxdb\007vfmaxsb\005vfmdb"
    "\005vfmin\007vfmindb\007vfminsb\004vfms\005vfmsb\006vfmsdb\006vfmssb\005"
    "vfnma\007vfnmadb\007vfnmasb\005vfnms\007vfnmsdb\007vfnmssb\005vfpso\007"
    "vfpsodb\007vfpsosb\003vfs\005vfsdb\004vfsq\006vfsqdb\006vfsqsb\005vfssb"
    "\005vftci\007vftcidb\007vftcisb\004vgbm\004vgef\004vgeg\004vgfm\005vgfm"
    "a\006vgfmab\006vgfmaf\006vgfmag\006vgfmah\005vgfmb\005vgfmf\005vgfmg\005"
    "vgfmh\003vgm\004vgmb\004vgmf\004vgmg\004vgmh\005vistr\006vistrb\007vist"
    "rbs\006vistrf\007vistrfs\006vistrh\007vistrhs\002vl\004vlbb\003vlc\004v"
    "lcb\004vlcf\004vlcg\004vlch\004vlde\005vldeb\004vleb\004vled\005vledb\004"
    "vlef\004vleg\004vleh\005vleib\005vleif\005vleig\005vleih\004vlgv\005vlg"
    "vb\005vlgvf\005vlgvg\005vlgvh\004vlip\003vll\005vllez\006vllezb\006vlle"
    "zf\006vllezg\006vllezh\007vllezlf\003vlm\003vlp\004vlpb\004vlpf\004vlpg"
    "\004vlph\003vlr\005vlrep\006vlrepb\006vlrepf\006vlrepg\006vlreph\004vlr"
    "l\005vlrlr\004vlvg\005vlvgb\005vlvgf\005vlvgg\005vlvgh\005vlvgp\004vmae"
    "\005vmaeb\005vmaef\005vmaeh\004vmah\005vmahb\005vmahf\005vmahh\004vmal\005"
    "vmalb\005vmale\006vmaleb\006vmalef\006vmaleh\005vmalf\005vmalh\006vmalh"
    "b\006vmalhf\006vmalhh\006vmalhw\005vmalo\006vmalob\006vmalof\006vmaloh\004"
    "vmao\005vmaob\005vmaof\005vmaoh\003vme\004vmeb\004vmef\004vmeh\003vmh\004"
    "vmhb\004vmhf\004vmhh\003vml\004vmlb\004vmle\005vmleb\005vmlef\005vmleh\004"
    "vmlf\004vmlh\005vmlhb\005vmlhf\005vmlhh\005vmlhw\004vmlo\005vmlob\005vm"
    "lof\005vmloh\003vmn\004vmnb\004vmnf\004vmng\004vmnh\004vmnl\005vmnlb\005"
    "vmnlf\005vmnlg\005vmnlh\003vmo\004vmob\004vmof\004vmoh\003vmp\004vmrh\005"
    "vmrhb\005vmrhf\005vmrhg\005vmrhh\004vmrl\005vmrlb\005vmrlf\005vmrlg\005"
    "vmrlh\004vmsl\005vmslg\004vmsp\003vmx\004vmxb\004vmxf\004vmxg\004vmxh\004"
    "vmxl\005vmxlb\005vmxlf\005vmxlg\005vmxlh\002vn\003vnc\003vnn\003vno\004"
    "vnot\003vnx\002vo\003voc\004vone\004vpdi\005vperm\003vpk\004vpkf\004vpk"
    "g\004vpkh\005vpkls\006vpklsf\007vpklsfs\006vpklsg\007vpklsgs\006vpklsh\007"
    "vpklshs\004vpks\005vpksf\006vpksfs\005vpksg\006vpksgs\005vpksh\006vpksh"
    "s\004vpkz\006vpopct\007vpopctb\007vpopctf\007vpopctg\007vpopcth\005vpso"
    "p\004vrep\005vrepb\005vrepf\005vrepg\005vreph\005vrepi\006vrepib\006vre"
    "pif\006vrepig\006vrepih\003vrp\002vs\003vsb\006vsbcbi\007vsbcbiq\004vsb"
    "i\005vsbiq\005vscbi\006vscbib\006vscbif\006vscbig\006vscbih\006vscbiq\005"
    "vscef\005vsceg\004vsdp\004vseg\005vsegb\005vsegf\005vsegh\004vsel\003vs"
    "f\003vsg\003vsh\003vsl\004vslb\005vsldb\003vsp\003vsq\004vsra\005vsrab\004"
    "vsrl\005vsrlb\004vsrp\003vst\005vsteb\005vstef\005vsteg\005vsteh\004vst"
    "l\004vstm\005vstrc\006vstrcb\007vstrcbs\006vstrcf\007vstrcfs\006vstrch\007"
    "vstrchs\007vstrczb\010vstrczbs\007vstrczf\010vstrczfs\007vstrczh\010vst"
    "rczhs\005vstrl\006vstrlr\004vsum\005vsumb\005vsumg\006vsumgf\006vsumgh\005"
    "vsumh\005vsumq\006vsumqf\006vsumqg\003vtm\003vtp\004vuph\005vuphb\005vu"
    "phf\005vuphh\005vupkz\004vupl\005vuplb\005vuplf\005vuplh\006vuplhb\006v"
    "uplhf\006vuplhh\006vuplhw\005vupll\006vupllb\006vupllf\006vupllh\002vx\005"
    "vzero\005wcdgb\006wcdlgb\005wcgdb\006wclgdb\005wfadb\005wfasb\005wfaxb\003"
    "wfc\005wfcdb\006wfcedb\007wfcedbs\006wfcesb\007wfcesbs\006wfcexb\007wfc"
    "exbs\006wfchdb\007wfchdbs\007wfchedb\010wfchedbs\007wfchesb\010wfchesbs"
    "\007wfchexb\010wfchexbs\006wfchsb\007wfchsbs\006wfchxb\007wfchxbs\005wf"
    "csb\005wfcxb\005wfddb\005wfdsb\005wfdxb\005wfidb\005wfisb\005wfixb\003w"
    "fk\005wfkdb\006wfkedb\007wfkedbs\006wfkesb\007wfkesbs\006wfkexb\007wfke"
    "xbs\006wfkhdb\007wfkhdbs\007wfkhedb\010wfkhedbs\007wfkhesb\010wfkhesbs\007"
    "wfkhexb\010wfkhexbs\006wfkhsb\007wfkhsbs\006wfkhxb\007wfkhxbs\005wfksb\005"
    "wfkxb\006wflcdb\006wflcsb\006wflcxb\005wflld\005wflls\006wflndb\006wfln"
    "sb\006wflnxb\006wflpdb\006wflpsb\006wflpxb\005wflrd\005wflrx\006wfmadb\006"
    "wfmasb\006wfmaxb\007wfmaxdb\007wfmaxsb\007wfmaxxb\005wfmdb\007wfmindb\007"
    "wfminsb\007wfminxb\005wfmsb\006wfmsdb\006wfmssb\006wfmsxb\005wfmxb\007w"
    "fnmadb\007wfnmasb\007wfnmaxb\007wfnmsdb\007wfnmssb\007wfnmsxb\007wfpsod"
    "b\007wfpsosb\007wfpsoxb\005wfsdb\006wfsqdb\006wfsqsb\006wfsqxb\005wfssb"
    "\005wfsxb\007wftcidb\007wftcisb\007wftcixb\005wldeb\005wledb\001x\002xc"
    "\002xg\003xgr\004xgrk\002xi\004xihf\004xilf\003xiy\002xr\003xrk\004xsch"
    "\002xy\003zap";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint32_t RequiredFeatures;
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
  { 0 /* a */, SystemZ::A, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2 /* ad */, SystemZ::AD, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 5 /* adb */, SystemZ::ADB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9 /* adbr */, SystemZ::ADBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 14 /* adr */, SystemZ::ADR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 18 /* adtr */, SystemZ::ADTR, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 23 /* adtra */, SystemZ::ADTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 29 /* ae */, SystemZ::AE, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 32 /* aeb */, SystemZ::AEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 36 /* aebr */, SystemZ::AEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 41 /* aer */, SystemZ::AER, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 45 /* afi */, SystemZ::AFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 49 /* ag */, SystemZ::AG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 52 /* agf */, SystemZ::AGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 56 /* agfi */, SystemZ::AGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 61 /* agfr */, SystemZ::AGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 66 /* agh */, SystemZ::AGH, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, Feature_FeatureMiscellaneousExtensions2, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 70 /* aghi */, SystemZ::AGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 75 /* aghik */, SystemZ::AGHIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 81 /* agr */, SystemZ::AGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 85 /* agrk */, SystemZ::AGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 90 /* agsi */, SystemZ::AGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 95 /* ah */, SystemZ::AH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 98 /* ahhhr */, SystemZ::AHHHR, Convert__GRH321_0__GRH321_1__GRH321_2, Feature_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 104 /* ahhlr */, SystemZ::AHHLR, Convert__GRH321_0__GRH321_1__GR321_2, Feature_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GR32 }, },
  { 110 /* ahi */, SystemZ::AHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 114 /* ahik */, SystemZ::AHIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 119 /* ahy */, SystemZ::AHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 123 /* aih */, SystemZ::AIH, Convert__GRH321_0__Tie0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 127 /* al */, SystemZ::AL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 130 /* alc */, SystemZ::ALC, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 134 /* alcg */, SystemZ::ALCG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 139 /* alcgr */, SystemZ::ALCGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 145 /* alcr */, SystemZ::ALCR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 150 /* alfi */, SystemZ::ALFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 155 /* alg */, SystemZ::ALG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 159 /* algf */, SystemZ::ALGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 164 /* algfi */, SystemZ::ALGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 170 /* algfr */, SystemZ::ALGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 176 /* alghsik */, SystemZ::ALGHSIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 184 /* algr */, SystemZ::ALGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 189 /* algrk */, SystemZ::ALGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 195 /* algsi */, SystemZ::ALGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 201 /* alhhhr */, SystemZ::ALHHHR, Convert__GRH321_0__GRH321_1__GRH321_2, Feature_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 208 /* alhhlr */, SystemZ::ALHHLR, Convert__GRH321_0__GRH321_1__GR321_2, Feature_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GR32 }, },
  { 215 /* alhsik */, SystemZ::ALHSIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 222 /* alr */, SystemZ::ALR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 226 /* alrk */, SystemZ::ALRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 231 /* alsi */, SystemZ::ALSI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 236 /* alsih */, SystemZ::ALSIH, Convert__GRH321_0__Tie0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 242 /* alsihn */, SystemZ::ALSIHN, Convert__GRH321_0__Tie0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 249 /* aly */, SystemZ::ALY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 253 /* ap */, SystemZ::AP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 256 /* ar */, SystemZ::AR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 259 /* ark */, SystemZ::ARK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 263 /* asi */, SystemZ::ASI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 267 /* au */, SystemZ::AU, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 270 /* aur */, SystemZ::AUR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 274 /* aw */, SystemZ::AW, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 277 /* awr */, SystemZ::AWR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 281 /* axbr */, SystemZ::AXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 286 /* axr */, SystemZ::AXR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 290 /* axtr */, SystemZ::AXTR, Convert__FP1281_0__FP1281_1__FP1281_2, 0, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 295 /* axtra */, SystemZ::AXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 301 /* ay */, SystemZ::AY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 304 /* b */, SystemZ::B, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 306 /* bakr */, SystemZ::BAKR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 311 /* bal */, SystemZ::BAL, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 315 /* balr */, SystemZ::BALR, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 320 /* bas */, SystemZ::BAS, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 324 /* basr */, SystemZ::BASR, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 329 /* bassm */, SystemZ::BASSM, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 335 /* bc */, SystemZ::BCAsm, Convert__U4Imm1_0__BDXAddr64Disp123_1, 0, { MCK_U4Imm, MCK_BDXAddr64Disp12 }, },
  { 338 /* bcr */, SystemZ::BCRAsm, Convert__U4Imm1_0__GR641_1, 0, { MCK_U4Imm, MCK_GR64 }, },
  { 342 /* bct */, SystemZ::BCT, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 346 /* bctg */, SystemZ::BCTG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 351 /* bctgr */, SystemZ::BCTGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 357 /* bctr */, SystemZ::BCTR, Convert__GR321_0__Tie0__GR641_1, 0, { MCK_GR32, MCK_GR64 }, },
  { 362 /* be */, SystemZ::BAsmE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 365 /* ber */, SystemZ::BRAsmE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 369 /* bh */, SystemZ::BAsmH, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 372 /* bhe */, SystemZ::BAsmHE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 376 /* bher */, SystemZ::BRAsmHE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 381 /* bhr */, SystemZ::BRAsmH, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 385 /* bi */, SystemZ::BI, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 388 /* bic */, SystemZ::BICAsm, Convert__U4Imm1_0__BDXAddr64Disp203_1, Feature_FeatureMiscellaneousExtensions2, { MCK_U4Imm, MCK_BDXAddr64Disp20 }, },
  { 392 /* bie */, SystemZ::BIAsmE, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 396 /* bih */, SystemZ::BIAsmH, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 400 /* bihe */, SystemZ::BIAsmHE, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 405 /* bil */, SystemZ::BIAsmL, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 409 /* bile */, SystemZ::BIAsmLE, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 414 /* bilh */, SystemZ::BIAsmLH, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 419 /* bim */, SystemZ::BIAsmM, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 423 /* bine */, SystemZ::BIAsmNE, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 428 /* binh */, SystemZ::BIAsmNH, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 433 /* binhe */, SystemZ::BIAsmNHE, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 439 /* binl */, SystemZ::BIAsmNL, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 444 /* binle */, SystemZ::BIAsmNLE, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 450 /* binlh */, SystemZ::BIAsmNLH, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 456 /* binm */, SystemZ::BIAsmNM, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 461 /* bino */, SystemZ::BIAsmNO, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 466 /* binp */, SystemZ::BIAsmNP, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 471 /* binz */, SystemZ::BIAsmNZ, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 476 /* bio */, SystemZ::BIAsmO, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 480 /* bip */, SystemZ::BIAsmP, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 484 /* biz */, SystemZ::BIAsmZ, Convert__BDXAddr64Disp203_0, Feature_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 488 /* bl */, SystemZ::BAsmL, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 491 /* ble */, SystemZ::BAsmLE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 495 /* bler */, SystemZ::BRAsmLE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 500 /* blh */, SystemZ::BAsmLH, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 504 /* blhr */, SystemZ::BRAsmLH, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 509 /* blr */, SystemZ::BRAsmL, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 513 /* bm */, SystemZ::BAsmM, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 516 /* bmr */, SystemZ::BRAsmM, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 520 /* bne */, SystemZ::BAsmNE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 524 /* bner */, SystemZ::BRAsmNE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 529 /* bnh */, SystemZ::BAsmNH, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 533 /* bnhe */, SystemZ::BAsmNHE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 538 /* bnher */, SystemZ::BRAsmNHE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 544 /* bnhr */, SystemZ::BRAsmNH, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 549 /* bnl */, SystemZ::BAsmNL, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 553 /* bnle */, SystemZ::BAsmNLE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 558 /* bnler */, SystemZ::BRAsmNLE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 564 /* bnlh */, SystemZ::BAsmNLH, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 569 /* bnlhr */, SystemZ::BRAsmNLH, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 575 /* bnlr */, SystemZ::BRAsmNL, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 580 /* bnm */, SystemZ::BAsmNM, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 584 /* bnmr */, SystemZ::BRAsmNM, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 589 /* bno */, SystemZ::BAsmNO, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 593 /* bnor */, SystemZ::BRAsmNO, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 598 /* bnp */, SystemZ::BAsmNP, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 602 /* bnpr */, SystemZ::BRAsmNP, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 607 /* bnz */, SystemZ::BAsmNZ, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 611 /* bnzr */, SystemZ::BRAsmNZ, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 616 /* bo */, SystemZ::BAsmO, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 619 /* bor */, SystemZ::BRAsmO, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 623 /* bp */, SystemZ::BAsmP, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 626 /* bpp */, SystemZ::BPP, Convert__U4Imm1_0__PCRel161_1__BDXAddr64Disp123_2, Feature_FeatureExecutionHint, { MCK_U4Imm, MCK_PCRel16, MCK_BDXAddr64Disp12 }, },
  { 630 /* bpr */, SystemZ::BRAsmP, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 634 /* bprp */, SystemZ::BPRP, Convert__U4Imm1_0__PCRel121_1__PCRel241_2, Feature_FeatureExecutionHint, { MCK_U4Imm, MCK_PCRel12, MCK_PCRel24 }, },
  { 639 /* br */, SystemZ::BR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 642 /* bras */, SystemZ::BRAS, Convert__GR641_0__PCRelTLS162_1, 0, { MCK_GR64, MCK_PCRelTLS16 }, },
  { 647 /* brasl */, SystemZ::BRASL, Convert__GR641_0__PCRelTLS322_1, 0, { MCK_GR64, MCK_PCRelTLS32 }, },
  { 653 /* brc */, SystemZ::BRCAsm, Convert__U4Imm1_0__PCRel161_1, 0, { MCK_U4Imm, MCK_PCRel16 }, },
  { 657 /* brcl */, SystemZ::BRCLAsm, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, },
  { 662 /* brct */, SystemZ::BRCT, Convert__GR321_0__Tie0__PCRel161_1, 0, { MCK_GR32, MCK_PCRel16 }, },
  { 667 /* brctg */, SystemZ::BRCTG, Convert__GR641_0__Tie0__PCRel161_1, 0, { MCK_GR64, MCK_PCRel16 }, },
  { 673 /* brcth */, SystemZ::BRCTH, Convert__GRH321_0__Tie0__PCRel321_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_PCRel32 }, },
  { 679 /* brxh */, SystemZ::BRXH, Convert__GR321_0__Tie0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 684 /* brxhg */, SystemZ::BRXHG, Convert__GR641_0__Tie0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 690 /* brxle */, SystemZ::BRXLE, Convert__GR321_0__Tie0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 696 /* brxlg */, SystemZ::BRXLG, Convert__GR641_0__Tie0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 702 /* bsa */, SystemZ::BSA, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 706 /* bsg */, SystemZ::BSG, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 710 /* bsm */, SystemZ::BSM, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 714 /* bxh */, SystemZ::BXH, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 718 /* bxhg */, SystemZ::BXHG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 723 /* bxle */, SystemZ::BXLE, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 728 /* bxleg */, SystemZ::BXLEG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 734 /* bz */, SystemZ::BAsmZ, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 737 /* bzr */, SystemZ::BRAsmZ, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 741 /* c */, SystemZ::C, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 743 /* cd */, SystemZ::CD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 746 /* cdb */, SystemZ::CDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 750 /* cdbr */, SystemZ::CDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 755 /* cdfbr */, SystemZ::CDFBR, Convert__FP641_0__GR321_1, 0, { MCK_FP64, MCK_GR32 }, },
  { 761 /* cdfbra */, SystemZ::CDFBRA, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 768 /* cdfr */, SystemZ::CDFR, Convert__FP641_0__GR321_1, 0, { MCK_FP64, MCK_GR32 }, },
  { 773 /* cdftr */, SystemZ::CDFTR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 779 /* cdgbr */, SystemZ::CDGBR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 785 /* cdgbra */, SystemZ::CDGBRA, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 792 /* cdgr */, SystemZ::CDGR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 797 /* cdgtr */, SystemZ::CDGTR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 803 /* cdgtra */, SystemZ::CDGTRA, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 810 /* cdlfbr */, SystemZ::CDLFBR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 817 /* cdlftr */, SystemZ::CDLFTR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 824 /* cdlgbr */, SystemZ::CDLGBR, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 831 /* cdlgtr */, SystemZ::CDLGTR, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 838 /* cdpt */, SystemZ::CDPT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPPackedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 843 /* cdr */, SystemZ::CDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 847 /* cds */, SystemZ::CDS, Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp122_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr64Disp12 }, },
  { 851 /* cdsg */, SystemZ::CDSG, Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp202_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr64Disp20 }, },
  { 856 /* cdstr */, SystemZ::CDSTR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 862 /* cdsy */, SystemZ::CDSY, Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp202_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr64Disp20 }, },
  { 867 /* cdtr */, SystemZ::CDTR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 872 /* cdutr */, SystemZ::CDUTR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 878 /* cdzt */, SystemZ::CDZT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPZonedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 883 /* ce */, SystemZ::CE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 886 /* ceb */, SystemZ::CEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 890 /* cebr */, SystemZ::CEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 895 /* cedtr */, SystemZ::CEDTR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 901 /* cefbr */, SystemZ::CEFBR, Convert__FP321_0__GR321_1, 0, { MCK_FP32, MCK_GR32 }, },
  { 907 /* cefbra */, SystemZ::CEFBRA, Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 914 /* cefr */, SystemZ::CEFR, Convert__FP321_0__GR321_1, 0, { MCK_FP32, MCK_GR32 }, },
  { 919 /* cegbr */, SystemZ::CEGBR, Convert__FP321_0__GR641_1, 0, { MCK_FP32, MCK_GR64 }, },
  { 925 /* cegbra */, SystemZ::CEGBRA, Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 932 /* cegr */, SystemZ::CEGR, Convert__FP321_0__GR641_1, 0, { MCK_FP32, MCK_GR64 }, },
  { 937 /* celfbr */, SystemZ::CELFBR, Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 944 /* celgbr */, SystemZ::CELGBR, Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 951 /* cer */, SystemZ::CER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 955 /* cextr */, SystemZ::CEXTR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 961 /* cfc */, SystemZ::CFC, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 965 /* cfdbr */, SystemZ::CFDBR, Convert__GR321_0__U4Imm1_1__FP641_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, },
  { 971 /* cfdbra */, SystemZ::CFDBRA, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 978 /* cfdr */, SystemZ::CFDR, Convert__GR321_0__U4Imm1_1__FP641_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, },
  { 983 /* cfdtr */, SystemZ::CFDTR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 989 /* cfebr */, SystemZ::CFEBR, Convert__GR321_0__U4Imm1_1__FP321_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, },
  { 995 /* cfebra */, SystemZ::CFEBRA, Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 1002 /* cfer */, SystemZ::CFER, Convert__GR321_0__U4Imm1_1__FP321_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, },
  { 1007 /* cfi */, SystemZ::CFI, Convert__GR321_0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 1011 /* cfxbr */, SystemZ::CFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, },
  { 1017 /* cfxbra */, SystemZ::CFXBRA, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1024 /* cfxr */, SystemZ::CFXR, Convert__GR321_0__U4Imm1_1__FP1281_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, },
  { 1029 /* cfxtr */, SystemZ::CFXTR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1035 /* cg */, SystemZ::CG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1038 /* cgdbr */, SystemZ::CGDBR, Convert__GR641_0__U4Imm1_1__FP641_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 1044 /* cgdbra */, SystemZ::CGDBRA, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1051 /* cgdr */, SystemZ::CGDR, Convert__GR641_0__U4Imm1_1__FP641_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 1056 /* cgdtr */, SystemZ::CGDTR, Convert__GR641_0__U4Imm1_1__FP641_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 1062 /* cgdtra */, SystemZ::CGDTRA, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1069 /* cgebr */, SystemZ::CGEBR, Convert__GR641_0__U4Imm1_1__FP321_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, },
  { 1075 /* cgebra */, SystemZ::CGEBRA, Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 1082 /* cger */, SystemZ::CGER, Convert__GR641_0__U4Imm1_1__FP321_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, },
  { 1087 /* cgf */, SystemZ::CGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1091 /* cgfi */, SystemZ::CGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 1096 /* cgfr */, SystemZ::CGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 1101 /* cgfrl */, SystemZ::CGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1107 /* cgh */, SystemZ::CGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1111 /* cghi */, SystemZ::CGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1116 /* cghrl */, SystemZ::CGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1122 /* cghsi */, SystemZ::CGHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 1128 /* cgib */, SystemZ::CGIBAsm, Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1133 /* cgibe */, SystemZ::CGIBAsmE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1139 /* cgibh */, SystemZ::CGIBAsmH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1145 /* cgibhe */, SystemZ::CGIBAsmHE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1152 /* cgibl */, SystemZ::CGIBAsmL, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1158 /* cgible */, SystemZ::CGIBAsmLE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1165 /* cgiblh */, SystemZ::CGIBAsmLH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1172 /* cgibne */, SystemZ::CGIBAsmNE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1179 /* cgibnh */, SystemZ::CGIBAsmNH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1186 /* cgibnhe */, SystemZ::CGIBAsmNHE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1194 /* cgibnl */, SystemZ::CGIBAsmNL, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1201 /* cgibnle */, SystemZ::CGIBAsmNLE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1209 /* cgibnlh */, SystemZ::CGIBAsmNLH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1217 /* cgij */, SystemZ::CGIJAsm, Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 1222 /* cgije */, SystemZ::CGIJAsmE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1228 /* cgijh */, SystemZ::CGIJAsmH, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1234 /* cgijhe */, SystemZ::CGIJAsmHE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1241 /* cgijl */, SystemZ::CGIJAsmL, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1247 /* cgijle */, SystemZ::CGIJAsmLE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1254 /* cgijlh */, SystemZ::CGIJAsmLH, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1261 /* cgijne */, SystemZ::CGIJAsmNE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1268 /* cgijnh */, SystemZ::CGIJAsmNH, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1275 /* cgijnhe */, SystemZ::CGIJAsmNHE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1283 /* cgijnl */, SystemZ::CGIJAsmNL, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1290 /* cgijnle */, SystemZ::CGIJAsmNLE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1298 /* cgijnlh */, SystemZ::CGIJAsmNLH, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1306 /* cgit */, SystemZ::CGITAsm, Convert__GR641_0__S16Imm1_1__U4Imm1_2, 0, { MCK_GR64, MCK_S16Imm, MCK_U4Imm }, },
  { 1311 /* cgite */, SystemZ::CGITAsmE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1317 /* cgith */, SystemZ::CGITAsmH, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1323 /* cgithe */, SystemZ::CGITAsmHE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1330 /* cgitl */, SystemZ::CGITAsmL, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1336 /* cgitle */, SystemZ::CGITAsmLE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1343 /* cgitlh */, SystemZ::CGITAsmLH, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1350 /* cgitne */, SystemZ::CGITAsmNE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1357 /* cgitnh */, SystemZ::CGITAsmNH, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1364 /* cgitnhe */, SystemZ::CGITAsmNHE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1372 /* cgitnl */, SystemZ::CGITAsmNL, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1379 /* cgitnle */, SystemZ::CGITAsmNLE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1387 /* cgitnlh */, SystemZ::CGITAsmNLH, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1395 /* cgr */, SystemZ::CGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1399 /* cgrb */, SystemZ::CGRBAsm, Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1404 /* cgrbe */, SystemZ::CGRBAsmE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1410 /* cgrbh */, SystemZ::CGRBAsmH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1416 /* cgrbhe */, SystemZ::CGRBAsmHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1423 /* cgrbl */, SystemZ::CGRBAsmL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1429 /* cgrble */, SystemZ::CGRBAsmLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1436 /* cgrblh */, SystemZ::CGRBAsmLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1443 /* cgrbne */, SystemZ::CGRBAsmNE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1450 /* cgrbnh */, SystemZ::CGRBAsmNH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1457 /* cgrbnhe */, SystemZ::CGRBAsmNHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1465 /* cgrbnl */, SystemZ::CGRBAsmNL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1472 /* cgrbnle */, SystemZ::CGRBAsmNLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1480 /* cgrbnlh */, SystemZ::CGRBAsmNLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1488 /* cgrj */, SystemZ::CGRJAsm, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 1493 /* cgrje */, SystemZ::CGRJAsmE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1499 /* cgrjh */, SystemZ::CGRJAsmH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1505 /* cgrjhe */, SystemZ::CGRJAsmHE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1512 /* cgrjl */, SystemZ::CGRJAsmL, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1518 /* cgrjle */, SystemZ::CGRJAsmLE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1525 /* cgrjlh */, SystemZ::CGRJAsmLH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1532 /* cgrjne */, SystemZ::CGRJAsmNE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1539 /* cgrjnh */, SystemZ::CGRJAsmNH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1546 /* cgrjnhe */, SystemZ::CGRJAsmNHE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1554 /* cgrjnl */, SystemZ::CGRJAsmNL, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1561 /* cgrjnle */, SystemZ::CGRJAsmNLE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1569 /* cgrjnlh */, SystemZ::CGRJAsmNLH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1577 /* cgrl */, SystemZ::CGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1582 /* cgrt */, SystemZ::CGRTAsm, Convert__GR641_0__GR641_1__U4Imm1_2, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 1587 /* cgrte */, SystemZ::CGRTAsmE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1593 /* cgrth */, SystemZ::CGRTAsmH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1599 /* cgrthe */, SystemZ::CGRTAsmHE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1606 /* cgrtl */, SystemZ::CGRTAsmL, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1612 /* cgrtle */, SystemZ::CGRTAsmLE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1619 /* cgrtlh */, SystemZ::CGRTAsmLH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1626 /* cgrtne */, SystemZ::CGRTAsmNE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1633 /* cgrtnh */, SystemZ::CGRTAsmNH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1640 /* cgrtnhe */, SystemZ::CGRTAsmNHE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1648 /* cgrtnl */, SystemZ::CGRTAsmNL, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1655 /* cgrtnle */, SystemZ::CGRTAsmNLE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1663 /* cgrtnlh */, SystemZ::CGRTAsmNLH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1671 /* cgxbr */, SystemZ::CGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 1677 /* cgxbra */, SystemZ::CGXBRA, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1684 /* cgxr */, SystemZ::CGXR, Convert__GR641_0__U4Imm1_1__FP1281_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 1689 /* cgxtr */, SystemZ::CGXTR, Convert__GR641_0__U4Imm1_1__FP1281_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 1695 /* cgxtra */, SystemZ::CGXTRA, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1702 /* ch */, SystemZ::CH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1705 /* chf */, SystemZ::CHF, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1709 /* chhr */, SystemZ::CHHR, Convert__GRH321_0__GRH321_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_GRH32 }, },
  { 1714 /* chhsi */, SystemZ::CHHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 1720 /* chi */, SystemZ::CHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1724 /* chlr */, SystemZ::CHLR, Convert__GRH321_0__GR321_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_GR32 }, },
  { 1729 /* chrl */, SystemZ::CHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1734 /* chsi */, SystemZ::CHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 1739 /* chy */, SystemZ::CHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1743 /* cib */, SystemZ::CIBAsm, Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1747 /* cibe */, SystemZ::CIBAsmE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1752 /* cibh */, SystemZ::CIBAsmH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1757 /* cibhe */, SystemZ::CIBAsmHE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1763 /* cibl */, SystemZ::CIBAsmL, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1768 /* cible */, SystemZ::CIBAsmLE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1774 /* ciblh */, SystemZ::CIBAsmLH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1780 /* cibne */, SystemZ::CIBAsmNE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1786 /* cibnh */, SystemZ::CIBAsmNH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1792 /* cibnhe */, SystemZ::CIBAsmNHE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1799 /* cibnl */, SystemZ::CIBAsmNL, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1805 /* cibnle */, SystemZ::CIBAsmNLE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1812 /* cibnlh */, SystemZ::CIBAsmNLH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1819 /* cih */, SystemZ::CIH, Convert__GRH321_0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 1823 /* cij */, SystemZ::CIJAsm, Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 1827 /* cije */, SystemZ::CIJAsmE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1832 /* cijh */, SystemZ::CIJAsmH, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1837 /* cijhe */, SystemZ::CIJAsmHE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1843 /* cijl */, SystemZ::CIJAsmL, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1848 /* cijle */, SystemZ::CIJAsmLE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1854 /* cijlh */, SystemZ::CIJAsmLH, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1860 /* cijne */, SystemZ::CIJAsmNE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1866 /* cijnh */, SystemZ::CIJAsmNH, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1872 /* cijnhe */, SystemZ::CIJAsmNHE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1879 /* cijnl */, SystemZ::CIJAsmNL, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1885 /* cijnle */, SystemZ::CIJAsmNLE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1892 /* cijnlh */, SystemZ::CIJAsmNLH, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1899 /* cit */, SystemZ::CITAsm, Convert__GR321_0__S16Imm1_1__U4Imm1_2, 0, { MCK_GR32, MCK_S16Imm, MCK_U4Imm }, },
  { 1903 /* cite */, SystemZ::CITAsmE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1908 /* cith */, SystemZ::CITAsmH, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1913 /* cithe */, SystemZ::CITAsmHE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1919 /* citl */, SystemZ::CITAsmL, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1924 /* citle */, SystemZ::CITAsmLE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1930 /* citlh */, SystemZ::CITAsmLH, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1936 /* citne */, SystemZ::CITAsmNE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1942 /* citnh */, SystemZ::CITAsmNH, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1948 /* citnhe */, SystemZ::CITAsmNHE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1955 /* citnl */, SystemZ::CITAsmNL, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1961 /* citnle */, SystemZ::CITAsmNLE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1968 /* citnlh */, SystemZ::CITAsmNLH, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1975 /* cksm */, SystemZ::CKSM, Convert__GR641_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR128 }, },
  { 1980 /* cl */, SystemZ::CL, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1983 /* clc */, SystemZ::CLC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 1987 /* clcl */, SystemZ::CLCL, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 1992 /* clcle */, SystemZ::CLCLE, Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp122_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 1998 /* clclu */, SystemZ::CLCLU, Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp202_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp20 }, },
  { 2004 /* clfdbr */, SystemZ::CLFDBR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 2011 /* clfdtr */, SystemZ::CLFDTR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 2018 /* clfebr */, SystemZ::CLFEBR, Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 2025 /* clfhsi */, SystemZ::CLFHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 2032 /* clfi */, SystemZ::CLFI, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 2037 /* clfit */, SystemZ::CLFITAsm, Convert__GR321_0__U16Imm1_1__U4Imm1_2, 0, { MCK_GR32, MCK_U16Imm, MCK_U4Imm }, },
  { 2043 /* clfite */, SystemZ::CLFITAsmE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2050 /* clfith */, SystemZ::CLFITAsmH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2057 /* clfithe */, SystemZ::CLFITAsmHE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2065 /* clfitl */, SystemZ::CLFITAsmL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2072 /* clfitle */, SystemZ::CLFITAsmLE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2080 /* clfitlh */, SystemZ::CLFITAsmLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2088 /* clfitne */, SystemZ::CLFITAsmNE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2096 /* clfitnh */, SystemZ::CLFITAsmNH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2104 /* clfitnhe */, SystemZ::CLFITAsmNHE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2113 /* clfitnl */, SystemZ::CLFITAsmNL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2121 /* clfitnle */, SystemZ::CLFITAsmNLE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2130 /* clfitnlh */, SystemZ::CLFITAsmNLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2139 /* clfxbr */, SystemZ::CLFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2146 /* clfxtr */, SystemZ::CLFXTR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2153 /* clg */, SystemZ::CLG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2157 /* clgdbr */, SystemZ::CLGDBR, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 2164 /* clgdtr */, SystemZ::CLGDTR, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 2171 /* clgebr */, SystemZ::CLGEBR, Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 2178 /* clgf */, SystemZ::CLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2183 /* clgfi */, SystemZ::CLGFI, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 2189 /* clgfr */, SystemZ::CLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2195 /* clgfrl */, SystemZ::CLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2202 /* clghrl */, SystemZ::CLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2209 /* clghsi */, SystemZ::CLGHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 2216 /* clgib */, SystemZ::CLGIBAsm, Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_U8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2222 /* clgibe */, SystemZ::CLGIBAsmE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2229 /* clgibh */, SystemZ::CLGIBAsmH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2236 /* clgibhe */, SystemZ::CLGIBAsmHE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2244 /* clgibl */, SystemZ::CLGIBAsmL, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2251 /* clgible */, SystemZ::CLGIBAsmLE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2259 /* clgiblh */, SystemZ::CLGIBAsmLH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2267 /* clgibne */, SystemZ::CLGIBAsmNE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2275 /* clgibnh */, SystemZ::CLGIBAsmNH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2283 /* clgibnhe */, SystemZ::CLGIBAsmNHE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2292 /* clgibnl */, SystemZ::CLGIBAsmNL, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2300 /* clgibnle */, SystemZ::CLGIBAsmNLE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2309 /* clgibnlh */, SystemZ::CLGIBAsmNLH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2318 /* clgij */, SystemZ::CLGIJAsm, Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 2324 /* clgije */, SystemZ::CLGIJAsmE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2331 /* clgijh */, SystemZ::CLGIJAsmH, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2338 /* clgijhe */, SystemZ::CLGIJAsmHE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2346 /* clgijl */, SystemZ::CLGIJAsmL, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2353 /* clgijle */, SystemZ::CLGIJAsmLE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2361 /* clgijlh */, SystemZ::CLGIJAsmLH, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2369 /* clgijne */, SystemZ::CLGIJAsmNE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2377 /* clgijnh */, SystemZ::CLGIJAsmNH, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2385 /* clgijnhe */, SystemZ::CLGIJAsmNHE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2394 /* clgijnl */, SystemZ::CLGIJAsmNL, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2402 /* clgijnle */, SystemZ::CLGIJAsmNLE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2411 /* clgijnlh */, SystemZ::CLGIJAsmNLH, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2420 /* clgit */, SystemZ::CLGITAsm, Convert__GR641_0__U16Imm1_1__U4Imm1_2, 0, { MCK_GR64, MCK_U16Imm, MCK_U4Imm }, },
  { 2426 /* clgite */, SystemZ::CLGITAsmE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2433 /* clgith */, SystemZ::CLGITAsmH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2440 /* clgithe */, SystemZ::CLGITAsmHE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2448 /* clgitl */, SystemZ::CLGITAsmL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2455 /* clgitle */, SystemZ::CLGITAsmLE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2463 /* clgitlh */, SystemZ::CLGITAsmLH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2471 /* clgitne */, SystemZ::CLGITAsmNE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2479 /* clgitnh */, SystemZ::CLGITAsmNH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2487 /* clgitnhe */, SystemZ::CLGITAsmNHE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2496 /* clgitnl */, SystemZ::CLGITAsmNL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2504 /* clgitnle */, SystemZ::CLGITAsmNLE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2513 /* clgitnlh */, SystemZ::CLGITAsmNLH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2522 /* clgr */, SystemZ::CLGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2527 /* clgrb */, SystemZ::CLGRBAsm, Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2533 /* clgrbe */, SystemZ::CLGRBAsmE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2540 /* clgrbh */, SystemZ::CLGRBAsmH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2547 /* clgrbhe */, SystemZ::CLGRBAsmHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2555 /* clgrbl */, SystemZ::CLGRBAsmL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2562 /* clgrble */, SystemZ::CLGRBAsmLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2570 /* clgrblh */, SystemZ::CLGRBAsmLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2578 /* clgrbne */, SystemZ::CLGRBAsmNE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2586 /* clgrbnh */, SystemZ::CLGRBAsmNH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2594 /* clgrbnhe */, SystemZ::CLGRBAsmNHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2603 /* clgrbnl */, SystemZ::CLGRBAsmNL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2611 /* clgrbnle */, SystemZ::CLGRBAsmNLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2620 /* clgrbnlh */, SystemZ::CLGRBAsmNLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2629 /* clgrj */, SystemZ::CLGRJAsm, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 2635 /* clgrje */, SystemZ::CLGRJAsmE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2642 /* clgrjh */, SystemZ::CLGRJAsmH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2649 /* clgrjhe */, SystemZ::CLGRJAsmHE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2657 /* clgrjl */, SystemZ::CLGRJAsmL, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2664 /* clgrjle */, SystemZ::CLGRJAsmLE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2672 /* clgrjlh */, SystemZ::CLGRJAsmLH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2680 /* clgrjne */, SystemZ::CLGRJAsmNE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2688 /* clgrjnh */, SystemZ::CLGRJAsmNH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2696 /* clgrjnhe */, SystemZ::CLGRJAsmNHE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2705 /* clgrjnl */, SystemZ::CLGRJAsmNL, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2713 /* clgrjnle */, SystemZ::CLGRJAsmNLE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2722 /* clgrjnlh */, SystemZ::CLGRJAsmNLH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2731 /* clgrl */, SystemZ::CLGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2737 /* clgrt */, SystemZ::CLGRTAsm, Convert__GR641_0__GR641_1__U4Imm1_2, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 2743 /* clgrte */, SystemZ::CLGRTAsmE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2750 /* clgrth */, SystemZ::CLGRTAsmH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2757 /* clgrthe */, SystemZ::CLGRTAsmHE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2765 /* clgrtl */, SystemZ::CLGRTAsmL, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2772 /* clgrtle */, SystemZ::CLGRTAsmLE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2780 /* clgrtlh */, SystemZ::CLGRTAsmLH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2788 /* clgrtne */, SystemZ::CLGRTAsmNE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2796 /* clgrtnh */, SystemZ::CLGRTAsmNH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2804 /* clgrtnhe */, SystemZ::CLGRTAsmNHE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2813 /* clgrtnl */, SystemZ::CLGRTAsmNL, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2821 /* clgrtnle */, SystemZ::CLGRTAsmNLE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2830 /* clgrtnlh */, SystemZ::CLGRTAsmNLH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2839 /* clgt */, SystemZ::CLGTAsm, Convert__GR641_0__BDAddr64Disp202_2__U4Imm1_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 2844 /* clgte */, SystemZ::CLGTAsmE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2850 /* clgth */, SystemZ::CLGTAsmH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2856 /* clgthe */, SystemZ::CLGTAsmHE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2863 /* clgtl */, SystemZ::CLGTAsmL, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2869 /* clgtle */, SystemZ::CLGTAsmLE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2876 /* clgtlh */, SystemZ::CLGTAsmLH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2883 /* clgtne */, SystemZ::CLGTAsmNE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2890 /* clgtnh */, SystemZ::CLGTAsmNH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2897 /* clgtnhe */, SystemZ::CLGTAsmNHE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2905 /* clgtnl */, SystemZ::CLGTAsmNL, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2912 /* clgtnle */, SystemZ::CLGTAsmNLE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2920 /* clgtnlh */, SystemZ::CLGTAsmNLH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2928 /* clgxbr */, SystemZ::CLGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2935 /* clgxtr */, SystemZ::CLGXTR, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2942 /* clhf */, SystemZ::CLHF, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 2947 /* clhhr */, SystemZ::CLHHR, Convert__GRH321_0__GRH321_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_GRH32 }, },
  { 2953 /* clhhsi */, SystemZ::CLHHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 2960 /* clhlr */, SystemZ::CLHLR, Convert__GRH321_0__GR321_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_GR32 }, },
  { 2966 /* clhrl */, SystemZ::CLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 2972 /* cli */, SystemZ::CLI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2976 /* clib */, SystemZ::CLIBAsm, Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_U8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2981 /* clibe */, SystemZ::CLIBAsmE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2987 /* clibh */, SystemZ::CLIBAsmH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2993 /* clibhe */, SystemZ::CLIBAsmHE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3000 /* clibl */, SystemZ::CLIBAsmL, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3006 /* clible */, SystemZ::CLIBAsmLE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3013 /* cliblh */, SystemZ::CLIBAsmLH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3020 /* clibne */, SystemZ::CLIBAsmNE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3027 /* clibnh */, SystemZ::CLIBAsmNH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3034 /* clibnhe */, SystemZ::CLIBAsmNHE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3042 /* clibnl */, SystemZ::CLIBAsmNL, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3049 /* clibnle */, SystemZ::CLIBAsmNLE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3057 /* clibnlh */, SystemZ::CLIBAsmNLH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3065 /* clih */, SystemZ::CLIH, Convert__GRH321_0__U32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_U32Imm }, },
  { 3070 /* clij */, SystemZ::CLIJAsm, Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 3075 /* clije */, SystemZ::CLIJAsmE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3081 /* clijh */, SystemZ::CLIJAsmH, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3087 /* clijhe */, SystemZ::CLIJAsmHE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3094 /* clijl */, SystemZ::CLIJAsmL, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3100 /* clijle */, SystemZ::CLIJAsmLE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3107 /* clijlh */, SystemZ::CLIJAsmLH, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3114 /* clijne */, SystemZ::CLIJAsmNE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3121 /* clijnh */, SystemZ::CLIJAsmNH, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3128 /* clijnhe */, SystemZ::CLIJAsmNHE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3136 /* clijnl */, SystemZ::CLIJAsmNL, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3143 /* clijnle */, SystemZ::CLIJAsmNLE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3151 /* clijnlh */, SystemZ::CLIJAsmNLH, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3159 /* cliy */, SystemZ::CLIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 3164 /* clm */, SystemZ::CLM, Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 3168 /* clmh */, SystemZ::CLMH, Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 3173 /* clmy */, SystemZ::CLMY, Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 3178 /* clr */, SystemZ::CLR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3182 /* clrb */, SystemZ::CLRBAsm, Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 3187 /* clrbe */, SystemZ::CLRBAsmE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3193 /* clrbh */, SystemZ::CLRBAsmH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3199 /* clrbhe */, SystemZ::CLRBAsmHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3206 /* clrbl */, SystemZ::CLRBAsmL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3212 /* clrble */, SystemZ::CLRBAsmLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3219 /* clrblh */, SystemZ::CLRBAsmLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3226 /* clrbne */, SystemZ::CLRBAsmNE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3233 /* clrbnh */, SystemZ::CLRBAsmNH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3240 /* clrbnhe */, SystemZ::CLRBAsmNHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3248 /* clrbnl */, SystemZ::CLRBAsmNL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3255 /* clrbnle */, SystemZ::CLRBAsmNLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3263 /* clrbnlh */, SystemZ::CLRBAsmNLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3271 /* clrj */, SystemZ::CLRJAsm, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 3276 /* clrje */, SystemZ::CLRJAsmE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3282 /* clrjh */, SystemZ::CLRJAsmH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3288 /* clrjhe */, SystemZ::CLRJAsmHE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3295 /* clrjl */, SystemZ::CLRJAsmL, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3301 /* clrjle */, SystemZ::CLRJAsmLE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3308 /* clrjlh */, SystemZ::CLRJAsmLH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3315 /* clrjne */, SystemZ::CLRJAsmNE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3322 /* clrjnh */, SystemZ::CLRJAsmNH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3329 /* clrjnhe */, SystemZ::CLRJAsmNHE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3337 /* clrjnl */, SystemZ::CLRJAsmNL, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3344 /* clrjnle */, SystemZ::CLRJAsmNLE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3352 /* clrjnlh */, SystemZ::CLRJAsmNLH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3360 /* clrl */, SystemZ::CLRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 3365 /* clrt */, SystemZ::CLRTAsm, Convert__GR321_0__GR321_1__U4Imm1_2, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 3370 /* clrte */, SystemZ::CLRTAsmE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3376 /* clrth */, SystemZ::CLRTAsmH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3382 /* clrthe */, SystemZ::CLRTAsmHE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3389 /* clrtl */, SystemZ::CLRTAsmL, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3395 /* clrtle */, SystemZ::CLRTAsmLE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3402 /* clrtlh */, SystemZ::CLRTAsmLH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3409 /* clrtne */, SystemZ::CLRTAsmNE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3416 /* clrtnh */, SystemZ::CLRTAsmNH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3423 /* clrtnhe */, SystemZ::CLRTAsmNHE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3431 /* clrtnl */, SystemZ::CLRTAsmNL, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3438 /* clrtnle */, SystemZ::CLRTAsmNLE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3446 /* clrtnlh */, SystemZ::CLRTAsmNLH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3454 /* clst */, SystemZ::CLST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3459 /* clt */, SystemZ::CLTAsm, Convert__GR321_0__BDAddr64Disp202_2__U4Imm1_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 3463 /* clte */, SystemZ::CLTAsmE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3468 /* clth */, SystemZ::CLTAsmH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3473 /* clthe */, SystemZ::CLTAsmHE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3479 /* cltl */, SystemZ::CLTAsmL, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3484 /* cltle */, SystemZ::CLTAsmLE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3490 /* cltlh */, SystemZ::CLTAsmLH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3496 /* cltne */, SystemZ::CLTAsmNE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3502 /* cltnh */, SystemZ::CLTAsmNH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3508 /* cltnhe */, SystemZ::CLTAsmNHE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3515 /* cltnl */, SystemZ::CLTAsmNL, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3521 /* cltnle */, SystemZ::CLTAsmNLE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3528 /* cltnlh */, SystemZ::CLTAsmNLH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3535 /* cly */, SystemZ::CLY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3539 /* cmpsc */, SystemZ::CMPSC, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3545 /* cp */, SystemZ::CP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 3548 /* cpdt */, SystemZ::CPDT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPPackedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 3553 /* cpsdr */, SystemZ::CPSDRdd, Convert__FP641_0__FP641_2__FP641_1, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 3559 /* cpxt */, SystemZ::CPXT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPPackedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 3564 /* cpya */, SystemZ::CPYA, Convert__AR321_0__AR321_1, 0, { MCK_AR32, MCK_AR32 }, },
  { 3569 /* cr */, SystemZ::CR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3572 /* crb */, SystemZ::CRBAsm, Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 3576 /* crbe */, SystemZ::CRBAsmE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3581 /* crbh */, SystemZ::CRBAsmH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3586 /* crbhe */, SystemZ::CRBAsmHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3592 /* crbl */, SystemZ::CRBAsmL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3597 /* crble */, SystemZ::CRBAsmLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3603 /* crblh */, SystemZ::CRBAsmLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3609 /* crbne */, SystemZ::CRBAsmNE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3615 /* crbnh */, SystemZ::CRBAsmNH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3621 /* crbnhe */, SystemZ::CRBAsmNHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3628 /* crbnl */, SystemZ::CRBAsmNL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3634 /* crbnle */, SystemZ::CRBAsmNLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3641 /* crbnlh */, SystemZ::CRBAsmNLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3648 /* crdte */, SystemZ::CRDTEOpt, Convert__GR1281_0__GR1281_2__GR641_1, Feature_FeatureEnhancedDAT2, { MCK_GR128, MCK_GR64, MCK_GR128 }, },
  { 3648 /* crdte */, SystemZ::CRDTE, Convert__GR1281_0__GR1281_2__GR641_1__U4Imm1_3, Feature_FeatureEnhancedDAT2, { MCK_GR128, MCK_GR64, MCK_GR128, MCK_U4Imm }, },
  { 3654 /* crj */, SystemZ::CRJAsm, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 3658 /* crje */, SystemZ::CRJAsmE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3663 /* crjh */, SystemZ::CRJAsmH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3668 /* crjhe */, SystemZ::CRJAsmHE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3674 /* crjl */, SystemZ::CRJAsmL, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3679 /* crjle */, SystemZ::CRJAsmLE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3685 /* crjlh */, SystemZ::CRJAsmLH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3691 /* crjne */, SystemZ::CRJAsmNE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3697 /* crjnh */, SystemZ::CRJAsmNH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3703 /* crjnhe */, SystemZ::CRJAsmNHE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3710 /* crjnl */, SystemZ::CRJAsmNL, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3716 /* crjnle */, SystemZ::CRJAsmNLE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3723 /* crjnlh */, SystemZ::CRJAsmNLH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3730 /* crl */, SystemZ::CRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 3734 /* crt */, SystemZ::CRTAsm, Convert__GR321_0__GR321_1__U4Imm1_2, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 3738 /* crte */, SystemZ::CRTAsmE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3743 /* crth */, SystemZ::CRTAsmH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3748 /* crthe */, SystemZ::CRTAsmHE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3754 /* crtl */, SystemZ::CRTAsmL, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3759 /* crtle */, SystemZ::CRTAsmLE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3765 /* crtlh */, SystemZ::CRTAsmLH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3771 /* crtne */, SystemZ::CRTAsmNE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3777 /* crtnh */, SystemZ::CRTAsmNH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3783 /* crtnhe */, SystemZ::CRTAsmNHE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3790 /* crtnl */, SystemZ::CRTAsmNL, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3796 /* crtnle */, SystemZ::CRTAsmNLE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3803 /* crtnlh */, SystemZ::CRTAsmNLH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3810 /* cs */, SystemZ::CS, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3813 /* csch */, SystemZ::CSCH, Convert_NoOperands, 0, {  }, },
  { 3818 /* csdtr */, SystemZ::CSDTR, Convert__GR641_0__FP641_1__U4Imm1_2, 0, { MCK_GR64, MCK_FP64, MCK_U4Imm }, },
  { 3824 /* csg */, SystemZ::CSG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3828 /* csp */, SystemZ::CSP, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 3832 /* cspg */, SystemZ::CSPG, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 3837 /* csst */, SystemZ::CSST, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2, 0, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 3842 /* csxtr */, SystemZ::CSXTR, Convert__GR1281_0__FP1281_1__U4Imm1_2, 0, { MCK_GR128, MCK_FP128, MCK_U4Imm }, },
  { 3848 /* csy */, SystemZ::CSY, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3852 /* cu12 */, SystemZ::CU12Opt, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3852 /* cu12 */, SystemZ::CU12, Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3857 /* cu14 */, SystemZ::CU14Opt, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3857 /* cu14 */, SystemZ::CU14, Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3862 /* cu21 */, SystemZ::CU21Opt, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3862 /* cu21 */, SystemZ::CU21, Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3867 /* cu24 */, SystemZ::CU24Opt, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3867 /* cu24 */, SystemZ::CU24, Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3872 /* cu41 */, SystemZ::CU41, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3877 /* cu42 */, SystemZ::CU42, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3882 /* cudtr */, SystemZ::CUDTR, Convert__GR641_0__FP641_1, 0, { MCK_GR64, MCK_FP64 }, },
  { 3888 /* cuse */, SystemZ::CUSE, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3893 /* cutfu */, SystemZ::CUTFUOpt, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3893 /* cutfu */, SystemZ::CUTFU, Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3899 /* cuutf */, SystemZ::CUUTFOpt, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3899 /* cuutf */, SystemZ::CUUTF, Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3905 /* cuxtr */, SystemZ::CUXTR, Convert__GR1281_0__FP1281_1, 0, { MCK_GR128, MCK_FP128 }, },
  { 3911 /* cvb */, SystemZ::CVB, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3915 /* cvbg */, SystemZ::CVBG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3920 /* cvby */, SystemZ::CVBY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3925 /* cvd */, SystemZ::CVD, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3929 /* cvdg */, SystemZ::CVDG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3934 /* cvdy */, SystemZ::CVDY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3939 /* cxbr */, SystemZ::CXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3944 /* cxfbr */, SystemZ::CXFBR, Convert__FP1281_0__GR321_1, 0, { MCK_FP128, MCK_GR32 }, },
  { 3950 /* cxfbra */, SystemZ::CXFBRA, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 3957 /* cxfr */, SystemZ::CXFR, Convert__FP1281_0__GR321_1, 0, { MCK_FP128, MCK_GR32 }, },
  { 3962 /* cxftr */, SystemZ::CXFTR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 3968 /* cxgbr */, SystemZ::CXGBR, Convert__FP1281_0__GR641_1, 0, { MCK_FP128, MCK_GR64 }, },
  { 3974 /* cxgbra */, SystemZ::CXGBRA, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 3981 /* cxgr */, SystemZ::CXGR, Convert__FP1281_0__GR641_1, 0, { MCK_FP128, MCK_GR64 }, },
  { 3986 /* cxgtr */, SystemZ::CXGTR, Convert__FP1281_0__GR641_1, 0, { MCK_FP128, MCK_GR64 }, },
  { 3992 /* cxgtra */, SystemZ::CXGTRA, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 3999 /* cxlfbr */, SystemZ::CXLFBR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 4006 /* cxlftr */, SystemZ::CXLFTR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 4013 /* cxlgbr */, SystemZ::CXLGBR, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 4020 /* cxlgtr */, SystemZ::CXLGTR, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 4027 /* cxpt */, SystemZ::CXPT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPPackedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 4032 /* cxr */, SystemZ::CXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4036 /* cxstr */, SystemZ::CXSTR, Convert__FP1281_0__GR1281_1, 0, { MCK_FP128, MCK_GR128 }, },
  { 4042 /* cxtr */, SystemZ::CXTR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4047 /* cxutr */, SystemZ::CXUTR, Convert__FP1281_0__GR1281_1, 0, { MCK_FP128, MCK_GR128 }, },
  { 4053 /* cxzt */, SystemZ::CXZT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPZonedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 4058 /* cy */, SystemZ::CY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4061 /* czdt */, SystemZ::CZDT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPZonedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 4066 /* czxt */, SystemZ::CZXT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPZonedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 4071 /* d */, SystemZ::D, Convert__GR1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR128, MCK_BDXAddr64Disp12 }, },
  { 4073 /* dd */, SystemZ::DD, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4076 /* ddb */, SystemZ::DDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4080 /* ddbr */, SystemZ::DDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4085 /* ddr */, SystemZ::DDR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4089 /* ddtr */, SystemZ::DDTR, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 4094 /* ddtra */, SystemZ::DDTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 4100 /* de */, SystemZ::DE, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 4103 /* deb */, SystemZ::DEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 4107 /* debr */, SystemZ::DEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4112 /* der */, SystemZ::DER, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4116 /* diag */, SystemZ::DIAG, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 4121 /* didbr */, SystemZ::DIDBR, Convert__FP641_0__FP641_1__Tie0__FP641_2__U4Imm1_3, 0, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 4127 /* diebr */, SystemZ::DIEBR, Convert__FP321_0__FP321_1__Tie0__FP321_2__U4Imm1_3, 0, { MCK_FP32, MCK_FP32, MCK_FP32, MCK_U4Imm }, },
  { 4133 /* dl */, SystemZ::DL, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 4136 /* dlg */, SystemZ::DLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 4140 /* dlgr */, SystemZ::DLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 4145 /* dlr */, SystemZ::DLR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 4149 /* dp */, SystemZ::DP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 4152 /* dr */, SystemZ::DR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 4155 /* dsg */, SystemZ::DSG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 4159 /* dsgf */, SystemZ::DSGF, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 4164 /* dsgfr */, SystemZ::DSGFR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 4170 /* dsgr */, SystemZ::DSGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 4175 /* dxbr */, SystemZ::DXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4180 /* dxr */, SystemZ::DXR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4184 /* dxtr */, SystemZ::DXTR, Convert__FP1281_0__FP1281_1__FP1281_2, 0, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 4189 /* dxtra */, SystemZ::DXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 4195 /* ear */, SystemZ::EAR, Convert__GR321_0__AR321_1, 0, { MCK_GR32, MCK_AR32 }, },
  { 4199 /* ecag */, SystemZ::ECAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 4204 /* ecctr */, SystemZ::ECCTR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4210 /* ecpga */, SystemZ::ECPGA, Convert__GR321_0__GR641_1, 0, { MCK_GR32, MCK_GR64 }, },
  { 4216 /* ectg */, SystemZ::ECTG, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2, 0, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 4221 /* ed */, SystemZ::ED, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 4224 /* edmk */, SystemZ::EDMK, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 4229 /* eedtr */, SystemZ::EEDTR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4235 /* eextr */, SystemZ::EEXTR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4241 /* efpc */, SystemZ::EFPC, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 4246 /* epair */, SystemZ::EPAIR, Convert__GR641_0, 0, { MCK_GR64 }, },
  { 4252 /* epar */, SystemZ::EPAR, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 4257 /* epctr */, SystemZ::EPCTR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4263 /* epsw */, SystemZ::EPSW, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4268 /* ereg */, SystemZ::EREG, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4273 /* eregg */, SystemZ::EREGG, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4279 /* esair */, SystemZ::ESAIR, Convert__GR641_0, 0, { MCK_GR64 }, },
  { 4285 /* esar */, SystemZ::ESAR, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 4290 /* esdtr */, SystemZ::ESDTR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4296 /* esea */, SystemZ::ESEA, Convert__GR321_0__Tie0, 0, { MCK_GR32 }, },
  { 4301 /* esta */, SystemZ::ESTA, Convert__GR1281_0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 4306 /* esxtr */, SystemZ::ESXTR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4312 /* etnd */, SystemZ::ETND, Convert__GR321_0, Feature_FeatureTransactionalExecution, { MCK_GR32 }, },
  { 4317 /* ex */, SystemZ::EX, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4320 /* exrl */, SystemZ::EXRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 4325 /* fidbr */, SystemZ::FIDBR, Convert__FP641_0__U4Imm1_1__FP641_2, 0, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, },
  { 4331 /* fidbra */, SystemZ::FIDBRA, Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 4338 /* fidr */, SystemZ::FIDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4343 /* fidtr */, SystemZ::FIDTR, Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3, 0, { MCK_FP64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 4349 /* fiebr */, SystemZ::FIEBR, Convert__FP321_0__U4Imm1_1__FP321_2, 0, { MCK_FP32, MCK_U4Imm, MCK_FP32 }, },
  { 4355 /* fiebra */, SystemZ::FIEBRA, Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 4362 /* fier */, SystemZ::FIER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4367 /* fixbr */, SystemZ::FIXBR, Convert__FP1281_0__U4Imm1_1__FP1281_2, 0, { MCK_FP128, MCK_U4Imm, MCK_FP128 }, },
  { 4373 /* fixbra */, SystemZ::FIXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 4380 /* fixr */, SystemZ::FIXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4385 /* fixtr */, SystemZ::FIXTR, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, 0, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 4391 /* flogr */, SystemZ::FLOGR, Convert__GR1281_0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 4397 /* hdr */, SystemZ::HDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4401 /* her */, SystemZ::HER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4405 /* hsch */, SystemZ::HSCH, Convert_NoOperands, 0, {  }, },
  { 4410 /* iac */, SystemZ::IAC, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 4414 /* ic */, SystemZ::IC, Convert__GR641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4417 /* icm */, SystemZ::ICM, Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 4421 /* icmh */, SystemZ::ICMH, Convert__GRH321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 4426 /* icmy */, SystemZ::ICMY, Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 4431 /* icy */, SystemZ::ICY, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4435 /* idte */, SystemZ::IDTEOpt, Convert__GR641_0__GR641_2__GR641_1, 0, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 4435 /* idte */, SystemZ::IDTE, Convert__GR641_0__GR641_2__GR641_1__U4Imm1_3, 0, { MCK_GR64, MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 4440 /* iedtr */, SystemZ::IEDTR, Convert__FP641_0__FP641_2__FP641_1, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 4446 /* iextr */, SystemZ::IEXTR, Convert__FP1281_0__FP1281_2__FP1281_1, 0, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 4452 /* iihf */, SystemZ::IIHF, Convert__GRH321_0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 4457 /* iihh */, SystemZ::IIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 4462 /* iihl */, SystemZ::IIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 4467 /* iilf */, SystemZ::IILF, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 4472 /* iilh */, SystemZ::IILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 4477 /* iill */, SystemZ::IILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 4482 /* ipk */, SystemZ::IPK, Convert_NoOperands, 0, {  }, },
  { 4486 /* ipm */, SystemZ::IPM, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 4490 /* ipte */, SystemZ::IPTEOptOpt, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 4490 /* ipte */, SystemZ::IPTEOpt, Convert__GR641_0__GR321_1__GR321_2, 0, { MCK_GR64, MCK_GR32, MCK_GR32 }, },
  { 4490 /* ipte */, SystemZ::IPTE, Convert__GR641_0__GR321_1__GR321_2__U4Imm1_3, 0, { MCK_GR64, MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 4495 /* irbm */, SystemZ::IRBM, Convert__GR641_0__GR641_1, Feature_FeatureInsertReferenceBitsMultiple, { MCK_GR64, MCK_GR64 }, },
  { 4500 /* iske */, SystemZ::ISKE, Convert__GR321_0__Tie0__GR641_1, 0, { MCK_GR32, MCK_GR64 }, },
  { 4505 /* ivsk */, SystemZ::IVSK, Convert__GR321_0__Tie0__GR641_1, 0, { MCK_GR32, MCK_GR64 }, },
  { 4510 /* j */, SystemZ::J, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4512 /* je */, SystemZ::JAsmE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4515 /* jg */, SystemZ::JG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4518 /* jge */, SystemZ::JGAsmE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4522 /* jgh */, SystemZ::JGAsmH, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4526 /* jghe */, SystemZ::JGAsmHE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4531 /* jgl */, SystemZ::JGAsmL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4535 /* jgle */, SystemZ::JGAsmLE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4540 /* jglh */, SystemZ::JGAsmLH, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4545 /* jgm */, SystemZ::JGAsmM, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4549 /* jgne */, SystemZ::JGAsmNE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4554 /* jgnh */, SystemZ::JGAsmNH, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4559 /* jgnhe */, SystemZ::JGAsmNHE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4565 /* jgnl */, SystemZ::JGAsmNL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4570 /* jgnle */, SystemZ::JGAsmNLE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4576 /* jgnlh */, SystemZ::JGAsmNLH, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4582 /* jgnm */, SystemZ::JGAsmNM, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4587 /* jgno */, SystemZ::JGAsmNO, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4592 /* jgnp */, SystemZ::JGAsmNP, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4597 /* jgnz */, SystemZ::JGAsmNZ, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4602 /* jgo */, SystemZ::JGAsmO, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4606 /* jgp */, SystemZ::JGAsmP, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4610 /* jgz */, SystemZ::JGAsmZ, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4614 /* jh */, SystemZ::JAsmH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4617 /* jhe */, SystemZ::JAsmHE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4621 /* jl */, SystemZ::JAsmL, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4624 /* jle */, SystemZ::JAsmLE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4628 /* jlh */, SystemZ::JAsmLH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4632 /* jm */, SystemZ::JAsmM, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4635 /* jne */, SystemZ::JAsmNE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4639 /* jnh */, SystemZ::JAsmNH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4643 /* jnhe */, SystemZ::JAsmNHE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4648 /* jnl */, SystemZ::JAsmNL, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4652 /* jnle */, SystemZ::JAsmNLE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4657 /* jnlh */, SystemZ::JAsmNLH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4662 /* jnm */, SystemZ::JAsmNM, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4666 /* jno */, SystemZ::JAsmNO, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4670 /* jnp */, SystemZ::JAsmNP, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4674 /* jnz */, SystemZ::JAsmNZ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4678 /* jo */, SystemZ::JAsmO, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4681 /* jp */, SystemZ::JAsmP, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4684 /* jz */, SystemZ::JAsmZ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4687 /* kdb */, SystemZ::KDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4691 /* kdbr */, SystemZ::KDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4696 /* kdtr */, SystemZ::KDTR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4701 /* keb */, SystemZ::KEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 4705 /* kebr */, SystemZ::KEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4710 /* kimd */, SystemZ::KIMD, Convert__GR1281_1__GR641_0__Tie0, 0, { MCK_GR64, MCK_GR128 }, },
  { 4715 /* klmd */, SystemZ::KLMD, Convert__GR1281_1__GR641_0__Tie0, 0, { MCK_GR64, MCK_GR128 }, },
  { 4720 /* km */, SystemZ::KM, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 4723 /* kma */, SystemZ::KMA, Convert__GR1281_0__GR1281_2__GR1281_1__Tie0__Tie1__Tie2, Feature_FeatureMessageSecurityAssist8, { MCK_GR128, MCK_GR128, MCK_GR128 }, },
  { 4727 /* kmac */, SystemZ::KMAC, Convert__GR1281_1__GR641_0__Tie0, 0, { MCK_GR64, MCK_GR128 }, },
  { 4732 /* kmc */, SystemZ::KMC, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 4736 /* kmctr */, SystemZ::KMCTR, Convert__GR1281_0__GR1281_2__GR1281_1__Tie0__Tie1__Tie2, Feature_FeatureMessageSecurityAssist4, { MCK_GR128, MCK_GR128, MCK_GR128 }, },
  { 4742 /* kmf */, SystemZ::KMF, Convert__GR1281_0__GR1281_1__Tie0__Tie1, Feature_FeatureMessageSecurityAssist4, { MCK_GR128, MCK_GR128 }, },
  { 4746 /* kmo */, SystemZ::KMO, Convert__GR1281_0__GR1281_1__Tie0__Tie1, Feature_FeatureMessageSecurityAssist4, { MCK_GR128, MCK_GR128 }, },
  { 4750 /* kxbr */, SystemZ::KXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4755 /* kxtr */, SystemZ::KXTR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4760 /* l */, SystemZ::L, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 4762 /* la */, SystemZ::LA, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4765 /* laa */, SystemZ::LAA, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4769 /* laag */, SystemZ::LAAG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4774 /* laal */, SystemZ::LAAL, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4779 /* laalg */, SystemZ::LAALG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4785 /* lae */, SystemZ::LAE, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4789 /* laey */, SystemZ::LAEY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4794 /* lam */, SystemZ::LAM, Convert__AR321_0__AR321_1__BDAddr64Disp122_2, 0, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp12 }, },
  { 4798 /* lamy */, SystemZ::LAMY, Convert__AR321_0__AR321_1__BDAddr64Disp202_2, 0, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp20 }, },
  { 4803 /* lan */, SystemZ::LAN, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4807 /* lang */, SystemZ::LANG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4812 /* lao */, SystemZ::LAO, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4816 /* laog */, SystemZ::LAOG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4821 /* larl */, SystemZ::LARL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 4826 /* lasp */, SystemZ::LASP, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, 0, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 4831 /* lat */, SystemZ::LAT, Convert__GR321_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndTrap, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4835 /* lax */, SystemZ::LAX, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4839 /* laxg */, SystemZ::LAXG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4844 /* lay */, SystemZ::LAY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4848 /* lb */, SystemZ::LB, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4851 /* lbh */, SystemZ::LBH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 4855 /* lbr */, SystemZ::LBR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4859 /* lcbb */, SystemZ::LCBB, Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_GR32, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 4864 /* lcctl */, SystemZ::LCCTL, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 4870 /* lcdbr */, SystemZ::LCDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4876 /* lcdfr */, SystemZ::LCDFR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4882 /* lcdr */, SystemZ::LCDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4887 /* lcebr */, SystemZ::LCEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4893 /* lcer */, SystemZ::LCER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4898 /* lcgfr */, SystemZ::LCGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 4904 /* lcgr */, SystemZ::LCGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4909 /* lcr */, SystemZ::LCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4913 /* lctl */, SystemZ::LCTL, Convert__CR641_0__CR641_1__BDAddr64Disp122_2, 0, { MCK_CR64, MCK_CR64, MCK_BDAddr64Disp12 }, },
  { 4918 /* lctlg */, SystemZ::LCTLG, Convert__CR641_0__CR641_1__BDAddr64Disp202_2, 0, { MCK_CR64, MCK_CR64, MCK_BDAddr64Disp20 }, },
  { 4924 /* lcxbr */, SystemZ::LCXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4930 /* lcxr */, SystemZ::LCXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4935 /* ld */, SystemZ::LD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4938 /* lde */, SystemZ::LDE, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4942 /* ldeb */, SystemZ::LDEB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4947 /* ldebr */, SystemZ::LDEBR, Convert__FP641_0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 4953 /* lder */, SystemZ::LDER, Convert__FP641_0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 4958 /* ldetr */, SystemZ::LDETR, Convert__FP641_0__FP321_1__U4Imm1_2, 0, { MCK_FP64, MCK_FP32, MCK_U4Imm }, },
  { 4964 /* ldgr */, SystemZ::LDGR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 4969 /* ldr */, SystemZ::LDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4973 /* ldxbr */, SystemZ::LDXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4979 /* ldxbra */, SystemZ::LDXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 4986 /* ldxr */, SystemZ::LDXR, Convert__FP641_0__FP1281_1, 0, { MCK_FP64, MCK_FP128 }, },
  { 4991 /* ldxtr */, SystemZ::LDXTR, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, 0, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 4997 /* ldy */, SystemZ::LDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 5001 /* le */, SystemZ::LE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 5004 /* ledbr */, SystemZ::LEDBR, Convert__FP321_0__FP641_1, 0, { MCK_FP32, MCK_FP64 }, },
  { 5010 /* ledbra */, SystemZ::LEDBRA, Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 5017 /* ledr */, SystemZ::LEDR, Convert__FP321_0__FP641_1, 0, { MCK_FP32, MCK_FP64 }, },
  { 5022 /* ledtr */, SystemZ::LEDTR, Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3, 0, { MCK_FP32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 5028 /* ler */, SystemZ::LER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 5032 /* lexbr */, SystemZ::LEXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 5038 /* lexbra */, SystemZ::LEXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 5045 /* lexr */, SystemZ::LEXR, Convert__FP321_0__FP1281_1, 0, { MCK_FP32, MCK_FP128 }, },
  { 5050 /* ley */, SystemZ::LEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 5054 /* lfas */, SystemZ::LFAS, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 5059 /* lfh */, SystemZ::LFH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5063 /* lfhat */, SystemZ::LFHAT, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndTrap, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5069 /* lfpc */, SystemZ::LFPC, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 5074 /* lg */, SystemZ::LG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5077 /* lgat */, SystemZ::LGAT, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndTrap, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5082 /* lgb */, SystemZ::LGB, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5086 /* lgbr */, SystemZ::LGBR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5091 /* lgdr */, SystemZ::LGDR, Convert__GR641_0__FP641_1, 0, { MCK_GR64, MCK_FP64 }, },
  { 5096 /* lgf */, SystemZ::LGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5100 /* lgfi */, SystemZ::LGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 5105 /* lgfr */, SystemZ::LGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 5110 /* lgfrl */, SystemZ::LGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 5116 /* lgg */, SystemZ::LGG, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureGuardedStorage, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5120 /* lgh */, SystemZ::LGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5124 /* lghi */, SystemZ::LGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 5129 /* lghr */, SystemZ::LGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5134 /* lghrl */, SystemZ::LGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 5140 /* lgr */, SystemZ::LGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5144 /* lgrl */, SystemZ::LGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 5149 /* lgsc */, SystemZ::LGSC, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureGuardedStorage, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5154 /* lh */, SystemZ::LH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 5157 /* lhh */, SystemZ::LHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5161 /* lhi */, SystemZ::LHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 5165 /* lhr */, SystemZ::LHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 5169 /* lhrl */, SystemZ::LHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 5174 /* lhy */, SystemZ::LHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5178 /* llc */, SystemZ::LLC, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5182 /* llch */, SystemZ::LLCH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5187 /* llcr */, SystemZ::LLCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 5192 /* llgc */, SystemZ::LLGC, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5197 /* llgcr */, SystemZ::LLGCR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5203 /* llgf */, SystemZ::LLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5208 /* llgfat */, SystemZ::LLGFAT, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndTrap, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5215 /* llgfr */, SystemZ::LLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 5221 /* llgfrl */, SystemZ::LLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 5228 /* llgfsg */, SystemZ::LLGFSG, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureGuardedStorage, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5235 /* llgh */, SystemZ::LLGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5240 /* llghr */, SystemZ::LLGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5246 /* llghrl */, SystemZ::LLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 5253 /* llgt */, SystemZ::LLGT, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5258 /* llgtat */, SystemZ::LLGTAT, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndTrap, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5265 /* llgtr */, SystemZ::LLGTR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5271 /* llh */, SystemZ::LLH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5275 /* llhh */, SystemZ::LLHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5280 /* llhr */, SystemZ::LLHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 5285 /* llhrl */, SystemZ::LLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 5291 /* llihf */, SystemZ::LLIHF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 5297 /* llihh */, SystemZ::LLIHH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 5303 /* llihl */, SystemZ::LLIHL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 5309 /* llilf */, SystemZ::LLILF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 5315 /* llilh */, SystemZ::LLILH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 5321 /* llill */, SystemZ::LLILL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 5327 /* llzrgf */, SystemZ::LLZRGF, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndZeroRightmostByte, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5334 /* lm */, SystemZ::LM, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 5337 /* lmd */, SystemZ::LMD, Convert__GR641_0__GR641_1__BDAddr64Disp122_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 5341 /* lmg */, SystemZ::LMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5345 /* lmh */, SystemZ::LMH, Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5349 /* lmy */, SystemZ::LMY, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5353 /* lndbr */, SystemZ::LNDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 5359 /* lndfr */, SystemZ::LNDFR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 5365 /* lndr */, SystemZ::LNDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 5370 /* lnebr */, SystemZ::LNEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 5376 /* lner */, SystemZ::LNER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 5381 /* lngfr */, SystemZ::LNGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 5387 /* lngr */, SystemZ::LNGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5392 /* lnr */, SystemZ::LNR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 5396 /* lnxbr */, SystemZ::LNXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 5402 /* lnxr */, SystemZ::LNXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 5407 /* loc */, SystemZ::LOCAsm, Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 5411 /* loce */, SystemZ::LOCAsmE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5416 /* locfh */, SystemZ::LOCFHAsm, Convert__GRH321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 5422 /* locfhe */, SystemZ::LOCFHAsmE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5429 /* locfhh */, SystemZ::LOCFHAsmH, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5436 /* locfhhe */, SystemZ::LOCFHAsmHE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5444 /* locfhl */, SystemZ::LOCFHAsmL, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5451 /* locfhle */, SystemZ::LOCFHAsmLE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5459 /* locfhlh */, SystemZ::LOCFHAsmLH, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5467 /* locfhm */, SystemZ::LOCFHAsmM, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5474 /* locfhne */, SystemZ::LOCFHAsmNE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5482 /* locfhnh */, SystemZ::LOCFHAsmNH, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5490 /* locfhnhe */, SystemZ::LOCFHAsmNHE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5499 /* locfhnl */, SystemZ::LOCFHAsmNL, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5507 /* locfhnle */, SystemZ::LOCFHAsmNLE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5516 /* locfhnlh */, SystemZ::LOCFHAsmNLH, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5525 /* locfhnm */, SystemZ::LOCFHAsmNM, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5533 /* locfhno */, SystemZ::LOCFHAsmNO, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5541 /* locfhnp */, SystemZ::LOCFHAsmNP, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5549 /* locfhnz */, SystemZ::LOCFHAsmNZ, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5557 /* locfho */, SystemZ::LOCFHAsmO, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5564 /* locfhp */, SystemZ::LOCFHAsmP, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5571 /* locfhr */, SystemZ::LOCFHRAsm, Convert__GRH321_0__Tie0__GRH321_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32, MCK_U4Imm }, },
  { 5578 /* locfhre */, SystemZ::LOCFHRAsmE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5586 /* locfhrh */, SystemZ::LOCFHRAsmH, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5594 /* locfhrhe */, SystemZ::LOCFHRAsmHE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5603 /* locfhrl */, SystemZ::LOCFHRAsmL, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5611 /* locfhrle */, SystemZ::LOCFHRAsmLE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5620 /* locfhrlh */, SystemZ::LOCFHRAsmLH, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5629 /* locfhrm */, SystemZ::LOCFHRAsmM, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5637 /* locfhrne */, SystemZ::LOCFHRAsmNE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5646 /* locfhrnh */, SystemZ::LOCFHRAsmNH, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5655 /* locfhrnhe */, SystemZ::LOCFHRAsmNHE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5665 /* locfhrnl */, SystemZ::LOCFHRAsmNL, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5674 /* locfhrnle */, SystemZ::LOCFHRAsmNLE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5684 /* locfhrnlh */, SystemZ::LOCFHRAsmNLH, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5694 /* locfhrnm */, SystemZ::LOCFHRAsmNM, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5703 /* locfhrno */, SystemZ::LOCFHRAsmNO, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5712 /* locfhrnp */, SystemZ::LOCFHRAsmNP, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5721 /* locfhrnz */, SystemZ::LOCFHRAsmNZ, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5730 /* locfhro */, SystemZ::LOCFHRAsmO, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5738 /* locfhrp */, SystemZ::LOCFHRAsmP, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5746 /* locfhrz */, SystemZ::LOCFHRAsmZ, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5754 /* locfhz */, SystemZ::LOCFHAsmZ, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5761 /* locg */, SystemZ::LOCGAsm, Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 5766 /* locge */, SystemZ::LOCGAsmE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5772 /* locgh */, SystemZ::LOCGAsmH, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5778 /* locghe */, SystemZ::LOCGAsmHE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5785 /* locghi */, SystemZ::LOCGHIAsm, Convert__GR641_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm, MCK_U4Imm }, },
  { 5792 /* locghie */, SystemZ::LOCGHIAsmE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5800 /* locghih */, SystemZ::LOCGHIAsmH, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5808 /* locghihe */, SystemZ::LOCGHIAsmHE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5817 /* locghil */, SystemZ::LOCGHIAsmL, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5825 /* locghile */, SystemZ::LOCGHIAsmLE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5834 /* locghilh */, SystemZ::LOCGHIAsmLH, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5843 /* locghim */, SystemZ::LOCGHIAsmM, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5851 /* locghine */, SystemZ::LOCGHIAsmNE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5860 /* locghinh */, SystemZ::LOCGHIAsmNH, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5869 /* locghinhe */, SystemZ::LOCGHIAsmNHE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5879 /* locghinl */, SystemZ::LOCGHIAsmNL, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5888 /* locghinle */, SystemZ::LOCGHIAsmNLE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5898 /* locghinlh */, SystemZ::LOCGHIAsmNLH, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5908 /* locghinm */, SystemZ::LOCGHIAsmNM, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5917 /* locghino */, SystemZ::LOCGHIAsmNO, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5926 /* locghinp */, SystemZ::LOCGHIAsmNP, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5935 /* locghinz */, SystemZ::LOCGHIAsmNZ, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5944 /* locghio */, SystemZ::LOCGHIAsmO, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5952 /* locghip */, SystemZ::LOCGHIAsmP, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5960 /* locghiz */, SystemZ::LOCGHIAsmZ, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5968 /* locgl */, SystemZ::LOCGAsmL, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5974 /* locgle */, SystemZ::LOCGAsmLE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5981 /* locglh */, SystemZ::LOCGAsmLH, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5988 /* locgm */, SystemZ::LOCGAsmM, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5994 /* locgne */, SystemZ::LOCGAsmNE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6001 /* locgnh */, SystemZ::LOCGAsmNH, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6008 /* locgnhe */, SystemZ::LOCGAsmNHE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6016 /* locgnl */, SystemZ::LOCGAsmNL, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6023 /* locgnle */, SystemZ::LOCGAsmNLE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6031 /* locgnlh */, SystemZ::LOCGAsmNLH, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6039 /* locgnm */, SystemZ::LOCGAsmNM, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6046 /* locgno */, SystemZ::LOCGAsmNO, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6053 /* locgnp */, SystemZ::LOCGAsmNP, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6060 /* locgnz */, SystemZ::LOCGAsmNZ, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6067 /* locgo */, SystemZ::LOCGAsmO, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6073 /* locgp */, SystemZ::LOCGAsmP, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6079 /* locgr */, SystemZ::LOCGRAsm, Convert__GR641_0__Tie0__GR641_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 6085 /* locgre */, SystemZ::LOCGRAsmE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6092 /* locgrh */, SystemZ::LOCGRAsmH, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6099 /* locgrhe */, SystemZ::LOCGRAsmHE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6107 /* locgrl */, SystemZ::LOCGRAsmL, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6114 /* locgrle */, SystemZ::LOCGRAsmLE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6122 /* locgrlh */, SystemZ::LOCGRAsmLH, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6130 /* locgrm */, SystemZ::LOCGRAsmM, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6137 /* locgrne */, SystemZ::LOCGRAsmNE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6145 /* locgrnh */, SystemZ::LOCGRAsmNH, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6153 /* locgrnhe */, SystemZ::LOCGRAsmNHE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6162 /* locgrnl */, SystemZ::LOCGRAsmNL, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6170 /* locgrnle */, SystemZ::LOCGRAsmNLE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6179 /* locgrnlh */, SystemZ::LOCGRAsmNLH, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6188 /* locgrnm */, SystemZ::LOCGRAsmNM, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6196 /* locgrno */, SystemZ::LOCGRAsmNO, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6204 /* locgrnp */, SystemZ::LOCGRAsmNP, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6212 /* locgrnz */, SystemZ::LOCGRAsmNZ, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6220 /* locgro */, SystemZ::LOCGRAsmO, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6227 /* locgrp */, SystemZ::LOCGRAsmP, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6234 /* locgrz */, SystemZ::LOCGRAsmZ, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6241 /* locgz */, SystemZ::LOCGAsmZ, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6247 /* loch */, SystemZ::LOCAsmH, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6252 /* loche */, SystemZ::LOCAsmHE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6258 /* lochhi */, SystemZ::LOCHHIAsm, Convert__GRH321_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm, MCK_U4Imm }, },
  { 6265 /* lochhie */, SystemZ::LOCHHIAsmE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6273 /* lochhih */, SystemZ::LOCHHIAsmH, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6281 /* lochhihe */, SystemZ::LOCHHIAsmHE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6290 /* lochhil */, SystemZ::LOCHHIAsmL, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6298 /* lochhile */, SystemZ::LOCHHIAsmLE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6307 /* lochhilh */, SystemZ::LOCHHIAsmLH, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6316 /* lochhim */, SystemZ::LOCHHIAsmM, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6324 /* lochhine */, SystemZ::LOCHHIAsmNE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6333 /* lochhinh */, SystemZ::LOCHHIAsmNH, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6342 /* lochhinhe */, SystemZ::LOCHHIAsmNHE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6352 /* lochhinl */, SystemZ::LOCHHIAsmNL, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6361 /* lochhinle */, SystemZ::LOCHHIAsmNLE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6371 /* lochhinlh */, SystemZ::LOCHHIAsmNLH, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6381 /* lochhinm */, SystemZ::LOCHHIAsmNM, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6390 /* lochhino */, SystemZ::LOCHHIAsmNO, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6399 /* lochhinp */, SystemZ::LOCHHIAsmNP, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6408 /* lochhinz */, SystemZ::LOCHHIAsmNZ, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6417 /* lochhio */, SystemZ::LOCHHIAsmO, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6425 /* lochhip */, SystemZ::LOCHHIAsmP, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6433 /* lochhiz */, SystemZ::LOCHHIAsmZ, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6441 /* lochi */, SystemZ::LOCHIAsm, Convert__GR321_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm, MCK_U4Imm }, },
  { 6447 /* lochie */, SystemZ::LOCHIAsmE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6454 /* lochih */, SystemZ::LOCHIAsmH, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6461 /* lochihe */, SystemZ::LOCHIAsmHE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6469 /* lochil */, SystemZ::LOCHIAsmL, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6476 /* lochile */, SystemZ::LOCHIAsmLE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6484 /* lochilh */, SystemZ::LOCHIAsmLH, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6492 /* lochim */, SystemZ::LOCHIAsmM, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6499 /* lochine */, SystemZ::LOCHIAsmNE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6507 /* lochinh */, SystemZ::LOCHIAsmNH, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6515 /* lochinhe */, SystemZ::LOCHIAsmNHE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6524 /* lochinl */, SystemZ::LOCHIAsmNL, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6532 /* lochinle */, SystemZ::LOCHIAsmNLE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6541 /* lochinlh */, SystemZ::LOCHIAsmNLH, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6550 /* lochinm */, SystemZ::LOCHIAsmNM, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6558 /* lochino */, SystemZ::LOCHIAsmNO, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6566 /* lochinp */, SystemZ::LOCHIAsmNP, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6574 /* lochinz */, SystemZ::LOCHIAsmNZ, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6582 /* lochio */, SystemZ::LOCHIAsmO, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6589 /* lochip */, SystemZ::LOCHIAsmP, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6596 /* lochiz */, SystemZ::LOCHIAsmZ, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6603 /* locl */, SystemZ::LOCAsmL, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6608 /* locle */, SystemZ::LOCAsmLE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6614 /* loclh */, SystemZ::LOCAsmLH, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6620 /* locm */, SystemZ::LOCAsmM, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6625 /* locne */, SystemZ::LOCAsmNE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6631 /* locnh */, SystemZ::LOCAsmNH, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6637 /* locnhe */, SystemZ::LOCAsmNHE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6644 /* locnl */, SystemZ::LOCAsmNL, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6650 /* locnle */, SystemZ::LOCAsmNLE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6657 /* locnlh */, SystemZ::LOCAsmNLH, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6664 /* locnm */, SystemZ::LOCAsmNM, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6670 /* locno */, SystemZ::LOCAsmNO, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6676 /* locnp */, SystemZ::LOCAsmNP, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6682 /* locnz */, SystemZ::LOCAsmNZ, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6688 /* loco */, SystemZ::LOCAsmO, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6693 /* locp */, SystemZ::LOCAsmP, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6698 /* locr */, SystemZ::LOCRAsm, Convert__GR321_0__Tie0__GR321_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 6703 /* locre */, SystemZ::LOCRAsmE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6709 /* locrh */, SystemZ::LOCRAsmH, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6715 /* locrhe */, SystemZ::LOCRAsmHE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6722 /* locrl */, SystemZ::LOCRAsmL, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6728 /* locrle */, SystemZ::LOCRAsmLE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6735 /* locrlh */, SystemZ::LOCRAsmLH, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6742 /* locrm */, SystemZ::LOCRAsmM, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6748 /* locrne */, SystemZ::LOCRAsmNE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6755 /* locrnh */, SystemZ::LOCRAsmNH, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6762 /* locrnhe */, SystemZ::LOCRAsmNHE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6770 /* locrnl */, SystemZ::LOCRAsmNL, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6777 /* locrnle */, SystemZ::LOCRAsmNLE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6785 /* locrnlh */, SystemZ::LOCRAsmNLH, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6793 /* locrnm */, SystemZ::LOCRAsmNM, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6800 /* locrno */, SystemZ::LOCRAsmNO, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6807 /* locrnp */, SystemZ::LOCRAsmNP, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6814 /* locrnz */, SystemZ::LOCRAsmNZ, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6821 /* locro */, SystemZ::LOCRAsmO, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6827 /* locrp */, SystemZ::LOCRAsmP, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6833 /* locrz */, SystemZ::LOCRAsmZ, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6839 /* locz */, SystemZ::LOCAsmZ, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6844 /* lpctl */, SystemZ::LPCTL, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 6850 /* lpd */, SystemZ::LPD, Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2, Feature_FeatureInterlockedAccess1, { MCK_GR128, MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 6854 /* lpdbr */, SystemZ::LPDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 6860 /* lpdfr */, SystemZ::LPDFR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 6866 /* lpdg */, SystemZ::LPDG, Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2, Feature_FeatureInterlockedAccess1, { MCK_GR128, MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 6871 /* lpdr */, SystemZ::LPDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 6876 /* lpebr */, SystemZ::LPEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 6882 /* lper */, SystemZ::LPER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 6887 /* lpgfr */, SystemZ::LPGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 6893 /* lpgr */, SystemZ::LPGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 6898 /* lpp */, SystemZ::LPP, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 6902 /* lpq */, SystemZ::LPQ, Convert__GR1281_0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 6906 /* lpr */, SystemZ::LPR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 6910 /* lpsw */, SystemZ::LPSW, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 6915 /* lpswe */, SystemZ::LPSWE, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 6921 /* lptea */, SystemZ::LPTEA, Convert__GR641_0__GR641_1__Tie0__GR641_2__U4Imm1_3, 0, { MCK_GR64, MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 6927 /* lpxbr */, SystemZ::LPXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 6933 /* lpxr */, SystemZ::LPXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 6938 /* lr */, SystemZ::LR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 6941 /* lra */, SystemZ::LRA, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 6945 /* lrag */, SystemZ::LRAG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6950 /* lray */, SystemZ::LRAY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6955 /* lrdr */, SystemZ::LRDR, Convert__FP641_0__FP1281_1, 0, { MCK_FP64, MCK_FP128 }, },
  { 6960 /* lrer */, SystemZ::LRER, Convert__FP321_0__FP641_1, 0, { MCK_FP32, MCK_FP64 }, },
  { 6965 /* lrl */, SystemZ::LRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 6969 /* lrv */, SystemZ::LRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6973 /* lrvg */, SystemZ::LRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6978 /* lrvgr */, SystemZ::LRVGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 6984 /* lrvh */, SystemZ::LRVH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6989 /* lrvr */, SystemZ::LRVR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 6994 /* lsctl */, SystemZ::LSCTL, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 7000 /* lt */, SystemZ::LT, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7003 /* ltdbr */, SystemZ::LTDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 7009 /* ltdr */, SystemZ::LTDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 7014 /* ltdtr */, SystemZ::LTDTR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 7020 /* ltebr */, SystemZ::LTEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 7026 /* lter */, SystemZ::LTER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 7031 /* ltg */, SystemZ::LTG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7035 /* ltgf */, SystemZ::LTGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7040 /* ltgfr */, SystemZ::LTGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 7046 /* ltgr */, SystemZ::LTGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7051 /* ltr */, SystemZ::LTR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 7055 /* ltxbr */, SystemZ::LTXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 7061 /* ltxr */, SystemZ::LTXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 7066 /* ltxtr */, SystemZ::LTXTR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 7072 /* lura */, SystemZ::LURA, Convert__GR321_0__GR641_1, 0, { MCK_GR32, MCK_GR64 }, },
  { 7077 /* lurag */, SystemZ::LURAG, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7083 /* lxd */, SystemZ::LXD, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7087 /* lxdb */, SystemZ::LXDB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7092 /* lxdbr */, SystemZ::LXDBR, Convert__FP1281_0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 7098 /* lxdr */, SystemZ::LXDR, Convert__FP1281_0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 7103 /* lxdtr */, SystemZ::LXDTR, Convert__FP1281_0__FP641_1__U4Imm1_2, 0, { MCK_FP128, MCK_FP64, MCK_U4Imm }, },
  { 7109 /* lxe */, SystemZ::LXE, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7113 /* lxeb */, SystemZ::LXEB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7118 /* lxebr */, SystemZ::LXEBR, Convert__FP1281_0__FP321_1, 0, { MCK_FP128, MCK_FP32 }, },
  { 7124 /* lxer */, SystemZ::LXER, Convert__FP1281_0__FP321_1, 0, { MCK_FP128, MCK_FP32 }, },
  { 7129 /* lxr */, SystemZ::LXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 7133 /* ly */, SystemZ::LY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7136 /* lzdr */, SystemZ::LZDR, Convert__FP641_0, 0, { MCK_FP64 }, },
  { 7141 /* lzer */, SystemZ::LZER, Convert__FP321_0, 0, { MCK_FP32 }, },
  { 7146 /* lzrf */, SystemZ::LZRF, Convert__GR321_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndZeroRightmostByte, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7151 /* lzrg */, SystemZ::LZRG, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndZeroRightmostByte, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7156 /* lzxr */, SystemZ::LZXR, Convert__FP1281_0, 0, { MCK_FP128 }, },
  { 7161 /* m */, SystemZ::M, Convert__GR1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR128, MCK_BDXAddr64Disp12 }, },
  { 7163 /* mad */, SystemZ::MAD, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7167 /* madb */, SystemZ::MADB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7172 /* madbr */, SystemZ::MADBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7178 /* madr */, SystemZ::MADR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7183 /* mae */, SystemZ::MAE, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7187 /* maeb */, SystemZ::MAEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7192 /* maebr */, SystemZ::MAEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 7198 /* maer */, SystemZ::MAER, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 7203 /* may */, SystemZ::MAY, Convert__FP1281_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP128, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7207 /* mayh */, SystemZ::MAYH, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7212 /* mayhr */, SystemZ::MAYHR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7218 /* mayl */, SystemZ::MAYL, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7223 /* maylr */, SystemZ::MAYLR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7229 /* mayr */, SystemZ::MAYR, Convert__FP1281_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP128, MCK_FP64, MCK_FP64 }, },
  { 7234 /* mc */, SystemZ::MC, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7237 /* md */, SystemZ::MD, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7240 /* mdb */, SystemZ::MDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7244 /* mdbr */, SystemZ::MDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 7249 /* mde */, SystemZ::MDE, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7253 /* mdeb */, SystemZ::MDEB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7258 /* mdebr */, SystemZ::MDEBR, Convert__FP641_0__Tie0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 7264 /* mder */, SystemZ::MDER, Convert__FP641_0__Tie0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 7269 /* mdr */, SystemZ::MDR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 7273 /* mdtr */, SystemZ::MDTR, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7278 /* mdtra */, SystemZ::MDTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 7284 /* me */, SystemZ::ME, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7287 /* mee */, SystemZ::MEE, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7291 /* meeb */, SystemZ::MEEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7296 /* meebr */, SystemZ::MEEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 7302 /* meer */, SystemZ::MEER, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 7307 /* mer */, SystemZ::MER, Convert__FP641_0__Tie0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 7311 /* mfy */, SystemZ::MFY, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 7315 /* mg */, SystemZ::MG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, Feature_FeatureMiscellaneousExtensions2, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 7318 /* mgh */, SystemZ::MGH, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, Feature_FeatureMiscellaneousExtensions2, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7322 /* mghi */, SystemZ::MGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 7327 /* mgrk */, SystemZ::MGRK, Convert__GR1281_0__GR641_1__GR641_2, Feature_FeatureMiscellaneousExtensions2, { MCK_GR128, MCK_GR64, MCK_GR64 }, },
  { 7332 /* mh */, SystemZ::MH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7335 /* mhi */, SystemZ::MHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 7339 /* mhy */, SystemZ::MHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7343 /* ml */, SystemZ::ML, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 7346 /* mlg */, SystemZ::MLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 7350 /* mlgr */, SystemZ::MLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 7355 /* mlr */, SystemZ::MLR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 7359 /* mp */, SystemZ::MP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 7362 /* mr */, SystemZ::MR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 7365 /* ms */, SystemZ::MS, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7368 /* msc */, SystemZ::MSC, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, Feature_FeatureMiscellaneousExtensions2, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7372 /* msch */, SystemZ::MSCH, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 7377 /* msd */, SystemZ::MSD, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7381 /* msdb */, SystemZ::MSDB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7386 /* msdbr */, SystemZ::MSDBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7392 /* msdr */, SystemZ::MSDR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7397 /* mse */, SystemZ::MSE, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7401 /* mseb */, SystemZ::MSEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7406 /* msebr */, SystemZ::MSEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 7412 /* mser */, SystemZ::MSER, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 7417 /* msfi */, SystemZ::MSFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 7422 /* msg */, SystemZ::MSG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7426 /* msgc */, SystemZ::MSGC, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, Feature_FeatureMiscellaneousExtensions2, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7431 /* msgf */, SystemZ::MSGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7436 /* msgfi */, SystemZ::MSGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 7442 /* msgfr */, SystemZ::MSGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 7448 /* msgr */, SystemZ::MSGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7453 /* msgrkc */, SystemZ::MSGRKC, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureMiscellaneousExtensions2, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7460 /* msr */, SystemZ::MSR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 7464 /* msrkc */, SystemZ::MSRKC, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureMiscellaneousExtensions2, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7470 /* msta */, SystemZ::MSTA, Convert__GR1281_0, 0, { MCK_GR128 }, },
  { 7475 /* msy */, SystemZ::MSY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7479 /* mvc */, SystemZ::MVC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7483 /* mvcdk */, SystemZ::MVCDK, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, 0, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 7489 /* mvcin */, SystemZ::MVCIN, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7495 /* mvck */, SystemZ::MVCK, Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2, 0, { MCK_BDRAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 7500 /* mvcl */, SystemZ::MVCL, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 7505 /* mvcle */, SystemZ::MVCLE, Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp122_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 7511 /* mvclu */, SystemZ::MVCLU, Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp202_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp20 }, },
  { 7517 /* mvcos */, SystemZ::MVCOS, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2, 0, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 7523 /* mvcp */, SystemZ::MVCP, Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2, 0, { MCK_BDRAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 7528 /* mvcs */, SystemZ::MVCS, Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2, 0, { MCK_BDRAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 7533 /* mvcsk */, SystemZ::MVCSK, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, 0, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 7539 /* mvghi */, SystemZ::MVGHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 7545 /* mvhhi */, SystemZ::MVHHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 7551 /* mvhi */, SystemZ::MVHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 7556 /* mvi */, SystemZ::MVI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7560 /* mviy */, SystemZ::MVIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 7565 /* mvn */, SystemZ::MVN, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7569 /* mvo */, SystemZ::MVO, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 7573 /* mvpg */, SystemZ::MVPG, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7578 /* mvst */, SystemZ::MVST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7583 /* mvz */, SystemZ::MVZ, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7587 /* mxbr */, SystemZ::MXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 7592 /* mxd */, SystemZ::MXD, Convert__FP1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7596 /* mxdb */, SystemZ::MXDB, Convert__FP1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7601 /* mxdbr */, SystemZ::MXDBR, Convert__FP1281_0__Tie0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 7607 /* mxdr */, SystemZ::MXDR, Convert__FP1281_0__Tie0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 7612 /* mxr */, SystemZ::MXR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 7616 /* mxtr */, SystemZ::MXTR, Convert__FP1281_0__FP1281_1__FP1281_2, 0, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 7621 /* mxtra */, SystemZ::MXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 7627 /* my */, SystemZ::MY, Convert__FP1281_0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP128, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7630 /* myh */, SystemZ::MYH, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7634 /* myhr */, SystemZ::MYHR, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7639 /* myl */, SystemZ::MYL, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7643 /* mylr */, SystemZ::MYLR, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7648 /* myr */, SystemZ::MYR, Convert__FP1281_0__FP641_1__FP641_2, 0, { MCK_FP128, MCK_FP64, MCK_FP64 }, },
  { 7652 /* n */, SystemZ::N, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7654 /* nc */, SystemZ::NC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7657 /* ng */, SystemZ::NG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7660 /* ngr */, SystemZ::NGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7664 /* ngrk */, SystemZ::NGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7669 /* ni */, SystemZ::NI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7672 /* niai */, SystemZ::NIAI, Convert__U4Imm1_0__U4Imm1_1, Feature_FeatureExecutionHint, { MCK_U4Imm, MCK_U4Imm }, },
  { 7677 /* nihf */, SystemZ::NIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 7682 /* nihh */, SystemZ::NIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 7687 /* nihl */, SystemZ::NIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 7692 /* nilf */, SystemZ::NILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 7697 /* nilh */, SystemZ::NILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 7702 /* nill */, SystemZ::NILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 7707 /* niy */, SystemZ::NIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 7711 /* nop */, SystemZ::BCAsm, Convert__imm_95_0__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 7715 /* nopr */, SystemZ::BCRAsm, Convert__imm_95_0__GR641_0, 0, { MCK_GR64 }, },
  { 7720 /* nr */, SystemZ::NR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 7723 /* nrk */, SystemZ::NRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7727 /* ntstg */, SystemZ::NTSTG, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureTransactionalExecution, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7733 /* ny */, SystemZ::NY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7736 /* o */, SystemZ::O, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7738 /* oc */, SystemZ::OC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7741 /* og */, SystemZ::OG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7744 /* ogr */, SystemZ::OGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7748 /* ogrk */, SystemZ::OGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7753 /* oi */, SystemZ::OI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7756 /* oihf */, SystemZ::OIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 7761 /* oihh */, SystemZ::OIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 7766 /* oihl */, SystemZ::OIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 7771 /* oilf */, SystemZ::OILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 7776 /* oilh */, SystemZ::OILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 7781 /* oill */, SystemZ::OILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 7786 /* oiy */, SystemZ::OIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 7790 /* or */, SystemZ::OR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 7793 /* ork */, SystemZ::ORK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7797 /* oy */, SystemZ::OY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7800 /* pack */, SystemZ::PACK, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 7805 /* palb */, SystemZ::PALB, Convert_NoOperands, 0, {  }, },
  { 7810 /* pc */, SystemZ::PC, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 7813 /* pcc */, SystemZ::PCC, Convert_NoOperands, Feature_FeatureMessageSecurityAssist4, {  }, },
  { 7817 /* pckmo */, SystemZ::PCKMO, Convert_NoOperands, Feature_FeatureMessageSecurityAssist3, {  }, },
  { 7823 /* pfd */, SystemZ::PFD, Convert__U4Imm1_0__BDXAddr64Disp203_1, 0, { MCK_U4Imm, MCK_BDXAddr64Disp20 }, },
  { 7827 /* pfdrl */, SystemZ::PFDRL, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, },
  { 7833 /* pfmf */, SystemZ::PFMF, Convert__GR641_1__GR321_0__Tie0, 0, { MCK_GR32, MCK_GR64 }, },
  { 7838 /* pfpo */, SystemZ::PFPO, Convert_NoOperands, 0, {  }, },
  { 7843 /* pgin */, SystemZ::PGIN, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7848 /* pgout */, SystemZ::PGOUT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7854 /* pka */, SystemZ::PKA, Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1, 0, { MCK_BDAddr64Disp12, MCK_BDLAddr64Disp12Len8 }, },
  { 7858 /* pku */, SystemZ::PKU, Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1, 0, { MCK_BDAddr64Disp12, MCK_BDLAddr64Disp12Len8 }, },
  { 7862 /* plo */, SystemZ::PLO, Convert__GR641_0__BDAddr64Disp122_1__GR641_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_BDAddr64Disp12, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 7866 /* popcnt */, SystemZ::POPCNT, Convert__GR641_0__GR641_1, Feature_FeaturePopulationCount, { MCK_GR64, MCK_GR64 }, },
  { 7873 /* ppa */, SystemZ::PPA, Convert__GR641_0__GR641_1__U4Imm1_2, Feature_FeatureProcessorAssist, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 7877 /* ppno */, SystemZ::PPNO, Convert__GR1281_0__GR1281_1__Tie0__Tie1, Feature_FeatureMessageSecurityAssist5, { MCK_GR128, MCK_GR128 }, },
  { 7882 /* pr */, SystemZ::PR, Convert_NoOperands, 0, {  }, },
  { 7885 /* prno */, SystemZ::PRNO, Convert__GR1281_0__GR1281_1__Tie0__Tie1, Feature_FeatureMessageSecurityAssist7, { MCK_GR128, MCK_GR128 }, },
  { 7890 /* pt */, SystemZ::PT, Convert__GR321_0__GR641_1, 0, { MCK_GR32, MCK_GR64 }, },
  { 7893 /* ptf */, SystemZ::PTF, Convert__GR641_0__Tie0, 0, { MCK_GR64 }, },
  { 7897 /* ptff */, SystemZ::PTFF, Convert_NoOperands, 0, {  }, },
  { 7902 /* pti */, SystemZ::PTI, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7906 /* ptlb */, SystemZ::PTLB, Convert_NoOperands, 0, {  }, },
  { 7911 /* qadtr */, SystemZ::QADTR, Convert__FP641_0__FP641_1__Tie0__FP641_2__U4Imm1_3, 0, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 7917 /* qaxtr */, SystemZ::QAXTR, Convert__FP1281_0__FP1281_1__Tie0__FP1281_2__U4Imm1_3, 0, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 7923 /* qctri */, SystemZ::QCTRI, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 7929 /* qsi */, SystemZ::QSI, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 7933 /* rchp */, SystemZ::RCHP, Convert_NoOperands, 0, {  }, },
  { 7938 /* risbg */, SystemZ::RISBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 7944 /* risbgn */, SystemZ::RISBGN, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 7951 /* risbhg */, SystemZ::RISBHG, Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GRH32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 7958 /* risblg */, SystemZ::RISBLG, Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GR32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 7965 /* rll */, SystemZ::RLL, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 7969 /* rllg */, SystemZ::RLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 7974 /* rnsbg */, SystemZ::RNSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 7980 /* rosbg */, SystemZ::ROSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 7986 /* rp */, SystemZ::RP, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 7989 /* rrbe */, SystemZ::RRBE, Convert__GR321_0__GR641_1, 0, { MCK_GR32, MCK_GR64 }, },
  { 7994 /* rrbm */, SystemZ::RRBM, Convert__GR641_0__GR641_1, Feature_FeatureResetReferenceBitsMultiple, { MCK_GR64, MCK_GR64 }, },
  { 7999 /* rrdtr */, SystemZ::RRDTR, Convert__FP641_0__FP641_1__Tie0__FP641_2__U4Imm1_3, 0, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 8005 /* rrxtr */, SystemZ::RRXTR, Convert__FP1281_0__FP1281_1__Tie0__FP1281_2__U4Imm1_3, 0, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 8011 /* rsch */, SystemZ::RSCH, Convert_NoOperands, 0, {  }, },
  { 8016 /* rxsbg */, SystemZ::RXSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 8022 /* s */, SystemZ::S, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 8024 /* sac */, SystemZ::SAC, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8028 /* sacf */, SystemZ::SACF, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8033 /* sal */, SystemZ::SAL, Convert_NoOperands, 0, {  }, },
  { 8037 /* sam24 */, SystemZ::SAM24, Convert_NoOperands, 0, {  }, },
  { 8043 /* sam31 */, SystemZ::SAM31, Convert_NoOperands, 0, {  }, },
  { 8049 /* sam64 */, SystemZ::SAM64, Convert_NoOperands, 0, {  }, },
  { 8055 /* sar */, SystemZ::SAR, Convert__AR321_0__GR321_1, 0, { MCK_AR32, MCK_GR32 }, },
  { 8059 /* scctr */, SystemZ::SCCTR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 8065 /* schm */, SystemZ::SCHM, Convert_NoOperands, 0, {  }, },
  { 8070 /* sck */, SystemZ::SCK, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8074 /* sckc */, SystemZ::SCKC, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8079 /* sckpf */, SystemZ::SCKPF, Convert_NoOperands, 0, {  }, },
  { 8085 /* sd */, SystemZ::SD, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8088 /* sdb */, SystemZ::SDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8092 /* sdbr */, SystemZ::SDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 8097 /* sdr */, SystemZ::SDR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 8101 /* sdtr */, SystemZ::SDTR, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 8106 /* sdtra */, SystemZ::SDTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 8112 /* se */, SystemZ::SE, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8115 /* seb */, SystemZ::SEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8119 /* sebr */, SystemZ::SEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 8124 /* ser */, SystemZ::SER, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 8128 /* sfasr */, SystemZ::SFASR, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 8134 /* sfpc */, SystemZ::SFPC, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 8139 /* sg */, SystemZ::SG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8142 /* sgf */, SystemZ::SGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8146 /* sgfr */, SystemZ::SGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 8151 /* sgh */, SystemZ::SGH, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, Feature_FeatureMiscellaneousExtensions2, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8155 /* sgr */, SystemZ::SGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 8159 /* sgrk */, SystemZ::SGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8164 /* sh */, SystemZ::SH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 8167 /* shhhr */, SystemZ::SHHHR, Convert__GRH321_0__GRH321_1__GRH321_2, Feature_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8173 /* shhlr */, SystemZ::SHHLR, Convert__GRH321_0__GRH321_1__GR321_2, Feature_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GR32 }, },
  { 8179 /* shy */, SystemZ::SHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 8183 /* sie */, SystemZ::SIE, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8187 /* siga */, SystemZ::SIGA, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8192 /* sigp */, SystemZ::SIGP, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 8197 /* sl */, SystemZ::SL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 8200 /* sla */, SystemZ::SLA, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 8204 /* slag */, SystemZ::SLAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 8209 /* slak */, SystemZ::SLAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 8214 /* slb */, SystemZ::SLB, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 8218 /* slbg */, SystemZ::SLBG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8223 /* slbgr */, SystemZ::SLBGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 8229 /* slbr */, SystemZ::SLBR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 8234 /* slda */, SystemZ::SLDA, Convert__GR1281_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 8239 /* sldl */, SystemZ::SLDL, Convert__GR1281_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 8244 /* sldt */, SystemZ::SLDT, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8249 /* slfi */, SystemZ::SLFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 8254 /* slg */, SystemZ::SLG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8258 /* slgf */, SystemZ::SLGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8263 /* slgfi */, SystemZ::SLGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 8269 /* slgfr */, SystemZ::SLGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 8275 /* slgr */, SystemZ::SLGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 8280 /* slgrk */, SystemZ::SLGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8286 /* slhhhr */, SystemZ::SLHHHR, Convert__GRH321_0__GRH321_1__GRH321_2, Feature_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8293 /* slhhlr */, SystemZ::SLHHLR, Convert__GRH321_0__GRH321_1__GR321_2, Feature_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GR32 }, },
  { 8300 /* sll */, SystemZ::SLL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 8304 /* sllg */, SystemZ::SLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 8309 /* sllk */, SystemZ::SLLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 8314 /* slr */, SystemZ::SLR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 8318 /* slrk */, SystemZ::SLRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8323 /* slxt */, SystemZ::SLXT, Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2, 0, { MCK_FP128, MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 8328 /* sly */, SystemZ::SLY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 8332 /* sp */, SystemZ::SP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 8335 /* spctr */, SystemZ::SPCTR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 8341 /* spka */, SystemZ::SPKA, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8346 /* spm */, SystemZ::SPM, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 8350 /* spt */, SystemZ::SPT, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8354 /* spx */, SystemZ::SPX, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8358 /* sqd */, SystemZ::SQD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8362 /* sqdb */, SystemZ::SQDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8367 /* sqdbr */, SystemZ::SQDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 8373 /* sqdr */, SystemZ::SQDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 8378 /* sqe */, SystemZ::SQE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8382 /* sqeb */, SystemZ::SQEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8387 /* sqebr */, SystemZ::SQEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 8393 /* sqer */, SystemZ::SQER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 8398 /* sqxbr */, SystemZ::SQXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 8404 /* sqxr */, SystemZ::SQXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 8409 /* sr */, SystemZ::SR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 8412 /* sra */, SystemZ::SRA, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 8416 /* srag */, SystemZ::SRAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 8421 /* srak */, SystemZ::SRAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 8426 /* srda */, SystemZ::SRDA, Convert__GR1281_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 8431 /* srdl */, SystemZ::SRDL, Convert__GR1281_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 8436 /* srdt */, SystemZ::SRDT, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8441 /* srk */, SystemZ::SRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8445 /* srl */, SystemZ::SRL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 8449 /* srlg */, SystemZ::SRLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 8454 /* srlk */, SystemZ::SRLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 8459 /* srnm */, SystemZ::SRNM, Convert__BDAddr32Disp122_0, 0, { MCK_BDAddr32Disp12 }, },
  { 8464 /* srnmb */, SystemZ::SRNMB, Convert__BDAddr32Disp122_0, Feature_FeatureFPExtension, { MCK_BDAddr32Disp12 }, },
  { 8470 /* srnmt */, SystemZ::SRNMT, Convert__BDAddr32Disp122_0, 0, { MCK_BDAddr32Disp12 }, },
  { 8476 /* srp */, SystemZ::SRP, Convert__BDLAddr64Disp12Len43_0__BDAddr32Disp122_1__U4Imm1_2, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 8480 /* srst */, SystemZ::SRST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 8485 /* srstu */, SystemZ::SRSTU, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 8491 /* srxt */, SystemZ::SRXT, Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2, 0, { MCK_FP128, MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 8496 /* ssair */, SystemZ::SSAIR, Convert__GR641_0, 0, { MCK_GR64 }, },
  { 8502 /* ssar */, SystemZ::SSAR, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 8507 /* ssch */, SystemZ::SSCH, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8512 /* sske */, SystemZ::SSKEOpt, Convert__GR321_0__GR641_1, 0, { MCK_GR32, MCK_GR64 }, },
  { 8512 /* sske */, SystemZ::SSKE, Convert__GR321_0__GR641_1__U4Imm1_2, 0, { MCK_GR32, MCK_GR64, MCK_U4Imm }, },
  { 8517 /* ssm */, SystemZ::SSM, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8521 /* st */, SystemZ::ST, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 8524 /* stam */, SystemZ::STAM, Convert__AR321_0__AR321_1__BDAddr64Disp122_2, 0, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp12 }, },
  { 8529 /* stamy */, SystemZ::STAMY, Convert__AR321_0__AR321_1__BDAddr64Disp202_2, 0, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp20 }, },
  { 8535 /* stap */, SystemZ::STAP, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8540 /* stc */, SystemZ::STC, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 8544 /* stch */, SystemZ::STCH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 8549 /* stck */, SystemZ::STCK, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8554 /* stckc */, SystemZ::STCKC, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8560 /* stcke */, SystemZ::STCKE, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8566 /* stckf */, SystemZ::STCKF, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8572 /* stcm */, SystemZ::STCM, Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 8577 /* stcmh */, SystemZ::STCMH, Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 8583 /* stcmy */, SystemZ::STCMY, Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 8589 /* stcps */, SystemZ::STCPS, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8595 /* stcrw */, SystemZ::STCRW, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8601 /* stctg */, SystemZ::STCTG, Convert__CR641_0__CR641_1__BDAddr64Disp202_2, 0, { MCK_CR64, MCK_CR64, MCK_BDAddr64Disp20 }, },
  { 8607 /* stctl */, SystemZ::STCTL, Convert__CR641_0__CR641_1__BDAddr64Disp122_2, 0, { MCK_CR64, MCK_CR64, MCK_BDAddr64Disp12 }, },
  { 8613 /* stcy */, SystemZ::STCY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 8618 /* std */, SystemZ::STD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8622 /* stdy */, SystemZ::STDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 8627 /* ste */, SystemZ::STE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8631 /* stey */, SystemZ::STEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 8636 /* stfh */, SystemZ::STFH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 8641 /* stfl */, SystemZ::STFL, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8646 /* stfle */, SystemZ::STFLE, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8652 /* stfpc */, SystemZ::STFPC, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8658 /* stg */, SystemZ::STG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8662 /* stgrl */, SystemZ::STGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 8668 /* stgsc */, SystemZ::STGSC, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureGuardedStorage, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8674 /* sth */, SystemZ::STH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 8678 /* sthh */, SystemZ::STHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 8683 /* sthrl */, SystemZ::STHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 8689 /* sthy */, SystemZ::STHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 8694 /* stidp */, SystemZ::STIDP, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8700 /* stm */, SystemZ::STM, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 8704 /* stmg */, SystemZ::STMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8709 /* stmh */, SystemZ::STMH, Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8714 /* stmy */, SystemZ::STMY, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8719 /* stnsm */, SystemZ::STNSM, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 8725 /* stoc */, SystemZ::STOCAsm, Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 8730 /* stoce */, SystemZ::STOCAsmE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8736 /* stocfh */, SystemZ::STOCFHAsm, Convert__GRH321_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 8743 /* stocfhe */, SystemZ::STOCFHAsmE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8751 /* stocfhh */, SystemZ::STOCFHAsmH, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8759 /* stocfhhe */, SystemZ::STOCFHAsmHE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8768 /* stocfhl */, SystemZ::STOCFHAsmL, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8776 /* stocfhle */, SystemZ::STOCFHAsmLE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8785 /* stocfhlh */, SystemZ::STOCFHAsmLH, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8794 /* stocfhm */, SystemZ::STOCFHAsmM, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8802 /* stocfhne */, SystemZ::STOCFHAsmNE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8811 /* stocfhnh */, SystemZ::STOCFHAsmNH, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8820 /* stocfhnhe */, SystemZ::STOCFHAsmNHE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8830 /* stocfhnl */, SystemZ::STOCFHAsmNL, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8839 /* stocfhnle */, SystemZ::STOCFHAsmNLE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8849 /* stocfhnlh */, SystemZ::STOCFHAsmNLH, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8859 /* stocfhnm */, SystemZ::STOCFHAsmNM, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8868 /* stocfhno */, SystemZ::STOCFHAsmNO, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8877 /* stocfhnp */, SystemZ::STOCFHAsmNP, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8886 /* stocfhnz */, SystemZ::STOCFHAsmNZ, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8895 /* stocfho */, SystemZ::STOCFHAsmO, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8903 /* stocfhp */, SystemZ::STOCFHAsmP, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8911 /* stocfhz */, SystemZ::STOCFHAsmZ, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8919 /* stocg */, SystemZ::STOCGAsm, Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 8925 /* stocge */, SystemZ::STOCGAsmE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8932 /* stocgh */, SystemZ::STOCGAsmH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8939 /* stocghe */, SystemZ::STOCGAsmHE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8947 /* stocgl */, SystemZ::STOCGAsmL, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8954 /* stocgle */, SystemZ::STOCGAsmLE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8962 /* stocglh */, SystemZ::STOCGAsmLH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8970 /* stocgm */, SystemZ::STOCGAsmM, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8977 /* stocgne */, SystemZ::STOCGAsmNE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8985 /* stocgnh */, SystemZ::STOCGAsmNH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8993 /* stocgnhe */, SystemZ::STOCGAsmNHE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9002 /* stocgnl */, SystemZ::STOCGAsmNL, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9010 /* stocgnle */, SystemZ::STOCGAsmNLE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9019 /* stocgnlh */, SystemZ::STOCGAsmNLH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9028 /* stocgnm */, SystemZ::STOCGAsmNM, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9036 /* stocgno */, SystemZ::STOCGAsmNO, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9044 /* stocgnp */, SystemZ::STOCGAsmNP, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9052 /* stocgnz */, SystemZ::STOCGAsmNZ, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9060 /* stocgo */, SystemZ::STOCGAsmO, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9067 /* stocgp */, SystemZ::STOCGAsmP, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9074 /* stocgz */, SystemZ::STOCGAsmZ, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9081 /* stoch */, SystemZ::STOCAsmH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9087 /* stoche */, SystemZ::STOCAsmHE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9094 /* stocl */, SystemZ::STOCAsmL, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9100 /* stocle */, SystemZ::STOCAsmLE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9107 /* stoclh */, SystemZ::STOCAsmLH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9114 /* stocm */, SystemZ::STOCAsmM, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9120 /* stocne */, SystemZ::STOCAsmNE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9127 /* stocnh */, SystemZ::STOCAsmNH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9134 /* stocnhe */, SystemZ::STOCAsmNHE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9142 /* stocnl */, SystemZ::STOCAsmNL, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9149 /* stocnle */, SystemZ::STOCAsmNLE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9157 /* stocnlh */, SystemZ::STOCAsmNLH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9165 /* stocnm */, SystemZ::STOCAsmNM, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9172 /* stocno */, SystemZ::STOCAsmNO, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9179 /* stocnp */, SystemZ::STOCAsmNP, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9186 /* stocnz */, SystemZ::STOCAsmNZ, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9193 /* stoco */, SystemZ::STOCAsmO, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9199 /* stocp */, SystemZ::STOCAsmP, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9205 /* stocz */, SystemZ::STOCAsmZ, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9211 /* stosm */, SystemZ::STOSM, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 9217 /* stpq */, SystemZ::STPQ, Convert__GR1281_0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 9222 /* stpt */, SystemZ::STPT, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 9227 /* stpx */, SystemZ::STPX, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 9232 /* strag */, SystemZ::STRAG, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, 0, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 9238 /* strl */, SystemZ::STRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 9243 /* strv */, SystemZ::STRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9248 /* strvg */, SystemZ::STRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 9254 /* strvh */, SystemZ::STRVH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9260 /* stsch */, SystemZ::STSCH, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 9266 /* stsi */, SystemZ::STSI, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 9271 /* stura */, SystemZ::STURA, Convert__GR321_0__GR641_1, 0, { MCK_GR32, MCK_GR64 }, },
  { 9277 /* sturg */, SystemZ::STURG, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 9283 /* sty */, SystemZ::STY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9287 /* su */, SystemZ::SU, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 9290 /* sur */, SystemZ::SUR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 9294 /* svc */, SystemZ::SVC, Convert__U8Imm1_0, 0, { MCK_U8Imm }, },
  { 9298 /* sw */, SystemZ::SW, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9301 /* swr */, SystemZ::SWR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 9305 /* sxbr */, SystemZ::SXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 9310 /* sxr */, SystemZ::SXR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 9314 /* sxtr */, SystemZ::SXTR, Convert__FP1281_0__FP1281_1__FP1281_2, 0, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 9319 /* sxtra */, SystemZ::SXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 9325 /* sy */, SystemZ::SY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9328 /* tabort */, SystemZ::TABORT, Convert__BDAddr64Disp122_0, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12 }, },
  { 9335 /* tam */, SystemZ::TAM, Convert_NoOperands, 0, {  }, },
  { 9339 /* tar */, SystemZ::TAR, Convert__AR321_0__GR321_1, 0, { MCK_AR32, MCK_GR32 }, },
  { 9343 /* tb */, SystemZ::TB, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 9346 /* tbdr */, SystemZ::TBDR, Convert__FP641_0__U4Imm1_1__FP641_2, 0, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, },
  { 9351 /* tbedr */, SystemZ::TBEDR, Convert__FP321_0__U4Imm1_1__FP641_2, 0, { MCK_FP32, MCK_U4Imm, MCK_FP64 }, },
  { 9357 /* tbegin */, SystemZ::TBEGIN, Convert__BDAddr64Disp122_0__U16Imm1_1, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 9364 /* tbeginc */, SystemZ::TBEGINC, Convert__BDAddr64Disp122_0__U16Imm1_1, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 9372 /* tcdb */, SystemZ::TCDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9377 /* tceb */, SystemZ::TCEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 9382 /* tcxb */, SystemZ::TCXB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 9387 /* tdcdt */, SystemZ::TDCDT, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9393 /* tdcet */, SystemZ::TDCET, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 9399 /* tdcxt */, SystemZ::TDCXT, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 9405 /* tdgdt */, SystemZ::TDGDT, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9411 /* tdget */, SystemZ::TDGET, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 9417 /* tdgxt */, SystemZ::TDGXT, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 9423 /* tend */, SystemZ::TEND, Convert_NoOperands, Feature_FeatureTransactionalExecution, {  }, },
  { 9428 /* thder */, SystemZ::THDER, Convert__FP641_0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 9434 /* thdr */, SystemZ::THDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 9439 /* tm */, SystemZ::TM, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 9442 /* tmh */, SystemZ::TMLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 9446 /* tmhh */, SystemZ::TMHH, Convert__GRH321_0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 9451 /* tmhl */, SystemZ::TMHL, Convert__GRH321_0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 9456 /* tml */, SystemZ::TMLL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 9460 /* tmlh */, SystemZ::TMLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 9465 /* tmll */, SystemZ::TMLL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 9470 /* tmy */, SystemZ::TMY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 9474 /* tp */, SystemZ::TP, Convert__BDLAddr64Disp12Len43_0, 0, { MCK_BDLAddr64Disp12Len4 }, },
  { 9477 /* tpi */, SystemZ::TPI, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 9481 /* tprot */, SystemZ::TPROT, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, 0, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 9487 /* tr */, SystemZ::TR, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 9490 /* trace */, SystemZ::TRACE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 9496 /* tracg */, SystemZ::TRACG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9502 /* trap2 */, SystemZ::TRAP2, Convert_NoOperands, 0, {  }, },
  { 9508 /* trap4 */, SystemZ::TRAP4, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 9514 /* tre */, SystemZ::TRE, Convert__GR1281_0__GR641_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR64 }, },
  { 9518 /* troo */, SystemZ::TROOOpt, Convert__GR1281_0__GR641_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR64 }, },
  { 9518 /* troo */, SystemZ::TROO, Convert__GR1281_0__GR641_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 9523 /* trot */, SystemZ::TROTOpt, Convert__GR1281_0__GR641_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR64 }, },
  { 9523 /* trot */, SystemZ::TROT, Convert__GR1281_0__GR641_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 9528 /* trt */, SystemZ::TRT, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 9532 /* trte */, SystemZ::TRTEOpt, Convert__GR641_1__GR1281_0__Tie1, 0, { MCK_GR128, MCK_GR64 }, },
  { 9532 /* trte */, SystemZ::TRTE, Convert__GR641_1__GR1281_0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 9537 /* trto */, SystemZ::TRTOOpt, Convert__GR1281_0__GR641_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR64 }, },
  { 9537 /* trto */, SystemZ::TRTO, Convert__GR1281_0__GR641_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 9542 /* trtr */, SystemZ::TRTR, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 9547 /* trtre */, SystemZ::TRTREOpt, Convert__GR641_1__GR1281_0__Tie1, 0, { MCK_GR128, MCK_GR64 }, },
  { 9547 /* trtre */, SystemZ::TRTRE, Convert__GR641_1__GR1281_0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 9553 /* trtt */, SystemZ::TRTTOpt, Convert__GR1281_0__GR641_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR64 }, },
  { 9553 /* trtt */, SystemZ::TRTT, Convert__GR1281_0__GR641_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 9558 /* ts */, SystemZ::TS, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 9561 /* tsch */, SystemZ::TSCH, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 9566 /* unpk */, SystemZ::UNPK, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 9571 /* unpka */, SystemZ::UNPKA, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 9577 /* unpku */, SystemZ::UNPKU, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 9583 /* upt */, SystemZ::UPT, Convert_NoOperands, 0, {  }, },
  { 9587 /* va */, SystemZ::VA, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9590 /* vab */, SystemZ::VAB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9594 /* vac */, SystemZ::VAC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9598 /* vacc */, SystemZ::VACC, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9603 /* vaccb */, SystemZ::VACCB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9609 /* vaccc */, SystemZ::VACCC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9615 /* vacccq */, SystemZ::VACCCQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9622 /* vaccf */, SystemZ::VACCF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9628 /* vaccg */, SystemZ::VACCG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9634 /* vacch */, SystemZ::VACCH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9640 /* vaccq */, SystemZ::VACCQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9646 /* vacq */, SystemZ::VACQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9651 /* vaf */, SystemZ::VAF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9655 /* vag */, SystemZ::VAG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9659 /* vah */, SystemZ::VAH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9663 /* vap */, SystemZ::VAP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 9667 /* vaq */, SystemZ::VAQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9671 /* vavg */, SystemZ::VAVG, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9676 /* vavgb */, SystemZ::VAVGB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9682 /* vavgf */, SystemZ::VAVGF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9688 /* vavgg */, SystemZ::VAVGG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9694 /* vavgh */, SystemZ::VAVGH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9700 /* vavgl */, SystemZ::VAVGL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9706 /* vavglb */, SystemZ::VAVGLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9713 /* vavglf */, SystemZ::VAVGLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9720 /* vavglg */, SystemZ::VAVGLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9727 /* vavglh */, SystemZ::VAVGLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9734 /* vbperm */, SystemZ::VBPERM, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9741 /* vcdg */, SystemZ::VCDG, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 9746 /* vcdgb */, SystemZ::VCDGB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9752 /* vcdlg */, SystemZ::VCDLG, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 9758 /* vcdlgb */, SystemZ::VCDLGB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9765 /* vceq */, SystemZ::VCEQ, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9770 /* vceqb */, SystemZ::VCEQB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9776 /* vceqbs */, SystemZ::VCEQBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9783 /* vceqf */, SystemZ::VCEQF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9789 /* vceqfs */, SystemZ::VCEQFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9796 /* vceqg */, SystemZ::VCEQG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9802 /* vceqgs */, SystemZ::VCEQGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9809 /* vceqh */, SystemZ::VCEQH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9815 /* vceqhs */, SystemZ::VCEQHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9822 /* vcgd */, SystemZ::VCGD, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 9827 /* vcgdb */, SystemZ::VCGDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9833 /* vch */, SystemZ::VCH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9837 /* vchb */, SystemZ::VCHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9842 /* vchbs */, SystemZ::VCHBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9848 /* vchf */, SystemZ::VCHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9853 /* vchfs */, SystemZ::VCHFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9859 /* vchg */, SystemZ::VCHG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9864 /* vchgs */, SystemZ::VCHGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9870 /* vchh */, SystemZ::VCHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9875 /* vchhs */, SystemZ::VCHHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9881 /* vchl */, SystemZ::VCHL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9886 /* vchlb */, SystemZ::VCHLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9892 /* vchlbs */, SystemZ::VCHLBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9899 /* vchlf */, SystemZ::VCHLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9905 /* vchlfs */, SystemZ::VCHLFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9912 /* vchlg */, SystemZ::VCHLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9918 /* vchlgs */, SystemZ::VCHLGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9925 /* vchlh */, SystemZ::VCHLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9931 /* vchlhs */, SystemZ::VCHLHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9938 /* vcksm */, SystemZ::VCKSM, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9944 /* vclgd */, SystemZ::VCLGD, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 9950 /* vclgdb */, SystemZ::VCLGDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9957 /* vclz */, SystemZ::VCLZ, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9962 /* vclzb */, SystemZ::VCLZB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9968 /* vclzf */, SystemZ::VCLZF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9974 /* vclzg */, SystemZ::VCLZG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9980 /* vclzh */, SystemZ::VCLZH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9986 /* vcp */, SystemZ::VCP, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9990 /* vctz */, SystemZ::VCTZ, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9995 /* vctzb */, SystemZ::VCTZB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10001 /* vctzf */, SystemZ::VCTZF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10007 /* vctzg */, SystemZ::VCTZG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10013 /* vctzh */, SystemZ::VCTZH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10019 /* vcvb */, SystemZ::VCVB, Convert__GR321_0__VR1281_1__U4Imm1_2, Feature_FeatureVectorPackedDecimal, { MCK_GR32, MCK_VR128, MCK_U4Imm }, },
  { 10024 /* vcvbg */, SystemZ::VCVBG, Convert__GR641_0__VR1281_1__U4Imm1_2, Feature_FeatureVectorPackedDecimal, { MCK_GR64, MCK_VR128, MCK_U4Imm }, },
  { 10030 /* vcvd */, SystemZ::VCVD, Convert__VR1281_0__GR321_1__U8Imm1_2__U4Imm1_3, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_GR32, MCK_U8Imm, MCK_U4Imm }, },
  { 10035 /* vcvdg */, SystemZ::VCVDG, Convert__VR1281_0__GR641_1__U8Imm1_2__U4Imm1_3, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_GR64, MCK_U8Imm, MCK_U4Imm }, },
  { 10041 /* vdp */, SystemZ::VDP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 10045 /* vec */, SystemZ::VEC, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10049 /* vecb */, SystemZ::VECB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10054 /* vecf */, SystemZ::VECF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10059 /* vecg */, SystemZ::VECG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10064 /* vech */, SystemZ::VECH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10069 /* vecl */, SystemZ::VECL, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10074 /* veclb */, SystemZ::VECLB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10080 /* veclf */, SystemZ::VECLF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10086 /* veclg */, SystemZ::VECLG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10092 /* veclh */, SystemZ::VECLH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10098 /* verim */, SystemZ::VERIM, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 10104 /* verimb */, SystemZ::VERIMB, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 10111 /* verimf */, SystemZ::VERIMF, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 10118 /* verimg */, SystemZ::VERIMG, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 10125 /* verimh */, SystemZ::VERIMH, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 10132 /* verll */, SystemZ::VERLL, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 10138 /* verllb */, SystemZ::VERLLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10145 /* verllf */, SystemZ::VERLLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10152 /* verllg */, SystemZ::VERLLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10159 /* verllh */, SystemZ::VERLLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10166 /* verllv */, SystemZ::VERLLV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10173 /* verllvb */, SystemZ::VERLLVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10181 /* verllvf */, SystemZ::VERLLVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10189 /* verllvg */, SystemZ::VERLLVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10197 /* verllvh */, SystemZ::VERLLVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10205 /* vesl */, SystemZ::VESL, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 10210 /* veslb */, SystemZ::VESLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10216 /* veslf */, SystemZ::VESLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10222 /* veslg */, SystemZ::VESLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10228 /* veslh */, SystemZ::VESLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10234 /* veslv */, SystemZ::VESLV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10240 /* veslvb */, SystemZ::VESLVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10247 /* veslvf */, SystemZ::VESLVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10254 /* veslvg */, SystemZ::VESLVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10261 /* veslvh */, SystemZ::VESLVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10268 /* vesra */, SystemZ::VESRA, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 10274 /* vesrab */, SystemZ::VESRAB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10281 /* vesraf */, SystemZ::VESRAF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10288 /* vesrag */, SystemZ::VESRAG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10295 /* vesrah */, SystemZ::VESRAH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10302 /* vesrav */, SystemZ::VESRAV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10309 /* vesravb */, SystemZ::VESRAVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10317 /* vesravf */, SystemZ::VESRAVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10325 /* vesravg */, SystemZ::VESRAVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10333 /* vesravh */, SystemZ::VESRAVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10341 /* vesrl */, SystemZ::VESRL, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 10347 /* vesrlb */, SystemZ::VESRLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10354 /* vesrlf */, SystemZ::VESRLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10361 /* vesrlg */, SystemZ::VESRLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10368 /* vesrlh */, SystemZ::VESRLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10375 /* vesrlv */, SystemZ::VESRLV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10382 /* vesrlvb */, SystemZ::VESRLVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10390 /* vesrlvf */, SystemZ::VESRLVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10398 /* vesrlvg */, SystemZ::VESRLVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10406 /* vesrlvh */, SystemZ::VESRLVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10414 /* vfa */, SystemZ::VFA, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10418 /* vfadb */, SystemZ::VFADB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10424 /* vfae */, SystemZ::VFAE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10424 /* vfae */, SystemZ::VFAE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10429 /* vfaeb */, SystemZ::VFAEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10429 /* vfaeb */, SystemZ::VFAEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10435 /* vfaebs */, SystemZ::VFAEBS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10435 /* vfaebs */, SystemZ::VFAEBS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10442 /* vfaef */, SystemZ::VFAEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10442 /* vfaef */, SystemZ::VFAEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10448 /* vfaefs */, SystemZ::VFAEFS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10448 /* vfaefs */, SystemZ::VFAEFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10455 /* vfaeh */, SystemZ::VFAEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10455 /* vfaeh */, SystemZ::VFAEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10461 /* vfaehs */, SystemZ::VFAEHS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10461 /* vfaehs */, SystemZ::VFAEHS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10468 /* vfaezb */, SystemZ::VFAEZB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10468 /* vfaezb */, SystemZ::VFAEZB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10475 /* vfaezbs */, SystemZ::VFAEZBS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10475 /* vfaezbs */, SystemZ::VFAEZBS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10483 /* vfaezf */, SystemZ::VFAEZF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10483 /* vfaezf */, SystemZ::VFAEZF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10490 /* vfaezfs */, SystemZ::VFAEZFS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10490 /* vfaezfs */, SystemZ::VFAEZFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10498 /* vfaezh */, SystemZ::VFAEZH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10498 /* vfaezh */, SystemZ::VFAEZH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10505 /* vfaezhs */, SystemZ::VFAEZHS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10505 /* vfaezhs */, SystemZ::VFAEZHS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10513 /* vfasb */, SystemZ::VFASB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10519 /* vfce */, SystemZ::VFCE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10524 /* vfcedb */, SystemZ::VFCEDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10531 /* vfcedbs */, SystemZ::VFCEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10539 /* vfcesb */, SystemZ::VFCESB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10546 /* vfcesbs */, SystemZ::VFCESBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10554 /* vfch */, SystemZ::VFCH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10559 /* vfchdb */, SystemZ::VFCHDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10566 /* vfchdbs */, SystemZ::VFCHDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10574 /* vfche */, SystemZ::VFCHE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10580 /* vfchedb */, SystemZ::VFCHEDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10588 /* vfchedbs */, SystemZ::VFCHEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10597 /* vfchesb */, SystemZ::VFCHESB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10605 /* vfchesbs */, SystemZ::VFCHESBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10614 /* vfchsb */, SystemZ::VFCHSB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10621 /* vfchsbs */, SystemZ::VFCHSBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10629 /* vfd */, SystemZ::VFD, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10633 /* vfddb */, SystemZ::VFDDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10639 /* vfdsb */, SystemZ::VFDSB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10645 /* vfee */, SystemZ::VFEE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10645 /* vfee */, SystemZ::VFEE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10650 /* vfeeb */, SystemZ::VFEEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10650 /* vfeeb */, SystemZ::VFEEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10656 /* vfeebs */, SystemZ::VFEEBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10663 /* vfeef */, SystemZ::VFEEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10663 /* vfeef */, SystemZ::VFEEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10669 /* vfeefs */, SystemZ::VFEEFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10676 /* vfeeh */, SystemZ::VFEEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10676 /* vfeeh */, SystemZ::VFEEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10682 /* vfeehs */, SystemZ::VFEEHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10689 /* vfeezb */, SystemZ::VFEEZB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10696 /* vfeezbs */, SystemZ::VFEEZBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10704 /* vfeezf */, SystemZ::VFEEZF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10711 /* vfeezfs */, SystemZ::VFEEZFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10719 /* vfeezh */, SystemZ::VFEEZH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10726 /* vfeezhs */, SystemZ::VFEEZHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10734 /* vfene */, SystemZ::VFENE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10734 /* vfene */, SystemZ::VFENE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10740 /* vfeneb */, SystemZ::VFENEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10740 /* vfeneb */, SystemZ::VFENEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10747 /* vfenebs */, SystemZ::VFENEBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10755 /* vfenef */, SystemZ::VFENEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10755 /* vfenef */, SystemZ::VFENEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10762 /* vfenefs */, SystemZ::VFENEFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10770 /* vfeneh */, SystemZ::VFENEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10770 /* vfeneh */, SystemZ::VFENEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10777 /* vfenehs */, SystemZ::VFENEHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10785 /* vfenezb */, SystemZ::VFENEZB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10793 /* vfenezbs */, SystemZ::VFENEZBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10802 /* vfenezf */, SystemZ::VFENEZF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10810 /* vfenezfs */, SystemZ::VFENEZFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10819 /* vfenezh */, SystemZ::VFENEZH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10827 /* vfenezhs */, SystemZ::VFENEZHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10836 /* vfi */, SystemZ::VFI, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10840 /* vfidb */, SystemZ::VFIDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10846 /* vfisb */, SystemZ::VFISB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10852 /* vfkedb */, SystemZ::VFKEDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10859 /* vfkedbs */, SystemZ::VFKEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10867 /* vfkesb */, SystemZ::VFKESB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10874 /* vfkesbs */, SystemZ::VFKESBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10882 /* vfkhdb */, SystemZ::VFKHDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10889 /* vfkhdbs */, SystemZ::VFKHDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10897 /* vfkhedb */, SystemZ::VFKHEDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10905 /* vfkhedbs */, SystemZ::VFKHEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10914 /* vfkhesb */, SystemZ::VFKHESB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10922 /* vfkhesbs */, SystemZ::VFKHESBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10931 /* vfkhsb */, SystemZ::VFKHSB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10938 /* vfkhsbs */, SystemZ::VFKHSBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10946 /* vflcdb */, SystemZ::VFLCDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10953 /* vflcsb */, SystemZ::VFLCSB, Convert__VR1281_0__VR1281_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 10960 /* vfll */, SystemZ::VFLL, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10965 /* vflls */, SystemZ::VFLLS, Convert__VR1281_0__VR1281_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 10971 /* vflndb */, SystemZ::VFLNDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10978 /* vflnsb */, SystemZ::VFLNSB, Convert__VR1281_0__VR1281_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 10985 /* vflpdb */, SystemZ::VFLPDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10992 /* vflpsb */, SystemZ::VFLPSB, Convert__VR1281_0__VR1281_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 10999 /* vflr */, SystemZ::VFLR, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11004 /* vflrd */, SystemZ::VFLRD, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11010 /* vfm */, SystemZ::VFM, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11014 /* vfma */, SystemZ::VFMA, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11019 /* vfmadb */, SystemZ::VFMADB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11026 /* vfmasb */, SystemZ::VFMASB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11033 /* vfmax */, SystemZ::VFMAX, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11039 /* vfmaxdb */, SystemZ::VFMAXDB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11047 /* vfmaxsb */, SystemZ::VFMAXSB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11055 /* vfmdb */, SystemZ::VFMDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11061 /* vfmin */, SystemZ::VFMIN, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11067 /* vfmindb */, SystemZ::VFMINDB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11075 /* vfminsb */, SystemZ::VFMINSB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11083 /* vfms */, SystemZ::VFMS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11088 /* vfmsb */, SystemZ::VFMSB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11094 /* vfmsdb */, SystemZ::VFMSDB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11101 /* vfmssb */, SystemZ::VFMSSB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11108 /* vfnma */, SystemZ::VFNMA, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11114 /* vfnmadb */, SystemZ::VFNMADB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11122 /* vfnmasb */, SystemZ::VFNMASB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11130 /* vfnms */, SystemZ::VFNMS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11136 /* vfnmsdb */, SystemZ::VFNMSDB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11144 /* vfnmssb */, SystemZ::VFNMSSB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11152 /* vfpso */, SystemZ::VFPSO, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11158 /* vfpsodb */, SystemZ::VFPSODB, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11166 /* vfpsosb */, SystemZ::VFPSOSB, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11174 /* vfs */, SystemZ::VFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11178 /* vfsdb */, SystemZ::VFSDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11184 /* vfsq */, SystemZ::VFSQ, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11189 /* vfsqdb */, SystemZ::VFSQDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11196 /* vfsqsb */, SystemZ::VFSQSB, Convert__VR1281_0__VR1281_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 11203 /* vfssb */, SystemZ::VFSSB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11209 /* vftci */, SystemZ::VFTCI, Convert__VR1281_0__VR1281_1__U12Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U12Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11215 /* vftcidb */, SystemZ::VFTCIDB, Convert__VR1281_0__VR1281_1__U12Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U12Imm }, },
  { 11223 /* vftcisb */, SystemZ::VFTCISB, Convert__VR1281_0__VR1281_1__U12Imm1_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U12Imm }, },
  { 11231 /* vgbm */, SystemZ::VGBM, Convert__VR1281_0__U16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_U16Imm }, },
  { 11236 /* vgef */, SystemZ::VGEF, Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U2Imm }, },
  { 11241 /* vgeg */, SystemZ::VGEG, Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U1Imm }, },
  { 11246 /* vgfm */, SystemZ::VGFM, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11251 /* vgfma */, SystemZ::VGFMA, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11257 /* vgfmab */, SystemZ::VGFMAB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11264 /* vgfmaf */, SystemZ::VGFMAF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11271 /* vgfmag */, SystemZ::VGFMAG, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11278 /* vgfmah */, SystemZ::VGFMAH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11285 /* vgfmb */, SystemZ::VGFMB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11291 /* vgfmf */, SystemZ::VGFMF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11297 /* vgfmg */, SystemZ::VGFMG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11303 /* vgfmh */, SystemZ::VGFMH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11309 /* vgm */, SystemZ::VGM, Convert__VR1281_0__U8Imm1_1__U8Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm, MCK_U4Imm }, },
  { 11313 /* vgmb */, SystemZ::VGMB, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 11318 /* vgmf */, SystemZ::VGMF, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 11323 /* vgmg */, SystemZ::VGMG, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 11328 /* vgmh */, SystemZ::VGMH, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 11333 /* vistr */, SystemZ::VISTR, Convert__VR1281_0__VR1281_1__U4Imm1_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11333 /* vistr */, SystemZ::VISTR, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11339 /* vistrb */, SystemZ::VISTRB, Convert__VR1281_0__VR1281_1__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11339 /* vistrb */, SystemZ::VISTRB, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11346 /* vistrbs */, SystemZ::VISTRBS, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11354 /* vistrf */, SystemZ::VISTRF, Convert__VR1281_0__VR1281_1__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11354 /* vistrf */, SystemZ::VISTRF, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11361 /* vistrfs */, SystemZ::VISTRFS, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11369 /* vistrh */, SystemZ::VISTRH, Convert__VR1281_0__VR1281_1__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11369 /* vistrh */, SystemZ::VISTRH, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11376 /* vistrhs */, SystemZ::VISTRHS, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11384 /* vl */, SystemZ::VL, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 11387 /* vlbb */, SystemZ::VLBB, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 11392 /* vlc */, SystemZ::VLC, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11396 /* vlcb */, SystemZ::VLCB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11401 /* vlcf */, SystemZ::VLCF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11406 /* vlcg */, SystemZ::VLCG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11411 /* vlch */, SystemZ::VLCH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11416 /* vlde */, SystemZ::VLDE, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11421 /* vldeb */, SystemZ::VLDEB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11427 /* vleb */, SystemZ::VLEB, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 11432 /* vled */, SystemZ::VLED, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11437 /* vledb */, SystemZ::VLEDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11443 /* vlef */, SystemZ::VLEF, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 11448 /* vleg */, SystemZ::VLEG, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 11453 /* vleh */, SystemZ::VLEH, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U3Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 11458 /* vleib */, SystemZ::VLEIB, Convert__VR1281_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U4Imm }, },
  { 11464 /* vleif */, SystemZ::VLEIF, Convert__VR1281_0__Tie0__S16Imm1_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U2Imm }, },
  { 11470 /* vleig */, SystemZ::VLEIG, Convert__VR1281_0__Tie0__S16Imm1_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U1Imm }, },
  { 11476 /* vleih */, SystemZ::VLEIH, Convert__VR1281_0__Tie0__S16Imm1_1__U3Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U3Imm }, },
  { 11482 /* vlgv */, SystemZ::VLGV, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 11487 /* vlgvb */, SystemZ::VLGVB, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 11493 /* vlgvf */, SystemZ::VLGVF, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 11499 /* vlgvg */, SystemZ::VLGVG, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 11505 /* vlgvh */, SystemZ::VLGVH, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 11511 /* vlip */, SystemZ::VLIP, Convert__VR1281_0__U16Imm1_1__U4Imm1_2, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_U16Imm, MCK_U4Imm }, },
  { 11516 /* vll */, SystemZ::VLL, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 11520 /* vllez */, SystemZ::VLLEZ, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 11526 /* vllezb */, SystemZ::VLLEZB, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 11533 /* vllezf */, SystemZ::VLLEZF, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 11540 /* vllezg */, SystemZ::VLLEZG, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 11547 /* vllezh */, SystemZ::VLLEZH, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 11554 /* vllezlf */, SystemZ::VLLEZLF, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 11562 /* vlm */, SystemZ::VLM, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12 }, },
  { 11566 /* vlp */, SystemZ::VLP, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11570 /* vlpb */, SystemZ::VLPB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11575 /* vlpf */, SystemZ::VLPF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11580 /* vlpg */, SystemZ::VLPG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11585 /* vlph */, SystemZ::VLPH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11590 /* vlr */, SystemZ::VLR, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11594 /* vlrep */, SystemZ::VLREP, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 11600 /* vlrepb */, SystemZ::VLREPB, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 11607 /* vlrepf */, SystemZ::VLREPF, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 11614 /* vlrepg */, SystemZ::VLREPG, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 11621 /* vlreph */, SystemZ::VLREPH, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 11628 /* vlrl */, SystemZ::VLRL, Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 11633 /* vlrlr */, SystemZ::VLRLR, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 11639 /* vlvg */, SystemZ::VLVG, Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_GR64, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 11644 /* vlvgb */, SystemZ::VLVGB, Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 11650 /* vlvgf */, SystemZ::VLVGF, Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 11656 /* vlvgg */, SystemZ::VLVGG, Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR64, MCK_BDAddr32Disp12 }, },
  { 11662 /* vlvgh */, SystemZ::VLVGH, Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 11668 /* vlvgp */, SystemZ::VLVGP, Convert__VR1281_0__GR641_1__GR641_2, Feature_FeatureVector, { MCK_VR128, MCK_GR64, MCK_GR64 }, },
  { 11674 /* vmae */, SystemZ::VMAE, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11679 /* vmaeb */, SystemZ::VMAEB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11685 /* vmaef */, SystemZ::VMAEF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11691 /* vmaeh */, SystemZ::VMAEH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11697 /* vmah */, SystemZ::VMAH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11702 /* vmahb */, SystemZ::VMAHB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11708 /* vmahf */, SystemZ::VMAHF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11714 /* vmahh */, SystemZ::VMAHH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11720 /* vmal */, SystemZ::VMAL, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11725 /* vmalb */, SystemZ::VMALB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11731 /* vmale */, SystemZ::VMALE, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11737 /* vmaleb */, SystemZ::VMALEB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11744 /* vmalef */, SystemZ::VMALEF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11751 /* vmaleh */, SystemZ::VMALEH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11758 /* vmalf */, SystemZ::VMALF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11764 /* vmalh */, SystemZ::VMALH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11770 /* vmalhb */, SystemZ::VMALHB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11777 /* vmalhf */, SystemZ::VMALHF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11784 /* vmalhh */, SystemZ::VMALHH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11791 /* vmalhw */, SystemZ::VMALHW, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11798 /* vmalo */, SystemZ::VMALO, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11804 /* vmalob */, SystemZ::VMALOB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11811 /* vmalof */, SystemZ::VMALOF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11818 /* vmaloh */, SystemZ::VMALOH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11825 /* vmao */, SystemZ::VMAO, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11830 /* vmaob */, SystemZ::VMAOB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11836 /* vmaof */, SystemZ::VMAOF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11842 /* vmaoh */, SystemZ::VMAOH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11848 /* vme */, SystemZ::VME, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11852 /* vmeb */, SystemZ::VMEB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11857 /* vmef */, SystemZ::VMEF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11862 /* vmeh */, SystemZ::VMEH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11867 /* vmh */, SystemZ::VMH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11871 /* vmhb */, SystemZ::VMHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11876 /* vmhf */, SystemZ::VMHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11881 /* vmhh */, SystemZ::VMHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11886 /* vml */, SystemZ::VML, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11890 /* vmlb */, SystemZ::VMLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11895 /* vmle */, SystemZ::VMLE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11900 /* vmleb */, SystemZ::VMLEB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11906 /* vmlef */, SystemZ::VMLEF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11912 /* vmleh */, SystemZ::VMLEH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11918 /* vmlf */, SystemZ::VMLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11923 /* vmlh */, SystemZ::VMLH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11928 /* vmlhb */, SystemZ::VMLHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11934 /* vmlhf */, SystemZ::VMLHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11940 /* vmlhh */, SystemZ::VMLHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11946 /* vmlhw */, SystemZ::VMLHW, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11952 /* vmlo */, SystemZ::VMLO, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11957 /* vmlob */, SystemZ::VMLOB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11963 /* vmlof */, SystemZ::VMLOF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11969 /* vmloh */, SystemZ::VMLOH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11975 /* vmn */, SystemZ::VMN, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11979 /* vmnb */, SystemZ::VMNB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11984 /* vmnf */, SystemZ::VMNF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11989 /* vmng */, SystemZ::VMNG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11994 /* vmnh */, SystemZ::VMNH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11999 /* vmnl */, SystemZ::VMNL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12004 /* vmnlb */, SystemZ::VMNLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12010 /* vmnlf */, SystemZ::VMNLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12016 /* vmnlg */, SystemZ::VMNLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12022 /* vmnlh */, SystemZ::VMNLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12028 /* vmo */, SystemZ::VMO, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12032 /* vmob */, SystemZ::VMOB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12037 /* vmof */, SystemZ::VMOF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12042 /* vmoh */, SystemZ::VMOH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12047 /* vmp */, SystemZ::VMP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 12051 /* vmrh */, SystemZ::VMRH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12056 /* vmrhb */, SystemZ::VMRHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12062 /* vmrhf */, SystemZ::VMRHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12068 /* vmrhg */, SystemZ::VMRHG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12074 /* vmrhh */, SystemZ::VMRHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12080 /* vmrl */, SystemZ::VMRL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12085 /* vmrlb */, SystemZ::VMRLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12091 /* vmrlf */, SystemZ::VMRLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12097 /* vmrlg */, SystemZ::VMRLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12103 /* vmrlh */, SystemZ::VMRLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12109 /* vmsl */, SystemZ::VMSL, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 12114 /* vmslg */, SystemZ::VMSLG, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12120 /* vmsp */, SystemZ::VMSP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 12125 /* vmx */, SystemZ::VMX, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12129 /* vmxb */, SystemZ::VMXB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12134 /* vmxf */, SystemZ::VMXF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12139 /* vmxg */, SystemZ::VMXG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12144 /* vmxh */, SystemZ::VMXH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12149 /* vmxl */, SystemZ::VMXL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12154 /* vmxlb */, SystemZ::VMXLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12160 /* vmxlf */, SystemZ::VMXLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12166 /* vmxlg */, SystemZ::VMXLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12172 /* vmxlh */, SystemZ::VMXLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12178 /* vn */, SystemZ::VN, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12181 /* vnc */, SystemZ::VNC, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12185 /* vnn */, SystemZ::VNN, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12189 /* vno */, SystemZ::VNO, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12193 /* vnot */, SystemZ::VNO, Convert__VR1281_0__VR1281_1__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12198 /* vnx */, SystemZ::VNX, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12202 /* vo */, SystemZ::VO, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12205 /* voc */, SystemZ::VOC, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12209 /* vone */, SystemZ::VONE, Convert__VR1281_0, Feature_FeatureVector, { MCK_VR128 }, },
  { 12214 /* vpdi */, SystemZ::VPDI, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12219 /* vperm */, SystemZ::VPERM, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12225 /* vpk */, SystemZ::VPK, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12229 /* vpkf */, SystemZ::VPKF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12234 /* vpkg */, SystemZ::VPKG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12239 /* vpkh */, SystemZ::VPKH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12244 /* vpkls */, SystemZ::VPKLS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 12250 /* vpklsf */, SystemZ::VPKLSF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12257 /* vpklsfs */, SystemZ::VPKLSFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12265 /* vpklsg */, SystemZ::VPKLSG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12272 /* vpklsgs */, SystemZ::VPKLSGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12280 /* vpklsh */, SystemZ::VPKLSH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12287 /* vpklshs */, SystemZ::VPKLSHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12295 /* vpks */, SystemZ::VPKS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 12300 /* vpksf */, SystemZ::VPKSF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12306 /* vpksfs */, SystemZ::VPKSFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12313 /* vpksg */, SystemZ::VPKSG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12319 /* vpksgs */, SystemZ::VPKSGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12326 /* vpksh */, SystemZ::VPKSH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12332 /* vpkshs */, SystemZ::VPKSHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12339 /* vpkz */, SystemZ::VPKZ, Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 12344 /* vpopct */, SystemZ::VPOPCT, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12351 /* vpopctb */, SystemZ::VPOPCTB, Convert__VR1281_0__VR1281_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 12359 /* vpopctf */, SystemZ::VPOPCTF, Convert__VR1281_0__VR1281_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 12367 /* vpopctg */, SystemZ::VPOPCTG, Convert__VR1281_0__VR1281_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 12375 /* vpopcth */, SystemZ::VPOPCTH, Convert__VR1281_0__VR1281_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 12383 /* vpsop */, SystemZ::VPSOP, Convert__VR1281_0__VR1281_1__U8Imm1_2__U8Imm1_3__U4Imm1_4, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U8Imm, MCK_U4Imm }, },
  { 12389 /* vrep */, SystemZ::VREP, Convert__VR1281_0__VR1281_1__U16Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm, MCK_U4Imm }, },
  { 12394 /* vrepb */, SystemZ::VREPB, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 12400 /* vrepf */, SystemZ::VREPF, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 12406 /* vrepg */, SystemZ::VREPG, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 12412 /* vreph */, SystemZ::VREPH, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 12418 /* vrepi */, SystemZ::VREPI, Convert__VR1281_0__S16Imm1_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U4Imm }, },
  { 12424 /* vrepib */, SystemZ::VREPIB, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 12431 /* vrepif */, SystemZ::VREPIF, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 12438 /* vrepig */, SystemZ::VREPIG, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 12445 /* vrepih */, SystemZ::VREPIH, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 12452 /* vrp */, SystemZ::VRP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 12456 /* vs */, SystemZ::VS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12459 /* vsb */, SystemZ::VSB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12463 /* vsbcbi */, SystemZ::VSBCBI, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12470 /* vsbcbiq */, SystemZ::VSBCBIQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12478 /* vsbi */, SystemZ::VSBI, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12483 /* vsbiq */, SystemZ::VSBIQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12489 /* vscbi */, SystemZ::VSCBI, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12495 /* vscbib */, SystemZ::VSCBIB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12502 /* vscbif */, SystemZ::VSCBIF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12509 /* vscbig */, SystemZ::VSCBIG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12516 /* vscbih */, SystemZ::VSCBIH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12523 /* vscbiq */, SystemZ::VSCBIQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12530 /* vscef */, SystemZ::VSCEF, Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U2Imm }, },
  { 12536 /* vsceg */, SystemZ::VSCEG, Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U1Imm }, },
  { 12542 /* vsdp */, SystemZ::VSDP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 12547 /* vseg */, SystemZ::VSEG, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12552 /* vsegb */, SystemZ::VSEGB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12558 /* vsegf */, SystemZ::VSEGF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12564 /* vsegh */, SystemZ::VSEGH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12570 /* vsel */, SystemZ::VSEL, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12575 /* vsf */, SystemZ::VSF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12579 /* vsg */, SystemZ::VSG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12583 /* vsh */, SystemZ::VSH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12587 /* vsl */, SystemZ::VSL, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12591 /* vslb */, SystemZ::VSLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12596 /* vsldb */, SystemZ::VSLDB, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 12602 /* vsp */, SystemZ::VSP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 12606 /* vsq */, SystemZ::VSQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12610 /* vsra */, SystemZ::VSRA, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12615 /* vsrab */, SystemZ::VSRAB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12621 /* vsrl */, SystemZ::VSRL, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12626 /* vsrlb */, SystemZ::VSRLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12632 /* vsrp */, SystemZ::VSRP, Convert__VR1281_0__VR1281_1__U8Imm1_2__U8Imm1_3__U4Imm1_4, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U8Imm, MCK_U4Imm }, },
  { 12637 /* vst */, SystemZ::VST, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12641 /* vsteb */, SystemZ::VSTEB, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12647 /* vstef */, SystemZ::VSTEF, Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 12653 /* vsteg */, SystemZ::VSTEG, Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 12659 /* vsteh */, SystemZ::VSTEH, Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 12665 /* vstl */, SystemZ::VSTL, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 12670 /* vstm */, SystemZ::VSTM, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12 }, },
  { 12675 /* vstrc */, SystemZ::VSTRC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12675 /* vstrc */, SystemZ::VSTRC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 12681 /* vstrcb */, SystemZ::VSTRCB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12681 /* vstrcb */, SystemZ::VSTRCB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12688 /* vstrcbs */, SystemZ::VSTRCBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12688 /* vstrcbs */, SystemZ::VSTRCBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12696 /* vstrcf */, SystemZ::VSTRCF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12696 /* vstrcf */, SystemZ::VSTRCF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12703 /* vstrcfs */, SystemZ::VSTRCFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12703 /* vstrcfs */, SystemZ::VSTRCFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12711 /* vstrch */, SystemZ::VSTRCH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12711 /* vstrch */, SystemZ::VSTRCH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12718 /* vstrchs */, SystemZ::VSTRCHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12718 /* vstrchs */, SystemZ::VSTRCHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12726 /* vstrczb */, SystemZ::VSTRCZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12726 /* vstrczb */, SystemZ::VSTRCZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12734 /* vstrczbs */, SystemZ::VSTRCZBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12734 /* vstrczbs */, SystemZ::VSTRCZBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12743 /* vstrczf */, SystemZ::VSTRCZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12743 /* vstrczf */, SystemZ::VSTRCZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12751 /* vstrczfs */, SystemZ::VSTRCZFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12751 /* vstrczfs */, SystemZ::VSTRCZFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12760 /* vstrczh */, SystemZ::VSTRCZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12760 /* vstrczh */, SystemZ::VSTRCZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12768 /* vstrczhs */, SystemZ::VSTRCZHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12768 /* vstrczhs */, SystemZ::VSTRCZHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12777 /* vstrl */, SystemZ::VSTRL, Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 12783 /* vstrlr */, SystemZ::VSTRLR, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 12790 /* vsum */, SystemZ::VSUM, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12795 /* vsumb */, SystemZ::VSUMB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12801 /* vsumg */, SystemZ::VSUMG, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12807 /* vsumgf */, SystemZ::VSUMGF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12814 /* vsumgh */, SystemZ::VSUMGH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12821 /* vsumh */, SystemZ::VSUMH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12827 /* vsumq */, SystemZ::VSUMQ, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12833 /* vsumqf */, SystemZ::VSUMQF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12840 /* vsumqg */, SystemZ::VSUMQG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12847 /* vtm */, SystemZ::VTM, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12851 /* vtp */, SystemZ::VTP, Convert__VR1281_0, Feature_FeatureVectorPackedDecimal, { MCK_VR128 }, },
  { 12855 /* vuph */, SystemZ::VUPH, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12860 /* vuphb */, SystemZ::VUPHB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12866 /* vuphf */, SystemZ::VUPHF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12872 /* vuphh */, SystemZ::VUPHH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12878 /* vupkz */, SystemZ::VUPKZ, Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2, Feature_FeatureVectorPackedDecimal, { MCK_VR128, MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 12884 /* vupl */, SystemZ::VUPL, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12889 /* vuplb */, SystemZ::VUPLB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12895 /* vuplf */, SystemZ::VUPLF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12901 /* vuplh */, SystemZ::VUPLH, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12907 /* vuplhb */, SystemZ::VUPLHB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12914 /* vuplhf */, SystemZ::VUPLHF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12921 /* vuplhh */, SystemZ::VUPLHH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12928 /* vuplhw */, SystemZ::VUPLHW, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12935 /* vupll */, SystemZ::VUPLL, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12941 /* vupllb */, SystemZ::VUPLLB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12948 /* vupllf */, SystemZ::VUPLLF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12955 /* vupllh */, SystemZ::VUPLLH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12962 /* vx */, SystemZ::VX, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12965 /* vzero */, SystemZ::VZERO, Convert__VR1281_0, Feature_FeatureVector, { MCK_VR128 }, },
  { 12971 /* wcdgb */, SystemZ::WCDGB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 12977 /* wcdlgb */, SystemZ::WCDLGB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 12984 /* wcgdb */, SystemZ::WCGDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 12990 /* wclgdb */, SystemZ::WCLGDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 12997 /* wfadb */, SystemZ::WFADB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13003 /* wfasb */, SystemZ::WFASB, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13009 /* wfaxb */, SystemZ::WFAXB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13015 /* wfc */, SystemZ::WFC, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 13019 /* wfcdb */, SystemZ::WFCDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 13025 /* wfcedb */, SystemZ::WFCEDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13032 /* wfcedbs */, SystemZ::WFCEDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13040 /* wfcesb */, SystemZ::WFCESB, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13047 /* wfcesbs */, SystemZ::WFCESBS, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13055 /* wfcexb */, SystemZ::WFCEXB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13062 /* wfcexbs */, SystemZ::WFCEXBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13070 /* wfchdb */, SystemZ::WFCHDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13077 /* wfchdbs */, SystemZ::WFCHDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13085 /* wfchedb */, SystemZ::WFCHEDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13093 /* wfchedbs */, SystemZ::WFCHEDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13102 /* wfchesb */, SystemZ::WFCHESB, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13110 /* wfchesbs */, SystemZ::WFCHESBS, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13119 /* wfchexb */, SystemZ::WFCHEXB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13127 /* wfchexbs */, SystemZ::WFCHEXBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13136 /* wfchsb */, SystemZ::WFCHSB, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13143 /* wfchsbs */, SystemZ::WFCHSBS, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13151 /* wfchxb */, SystemZ::WFCHXB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13158 /* wfchxbs */, SystemZ::WFCHXBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13166 /* wfcsb */, SystemZ::WFCSB, Convert__VR321_0__VR321_1, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 13172 /* wfcxb */, SystemZ::WFCXB, Convert__VR1281_0__VR1281_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 13178 /* wfddb */, SystemZ::WFDDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13184 /* wfdsb */, SystemZ::WFDSB, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13190 /* wfdxb */, SystemZ::WFDXB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13196 /* wfidb */, SystemZ::WFIDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 13202 /* wfisb */, SystemZ::WFISB, Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_U4Imm, MCK_U4Imm }, },
  { 13208 /* wfixb */, SystemZ::WFIXB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 13214 /* wfk */, SystemZ::WFK, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 13218 /* wfkdb */, SystemZ::WFKDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 13224 /* wfkedb */, SystemZ::WFKEDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13231 /* wfkedbs */, SystemZ::WFKEDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13239 /* wfkesb */, SystemZ::WFKESB, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13246 /* wfkesbs */, SystemZ::WFKESBS, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13254 /* wfkexb */, SystemZ::WFKEXB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13261 /* wfkexbs */, SystemZ::WFKEXBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13269 /* wfkhdb */, SystemZ::WFKHDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13276 /* wfkhdbs */, SystemZ::WFKHDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13284 /* wfkhedb */, SystemZ::WFKHEDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13292 /* wfkhedbs */, SystemZ::WFKHEDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13301 /* wfkhesb */, SystemZ::WFKHESB, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13309 /* wfkhesbs */, SystemZ::WFKHESBS, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13318 /* wfkhexb */, SystemZ::WFKHEXB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13326 /* wfkhexbs */, SystemZ::WFKHEXBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13335 /* wfkhsb */, SystemZ::WFKHSB, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13342 /* wfkhsbs */, SystemZ::WFKHSBS, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13350 /* wfkhxb */, SystemZ::WFKHXB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13357 /* wfkhxbs */, SystemZ::WFKHXBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13365 /* wfksb */, SystemZ::WFKSB, Convert__VR321_0__VR321_1, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 13371 /* wfkxb */, SystemZ::WFKXB, Convert__VR1281_0__VR1281_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 13377 /* wflcdb */, SystemZ::WFLCDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 13384 /* wflcsb */, SystemZ::WFLCSB, Convert__VR321_0__VR321_1, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 13391 /* wflcxb */, SystemZ::WFLCXB, Convert__VR1281_0__VR1281_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 13398 /* wflld */, SystemZ::WFLLD, Convert__VR1281_0__VR641_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR64 }, },
  { 13404 /* wflls */, SystemZ::WFLLS, Convert__VR641_0__VR321_1, Feature_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR32 }, },
  { 13410 /* wflndb */, SystemZ::WFLNDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 13417 /* wflnsb */, SystemZ::WFLNSB, Convert__VR321_0__VR321_1, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 13424 /* wflnxb */, SystemZ::WFLNXB, Convert__VR1281_0__VR1281_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 13431 /* wflpdb */, SystemZ::WFLPDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 13438 /* wflpsb */, SystemZ::WFLPSB, Convert__VR321_0__VR321_1, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 13445 /* wflpxb */, SystemZ::WFLPXB, Convert__VR1281_0__VR1281_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 13452 /* wflrd */, SystemZ::WFLRD, Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 13458 /* wflrx */, SystemZ::WFLRX, Convert__VR641_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 13464 /* wfmadb */, SystemZ::WFMADB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13471 /* wfmasb */, SystemZ::WFMASB, Convert__VR321_0__VR321_1__VR321_2__VR321_3, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13478 /* wfmaxb */, SystemZ::WFMAXB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13485 /* wfmaxdb */, SystemZ::WFMAXDB, Convert__VR641_0__VR641_1__VR641_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_U4Imm }, },
  { 13493 /* wfmaxsb */, SystemZ::WFMAXSB, Convert__VR321_0__VR321_1__VR321_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_U4Imm }, },
  { 13501 /* wfmaxxb */, SystemZ::WFMAXXB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13509 /* wfmdb */, SystemZ::WFMDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13515 /* wfmindb */, SystemZ::WFMINDB, Convert__VR641_0__VR641_1__VR641_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_U4Imm }, },
  { 13523 /* wfminsb */, SystemZ::WFMINSB, Convert__VR321_0__VR321_1__VR321_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_U4Imm }, },
  { 13531 /* wfminxb */, SystemZ::WFMINXB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13539 /* wfmsb */, SystemZ::WFMSB, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13545 /* wfmsdb */, SystemZ::WFMSDB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13552 /* wfmssb */, SystemZ::WFMSSB, Convert__VR321_0__VR321_1__VR321_2__VR321_3, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13559 /* wfmsxb */, SystemZ::WFMSXB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13566 /* wfmxb */, SystemZ::WFMXB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13572 /* wfnmadb */, SystemZ::WFNMADB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, Feature_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13580 /* wfnmasb */, SystemZ::WFNMASB, Convert__VR321_0__VR321_1__VR321_2__VR321_3, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13588 /* wfnmaxb */, SystemZ::WFNMAXB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13596 /* wfnmsdb */, SystemZ::WFNMSDB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, Feature_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13604 /* wfnmssb */, SystemZ::WFNMSSB, Convert__VR321_0__VR321_1__VR321_2__VR321_3, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13612 /* wfnmsxb */, SystemZ::WFNMSXB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13620 /* wfpsodb */, SystemZ::WFPSODB, Convert__VR641_0__VR641_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm }, },
  { 13628 /* wfpsosb */, SystemZ::WFPSOSB, Convert__VR321_0__VR321_1__U4Imm1_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_U4Imm }, },
  { 13636 /* wfpsoxb */, SystemZ::WFPSOXB, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13644 /* wfsdb */, SystemZ::WFSDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13650 /* wfsqdb */, SystemZ::WFSQDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 13657 /* wfsqsb */, SystemZ::WFSQSB, Convert__VR321_0__VR321_1, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 13664 /* wfsqxb */, SystemZ::WFSQXB, Convert__VR1281_0__VR1281_1, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 13671 /* wfssb */, SystemZ::WFSSB, Convert__VR321_0__VR321_1__VR321_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13677 /* wfsxb */, SystemZ::WFSXB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13683 /* wftcidb */, SystemZ::WFTCIDB, Convert__VR641_0__VR641_1__U12Imm1_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U12Imm }, },
  { 13691 /* wftcisb */, SystemZ::WFTCISB, Convert__VR321_0__VR321_1__U12Imm1_2, Feature_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_U12Imm }, },
  { 13699 /* wftcixb */, SystemZ::WFTCIXB, Convert__VR1281_0__VR1281_1__U12Imm1_2, Feature_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U12Imm }, },
  { 13707 /* wldeb */, SystemZ::WLDEB, Convert__VR641_0__VR321_1, Feature_FeatureVector, { MCK_VR64, MCK_VR32 }, },
  { 13713 /* wledb */, SystemZ::WLEDB, Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR32, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 13719 /* x */, SystemZ::X, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 13721 /* xc */, SystemZ::XC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 13724 /* xg */, SystemZ::XG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 13727 /* xgr */, SystemZ::XGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 13731 /* xgrk */, SystemZ::XGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 13736 /* xi */, SystemZ::XI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 13739 /* xihf */, SystemZ::XIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 13744 /* xilf */, SystemZ::XILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 13749 /* xiy */, SystemZ::XIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 13753 /* xr */, SystemZ::XR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 13756 /* xrk */, SystemZ::XRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 13760 /* xsch */, SystemZ::XSCH, Convert_NoOperands, 0, {  }, },
  { 13765 /* xy */, SystemZ::XY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 13768 /* zap */, SystemZ::ZAP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned SystemZAsmParser::
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
  StringRef Mnemonic = ((SystemZOperand&)*Operands[0]).getToken();

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
    uint32_t RequiredFeatures;
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

static const OperandMatchEntry OperandMatchTable[3373] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 0 /* a */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 0 /* a */, MCK_GR32, 1 /* 0 */ },
  { 0, 2 /* ad */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2 /* ad */, MCK_FP64, 1 /* 0 */ },
  { 0, 5 /* adb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5 /* adb */, MCK_FP64, 1 /* 0 */ },
  { 0, 9 /* adbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 14 /* adr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 18 /* adtr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 23 /* adtra */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 29 /* ae */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 29 /* ae */, MCK_FP32, 1 /* 0 */ },
  { 0, 32 /* aeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 32 /* aeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 36 /* aebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 41 /* aer */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 45 /* afi */, MCK_GR32, 1 /* 0 */ },
  { 0, 49 /* ag */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 49 /* ag */, MCK_GR64, 1 /* 0 */ },
  { 0, 52 /* agf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 52 /* agf */, MCK_GR64, 1 /* 0 */ },
  { 0, 56 /* agfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 61 /* agfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 61 /* agfr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 66 /* agh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions2, 66 /* agh */, MCK_GR64, 1 /* 0 */ },
  { 0, 70 /* aghi */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 75 /* aghik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 81 /* agr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 85 /* agrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 90 /* agsi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 95 /* ah */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 95 /* ah */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 98 /* ahhhr */, MCK_GRH32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureHighWord, 104 /* ahhlr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureHighWord, 104 /* ahhlr */, MCK_GRH32, 3 /* 0, 1 */ },
  { 0, 110 /* ahi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 114 /* ahik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 119 /* ahy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 119 /* ahy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 123 /* aih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 127 /* al */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 127 /* al */, MCK_GR32, 1 /* 0 */ },
  { 0, 130 /* alc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 130 /* alc */, MCK_GR32, 1 /* 0 */ },
  { 0, 134 /* alcg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 134 /* alcg */, MCK_GR64, 1 /* 0 */ },
  { 0, 139 /* alcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 145 /* alcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 150 /* alfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 155 /* alg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 155 /* alg */, MCK_GR64, 1 /* 0 */ },
  { 0, 159 /* algf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 159 /* algf */, MCK_GR64, 1 /* 0 */ },
  { 0, 164 /* algfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 170 /* algfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 170 /* algfr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 176 /* alghsik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 184 /* algr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 189 /* algrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 195 /* algsi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureHighWord, 201 /* alhhhr */, MCK_GRH32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureHighWord, 208 /* alhhlr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureHighWord, 208 /* alhhlr */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 215 /* alhsik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 222 /* alr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 226 /* alrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 231 /* alsi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureHighWord, 236 /* alsih */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 242 /* alsihn */, MCK_GRH32, 1 /* 0 */ },
  { 0, 249 /* aly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 249 /* aly */, MCK_GR32, 1 /* 0 */ },
  { 0, 253 /* ap */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { 0, 256 /* ar */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 259 /* ark */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 263 /* asi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 267 /* au */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 267 /* au */, MCK_FP32, 1 /* 0 */ },
  { 0, 270 /* aur */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 274 /* aw */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 274 /* aw */, MCK_FP64, 1 /* 0 */ },
  { 0, 277 /* awr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 281 /* axbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 286 /* axr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 290 /* axtr */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 295 /* axtra */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { 0, 301 /* ay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 301 /* ay */, MCK_GR32, 1 /* 0 */ },
  { 0, 304 /* b */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 306 /* bakr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 311 /* bal */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 311 /* bal */, MCK_GR64, 1 /* 0 */ },
  { 0, 315 /* balr */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 315 /* balr */, MCK_GR64, 1 /* 0 */ },
  { 0, 320 /* bas */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 320 /* bas */, MCK_GR64, 1 /* 0 */ },
  { 0, 324 /* basr */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 324 /* basr */, MCK_GR64, 1 /* 0 */ },
  { 0, 329 /* bassm */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 329 /* bassm */, MCK_GR64, 1 /* 0 */ },
  { 0, 335 /* bc */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 338 /* bcr */, MCK_GR64, 2 /* 1 */ },
  { 0, 342 /* bct */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 342 /* bct */, MCK_GR32, 1 /* 0 */ },
  { 0, 346 /* bctg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 346 /* bctg */, MCK_GR64, 1 /* 0 */ },
  { 0, 351 /* bctgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 357 /* bctr */, MCK_GR32, 1 /* 0 */ },
  { 0, 357 /* bctr */, MCK_GR64, 2 /* 1 */ },
  { 0, 362 /* be */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 365 /* ber */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 369 /* bh */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 372 /* bhe */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 376 /* bher */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 381 /* bhr */, MCK_ADDR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 385 /* bi */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 388 /* bic */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions2, 392 /* bie */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 396 /* bih */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 400 /* bihe */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 405 /* bil */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 409 /* bile */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 414 /* bilh */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 419 /* bim */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 423 /* bine */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 428 /* binh */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 433 /* binhe */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 439 /* binl */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 444 /* binle */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 450 /* binlh */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 456 /* binm */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 461 /* bino */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 466 /* binp */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 471 /* binz */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 476 /* bio */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 480 /* bip */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 484 /* biz */, MCK_BDXAddr64Disp20, 1 /* 0 */ },
  { 0, 488 /* bl */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 491 /* ble */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 495 /* bler */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 500 /* blh */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 504 /* blhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 509 /* blr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 513 /* bm */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 516 /* bmr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 520 /* bne */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 524 /* bner */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 529 /* bnh */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 533 /* bnhe */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 538 /* bnher */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 544 /* bnhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 549 /* bnl */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 553 /* bnle */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 558 /* bnler */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 564 /* bnlh */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 569 /* bnlhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 575 /* bnlr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 580 /* bnm */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 584 /* bnmr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 589 /* bno */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 593 /* bnor */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 598 /* bnp */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 602 /* bnpr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 607 /* bnz */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 611 /* bnzr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 616 /* bo */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 619 /* bor */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 623 /* bp */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureExecutionHint, 626 /* bpp */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureExecutionHint, 626 /* bpp */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 630 /* bpr */, MCK_ADDR64, 1 /* 0 */ },
  { Feature_FeatureExecutionHint, 634 /* bprp */, MCK_PCRel12, 2 /* 1 */ },
  { Feature_FeatureExecutionHint, 634 /* bprp */, MCK_PCRel24, 4 /* 2 */ },
  { 0, 639 /* br */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 642 /* bras */, MCK_GR64, 1 /* 0 */ },
  { 0, 642 /* bras */, MCK_PCRelTLS16, 2 /* 1 */ },
  { 0, 647 /* brasl */, MCK_GR64, 1 /* 0 */ },
  { 0, 647 /* brasl */, MCK_PCRelTLS32, 2 /* 1 */ },
  { 0, 653 /* brc */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 657 /* brcl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 662 /* brct */, MCK_GR32, 1 /* 0 */ },
  { 0, 662 /* brct */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 667 /* brctg */, MCK_GR64, 1 /* 0 */ },
  { 0, 667 /* brctg */, MCK_PCRel16, 2 /* 1 */ },
  { Feature_FeatureHighWord, 673 /* brcth */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 673 /* brcth */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 679 /* brxh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 679 /* brxh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 684 /* brxhg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 684 /* brxhg */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 690 /* brxle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 690 /* brxle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 696 /* brxlg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 696 /* brxlg */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 702 /* bsa */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 706 /* bsg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 710 /* bsm */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 710 /* bsm */, MCK_GR64, 1 /* 0 */ },
  { 0, 714 /* bxh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 714 /* bxh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 718 /* bxhg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 718 /* bxhg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 723 /* bxle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 723 /* bxle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 728 /* bxleg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 728 /* bxleg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 734 /* bz */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 737 /* bzr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 741 /* c */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 741 /* c */, MCK_GR32, 1 /* 0 */ },
  { 0, 743 /* cd */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 743 /* cd */, MCK_FP64, 1 /* 0 */ },
  { 0, 746 /* cdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 746 /* cdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 750 /* cdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 755 /* cdfbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 755 /* cdfbr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 761 /* cdfbra */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 761 /* cdfbra */, MCK_GR32, 4 /* 2 */ },
  { 0, 768 /* cdfr */, MCK_FP64, 1 /* 0 */ },
  { 0, 768 /* cdfr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 773 /* cdftr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 773 /* cdftr */, MCK_GR32, 4 /* 2 */ },
  { 0, 779 /* cdgbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 779 /* cdgbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 785 /* cdgbra */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 785 /* cdgbra */, MCK_GR64, 4 /* 2 */ },
  { 0, 792 /* cdgr */, MCK_FP64, 1 /* 0 */ },
  { 0, 792 /* cdgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 797 /* cdgtr */, MCK_FP64, 1 /* 0 */ },
  { 0, 797 /* cdgtr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 803 /* cdgtra */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 803 /* cdgtra */, MCK_GR64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 810 /* cdlfbr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 810 /* cdlfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 817 /* cdlftr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 817 /* cdlftr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 824 /* cdlgbr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 824 /* cdlgbr */, MCK_GR64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 831 /* cdlgtr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 831 /* cdlgtr */, MCK_GR64, 4 /* 2 */ },
  { Feature_FeatureDFPPackedConversion, 838 /* cdpt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPPackedConversion, 838 /* cdpt */, MCK_FP64, 1 /* 0 */ },
  { 0, 843 /* cdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 847 /* cds */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 847 /* cds */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 851 /* cdsg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 851 /* cdsg */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 856 /* cdstr */, MCK_FP64, 1 /* 0 */ },
  { 0, 856 /* cdstr */, MCK_GR64, 2 /* 1 */ },
  { 0, 862 /* cdsy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 862 /* cdsy */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 867 /* cdtr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 872 /* cdutr */, MCK_FP64, 1 /* 0 */ },
  { 0, 872 /* cdutr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureDFPZonedConversion, 878 /* cdzt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPZonedConversion, 878 /* cdzt */, MCK_FP64, 1 /* 0 */ },
  { 0, 883 /* ce */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 883 /* ce */, MCK_FP32, 1 /* 0 */ },
  { 0, 886 /* ceb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 886 /* ceb */, MCK_FP32, 1 /* 0 */ },
  { 0, 890 /* cebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 895 /* cedtr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 901 /* cefbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 901 /* cefbr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 907 /* cefbra */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 907 /* cefbra */, MCK_GR32, 4 /* 2 */ },
  { 0, 914 /* cefr */, MCK_FP32, 1 /* 0 */ },
  { 0, 914 /* cefr */, MCK_GR32, 2 /* 1 */ },
  { 0, 919 /* cegbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 919 /* cegbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 925 /* cegbra */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 925 /* cegbra */, MCK_GR64, 4 /* 2 */ },
  { 0, 932 /* cegr */, MCK_FP32, 1 /* 0 */ },
  { 0, 932 /* cegr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 937 /* celfbr */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 937 /* celfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 944 /* celgbr */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 944 /* celgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 951 /* cer */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 955 /* cextr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 961 /* cfc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 965 /* cfdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 965 /* cfdbr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 971 /* cfdbra */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 971 /* cfdbra */, MCK_GR32, 1 /* 0 */ },
  { 0, 978 /* cfdr */, MCK_FP64, 4 /* 2 */ },
  { 0, 978 /* cfdr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 983 /* cfdtr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 983 /* cfdtr */, MCK_GR32, 1 /* 0 */ },
  { 0, 989 /* cfebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 989 /* cfebr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 995 /* cfebra */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 995 /* cfebra */, MCK_GR32, 1 /* 0 */ },
  { 0, 1002 /* cfer */, MCK_FP32, 4 /* 2 */ },
  { 0, 1002 /* cfer */, MCK_GR32, 1 /* 0 */ },
  { 0, 1007 /* cfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1011 /* cfxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 1011 /* cfxbr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1017 /* cfxbra */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1017 /* cfxbra */, MCK_GR32, 1 /* 0 */ },
  { 0, 1024 /* cfxr */, MCK_FP128, 4 /* 2 */ },
  { 0, 1024 /* cfxr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1029 /* cfxtr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1029 /* cfxtr */, MCK_GR32, 1 /* 0 */ },
  { 0, 1035 /* cg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1035 /* cg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1038 /* cgdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 1038 /* cgdbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1044 /* cgdbra */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1044 /* cgdbra */, MCK_GR64, 1 /* 0 */ },
  { 0, 1051 /* cgdr */, MCK_FP64, 4 /* 2 */ },
  { 0, 1051 /* cgdr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1056 /* cgdtr */, MCK_FP64, 4 /* 2 */ },
  { 0, 1056 /* cgdtr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1062 /* cgdtra */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1062 /* cgdtra */, MCK_GR64, 1 /* 0 */ },
  { 0, 1069 /* cgebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 1069 /* cgebr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1075 /* cgebra */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1075 /* cgebra */, MCK_GR64, 1 /* 0 */ },
  { 0, 1082 /* cger */, MCK_FP32, 4 /* 2 */ },
  { 0, 1082 /* cger */, MCK_GR64, 1 /* 0 */ },
  { 0, 1087 /* cgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1087 /* cgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1091 /* cgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1096 /* cgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1096 /* cgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1101 /* cgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1101 /* cgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1107 /* cgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1107 /* cgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1111 /* cghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1116 /* cghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1116 /* cghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1122 /* cghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1128 /* cgib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 1128 /* cgib */, MCK_GR64, 1 /* 0 */ },
  { 0, 1133 /* cgibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1133 /* cgibe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1139 /* cgibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1139 /* cgibh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1145 /* cgibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1145 /* cgibhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1152 /* cgibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1152 /* cgibl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1158 /* cgible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1158 /* cgible */, MCK_GR64, 1 /* 0 */ },
  { 0, 1165 /* cgiblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1165 /* cgiblh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1172 /* cgibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1172 /* cgibne */, MCK_GR64, 1 /* 0 */ },
  { 0, 1179 /* cgibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1179 /* cgibnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1186 /* cgibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1186 /* cgibnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1194 /* cgibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1194 /* cgibnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1201 /* cgibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1201 /* cgibnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1209 /* cgibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1209 /* cgibnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1217 /* cgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 1217 /* cgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1222 /* cgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 1222 /* cgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1228 /* cgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1228 /* cgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1234 /* cgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1234 /* cgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1241 /* cgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1241 /* cgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1247 /* cgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1247 /* cgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1254 /* cgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1254 /* cgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1261 /* cgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 1261 /* cgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1268 /* cgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1268 /* cgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1275 /* cgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1275 /* cgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1283 /* cgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1283 /* cgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1290 /* cgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1290 /* cgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1298 /* cgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1298 /* cgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1306 /* cgit */, MCK_GR64, 1 /* 0 */ },
  { 0, 1311 /* cgite */, MCK_GR64, 1 /* 0 */ },
  { 0, 1317 /* cgith */, MCK_GR64, 1 /* 0 */ },
  { 0, 1323 /* cgithe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1330 /* cgitl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1336 /* cgitle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1343 /* cgitlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1350 /* cgitne */, MCK_GR64, 1 /* 0 */ },
  { 0, 1357 /* cgitnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1364 /* cgitnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1372 /* cgitnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1379 /* cgitnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1387 /* cgitnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1395 /* cgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1399 /* cgrb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 1399 /* cgrb */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1404 /* cgrbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1404 /* cgrbe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1410 /* cgrbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1410 /* cgrbh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1416 /* cgrbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1416 /* cgrbhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1423 /* cgrbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1423 /* cgrbl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1429 /* cgrble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1429 /* cgrble */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1436 /* cgrblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1436 /* cgrblh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1443 /* cgrbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1443 /* cgrbne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1450 /* cgrbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1450 /* cgrbnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1457 /* cgrbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1457 /* cgrbnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1465 /* cgrbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1465 /* cgrbnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1472 /* cgrbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1472 /* cgrbnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1480 /* cgrbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1480 /* cgrbnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1488 /* cgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1488 /* cgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1493 /* cgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1493 /* cgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1499 /* cgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1499 /* cgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1505 /* cgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1505 /* cgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1512 /* cgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1512 /* cgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1518 /* cgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1518 /* cgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1525 /* cgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1525 /* cgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1532 /* cgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1532 /* cgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1539 /* cgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1539 /* cgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1546 /* cgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1546 /* cgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1554 /* cgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1554 /* cgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1561 /* cgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1561 /* cgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1569 /* cgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1569 /* cgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1577 /* cgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1577 /* cgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1582 /* cgrt */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1587 /* cgrte */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1593 /* cgrth */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1599 /* cgrthe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1606 /* cgrtl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1612 /* cgrtle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1619 /* cgrtlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1626 /* cgrtne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1633 /* cgrtnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1640 /* cgrtnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1648 /* cgrtnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1655 /* cgrtnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1663 /* cgrtnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1671 /* cgxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 1671 /* cgxbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1677 /* cgxbra */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1677 /* cgxbra */, MCK_GR64, 1 /* 0 */ },
  { 0, 1684 /* cgxr */, MCK_FP128, 4 /* 2 */ },
  { 0, 1684 /* cgxr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1689 /* cgxtr */, MCK_FP128, 4 /* 2 */ },
  { 0, 1689 /* cgxtr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1695 /* cgxtra */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1695 /* cgxtra */, MCK_GR64, 1 /* 0 */ },
  { 0, 1702 /* ch */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1702 /* ch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1705 /* chf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1705 /* chf */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1709 /* chhr */, MCK_GRH32, 3 /* 0, 1 */ },
  { 0, 1714 /* chhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1720 /* chi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1724 /* chlr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1724 /* chlr */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1729 /* chrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1729 /* chrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1734 /* chsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1739 /* chy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1739 /* chy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1743 /* cib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 1743 /* cib */, MCK_GR32, 1 /* 0 */ },
  { 0, 1747 /* cibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1747 /* cibe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1752 /* cibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1752 /* cibh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1757 /* cibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1757 /* cibhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1763 /* cibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1763 /* cibl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1768 /* cible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1768 /* cible */, MCK_GR32, 1 /* 0 */ },
  { 0, 1774 /* ciblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1774 /* ciblh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1780 /* cibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1780 /* cibne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1786 /* cibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1786 /* cibnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1792 /* cibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1792 /* cibnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1799 /* cibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1799 /* cibnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1805 /* cibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1805 /* cibnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1812 /* cibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1812 /* cibnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1819 /* cih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1823 /* cij */, MCK_GR32, 1 /* 0 */ },
  { 0, 1823 /* cij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1827 /* cije */, MCK_GR32, 1 /* 0 */ },
  { 0, 1827 /* cije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1832 /* cijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1832 /* cijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1837 /* cijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1837 /* cijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1843 /* cijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1843 /* cijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1848 /* cijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1848 /* cijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1854 /* cijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1854 /* cijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1860 /* cijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1860 /* cijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1866 /* cijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1866 /* cijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1872 /* cijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1872 /* cijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1879 /* cijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1879 /* cijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1885 /* cijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1885 /* cijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1892 /* cijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1892 /* cijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1899 /* cit */, MCK_GR32, 1 /* 0 */ },
  { 0, 1903 /* cite */, MCK_GR32, 1 /* 0 */ },
  { 0, 1908 /* cith */, MCK_GR32, 1 /* 0 */ },
  { 0, 1913 /* cithe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1919 /* citl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1924 /* citle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1930 /* citlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1936 /* citne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1942 /* citnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1948 /* citnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1955 /* citnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1961 /* citnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1968 /* citnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1975 /* cksm */, MCK_GR128, 2 /* 1 */ },
  { 0, 1975 /* cksm */, MCK_GR64, 1 /* 0 */ },
  { 0, 1980 /* cl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1980 /* cl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1983 /* clc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 1983 /* clc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 1987 /* clcl */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 1992 /* clcle */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { 0, 1992 /* clcle */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 1998 /* clclu */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 1998 /* clclu */, MCK_GR128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 2004 /* clfdbr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2004 /* clfdbr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 2011 /* clfdtr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2011 /* clfdtr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 2018 /* clfebr */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2018 /* clfebr */, MCK_GR32, 1 /* 0 */ },
  { 0, 2025 /* clfhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2032 /* clfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 2037 /* clfit */, MCK_GR32, 1 /* 0 */ },
  { 0, 2043 /* clfite */, MCK_GR32, 1 /* 0 */ },
  { 0, 2050 /* clfith */, MCK_GR32, 1 /* 0 */ },
  { 0, 2057 /* clfithe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2065 /* clfitl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2072 /* clfitle */, MCK_GR32, 1 /* 0 */ },
  { 0, 2080 /* clfitlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2088 /* clfitne */, MCK_GR32, 1 /* 0 */ },
  { 0, 2096 /* clfitnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2104 /* clfitnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2113 /* clfitnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2121 /* clfitnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 2130 /* clfitnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 2139 /* clfxbr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2139 /* clfxbr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 2146 /* clfxtr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2146 /* clfxtr */, MCK_GR32, 1 /* 0 */ },
  { 0, 2153 /* clg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2153 /* clg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 2157 /* clgdbr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2157 /* clgdbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 2164 /* clgdtr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2164 /* clgdtr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 2171 /* clgebr */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2171 /* clgebr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2178 /* clgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2178 /* clgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2183 /* clgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 2189 /* clgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2189 /* clgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2195 /* clgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2195 /* clgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2202 /* clghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2202 /* clghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2209 /* clghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2216 /* clgib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 2216 /* clgib */, MCK_GR64, 1 /* 0 */ },
  { 0, 2222 /* clgibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2222 /* clgibe */, MCK_GR64, 1 /* 0 */ },
  { 0, 2229 /* clgibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2229 /* clgibh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2236 /* clgibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2236 /* clgibhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 2244 /* clgibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2244 /* clgibl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2251 /* clgible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2251 /* clgible */, MCK_GR64, 1 /* 0 */ },
  { 0, 2259 /* clgiblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2259 /* clgiblh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2267 /* clgibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2267 /* clgibne */, MCK_GR64, 1 /* 0 */ },
  { 0, 2275 /* clgibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2275 /* clgibnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2283 /* clgibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2283 /* clgibnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 2292 /* clgibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2292 /* clgibnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2300 /* clgibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2300 /* clgibnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 2309 /* clgibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2309 /* clgibnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2318 /* clgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 2318 /* clgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 2324 /* clgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 2324 /* clgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2331 /* clgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2331 /* clgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2338 /* clgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 2338 /* clgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2346 /* clgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2346 /* clgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2353 /* clgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 2353 /* clgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2361 /* clgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2361 /* clgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2369 /* clgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 2369 /* clgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2377 /* clgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2377 /* clgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2385 /* clgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 2385 /* clgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2394 /* clgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2394 /* clgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2402 /* clgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 2402 /* clgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2411 /* clgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2411 /* clgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2420 /* clgit */, MCK_GR64, 1 /* 0 */ },
  { 0, 2426 /* clgite */, MCK_GR64, 1 /* 0 */ },
  { 0, 2433 /* clgith */, MCK_GR64, 1 /* 0 */ },
  { 0, 2440 /* clgithe */, MCK_GR64, 1 /* 0 */ },
  { 0, 2448 /* clgitl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2455 /* clgitle */, MCK_GR64, 1 /* 0 */ },
  { 0, 2463 /* clgitlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2471 /* clgitne */, MCK_GR64, 1 /* 0 */ },
  { 0, 2479 /* clgitnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2487 /* clgitnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 2496 /* clgitnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2504 /* clgitnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 2513 /* clgitnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2522 /* clgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2527 /* clgrb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 2527 /* clgrb */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2533 /* clgrbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2533 /* clgrbe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2540 /* clgrbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2540 /* clgrbh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2547 /* clgrbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2547 /* clgrbhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2555 /* clgrbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2555 /* clgrbl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2562 /* clgrble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2562 /* clgrble */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2570 /* clgrblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2570 /* clgrblh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2578 /* clgrbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2578 /* clgrbne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2586 /* clgrbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2586 /* clgrbnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2594 /* clgrbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2594 /* clgrbnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2603 /* clgrbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2603 /* clgrbnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2611 /* clgrbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2611 /* clgrbnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2620 /* clgrbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2620 /* clgrbnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2629 /* clgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2629 /* clgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 2635 /* clgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2635 /* clgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2642 /* clgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2642 /* clgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2649 /* clgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2649 /* clgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2657 /* clgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2657 /* clgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2664 /* clgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2664 /* clgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2672 /* clgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2672 /* clgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2680 /* clgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2680 /* clgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2688 /* clgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2688 /* clgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2696 /* clgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2696 /* clgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2705 /* clgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2705 /* clgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2713 /* clgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2713 /* clgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2722 /* clgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2722 /* clgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2731 /* clgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2731 /* clgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2737 /* clgrt */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2743 /* clgrte */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2750 /* clgrth */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2757 /* clgrthe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2765 /* clgrtl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2772 /* clgrtle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2780 /* clgrtlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2788 /* clgrtne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2796 /* clgrtnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2804 /* clgrtnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2813 /* clgrtnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2821 /* clgrtnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2830 /* clgrtnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2839 /* clgt */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureMiscellaneousExtensions, 2839 /* clgt */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2844 /* clgte */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2844 /* clgte */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2850 /* clgth */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2850 /* clgth */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2856 /* clgthe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2856 /* clgthe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2863 /* clgtl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2863 /* clgtl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2869 /* clgtle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2869 /* clgtle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2876 /* clgtlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2876 /* clgtlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2883 /* clgtne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2883 /* clgtne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2890 /* clgtnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2890 /* clgtnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2897 /* clgtnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2897 /* clgtnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2905 /* clgtnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2905 /* clgtnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2912 /* clgtnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2912 /* clgtnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2920 /* clgtnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2920 /* clgtnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 2928 /* clgxbr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2928 /* clgxbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 2935 /* clgxtr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2935 /* clgxtr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureHighWord, 2942 /* clhf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 2942 /* clhf */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 2947 /* clhhr */, MCK_GRH32, 3 /* 0, 1 */ },
  { 0, 2953 /* clhhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureHighWord, 2960 /* clhlr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureHighWord, 2960 /* clhlr */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2966 /* clhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2966 /* clhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2972 /* cli */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2976 /* clib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 2976 /* clib */, MCK_GR32, 1 /* 0 */ },
  { 0, 2981 /* clibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2981 /* clibe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2987 /* clibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2987 /* clibh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2993 /* clibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2993 /* clibhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 3000 /* clibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3000 /* clibl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3006 /* clible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3006 /* clible */, MCK_GR32, 1 /* 0 */ },
  { 0, 3013 /* cliblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3013 /* cliblh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3020 /* clibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3020 /* clibne */, MCK_GR32, 1 /* 0 */ },
  { 0, 3027 /* clibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3027 /* clibnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3034 /* clibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3034 /* clibnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 3042 /* clibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3042 /* clibnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3049 /* clibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3049 /* clibnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 3057 /* clibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3057 /* clibnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3065 /* clih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3070 /* clij */, MCK_GR32, 1 /* 0 */ },
  { 0, 3070 /* clij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 3075 /* clije */, MCK_GR32, 1 /* 0 */ },
  { 0, 3075 /* clije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3081 /* clijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3081 /* clijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3087 /* clijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 3087 /* clijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3094 /* clijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3094 /* clijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3100 /* clijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 3100 /* clijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3107 /* clijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3107 /* clijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3114 /* clijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 3114 /* clijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3121 /* clijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3121 /* clijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3128 /* clijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 3128 /* clijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3136 /* clijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3136 /* clijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3143 /* clijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 3143 /* clijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3151 /* clijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3151 /* clijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3159 /* cliy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 3164 /* clm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3164 /* clm */, MCK_GR32, 1 /* 0 */ },
  { 0, 3168 /* clmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3168 /* clmh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3173 /* clmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3173 /* clmy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3178 /* clr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3182 /* clrb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 3182 /* clrb */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3187 /* clrbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3187 /* clrbe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3193 /* clrbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3193 /* clrbh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3199 /* clrbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3199 /* clrbhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3206 /* clrbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3206 /* clrbl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3212 /* clrble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3212 /* clrble */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3219 /* clrblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3219 /* clrblh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3226 /* clrbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3226 /* clrbne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3233 /* clrbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3233 /* clrbnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3240 /* clrbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3240 /* clrbnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3248 /* clrbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3248 /* clrbnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3255 /* clrbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3255 /* clrbnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3263 /* clrbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3263 /* clrbnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3271 /* clrj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3271 /* clrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 3276 /* clrje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3276 /* clrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3282 /* clrjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3282 /* clrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3288 /* clrjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3288 /* clrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3295 /* clrjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3295 /* clrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3301 /* clrjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3301 /* clrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3308 /* clrjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3308 /* clrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3315 /* clrjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3315 /* clrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3322 /* clrjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3322 /* clrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3329 /* clrjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3329 /* clrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3337 /* clrjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3337 /* clrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3344 /* clrjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3344 /* clrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3352 /* clrjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3352 /* clrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3360 /* clrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3360 /* clrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3365 /* clrt */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3370 /* clrte */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3376 /* clrth */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3382 /* clrthe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3389 /* clrtl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3395 /* clrtle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3402 /* clrtlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3409 /* clrtne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3416 /* clrtnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3423 /* clrtnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3431 /* clrtnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3438 /* clrtnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3446 /* clrtnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3454 /* clst */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3459 /* clt */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureMiscellaneousExtensions, 3459 /* clt */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3463 /* clte */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3463 /* clte */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3468 /* clth */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3468 /* clth */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3473 /* clthe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3473 /* clthe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3479 /* cltl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3479 /* cltl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3484 /* cltle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3484 /* cltle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3490 /* cltlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3490 /* cltlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3496 /* cltne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3496 /* cltne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3502 /* cltnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3502 /* cltnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3508 /* cltnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3508 /* cltnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3515 /* cltnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3515 /* cltnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3521 /* cltnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3521 /* cltnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3528 /* cltnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3528 /* cltnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3535 /* cly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3535 /* cly */, MCK_GR32, 1 /* 0 */ },
  { 0, 3539 /* cmpsc */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3545 /* cp */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { Feature_FeatureDFPPackedConversion, 3548 /* cpdt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPPackedConversion, 3548 /* cpdt */, MCK_FP64, 1 /* 0 */ },
  { 0, 3553 /* cpsdr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureDFPPackedConversion, 3559 /* cpxt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPPackedConversion, 3559 /* cpxt */, MCK_FP128, 1 /* 0 */ },
  { 0, 3564 /* cpya */, MCK_AR32, 3 /* 0, 1 */ },
  { 0, 3569 /* cr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3572 /* crb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 3572 /* crb */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3576 /* crbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3576 /* crbe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3581 /* crbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3581 /* crbh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3586 /* crbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3586 /* crbhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3592 /* crbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3592 /* crbl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3597 /* crble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3597 /* crble */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3603 /* crblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3603 /* crblh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3609 /* crbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3609 /* crbne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3615 /* crbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3615 /* crbnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3621 /* crbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3621 /* crbnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3628 /* crbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3628 /* crbnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3634 /* crbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3634 /* crbnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3641 /* crbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3641 /* crbnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureEnhancedDAT2, 3648 /* crdte */, MCK_GR128, 5 /* 0, 2 */ },
  { Feature_FeatureEnhancedDAT2, 3648 /* crdte */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureEnhancedDAT2, 3648 /* crdte */, MCK_GR128, 5 /* 0, 2 */ },
  { Feature_FeatureEnhancedDAT2, 3648 /* crdte */, MCK_GR64, 2 /* 1 */ },
  { 0, 3654 /* crj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3654 /* crj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 3658 /* crje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3658 /* crje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3663 /* crjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3663 /* crjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3668 /* crjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3668 /* crjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3674 /* crjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3674 /* crjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3679 /* crjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3679 /* crjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3685 /* crjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3685 /* crjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3691 /* crjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3691 /* crjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3697 /* crjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3697 /* crjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3703 /* crjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3703 /* crjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3710 /* crjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3710 /* crjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3716 /* crjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3716 /* crjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3723 /* crjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3723 /* crjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3730 /* crl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3730 /* crl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3734 /* crt */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3738 /* crte */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3743 /* crth */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3748 /* crthe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3754 /* crtl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3759 /* crtle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3765 /* crtlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3771 /* crtne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3777 /* crtnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3783 /* crtnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3790 /* crtnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3796 /* crtnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3803 /* crtnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3810 /* cs */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3810 /* cs */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3818 /* csdtr */, MCK_FP64, 2 /* 1 */ },
  { 0, 3818 /* csdtr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3824 /* csg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3824 /* csg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3828 /* csp */, MCK_GR128, 1 /* 0 */ },
  { 0, 3828 /* csp */, MCK_GR64, 2 /* 1 */ },
  { 0, 3832 /* cspg */, MCK_GR128, 1 /* 0 */ },
  { 0, 3832 /* cspg */, MCK_GR64, 2 /* 1 */ },
  { 0, 3837 /* csst */, MCK_BDAddr64Disp12, 3 /* 0, 1 */ },
  { 0, 3837 /* csst */, MCK_GR64, 4 /* 2 */ },
  { 0, 3842 /* csxtr */, MCK_FP128, 2 /* 1 */ },
  { 0, 3842 /* csxtr */, MCK_GR128, 1 /* 0 */ },
  { 0, 3848 /* csy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3848 /* csy */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3852 /* cu12 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3852 /* cu12 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3857 /* cu14 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3857 /* cu14 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3862 /* cu21 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3862 /* cu21 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3867 /* cu24 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3867 /* cu24 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3872 /* cu41 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3877 /* cu42 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3882 /* cudtr */, MCK_FP64, 2 /* 1 */ },
  { 0, 3882 /* cudtr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3888 /* cuse */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3893 /* cutfu */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3893 /* cutfu */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3899 /* cuutf */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3899 /* cuutf */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3905 /* cuxtr */, MCK_FP128, 2 /* 1 */ },
  { 0, 3905 /* cuxtr */, MCK_GR128, 1 /* 0 */ },
  { 0, 3911 /* cvb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3911 /* cvb */, MCK_GR32, 1 /* 0 */ },
  { 0, 3915 /* cvbg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3915 /* cvbg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3920 /* cvby */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3920 /* cvby */, MCK_GR32, 1 /* 0 */ },
  { 0, 3925 /* cvd */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3925 /* cvd */, MCK_GR32, 1 /* 0 */ },
  { 0, 3929 /* cvdg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3929 /* cvdg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3934 /* cvdy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3934 /* cvdy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3939 /* cxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3944 /* cxfbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 3944 /* cxfbr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 3950 /* cxfbra */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3950 /* cxfbra */, MCK_GR32, 4 /* 2 */ },
  { 0, 3957 /* cxfr */, MCK_FP128, 1 /* 0 */ },
  { 0, 3957 /* cxfr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 3962 /* cxftr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3962 /* cxftr */, MCK_GR32, 4 /* 2 */ },
  { 0, 3968 /* cxgbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 3968 /* cxgbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 3974 /* cxgbra */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3974 /* cxgbra */, MCK_GR64, 4 /* 2 */ },
  { 0, 3981 /* cxgr */, MCK_FP128, 1 /* 0 */ },
  { 0, 3981 /* cxgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 3986 /* cxgtr */, MCK_FP128, 1 /* 0 */ },
  { 0, 3986 /* cxgtr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 3992 /* cxgtra */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3992 /* cxgtra */, MCK_GR64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 3999 /* cxlfbr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3999 /* cxlfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 4006 /* cxlftr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 4006 /* cxlftr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 4013 /* cxlgbr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 4013 /* cxlgbr */, MCK_GR64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 4020 /* cxlgtr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 4020 /* cxlgtr */, MCK_GR64, 4 /* 2 */ },
  { Feature_FeatureDFPPackedConversion, 4027 /* cxpt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPPackedConversion, 4027 /* cxpt */, MCK_FP128, 1 /* 0 */ },
  { 0, 4032 /* cxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4036 /* cxstr */, MCK_FP128, 1 /* 0 */ },
  { 0, 4036 /* cxstr */, MCK_GR128, 2 /* 1 */ },
  { 0, 4042 /* cxtr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4047 /* cxutr */, MCK_FP128, 1 /* 0 */ },
  { 0, 4047 /* cxutr */, MCK_GR128, 2 /* 1 */ },
  { Feature_FeatureDFPZonedConversion, 4053 /* cxzt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPZonedConversion, 4053 /* cxzt */, MCK_FP128, 1 /* 0 */ },
  { 0, 4058 /* cy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4058 /* cy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureDFPZonedConversion, 4061 /* czdt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPZonedConversion, 4061 /* czdt */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureDFPZonedConversion, 4066 /* czxt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPZonedConversion, 4066 /* czxt */, MCK_FP128, 1 /* 0 */ },
  { 0, 4071 /* d */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4071 /* d */, MCK_GR128, 1 /* 0 */ },
  { 0, 4073 /* dd */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4073 /* dd */, MCK_FP64, 1 /* 0 */ },
  { 0, 4076 /* ddb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4076 /* ddb */, MCK_FP64, 1 /* 0 */ },
  { 0, 4080 /* ddbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4085 /* ddr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4089 /* ddtr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 4094 /* ddtra */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 4100 /* de */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4100 /* de */, MCK_FP32, 1 /* 0 */ },
  { 0, 4103 /* deb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4103 /* deb */, MCK_FP32, 1 /* 0 */ },
  { 0, 4107 /* debr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4112 /* der */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4116 /* diag */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 4116 /* diag */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4121 /* didbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 4127 /* diebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 4133 /* dl */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4133 /* dl */, MCK_GR128, 1 /* 0 */ },
  { 0, 4136 /* dlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4136 /* dlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 4140 /* dlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 4140 /* dlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 4145 /* dlr */, MCK_GR128, 1 /* 0 */ },
  { 0, 4145 /* dlr */, MCK_GR32, 2 /* 1 */ },
  { 0, 4149 /* dp */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { 0, 4152 /* dr */, MCK_GR128, 1 /* 0 */ },
  { 0, 4152 /* dr */, MCK_GR32, 2 /* 1 */ },
  { 0, 4155 /* dsg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4155 /* dsg */, MCK_GR128, 1 /* 0 */ },
  { 0, 4159 /* dsgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4159 /* dsgf */, MCK_GR128, 1 /* 0 */ },
  { 0, 4164 /* dsgfr */, MCK_GR128, 1 /* 0 */ },
  { 0, 4164 /* dsgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 4170 /* dsgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 4170 /* dsgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 4175 /* dxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4180 /* dxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4184 /* dxtr */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 4189 /* dxtra */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { 0, 4195 /* ear */, MCK_AR32, 2 /* 1 */ },
  { 0, 4195 /* ear */, MCK_GR32, 1 /* 0 */ },
  { 0, 4199 /* ecag */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 4199 /* ecag */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4204 /* ecctr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4210 /* ecpga */, MCK_GR32, 1 /* 0 */ },
  { 0, 4210 /* ecpga */, MCK_GR64, 2 /* 1 */ },
  { 0, 4216 /* ectg */, MCK_BDAddr64Disp12, 3 /* 0, 1 */ },
  { 0, 4216 /* ectg */, MCK_GR64, 4 /* 2 */ },
  { 0, 4221 /* ed */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 4221 /* ed */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 4224 /* edmk */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 4224 /* edmk */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 4229 /* eedtr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4235 /* eextr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4241 /* efpc */, MCK_GR32, 1 /* 0 */ },
  { 0, 4246 /* epair */, MCK_GR64, 1 /* 0 */ },
  { 0, 4252 /* epar */, MCK_GR32, 1 /* 0 */ },
  { 0, 4257 /* epctr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4263 /* epsw */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4268 /* ereg */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4273 /* eregg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4279 /* esair */, MCK_GR64, 1 /* 0 */ },
  { 0, 4285 /* esar */, MCK_GR32, 1 /* 0 */ },
  { 0, 4290 /* esdtr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4296 /* esea */, MCK_GR32, 1 /* 0 */ },
  { 0, 4301 /* esta */, MCK_GR128, 1 /* 0 */ },
  { 0, 4301 /* esta */, MCK_GR32, 2 /* 1 */ },
  { 0, 4306 /* esxtr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureTransactionalExecution, 4312 /* etnd */, MCK_GR32, 1 /* 0 */ },
  { 0, 4317 /* ex */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4317 /* ex */, MCK_GR64, 1 /* 0 */ },
  { 0, 4320 /* exrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 4320 /* exrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4325 /* fidbr */, MCK_FP64, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 4331 /* fidbra */, MCK_FP64, 5 /* 0, 2 */ },
  { 0, 4338 /* fidr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4343 /* fidtr */, MCK_FP64, 5 /* 0, 2 */ },
  { 0, 4349 /* fiebr */, MCK_FP32, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 4355 /* fiebra */, MCK_FP32, 5 /* 0, 2 */ },
  { 0, 4362 /* fier */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4367 /* fixbr */, MCK_FP128, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 4373 /* fixbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 4380 /* fixr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4385 /* fixtr */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 4391 /* flogr */, MCK_GR128, 1 /* 0 */ },
  { 0, 4391 /* flogr */, MCK_GR64, 2 /* 1 */ },
  { 0, 4397 /* hdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4401 /* her */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4410 /* iac */, MCK_GR32, 1 /* 0 */ },
  { 0, 4414 /* ic */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4414 /* ic */, MCK_GR64, 1 /* 0 */ },
  { 0, 4417 /* icm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 4417 /* icm */, MCK_GR32, 1 /* 0 */ },
  { 0, 4421 /* icmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 4421 /* icmh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4426 /* icmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 4426 /* icmy */, MCK_GR32, 1 /* 0 */ },
  { 0, 4431 /* icy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4431 /* icy */, MCK_GR64, 1 /* 0 */ },
  { 0, 4435 /* idte */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 4435 /* idte */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 4440 /* iedtr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 4446 /* iextr */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { 0, 4452 /* iihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4457 /* iihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4462 /* iihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4467 /* iilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 4472 /* iilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 4477 /* iill */, MCK_GR32, 1 /* 0 */ },
  { 0, 4486 /* ipm */, MCK_GR32, 1 /* 0 */ },
  { 0, 4490 /* ipte */, MCK_GR32, 2 /* 1 */ },
  { 0, 4490 /* ipte */, MCK_GR64, 1 /* 0 */ },
  { 0, 4490 /* ipte */, MCK_GR32, 6 /* 1, 2 */ },
  { 0, 4490 /* ipte */, MCK_GR64, 1 /* 0 */ },
  { 0, 4490 /* ipte */, MCK_GR32, 6 /* 1, 2 */ },
  { 0, 4490 /* ipte */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureInsertReferenceBitsMultiple, 4495 /* irbm */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4500 /* iske */, MCK_GR32, 1 /* 0 */ },
  { 0, 4500 /* iske */, MCK_GR64, 2 /* 1 */ },
  { 0, 4505 /* ivsk */, MCK_GR32, 1 /* 0 */ },
  { 0, 4505 /* ivsk */, MCK_GR64, 2 /* 1 */ },
  { 0, 4510 /* j */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4512 /* je */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4515 /* jg */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4518 /* jge */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4522 /* jgh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4526 /* jghe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4531 /* jgl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4535 /* jgle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4540 /* jglh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4545 /* jgm */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4549 /* jgne */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4554 /* jgnh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4559 /* jgnhe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4565 /* jgnl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4570 /* jgnle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4576 /* jgnlh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4582 /* jgnm */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4587 /* jgno */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4592 /* jgnp */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4597 /* jgnz */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4602 /* jgo */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4606 /* jgp */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4610 /* jgz */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4614 /* jh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4617 /* jhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4621 /* jl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4624 /* jle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4628 /* jlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4632 /* jm */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4635 /* jne */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4639 /* jnh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4643 /* jnhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4648 /* jnl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4652 /* jnle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4657 /* jnlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4662 /* jnm */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4666 /* jno */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4670 /* jnp */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4674 /* jnz */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4678 /* jo */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4681 /* jp */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4684 /* jz */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4687 /* kdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4687 /* kdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 4691 /* kdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4696 /* kdtr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4701 /* keb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4701 /* keb */, MCK_FP32, 1 /* 0 */ },
  { 0, 4705 /* kebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4710 /* kimd */, MCK_GR128, 2 /* 1 */ },
  { 0, 4710 /* kimd */, MCK_GR64, 1 /* 0 */ },
  { 0, 4715 /* klmd */, MCK_GR128, 2 /* 1 */ },
  { 0, 4715 /* klmd */, MCK_GR64, 1 /* 0 */ },
  { 0, 4720 /* km */, MCK_GR128, 3 /* 0, 1 */ },
  { Feature_FeatureMessageSecurityAssist8, 4723 /* kma */, MCK_GR128, 7 /* 0, 1, 2 */ },
  { 0, 4727 /* kmac */, MCK_GR128, 2 /* 1 */ },
  { 0, 4727 /* kmac */, MCK_GR64, 1 /* 0 */ },
  { 0, 4732 /* kmc */, MCK_GR128, 3 /* 0, 1 */ },
  { Feature_FeatureMessageSecurityAssist4, 4736 /* kmctr */, MCK_GR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureMessageSecurityAssist4, 4742 /* kmf */, MCK_GR128, 3 /* 0, 1 */ },
  { Feature_FeatureMessageSecurityAssist4, 4746 /* kmo */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 4750 /* kxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4755 /* kxtr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4760 /* l */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4760 /* l */, MCK_GR32, 1 /* 0 */ },
  { 0, 4762 /* la */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4762 /* la */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureInterlockedAccess1, 4765 /* laa */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4765 /* laa */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 4769 /* laag */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4769 /* laag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 4774 /* laal */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4774 /* laal */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 4779 /* laalg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4779 /* laalg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4785 /* lae */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4785 /* lae */, MCK_GR64, 1 /* 0 */ },
  { 0, 4789 /* laey */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4789 /* laey */, MCK_GR64, 1 /* 0 */ },
  { 0, 4794 /* lam */, MCK_AR32, 3 /* 0, 1 */ },
  { 0, 4794 /* lam */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 4798 /* lamy */, MCK_AR32, 3 /* 0, 1 */ },
  { 0, 4798 /* lamy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4803 /* lan */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4803 /* lan */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 4807 /* lang */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4807 /* lang */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 4812 /* lao */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4812 /* lao */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 4816 /* laog */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4816 /* laog */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4821 /* larl */, MCK_GR64, 1 /* 0 */ },
  { 0, 4821 /* larl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4826 /* lasp */, MCK_BDAddr64Disp12, 3 /* 0, 1 */ },
  { Feature_FeatureLoadAndTrap, 4831 /* lat */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 4831 /* lat */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureInterlockedAccess1, 4835 /* lax */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4835 /* lax */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 4839 /* laxg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4839 /* laxg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4844 /* lay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4844 /* lay */, MCK_GR64, 1 /* 0 */ },
  { 0, 4848 /* lb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4848 /* lb */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 4851 /* lbh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 4851 /* lbh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4855 /* lbr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4859 /* lcbb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 4859 /* lcbb */, MCK_GR32, 1 /* 0 */ },
  { 0, 4864 /* lcctl */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 4870 /* lcdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4876 /* lcdfr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4882 /* lcdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4887 /* lcebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4893 /* lcer */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4898 /* lcgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 4898 /* lcgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 4904 /* lcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4909 /* lcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4913 /* lctl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 4913 /* lctl */, MCK_CR64, 3 /* 0, 1 */ },
  { 0, 4918 /* lctlg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 4918 /* lctlg */, MCK_CR64, 3 /* 0, 1 */ },
  { 0, 4924 /* lcxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4930 /* lcxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4935 /* ld */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4935 /* ld */, MCK_FP64, 1 /* 0 */ },
  { 0, 4938 /* lde */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4938 /* lde */, MCK_FP64, 1 /* 0 */ },
  { 0, 4942 /* ldeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4942 /* ldeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 4947 /* ldebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 4947 /* ldebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 4953 /* lder */, MCK_FP32, 2 /* 1 */ },
  { 0, 4953 /* lder */, MCK_FP64, 1 /* 0 */ },
  { 0, 4958 /* ldetr */, MCK_FP32, 2 /* 1 */ },
  { 0, 4958 /* ldetr */, MCK_FP64, 1 /* 0 */ },
  { 0, 4964 /* ldgr */, MCK_FP64, 1 /* 0 */ },
  { 0, 4964 /* ldgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 4969 /* ldr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4973 /* ldxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 4979 /* ldxbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 4986 /* ldxr */, MCK_FP128, 2 /* 1 */ },
  { 0, 4986 /* ldxr */, MCK_FP64, 1 /* 0 */ },
  { 0, 4991 /* ldxtr */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 4997 /* ldy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4997 /* ldy */, MCK_FP64, 1 /* 0 */ },
  { 0, 5001 /* le */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5001 /* le */, MCK_FP32, 1 /* 0 */ },
  { 0, 5004 /* ledbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 5004 /* ledbr */, MCK_FP64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 5010 /* ledbra */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 5010 /* ledbra */, MCK_FP64, 4 /* 2 */ },
  { 0, 5017 /* ledr */, MCK_FP32, 1 /* 0 */ },
  { 0, 5017 /* ledr */, MCK_FP64, 2 /* 1 */ },
  { 0, 5022 /* ledtr */, MCK_FP32, 1 /* 0 */ },
  { 0, 5022 /* ledtr */, MCK_FP64, 4 /* 2 */ },
  { 0, 5028 /* ler */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 5032 /* lexbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 5038 /* lexbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 5045 /* lexr */, MCK_FP128, 2 /* 1 */ },
  { 0, 5045 /* lexr */, MCK_FP32, 1 /* 0 */ },
  { 0, 5050 /* ley */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5050 /* ley */, MCK_FP32, 1 /* 0 */ },
  { 0, 5054 /* lfas */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureHighWord, 5059 /* lfh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 5059 /* lfh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadAndTrap, 5063 /* lfhat */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 5063 /* lfhat */, MCK_GRH32, 1 /* 0 */ },
  { 0, 5069 /* lfpc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 5074 /* lg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5074 /* lg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadAndTrap, 5077 /* lgat */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 5077 /* lgat */, MCK_GR64, 1 /* 0 */ },
  { 0, 5082 /* lgb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5082 /* lgb */, MCK_GR64, 1 /* 0 */ },
  { 0, 5086 /* lgbr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5091 /* lgdr */, MCK_FP64, 2 /* 1 */ },
  { 0, 5091 /* lgdr */, MCK_GR64, 1 /* 0 */ },
  { 0, 5096 /* lgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5096 /* lgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 5100 /* lgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 5105 /* lgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 5105 /* lgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 5110 /* lgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 5110 /* lgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeatureGuardedStorage, 5116 /* lgg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureGuardedStorage, 5116 /* lgg */, MCK_GR64, 1 /* 0 */ },
  { 0, 5120 /* lgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5120 /* lgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 5124 /* lghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 5129 /* lghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5134 /* lghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 5134 /* lghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 5140 /* lgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5144 /* lgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 5144 /* lgrl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeatureGuardedStorage, 5149 /* lgsc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureGuardedStorage, 5149 /* lgsc */, MCK_GR64, 1 /* 0 */ },
  { 0, 5154 /* lh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5154 /* lh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 5157 /* lhh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 5157 /* lhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 5161 /* lhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 5165 /* lhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5169 /* lhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 5169 /* lhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 5174 /* lhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5174 /* lhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 5178 /* llc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5178 /* llc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 5182 /* llch */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 5182 /* llch */, MCK_GRH32, 1 /* 0 */ },
  { 0, 5187 /* llcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5192 /* llgc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5192 /* llgc */, MCK_GR64, 1 /* 0 */ },
  { 0, 5197 /* llgcr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5203 /* llgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5203 /* llgf */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadAndTrap, 5208 /* llgfat */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 5208 /* llgfat */, MCK_GR64, 1 /* 0 */ },
  { 0, 5215 /* llgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 5215 /* llgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 5221 /* llgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 5221 /* llgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeatureGuardedStorage, 5228 /* llgfsg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureGuardedStorage, 5228 /* llgfsg */, MCK_GR64, 1 /* 0 */ },
  { 0, 5235 /* llgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5235 /* llgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 5240 /* llghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5246 /* llghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 5246 /* llghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 5253 /* llgt */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5253 /* llgt */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadAndTrap, 5258 /* llgtat */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 5258 /* llgtat */, MCK_GR64, 1 /* 0 */ },
  { 0, 5265 /* llgtr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5271 /* llh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5271 /* llh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 5275 /* llhh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 5275 /* llhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 5280 /* llhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5285 /* llhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 5285 /* llhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 5291 /* llihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 5297 /* llihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 5303 /* llihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 5309 /* llilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 5315 /* llilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 5321 /* llill */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 5327 /* llzrgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 5327 /* llzrgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 5334 /* lm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 5334 /* lm */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5337 /* lmd */, MCK_BDAddr64Disp12, 12 /* 2, 3 */ },
  { 0, 5337 /* lmd */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5341 /* lmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 5341 /* lmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5345 /* lmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 5345 /* lmh */, MCK_GRH32, 3 /* 0, 1 */ },
  { 0, 5349 /* lmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 5349 /* lmy */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5353 /* lndbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 5359 /* lndfr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 5365 /* lndr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 5370 /* lnebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 5376 /* lner */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 5381 /* lngfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 5381 /* lngfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 5387 /* lngr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5392 /* lnr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5396 /* lnxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 5402 /* lnxr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5407 /* loc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5407 /* loc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5411 /* loce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5411 /* loce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5416 /* locfh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5416 /* locfh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5422 /* locfhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5422 /* locfhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5429 /* locfhh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5429 /* locfhh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5436 /* locfhhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5436 /* locfhhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5444 /* locfhl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5444 /* locfhl */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5451 /* locfhle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5451 /* locfhle */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5459 /* locfhlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5459 /* locfhlh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5467 /* locfhm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5467 /* locfhm */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5474 /* locfhne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5474 /* locfhne */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5482 /* locfhnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5482 /* locfhnh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5490 /* locfhnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5490 /* locfhnhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5499 /* locfhnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5499 /* locfhnl */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5507 /* locfhnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5507 /* locfhnle */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5516 /* locfhnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5516 /* locfhnlh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5525 /* locfhnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5525 /* locfhnm */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5533 /* locfhno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5533 /* locfhno */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5541 /* locfhnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5541 /* locfhnp */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5549 /* locfhnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5549 /* locfhnz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5557 /* locfho */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5557 /* locfho */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5564 /* locfhp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5564 /* locfhp */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5571 /* locfhr */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5578 /* locfhre */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5586 /* locfhrh */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5594 /* locfhrhe */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5603 /* locfhrl */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5611 /* locfhrle */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5620 /* locfhrlh */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5629 /* locfhrm */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5637 /* locfhrne */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5646 /* locfhrnh */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5655 /* locfhrnhe */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5665 /* locfhrnl */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5674 /* locfhrnle */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5684 /* locfhrnlh */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5694 /* locfhrnm */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5703 /* locfhrno */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5712 /* locfhrnp */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5721 /* locfhrnz */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5730 /* locfhro */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5738 /* locfhrp */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5746 /* locfhrz */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5754 /* locfhz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5754 /* locfhz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5761 /* locg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5761 /* locg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5766 /* locge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5766 /* locge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5772 /* locgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5772 /* locgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5778 /* locghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5778 /* locghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5785 /* locghi */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5792 /* locghie */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5800 /* locghih */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5808 /* locghihe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5817 /* locghil */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5825 /* locghile */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5834 /* locghilh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5843 /* locghim */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5851 /* locghine */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5860 /* locghinh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5869 /* locghinhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5879 /* locghinl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5888 /* locghinle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5898 /* locghinlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5908 /* locghinm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5917 /* locghino */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5926 /* locghinp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5935 /* locghinz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5944 /* locghio */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5952 /* locghip */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5960 /* locghiz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5968 /* locgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5968 /* locgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5974 /* locgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5974 /* locgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5981 /* locglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5981 /* locglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5988 /* locgm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5988 /* locgm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5994 /* locgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5994 /* locgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6001 /* locgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6001 /* locgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6008 /* locgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6008 /* locgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6016 /* locgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6016 /* locgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6023 /* locgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6023 /* locgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6031 /* locgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6031 /* locgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6039 /* locgnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6039 /* locgnm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6046 /* locgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6046 /* locgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6053 /* locgnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6053 /* locgnp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6060 /* locgnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6060 /* locgnz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6067 /* locgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6067 /* locgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6073 /* locgp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6073 /* locgp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6079 /* locgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6085 /* locgre */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6092 /* locgrh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6099 /* locgrhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6107 /* locgrl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6114 /* locgrle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6122 /* locgrlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6130 /* locgrm */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6137 /* locgrne */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6145 /* locgrnh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6153 /* locgrnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6162 /* locgrnl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6170 /* locgrnle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6179 /* locgrnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6188 /* locgrnm */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6196 /* locgrno */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6204 /* locgrnp */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6212 /* locgrnz */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6220 /* locgro */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6227 /* locgrp */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6234 /* locgrz */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6241 /* locgz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6241 /* locgz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6247 /* loch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6247 /* loch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6252 /* loche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6252 /* loche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6258 /* lochhi */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6265 /* lochhie */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6273 /* lochhih */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6281 /* lochhihe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6290 /* lochhil */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6298 /* lochhile */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6307 /* lochhilh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6316 /* lochhim */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6324 /* lochhine */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6333 /* lochhinh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6342 /* lochhinhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6352 /* lochhinl */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6361 /* lochhinle */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6371 /* lochhinlh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6381 /* lochhinm */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6390 /* lochhino */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6399 /* lochhinp */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6408 /* lochhinz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6417 /* lochhio */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6425 /* lochhip */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6433 /* lochhiz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6441 /* lochi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6447 /* lochie */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6454 /* lochih */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6461 /* lochihe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6469 /* lochil */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6476 /* lochile */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6484 /* lochilh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6492 /* lochim */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6499 /* lochine */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6507 /* lochinh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6515 /* lochinhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6524 /* lochinl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6532 /* lochinle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6541 /* lochinlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6550 /* lochinm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6558 /* lochino */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6566 /* lochinp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6574 /* lochinz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6582 /* lochio */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6589 /* lochip */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6596 /* lochiz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6603 /* locl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6603 /* locl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6608 /* locle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6608 /* locle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6614 /* loclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6614 /* loclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6620 /* locm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6620 /* locm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6625 /* locne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6625 /* locne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6631 /* locnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6631 /* locnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6637 /* locnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6637 /* locnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6644 /* locnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6644 /* locnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6650 /* locnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6650 /* locnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6657 /* locnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6657 /* locnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6664 /* locnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6664 /* locnm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6670 /* locno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6670 /* locno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6676 /* locnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6676 /* locnp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6682 /* locnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6682 /* locnz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6688 /* loco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6688 /* loco */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6693 /* locp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6693 /* locp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6698 /* locr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6703 /* locre */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6709 /* locrh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6715 /* locrhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6722 /* locrl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6728 /* locrle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6735 /* locrlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6742 /* locrm */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6748 /* locrne */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6755 /* locrnh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6762 /* locrnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6770 /* locrnl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6777 /* locrnle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6785 /* locrnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6793 /* locrnm */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6800 /* locrno */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6807 /* locrnp */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6814 /* locrnz */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6821 /* locro */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6827 /* locrp */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6833 /* locrz */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6839 /* locz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6839 /* locz */, MCK_GR32, 1 /* 0 */ },
  { 0, 6844 /* lpctl */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureInterlockedAccess1, 6850 /* lpd */, MCK_BDAddr64Disp12, 6 /* 1, 2 */ },
  { Feature_FeatureInterlockedAccess1, 6850 /* lpd */, MCK_GR128, 1 /* 0 */ },
  { 0, 6854 /* lpdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6860 /* lpdfr */, MCK_FP64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 6866 /* lpdg */, MCK_BDAddr64Disp12, 6 /* 1, 2 */ },
  { Feature_FeatureInterlockedAccess1, 6866 /* lpdg */, MCK_GR128, 1 /* 0 */ },
  { 0, 6871 /* lpdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6876 /* lpebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 6882 /* lper */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 6887 /* lpgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 6887 /* lpgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 6893 /* lpgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 6898 /* lpp */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6902 /* lpq */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6902 /* lpq */, MCK_GR128, 1 /* 0 */ },
  { 0, 6906 /* lpr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 6910 /* lpsw */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6915 /* lpswe */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6921 /* lptea */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 6927 /* lpxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 6933 /* lpxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 6938 /* lr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 6941 /* lra */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6941 /* lra */, MCK_GR64, 1 /* 0 */ },
  { 0, 6945 /* lrag */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6945 /* lrag */, MCK_GR64, 1 /* 0 */ },
  { 0, 6950 /* lray */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6950 /* lray */, MCK_GR64, 1 /* 0 */ },
  { 0, 6955 /* lrdr */, MCK_FP128, 2 /* 1 */ },
  { 0, 6955 /* lrdr */, MCK_FP64, 1 /* 0 */ },
  { 0, 6960 /* lrer */, MCK_FP32, 1 /* 0 */ },
  { 0, 6960 /* lrer */, MCK_FP64, 2 /* 1 */ },
  { 0, 6965 /* lrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 6965 /* lrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 6969 /* lrv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6969 /* lrv */, MCK_GR32, 1 /* 0 */ },
  { 0, 6973 /* lrvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6973 /* lrvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 6978 /* lrvgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 6984 /* lrvh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6984 /* lrvh */, MCK_GR32, 1 /* 0 */ },
  { 0, 6989 /* lrvr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 6994 /* lsctl */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7000 /* lt */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7000 /* lt */, MCK_GR32, 1 /* 0 */ },
  { 0, 7003 /* ltdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7009 /* ltdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7014 /* ltdtr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7020 /* ltebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 7026 /* lter */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 7031 /* ltg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7031 /* ltg */, MCK_GR64, 1 /* 0 */ },
  { 0, 7035 /* ltgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7035 /* ltgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 7040 /* ltgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 7040 /* ltgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 7046 /* ltgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7051 /* ltr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 7055 /* ltxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 7061 /* ltxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 7066 /* ltxtr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 7072 /* lura */, MCK_GR32, 1 /* 0 */ },
  { 0, 7072 /* lura */, MCK_GR64, 2 /* 1 */ },
  { 0, 7077 /* lurag */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7083 /* lxd */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7083 /* lxd */, MCK_FP128, 1 /* 0 */ },
  { 0, 7087 /* lxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7087 /* lxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 7092 /* lxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 7092 /* lxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 7098 /* lxdr */, MCK_FP128, 1 /* 0 */ },
  { 0, 7098 /* lxdr */, MCK_FP64, 2 /* 1 */ },
  { 0, 7103 /* lxdtr */, MCK_FP128, 1 /* 0 */ },
  { 0, 7103 /* lxdtr */, MCK_FP64, 2 /* 1 */ },
  { 0, 7109 /* lxe */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7109 /* lxe */, MCK_FP128, 1 /* 0 */ },
  { 0, 7113 /* lxeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7113 /* lxeb */, MCK_FP128, 1 /* 0 */ },
  { 0, 7118 /* lxebr */, MCK_FP128, 1 /* 0 */ },
  { 0, 7118 /* lxebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 7124 /* lxer */, MCK_FP128, 1 /* 0 */ },
  { 0, 7124 /* lxer */, MCK_FP32, 2 /* 1 */ },
  { 0, 7129 /* lxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 7133 /* ly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7133 /* ly */, MCK_GR32, 1 /* 0 */ },
  { 0, 7136 /* lzdr */, MCK_FP64, 1 /* 0 */ },
  { 0, 7141 /* lzer */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 7146 /* lzrf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 7146 /* lzrf */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 7151 /* lzrg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 7151 /* lzrg */, MCK_GR64, 1 /* 0 */ },
  { 0, 7156 /* lzxr */, MCK_FP128, 1 /* 0 */ },
  { 0, 7161 /* m */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7161 /* m */, MCK_GR128, 1 /* 0 */ },
  { 0, 7163 /* mad */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7163 /* mad */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7167 /* madb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7167 /* madb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7172 /* madbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 7178 /* madr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 7183 /* mae */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7183 /* mae */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 7187 /* maeb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7187 /* maeb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 7192 /* maebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 7198 /* maer */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 7203 /* may */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7203 /* may */, MCK_FP128, 1 /* 0 */ },
  { 0, 7203 /* may */, MCK_FP64, 2 /* 1 */ },
  { 0, 7207 /* mayh */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7207 /* mayh */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7212 /* mayhr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 7218 /* mayl */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7218 /* mayl */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7223 /* maylr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 7229 /* mayr */, MCK_FP128, 1 /* 0 */ },
  { 0, 7229 /* mayr */, MCK_FP64, 6 /* 1, 2 */ },
  { 0, 7234 /* mc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7237 /* md */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7237 /* md */, MCK_FP64, 1 /* 0 */ },
  { 0, 7240 /* mdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7240 /* mdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 7244 /* mdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7249 /* mde */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7249 /* mde */, MCK_FP64, 1 /* 0 */ },
  { 0, 7253 /* mdeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7253 /* mdeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 7258 /* mdebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 7258 /* mdebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 7264 /* mder */, MCK_FP32, 2 /* 1 */ },
  { 0, 7264 /* mder */, MCK_FP64, 1 /* 0 */ },
  { 0, 7269 /* mdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7273 /* mdtr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 7278 /* mdtra */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 7284 /* me */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7284 /* me */, MCK_FP64, 1 /* 0 */ },
  { 0, 7287 /* mee */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7287 /* mee */, MCK_FP32, 1 /* 0 */ },
  { 0, 7291 /* meeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7291 /* meeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 7296 /* meebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 7302 /* meer */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 7307 /* mer */, MCK_FP32, 2 /* 1 */ },
  { 0, 7307 /* mer */, MCK_FP64, 1 /* 0 */ },
  { 0, 7311 /* mfy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7311 /* mfy */, MCK_GR128, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 7315 /* mg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions2, 7315 /* mg */, MCK_GR128, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 7318 /* mgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions2, 7318 /* mgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 7322 /* mghi */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 7327 /* mgrk */, MCK_GR128, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 7327 /* mgrk */, MCK_GR64, 6 /* 1, 2 */ },
  { 0, 7332 /* mh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7332 /* mh */, MCK_GR32, 1 /* 0 */ },
  { 0, 7335 /* mhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 7339 /* mhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7339 /* mhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 7343 /* ml */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7343 /* ml */, MCK_GR128, 1 /* 0 */ },
  { 0, 7346 /* mlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7346 /* mlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 7350 /* mlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 7350 /* mlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 7355 /* mlr */, MCK_GR128, 1 /* 0 */ },
  { 0, 7355 /* mlr */, MCK_GR32, 2 /* 1 */ },
  { 0, 7359 /* mp */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { 0, 7362 /* mr */, MCK_GR128, 1 /* 0 */ },
  { 0, 7362 /* mr */, MCK_GR32, 2 /* 1 */ },
  { 0, 7365 /* ms */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7365 /* ms */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 7368 /* msc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions2, 7368 /* msc */, MCK_GR32, 1 /* 0 */ },
  { 0, 7372 /* msch */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7377 /* msd */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7377 /* msd */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7381 /* msdb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7381 /* msdb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7386 /* msdbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 7392 /* msdr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 7397 /* mse */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7397 /* mse */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 7401 /* mseb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7401 /* mseb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 7406 /* msebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 7412 /* mser */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 7417 /* msfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 7422 /* msg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7422 /* msg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 7426 /* msgc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions2, 7426 /* msgc */, MCK_GR64, 1 /* 0 */ },
  { 0, 7431 /* msgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7431 /* msgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 7436 /* msgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 7442 /* msgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 7442 /* msgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 7448 /* msgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureMiscellaneousExtensions2, 7453 /* msgrkc */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 7460 /* msr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureMiscellaneousExtensions2, 7464 /* msrkc */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 7470 /* msta */, MCK_GR128, 1 /* 0 */ },
  { 0, 7475 /* msy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7475 /* msy */, MCK_GR32, 1 /* 0 */ },
  { 0, 7479 /* mvc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7479 /* mvc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 7483 /* mvcdk */, MCK_BDAddr64Disp12, 3 /* 0, 1 */ },
  { 0, 7489 /* mvcin */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7489 /* mvcin */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 7495 /* mvck */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7495 /* mvck */, MCK_BDRAddr64Disp12, 1 /* 0 */ },
  { 0, 7495 /* mvck */, MCK_GR64, 4 /* 2 */ },
  { 0, 7500 /* mvcl */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 7505 /* mvcle */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { 0, 7505 /* mvcle */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 7511 /* mvclu */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 7511 /* mvclu */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 7517 /* mvcos */, MCK_BDAddr64Disp12, 3 /* 0, 1 */ },
  { 0, 7517 /* mvcos */, MCK_GR64, 4 /* 2 */ },
  { 0, 7523 /* mvcp */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7523 /* mvcp */, MCK_BDRAddr64Disp12, 1 /* 0 */ },
  { 0, 7523 /* mvcp */, MCK_GR64, 4 /* 2 */ },
  { 0, 7528 /* mvcs */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7528 /* mvcs */, MCK_BDRAddr64Disp12, 1 /* 0 */ },
  { 0, 7528 /* mvcs */, MCK_GR64, 4 /* 2 */ },
  { 0, 7533 /* mvcsk */, MCK_BDAddr64Disp12, 3 /* 0, 1 */ },
  { 0, 7539 /* mvghi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7545 /* mvhhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7551 /* mvhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7556 /* mvi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7560 /* mviy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 7565 /* mvn */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7565 /* mvn */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 7569 /* mvo */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { 0, 7573 /* mvpg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7578 /* mvst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7583 /* mvz */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7583 /* mvz */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 7587 /* mxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 7592 /* mxd */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7592 /* mxd */, MCK_FP128, 1 /* 0 */ },
  { 0, 7596 /* mxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7596 /* mxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 7601 /* mxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 7601 /* mxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 7607 /* mxdr */, MCK_FP128, 1 /* 0 */ },
  { 0, 7607 /* mxdr */, MCK_FP64, 2 /* 1 */ },
  { 0, 7612 /* mxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 7616 /* mxtr */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 7621 /* mxtra */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { 0, 7627 /* my */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7627 /* my */, MCK_FP128, 1 /* 0 */ },
  { 0, 7627 /* my */, MCK_FP64, 2 /* 1 */ },
  { 0, 7630 /* myh */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7630 /* myh */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7634 /* myhr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 7639 /* myl */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7639 /* myl */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7643 /* mylr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 7648 /* myr */, MCK_FP128, 1 /* 0 */ },
  { 0, 7648 /* myr */, MCK_FP64, 6 /* 1, 2 */ },
  { 0, 7652 /* n */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7652 /* n */, MCK_GR32, 1 /* 0 */ },
  { 0, 7654 /* nc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7654 /* nc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 7657 /* ng */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7657 /* ng */, MCK_GR64, 1 /* 0 */ },
  { 0, 7660 /* ngr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7664 /* ngrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 7669 /* ni */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7677 /* nihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7682 /* nihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7687 /* nihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7692 /* nilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 7697 /* nilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 7702 /* nill */, MCK_GR32, 1 /* 0 */ },
  { 0, 7707 /* niy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 7711 /* nop */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 7715 /* nopr */, MCK_GR64, 1 /* 0 */ },
  { 0, 7720 /* nr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7723 /* nrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureTransactionalExecution, 7727 /* ntstg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureTransactionalExecution, 7727 /* ntstg */, MCK_GR64, 1 /* 0 */ },
  { 0, 7733 /* ny */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7733 /* ny */, MCK_GR32, 1 /* 0 */ },
  { 0, 7736 /* o */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7736 /* o */, MCK_GR32, 1 /* 0 */ },
  { 0, 7738 /* oc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7738 /* oc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 7741 /* og */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7741 /* og */, MCK_GR64, 1 /* 0 */ },
  { 0, 7744 /* ogr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7748 /* ogrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 7753 /* oi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7756 /* oihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7761 /* oihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7766 /* oihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7771 /* oilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 7776 /* oilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 7781 /* oill */, MCK_GR32, 1 /* 0 */ },
  { 0, 7786 /* oiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 7790 /* or */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7793 /* ork */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 7797 /* oy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7797 /* oy */, MCK_GR32, 1 /* 0 */ },
  { 0, 7800 /* pack */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { 0, 7810 /* pc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7823 /* pfd */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7827 /* pfdrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 7833 /* pfmf */, MCK_GR32, 1 /* 0 */ },
  { 0, 7833 /* pfmf */, MCK_GR64, 2 /* 1 */ },
  { 0, 7843 /* pgin */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7848 /* pgout */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7854 /* pka */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7854 /* pka */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { 0, 7858 /* pku */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7858 /* pku */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { 0, 7862 /* plo */, MCK_BDAddr64Disp12, 10 /* 1, 3 */ },
  { 0, 7862 /* plo */, MCK_GR64, 5 /* 0, 2 */ },
  { Feature_FeaturePopulationCount, 7866 /* popcnt */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureProcessorAssist, 7873 /* ppa */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureMessageSecurityAssist5, 7877 /* ppno */, MCK_GR128, 3 /* 0, 1 */ },
  { Feature_FeatureMessageSecurityAssist7, 7885 /* prno */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 7890 /* pt */, MCK_GR32, 1 /* 0 */ },
  { 0, 7890 /* pt */, MCK_GR64, 2 /* 1 */ },
  { 0, 7893 /* ptf */, MCK_GR64, 1 /* 0 */ },
  { 0, 7902 /* pti */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7911 /* qadtr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 7917 /* qaxtr */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { 0, 7923 /* qctri */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7929 /* qsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7938 /* risbg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 7944 /* risbgn */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureHighWord, 7951 /* risbhg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureHighWord, 7951 /* risbhg */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 7958 /* risblg */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 7958 /* risblg */, MCK_GR64, 2 /* 1 */ },
  { 0, 7965 /* rll */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 7965 /* rll */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 7969 /* rllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 7969 /* rllg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7974 /* rnsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7980 /* rosbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7986 /* rp */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7989 /* rrbe */, MCK_GR32, 1 /* 0 */ },
  { 0, 7989 /* rrbe */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureResetReferenceBitsMultiple, 7994 /* rrbm */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7999 /* rrdtr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 8005 /* rrxtr */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { 0, 8016 /* rxsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 8022 /* s */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8022 /* s */, MCK_GR32, 1 /* 0 */ },
  { 0, 8024 /* sac */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8028 /* sacf */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8055 /* sar */, MCK_AR32, 1 /* 0 */ },
  { 0, 8055 /* sar */, MCK_GR32, 2 /* 1 */ },
  { 0, 8059 /* scctr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 8070 /* sck */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8074 /* sckc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8085 /* sd */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8085 /* sd */, MCK_FP64, 1 /* 0 */ },
  { 0, 8088 /* sdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8088 /* sdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 8092 /* sdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 8097 /* sdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 8101 /* sdtr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 8106 /* sdtra */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 8112 /* se */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8112 /* se */, MCK_FP32, 1 /* 0 */ },
  { 0, 8115 /* seb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8115 /* seb */, MCK_FP32, 1 /* 0 */ },
  { 0, 8119 /* sebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 8124 /* ser */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 8128 /* sfasr */, MCK_GR32, 1 /* 0 */ },
  { 0, 8134 /* sfpc */, MCK_GR32, 1 /* 0 */ },
  { 0, 8139 /* sg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8139 /* sg */, MCK_GR64, 1 /* 0 */ },
  { 0, 8142 /* sgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8142 /* sgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 8146 /* sgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 8146 /* sgfr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions2, 8151 /* sgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions2, 8151 /* sgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 8155 /* sgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 8159 /* sgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 8164 /* sh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8164 /* sh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 8167 /* shhhr */, MCK_GRH32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureHighWord, 8173 /* shhlr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureHighWord, 8173 /* shhlr */, MCK_GRH32, 3 /* 0, 1 */ },
  { 0, 8179 /* shy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8179 /* shy */, MCK_GR32, 1 /* 0 */ },
  { 0, 8183 /* sie */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8187 /* siga */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8192 /* sigp */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 8192 /* sigp */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 8197 /* sl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8197 /* sl */, MCK_GR32, 1 /* 0 */ },
  { 0, 8200 /* sla */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 8200 /* sla */, MCK_GR32, 1 /* 0 */ },
  { 0, 8204 /* slag */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 8204 /* slag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 8209 /* slak */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 8209 /* slak */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 8214 /* slb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8214 /* slb */, MCK_GR32, 1 /* 0 */ },
  { 0, 8218 /* slbg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8218 /* slbg */, MCK_GR64, 1 /* 0 */ },
  { 0, 8223 /* slbgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 8229 /* slbr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 8234 /* slda */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 8234 /* slda */, MCK_GR128, 1 /* 0 */ },
  { 0, 8239 /* sldl */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 8239 /* sldl */, MCK_GR128, 1 /* 0 */ },
  { 0, 8244 /* sldt */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 8244 /* sldt */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 8249 /* slfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 8254 /* slg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8254 /* slg */, MCK_GR64, 1 /* 0 */ },
  { 0, 8258 /* slgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8258 /* slgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 8263 /* slgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 8269 /* slgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 8269 /* slgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 8275 /* slgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 8280 /* slgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureHighWord, 8286 /* slhhhr */, MCK_GRH32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureHighWord, 8293 /* slhhlr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureHighWord, 8293 /* slhhlr */, MCK_GRH32, 3 /* 0, 1 */ },
  { 0, 8300 /* sll */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 8300 /* sll */, MCK_GR32, 1 /* 0 */ },
  { 0, 8304 /* sllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 8304 /* sllg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 8309 /* sllk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 8309 /* sllk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 8314 /* slr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 8318 /* slrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 8323 /* slxt */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 8323 /* slxt */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 8328 /* sly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8328 /* sly */, MCK_GR32, 1 /* 0 */ },
  { 0, 8332 /* sp */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { 0, 8335 /* spctr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 8341 /* spka */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8346 /* spm */, MCK_GR32, 1 /* 0 */ },
  { 0, 8350 /* spt */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8354 /* spx */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8358 /* sqd */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8358 /* sqd */, MCK_FP64, 1 /* 0 */ },
  { 0, 8362 /* sqdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8362 /* sqdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 8367 /* sqdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 8373 /* sqdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 8378 /* sqe */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8378 /* sqe */, MCK_FP32, 1 /* 0 */ },
  { 0, 8382 /* sqeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8382 /* sqeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 8387 /* sqebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 8393 /* sqer */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 8398 /* sqxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 8404 /* sqxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 8409 /* sr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 8412 /* sra */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 8412 /* sra */, MCK_GR32, 1 /* 0 */ },
  { 0, 8416 /* srag */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 8416 /* srag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 8421 /* srak */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 8421 /* srak */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 8426 /* srda */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 8426 /* srda */, MCK_GR128, 1 /* 0 */ },
  { 0, 8431 /* srdl */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 8431 /* srdl */, MCK_GR128, 1 /* 0 */ },
  { 0, 8436 /* srdt */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 8436 /* srdt */, MCK_FP64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 8441 /* srk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 8445 /* srl */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 8445 /* srl */, MCK_GR32, 1 /* 0 */ },
  { 0, 8449 /* srlg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 8449 /* srlg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 8454 /* srlk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 8454 /* srlk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 8459 /* srnm */, MCK_BDAddr32Disp12, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 8464 /* srnmb */, MCK_BDAddr32Disp12, 1 /* 0 */ },
  { 0, 8470 /* srnmt */, MCK_BDAddr32Disp12, 1 /* 0 */ },
  { 0, 8476 /* srp */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 8476 /* srp */, MCK_BDLAddr64Disp12Len4, 1 /* 0 */ },
  { 0, 8480 /* srst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 8485 /* srstu */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 8491 /* srxt */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 8491 /* srxt */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 8496 /* ssair */, MCK_GR64, 1 /* 0 */ },
  { 0, 8502 /* ssar */, MCK_GR32, 1 /* 0 */ },
  { 0, 8507 /* ssch */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8512 /* sske */, MCK_GR32, 1 /* 0 */ },
  { 0, 8512 /* sske */, MCK_GR64, 2 /* 1 */ },
  { 0, 8512 /* sske */, MCK_GR32, 1 /* 0 */ },
  { 0, 8512 /* sske */, MCK_GR64, 2 /* 1 */ },
  { 0, 8517 /* ssm */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8521 /* st */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8521 /* st */, MCK_GR32, 1 /* 0 */ },
  { 0, 8524 /* stam */, MCK_AR32, 3 /* 0, 1 */ },
  { 0, 8524 /* stam */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 8529 /* stamy */, MCK_AR32, 3 /* 0, 1 */ },
  { 0, 8529 /* stamy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 8535 /* stap */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8540 /* stc */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8540 /* stc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 8544 /* stch */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 8544 /* stch */, MCK_GRH32, 1 /* 0 */ },
  { 0, 8549 /* stck */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8554 /* stckc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8560 /* stcke */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8566 /* stckf */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8572 /* stcm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 8572 /* stcm */, MCK_GR32, 1 /* 0 */ },
  { 0, 8577 /* stcmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 8577 /* stcmh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 8583 /* stcmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 8583 /* stcmy */, MCK_GR32, 1 /* 0 */ },
  { 0, 8589 /* stcps */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8595 /* stcrw */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8601 /* stctg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 8601 /* stctg */, MCK_CR64, 3 /* 0, 1 */ },
  { 0, 8607 /* stctl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 8607 /* stctl */, MCK_CR64, 3 /* 0, 1 */ },
  { 0, 8613 /* stcy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8613 /* stcy */, MCK_GR32, 1 /* 0 */ },
  { 0, 8618 /* std */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8618 /* std */, MCK_FP64, 1 /* 0 */ },
  { 0, 8622 /* stdy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8622 /* stdy */, MCK_FP64, 1 /* 0 */ },
  { 0, 8627 /* ste */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8627 /* ste */, MCK_FP32, 1 /* 0 */ },
  { 0, 8631 /* stey */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8631 /* stey */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 8636 /* stfh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 8636 /* stfh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 8641 /* stfl */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8646 /* stfle */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8652 /* stfpc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8658 /* stg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8658 /* stg */, MCK_GR64, 1 /* 0 */ },
  { 0, 8662 /* stgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 8662 /* stgrl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeatureGuardedStorage, 8668 /* stgsc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureGuardedStorage, 8668 /* stgsc */, MCK_GR64, 1 /* 0 */ },
  { 0, 8674 /* sth */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8674 /* sth */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 8678 /* sthh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 8678 /* sthh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 8683 /* sthrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 8683 /* sthrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 8689 /* sthy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8689 /* sthy */, MCK_GR32, 1 /* 0 */ },
  { 0, 8694 /* stidp */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8700 /* stm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 8700 /* stm */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 8704 /* stmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 8704 /* stmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 8709 /* stmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 8709 /* stmh */, MCK_GRH32, 3 /* 0, 1 */ },
  { 0, 8714 /* stmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 8714 /* stmy */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 8719 /* stnsm */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8725 /* stoc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8725 /* stoc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8730 /* stoce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8730 /* stoce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8736 /* stocfh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8736 /* stocfh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8743 /* stocfhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8743 /* stocfhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8751 /* stocfhh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8751 /* stocfhh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8759 /* stocfhhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8759 /* stocfhhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8768 /* stocfhl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8768 /* stocfhl */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8776 /* stocfhle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8776 /* stocfhle */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8785 /* stocfhlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8785 /* stocfhlh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8794 /* stocfhm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8794 /* stocfhm */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8802 /* stocfhne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8802 /* stocfhne */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8811 /* stocfhnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8811 /* stocfhnh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8820 /* stocfhnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8820 /* stocfhnhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8830 /* stocfhnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8830 /* stocfhnl */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8839 /* stocfhnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8839 /* stocfhnle */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8849 /* stocfhnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8849 /* stocfhnlh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8859 /* stocfhnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8859 /* stocfhnm */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8868 /* stocfhno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8868 /* stocfhno */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8877 /* stocfhnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8877 /* stocfhnp */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8886 /* stocfhnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8886 /* stocfhnz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8895 /* stocfho */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8895 /* stocfho */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8903 /* stocfhp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8903 /* stocfhp */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8911 /* stocfhz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8911 /* stocfhz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8919 /* stocg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8919 /* stocg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8925 /* stocge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8925 /* stocge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8932 /* stocgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8932 /* stocgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8939 /* stocghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8939 /* stocghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8947 /* stocgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8947 /* stocgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8954 /* stocgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8954 /* stocgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8962 /* stocglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8962 /* stocglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8970 /* stocgm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8970 /* stocgm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8977 /* stocgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8977 /* stocgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8985 /* stocgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8985 /* stocgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8993 /* stocgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8993 /* stocgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9002 /* stocgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9002 /* stocgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9010 /* stocgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9010 /* stocgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9019 /* stocgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9019 /* stocgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9028 /* stocgnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9028 /* stocgnm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9036 /* stocgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9036 /* stocgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9044 /* stocgnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9044 /* stocgnp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9052 /* stocgnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9052 /* stocgnz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9060 /* stocgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9060 /* stocgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9067 /* stocgp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9067 /* stocgp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9074 /* stocgz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9074 /* stocgz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9081 /* stoch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9081 /* stoch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9087 /* stoche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9087 /* stoche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9094 /* stocl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9094 /* stocl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9100 /* stocle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9100 /* stocle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9107 /* stoclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9107 /* stoclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9114 /* stocm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9114 /* stocm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9120 /* stocne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9120 /* stocne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9127 /* stocnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9127 /* stocnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9134 /* stocnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9134 /* stocnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9142 /* stocnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9142 /* stocnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9149 /* stocnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9149 /* stocnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9157 /* stocnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9157 /* stocnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9165 /* stocnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9165 /* stocnm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9172 /* stocno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9172 /* stocno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9179 /* stocnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9179 /* stocnp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9186 /* stocnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9186 /* stocnz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9193 /* stoco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9193 /* stoco */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9199 /* stocp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9199 /* stocp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 9205 /* stocz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 9205 /* stocz */, MCK_GR32, 1 /* 0 */ },
  { 0, 9211 /* stosm */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 9217 /* stpq */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 9217 /* stpq */, MCK_GR128, 1 /* 0 */ },
  { 0, 9222 /* stpt */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 9227 /* stpx */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 9232 /* strag */, MCK_BDAddr64Disp12, 3 /* 0, 1 */ },
  { 0, 9238 /* strl */, MCK_GR32, 1 /* 0 */ },
  { 0, 9238 /* strl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 9243 /* strv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 9243 /* strv */, MCK_GR32, 1 /* 0 */ },
  { 0, 9248 /* strvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 9248 /* strvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 9254 /* strvh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 9254 /* strvh */, MCK_GR32, 1 /* 0 */ },
  { 0, 9260 /* stsch */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 9266 /* stsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 9271 /* stura */, MCK_GR32, 1 /* 0 */ },
  { 0, 9271 /* stura */, MCK_GR64, 2 /* 1 */ },
  { 0, 9277 /* sturg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 9283 /* sty */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 9283 /* sty */, MCK_GR32, 1 /* 0 */ },
  { 0, 9287 /* su */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 9287 /* su */, MCK_FP32, 1 /* 0 */ },
  { 0, 9290 /* sur */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 9298 /* sw */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 9298 /* sw */, MCK_FP64, 1 /* 0 */ },
  { 0, 9301 /* swr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 9305 /* sxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 9310 /* sxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 9314 /* sxtr */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 9319 /* sxtra */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { 0, 9325 /* sy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 9325 /* sy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 9328 /* tabort */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 9339 /* tar */, MCK_AR32, 1 /* 0 */ },
  { 0, 9339 /* tar */, MCK_GR32, 2 /* 1 */ },
  { 0, 9343 /* tb */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 9346 /* tbdr */, MCK_FP64, 5 /* 0, 2 */ },
  { 0, 9351 /* tbedr */, MCK_FP32, 1 /* 0 */ },
  { 0, 9351 /* tbedr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureTransactionalExecution, 9357 /* tbegin */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 9364 /* tbeginc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 9372 /* tcdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 9372 /* tcdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 9377 /* tceb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 9377 /* tceb */, MCK_FP32, 1 /* 0 */ },
  { 0, 9382 /* tcxb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 9382 /* tcxb */, MCK_FP128, 1 /* 0 */ },
  { 0, 9387 /* tdcdt */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 9387 /* tdcdt */, MCK_FP64, 1 /* 0 */ },
  { 0, 9393 /* tdcet */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 9393 /* tdcet */, MCK_FP32, 1 /* 0 */ },
  { 0, 9399 /* tdcxt */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 9399 /* tdcxt */, MCK_FP128, 1 /* 0 */ },
  { 0, 9405 /* tdgdt */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 9405 /* tdgdt */, MCK_FP64, 1 /* 0 */ },
  { 0, 9411 /* tdget */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 9411 /* tdget */, MCK_FP32, 1 /* 0 */ },
  { 0, 9417 /* tdgxt */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 9417 /* tdgxt */, MCK_FP128, 1 /* 0 */ },
  { 0, 9428 /* thder */, MCK_FP32, 2 /* 1 */ },
  { 0, 9428 /* thder */, MCK_FP64, 1 /* 0 */ },
  { 0, 9434 /* thdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 9439 /* tm */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 9442 /* tmh */, MCK_GR32, 1 /* 0 */ },
  { 0, 9446 /* tmhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 9451 /* tmhl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 9456 /* tml */, MCK_GR32, 1 /* 0 */ },
  { 0, 9460 /* tmlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 9465 /* tmll */, MCK_GR32, 1 /* 0 */ },
  { 0, 9470 /* tmy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 9474 /* tp */, MCK_BDLAddr64Disp12Len4, 1 /* 0 */ },
  { 0, 9477 /* tpi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 9481 /* tprot */, MCK_BDAddr64Disp12, 3 /* 0, 1 */ },
  { 0, 9487 /* tr */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 9487 /* tr */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 9490 /* trace */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 9490 /* trace */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 9496 /* tracg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 9496 /* tracg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 9508 /* trap4 */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 9514 /* tre */, MCK_GR128, 1 /* 0 */ },
  { 0, 9514 /* tre */, MCK_GR64, 2 /* 1 */ },
  { 0, 9518 /* troo */, MCK_GR128, 1 /* 0 */ },
  { 0, 9518 /* troo */, MCK_GR64, 2 /* 1 */ },
  { 0, 9518 /* troo */, MCK_GR128, 1 /* 0 */ },
  { 0, 9518 /* troo */, MCK_GR64, 2 /* 1 */ },
  { 0, 9523 /* trot */, MCK_GR128, 1 /* 0 */ },
  { 0, 9523 /* trot */, MCK_GR64, 2 /* 1 */ },
  { 0, 9523 /* trot */, MCK_GR128, 1 /* 0 */ },
  { 0, 9523 /* trot */, MCK_GR64, 2 /* 1 */ },
  { 0, 9528 /* trt */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 9528 /* trt */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 9532 /* trte */, MCK_GR128, 1 /* 0 */ },
  { 0, 9532 /* trte */, MCK_GR64, 2 /* 1 */ },
  { 0, 9532 /* trte */, MCK_GR128, 1 /* 0 */ },
  { 0, 9532 /* trte */, MCK_GR64, 2 /* 1 */ },
  { 0, 9537 /* trto */, MCK_GR128, 1 /* 0 */ },
  { 0, 9537 /* trto */, MCK_GR64, 2 /* 1 */ },
  { 0, 9537 /* trto */, MCK_GR128, 1 /* 0 */ },
  { 0, 9537 /* trto */, MCK_GR64, 2 /* 1 */ },
  { 0, 9542 /* trtr */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 9542 /* trtr */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 9547 /* trtre */, MCK_GR128, 1 /* 0 */ },
  { 0, 9547 /* trtre */, MCK_GR64, 2 /* 1 */ },
  { 0, 9547 /* trtre */, MCK_GR128, 1 /* 0 */ },
  { 0, 9547 /* trtre */, MCK_GR64, 2 /* 1 */ },
  { 0, 9553 /* trtt */, MCK_GR128, 1 /* 0 */ },
  { 0, 9553 /* trtt */, MCK_GR64, 2 /* 1 */ },
  { 0, 9553 /* trtt */, MCK_GR128, 1 /* 0 */ },
  { 0, 9553 /* trtt */, MCK_GR64, 2 /* 1 */ },
  { 0, 9558 /* ts */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 9561 /* tsch */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 9566 /* unpk */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { 0, 9571 /* unpka */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 9571 /* unpka */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 9577 /* unpku */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 9577 /* unpku */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { Feature_FeatureVector, 9587 /* va */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9590 /* vab */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9594 /* vac */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9598 /* vacc */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9603 /* vaccb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9609 /* vaccc */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9615 /* vacccq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9622 /* vaccf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9628 /* vaccg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9634 /* vacch */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9640 /* vaccq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9646 /* vacq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9651 /* vaf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9655 /* vag */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9659 /* vah */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorPackedDecimal, 9663 /* vap */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9667 /* vaq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9671 /* vavg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9676 /* vavgb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9682 /* vavgf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9688 /* vavgg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9694 /* vavgh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9700 /* vavgl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9706 /* vavglb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9713 /* vavglf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9720 /* vavglg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9727 /* vavglh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 9734 /* vbperm */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9741 /* vcdg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9746 /* vcdgb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9752 /* vcdlg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9758 /* vcdlgb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9765 /* vceq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9770 /* vceqb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9776 /* vceqbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9783 /* vceqf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9789 /* vceqfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9796 /* vceqg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9802 /* vceqgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9809 /* vceqh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9815 /* vceqhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9822 /* vcgd */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9827 /* vcgdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9833 /* vch */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9837 /* vchb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9842 /* vchbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9848 /* vchf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9853 /* vchfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9859 /* vchg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9864 /* vchgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9870 /* vchh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9875 /* vchhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9881 /* vchl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9886 /* vchlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9892 /* vchlbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9899 /* vchlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9905 /* vchlfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9912 /* vchlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9918 /* vchlgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9925 /* vchlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9931 /* vchlhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9938 /* vcksm */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9944 /* vclgd */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9950 /* vclgdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9957 /* vclz */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9962 /* vclzb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9968 /* vclzf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9974 /* vclzg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9980 /* vclzh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorPackedDecimal, 9986 /* vcp */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9990 /* vctz */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9995 /* vctzb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10001 /* vctzf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10007 /* vctzg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10013 /* vctzh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorPackedDecimal, 10019 /* vcvb */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureVectorPackedDecimal, 10019 /* vcvb */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVectorPackedDecimal, 10024 /* vcvbg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVectorPackedDecimal, 10024 /* vcvbg */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVectorPackedDecimal, 10030 /* vcvd */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVectorPackedDecimal, 10030 /* vcvd */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVectorPackedDecimal, 10035 /* vcvdg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureVectorPackedDecimal, 10035 /* vcvdg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVectorPackedDecimal, 10041 /* vdp */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10045 /* vec */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10049 /* vecb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10054 /* vecf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10059 /* vecg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10064 /* vech */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10069 /* vecl */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10074 /* veclb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10080 /* veclf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10086 /* veclg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10092 /* veclh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10098 /* verim */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10104 /* verimb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10111 /* verimf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10118 /* verimg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10125 /* verimh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10132 /* verll */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10132 /* verll */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10138 /* verllb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10138 /* verllb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10145 /* verllf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10145 /* verllf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10152 /* verllg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10152 /* verllg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10159 /* verllh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10159 /* verllh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10166 /* verllv */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10173 /* verllvb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10181 /* verllvf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10189 /* verllvg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10197 /* verllvh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10205 /* vesl */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10205 /* vesl */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10210 /* veslb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10210 /* veslb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10216 /* veslf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10216 /* veslf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10222 /* veslg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10222 /* veslg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10228 /* veslh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10228 /* veslh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10234 /* veslv */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10240 /* veslvb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10247 /* veslvf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10254 /* veslvg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10261 /* veslvh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10268 /* vesra */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10268 /* vesra */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10274 /* vesrab */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10274 /* vesrab */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10281 /* vesraf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10281 /* vesraf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10288 /* vesrag */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10288 /* vesrag */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10295 /* vesrah */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10295 /* vesrah */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10302 /* vesrav */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10309 /* vesravb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10317 /* vesravf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10325 /* vesravg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10333 /* vesravh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10341 /* vesrl */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10341 /* vesrl */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10347 /* vesrlb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10347 /* vesrlb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10354 /* vesrlf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10354 /* vesrlf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10361 /* vesrlg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10361 /* vesrlg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10368 /* vesrlh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10368 /* vesrlh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10375 /* vesrlv */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10382 /* vesrlvb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10390 /* vesrlvf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10398 /* vesrlvg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10406 /* vesrlvh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10414 /* vfa */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10418 /* vfadb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10424 /* vfae */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10424 /* vfae */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10429 /* vfaeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10429 /* vfaeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10435 /* vfaebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10435 /* vfaebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10442 /* vfaef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10442 /* vfaef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10448 /* vfaefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10448 /* vfaefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10455 /* vfaeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10455 /* vfaeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10461 /* vfaehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10461 /* vfaehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10468 /* vfaezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10468 /* vfaezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10475 /* vfaezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10475 /* vfaezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10483 /* vfaezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10483 /* vfaezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10490 /* vfaezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10490 /* vfaezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10498 /* vfaezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10498 /* vfaezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10505 /* vfaezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10505 /* vfaezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10513 /* vfasb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10519 /* vfce */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10524 /* vfcedb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10531 /* vfcedbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10539 /* vfcesb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10546 /* vfcesbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10554 /* vfch */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10559 /* vfchdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10566 /* vfchdbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10574 /* vfche */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10580 /* vfchedb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10588 /* vfchedbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10597 /* vfchesb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10605 /* vfchesbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10614 /* vfchsb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10621 /* vfchsbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10629 /* vfd */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10633 /* vfddb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10639 /* vfdsb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10645 /* vfee */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10645 /* vfee */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10650 /* vfeeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10650 /* vfeeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10656 /* vfeebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10663 /* vfeef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10663 /* vfeef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10669 /* vfeefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10676 /* vfeeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10676 /* vfeeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10682 /* vfeehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10689 /* vfeezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10696 /* vfeezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10704 /* vfeezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10711 /* vfeezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10719 /* vfeezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10726 /* vfeezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10734 /* vfene */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10734 /* vfene */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10740 /* vfeneb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10740 /* vfeneb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10747 /* vfenebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10755 /* vfenef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10755 /* vfenef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10762 /* vfenefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10770 /* vfeneh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10770 /* vfeneh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10777 /* vfenehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10785 /* vfenezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10793 /* vfenezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10802 /* vfenezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10810 /* vfenezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10819 /* vfenezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10827 /* vfenezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10836 /* vfi */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10840 /* vfidb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 10846 /* vfisb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 10852 /* vfkedb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10859 /* vfkedbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10867 /* vfkesb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10874 /* vfkesbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10882 /* vfkhdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10889 /* vfkhdbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10897 /* vfkhedb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10905 /* vfkhedbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10914 /* vfkhesb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10922 /* vfkhesbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10931 /* vfkhsb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 10938 /* vfkhsbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10946 /* vflcdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 10953 /* vflcsb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 10960 /* vfll */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 10965 /* vflls */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10971 /* vflndb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 10978 /* vflnsb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10985 /* vflpdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 10992 /* vflpsb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 10999 /* vflr */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 11004 /* vflrd */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11010 /* vfm */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11014 /* vfma */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11019 /* vfmadb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 11026 /* vfmasb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 11033 /* vfmax */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 11039 /* vfmaxdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 11047 /* vfmaxsb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11055 /* vfmdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 11061 /* vfmin */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 11067 /* vfmindb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 11075 /* vfminsb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11083 /* vfms */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 11088 /* vfmsb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11094 /* vfmsdb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 11101 /* vfmssb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 11108 /* vfnma */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 11114 /* vfnmadb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 11122 /* vfnmasb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 11130 /* vfnms */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 11136 /* vfnmsdb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 11144 /* vfnmssb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11152 /* vfpso */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11158 /* vfpsodb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 11166 /* vfpsosb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11174 /* vfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11178 /* vfsdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11184 /* vfsq */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11189 /* vfsqdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 11196 /* vfsqsb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 11203 /* vfssb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11209 /* vftci */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11215 /* vftcidb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 11223 /* vftcisb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11231 /* vgbm */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11236 /* vgef */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11236 /* vgef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11241 /* vgeg */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11241 /* vgeg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11246 /* vgfm */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11251 /* vgfma */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11257 /* vgfmab */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11264 /* vgfmaf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11271 /* vgfmag */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11278 /* vgfmah */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11285 /* vgfmb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11291 /* vgfmf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11297 /* vgfmg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11303 /* vgfmh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11309 /* vgm */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11313 /* vgmb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11318 /* vgmf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11323 /* vgmg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11328 /* vgmh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11333 /* vistr */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11333 /* vistr */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11339 /* vistrb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11339 /* vistrb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11346 /* vistrbs */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11354 /* vistrf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11354 /* vistrf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11361 /* vistrfs */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11369 /* vistrh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11369 /* vistrh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11376 /* vistrhs */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11384 /* vl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11384 /* vl */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11387 /* vlbb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11387 /* vlbb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11392 /* vlc */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11396 /* vlcb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11401 /* vlcf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11406 /* vlcg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11411 /* vlch */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11416 /* vlde */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11421 /* vldeb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11427 /* vleb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11427 /* vleb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11432 /* vled */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11437 /* vledb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11443 /* vlef */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11443 /* vlef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11448 /* vleg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11448 /* vleg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11453 /* vleh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11453 /* vleh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11458 /* vleib */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11464 /* vleif */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11470 /* vleig */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11476 /* vleih */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11482 /* vlgv */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 11482 /* vlgv */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 11482 /* vlgv */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 11487 /* vlgvb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 11487 /* vlgvb */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 11487 /* vlgvb */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 11493 /* vlgvf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 11493 /* vlgvf */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 11493 /* vlgvf */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 11499 /* vlgvg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 11499 /* vlgvg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 11499 /* vlgvg */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 11505 /* vlgvh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 11505 /* vlgvh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 11505 /* vlgvh */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVectorPackedDecimal, 11511 /* vlip */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11516 /* vll */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 11516 /* vll */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 11516 /* vll */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11520 /* vllez */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11520 /* vllez */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11526 /* vllezb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11526 /* vllezb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11533 /* vllezf */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11533 /* vllezf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11540 /* vllezg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11540 /* vllezg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11547 /* vllezh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11547 /* vllezh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVectorEnhancements1, 11554 /* vllezlf */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVectorEnhancements1, 11554 /* vllezlf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11562 /* vlm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 11562 /* vlm */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11566 /* vlp */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11570 /* vlpb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11575 /* vlpf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11580 /* vlpg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11585 /* vlph */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11590 /* vlr */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11594 /* vlrep */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11594 /* vlrep */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11600 /* vlrepb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11600 /* vlrepb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11607 /* vlrepf */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11607 /* vlrepf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11614 /* vlrepg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11614 /* vlrepg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11621 /* vlreph */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11621 /* vlreph */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVectorPackedDecimal, 11628 /* vlrl */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVectorPackedDecimal, 11628 /* vlrl */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVectorPackedDecimal, 11633 /* vlrlr */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVectorPackedDecimal, 11633 /* vlrlr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVectorPackedDecimal, 11633 /* vlrlr */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11639 /* vlvg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 11639 /* vlvg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureVector, 11639 /* vlvg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11644 /* vlvgb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 11644 /* vlvgb */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 11644 /* vlvgb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11650 /* vlvgf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 11650 /* vlvgf */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 11650 /* vlvgf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11656 /* vlvgg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 11656 /* vlvgg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureVector, 11656 /* vlvgg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11662 /* vlvgh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 11662 /* vlvgh */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 11662 /* vlvgh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11668 /* vlvgp */, MCK_GR64, 6 /* 1, 2 */ },
  { Feature_FeatureVector, 11668 /* vlvgp */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11674 /* vmae */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11679 /* vmaeb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11685 /* vmaef */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11691 /* vmaeh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11697 /* vmah */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11702 /* vmahb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11708 /* vmahf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11714 /* vmahh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11720 /* vmal */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11725 /* vmalb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11731 /* vmale */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11737 /* vmaleb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11744 /* vmalef */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11751 /* vmaleh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11758 /* vmalf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11764 /* vmalh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11770 /* vmalhb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11777 /* vmalhf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11784 /* vmalhh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11791 /* vmalhw */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11798 /* vmalo */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11804 /* vmalob */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11811 /* vmalof */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11818 /* vmaloh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11825 /* vmao */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11830 /* vmaob */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11836 /* vmaof */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11842 /* vmaoh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11848 /* vme */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11852 /* vmeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11857 /* vmef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11862 /* vmeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11867 /* vmh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11871 /* vmhb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11876 /* vmhf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11881 /* vmhh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11886 /* vml */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11890 /* vmlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11895 /* vmle */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11900 /* vmleb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11906 /* vmlef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11912 /* vmleh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11918 /* vmlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11923 /* vmlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11928 /* vmlhb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11934 /* vmlhf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11940 /* vmlhh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11946 /* vmlhw */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11952 /* vmlo */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11957 /* vmlob */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11963 /* vmlof */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11969 /* vmloh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11975 /* vmn */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11979 /* vmnb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11984 /* vmnf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11989 /* vmng */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11994 /* vmnh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11999 /* vmnl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12004 /* vmnlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12010 /* vmnlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12016 /* vmnlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12022 /* vmnlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12028 /* vmo */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12032 /* vmob */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12037 /* vmof */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12042 /* vmoh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorPackedDecimal, 12047 /* vmp */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12051 /* vmrh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12056 /* vmrhb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12062 /* vmrhf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12068 /* vmrhg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12074 /* vmrhh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12080 /* vmrl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12085 /* vmrlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12091 /* vmrlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12097 /* vmrlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12103 /* vmrlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 12109 /* vmsl */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 12114 /* vmslg */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorPackedDecimal, 12120 /* vmsp */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12125 /* vmx */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12129 /* vmxb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12134 /* vmxf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12139 /* vmxg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12144 /* vmxh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12149 /* vmxl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12154 /* vmxlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12160 /* vmxlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12166 /* vmxlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12172 /* vmxlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12178 /* vn */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12181 /* vnc */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 12185 /* vnn */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12189 /* vno */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12193 /* vnot */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 12198 /* vnx */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12202 /* vo */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 12205 /* voc */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12209 /* vone */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12214 /* vpdi */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12219 /* vperm */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12225 /* vpk */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12229 /* vpkf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12234 /* vpkg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12239 /* vpkh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12244 /* vpkls */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12250 /* vpklsf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12257 /* vpklsfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12265 /* vpklsg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12272 /* vpklsgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12280 /* vpklsh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12287 /* vpklshs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12295 /* vpks */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12300 /* vpksf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12306 /* vpksfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12313 /* vpksg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12319 /* vpksgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12326 /* vpksh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12332 /* vpkshs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorPackedDecimal, 12339 /* vpkz */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVectorPackedDecimal, 12339 /* vpkz */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12344 /* vpopct */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 12351 /* vpopctb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 12359 /* vpopctf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 12367 /* vpopctg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 12375 /* vpopcth */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorPackedDecimal, 12383 /* vpsop */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12389 /* vrep */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12394 /* vrepb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12400 /* vrepf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12406 /* vrepg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12412 /* vreph */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12418 /* vrepi */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12424 /* vrepib */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12431 /* vrepif */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12438 /* vrepig */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12445 /* vrepih */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVectorPackedDecimal, 12452 /* vrp */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12456 /* vs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12459 /* vsb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12463 /* vsbcbi */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12470 /* vsbcbiq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12478 /* vsbi */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12483 /* vsbiq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12489 /* vscbi */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12495 /* vscbib */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12502 /* vscbif */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12509 /* vscbig */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12516 /* vscbih */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12523 /* vscbiq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12530 /* vscef */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 12530 /* vscef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12536 /* vsceg */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 12536 /* vsceg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVectorPackedDecimal, 12542 /* vsdp */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12547 /* vseg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12552 /* vsegb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12558 /* vsegf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12564 /* vsegh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12570 /* vsel */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12575 /* vsf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12579 /* vsg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12583 /* vsh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12587 /* vsl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12591 /* vslb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12596 /* vsldb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorPackedDecimal, 12602 /* vsp */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12606 /* vsq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12610 /* vsra */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12615 /* vsrab */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12621 /* vsrl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12626 /* vsrlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorPackedDecimal, 12632 /* vsrp */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12637 /* vst */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 12637 /* vst */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12641 /* vsteb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 12641 /* vsteb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12647 /* vstef */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 12647 /* vstef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12653 /* vsteg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 12653 /* vsteg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12659 /* vsteh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 12659 /* vsteh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12665 /* vstl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 12665 /* vstl */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 12665 /* vstl */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12670 /* vstm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 12670 /* vstm */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12675 /* vstrc */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12675 /* vstrc */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12681 /* vstrcb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12681 /* vstrcb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12688 /* vstrcbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12688 /* vstrcbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12696 /* vstrcf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12696 /* vstrcf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12703 /* vstrcfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12703 /* vstrcfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12711 /* vstrch */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12711 /* vstrch */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12718 /* vstrchs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12718 /* vstrchs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12726 /* vstrczb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12726 /* vstrczb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12734 /* vstrczbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12734 /* vstrczbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12743 /* vstrczf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12743 /* vstrczf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12751 /* vstrczfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12751 /* vstrczfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12760 /* vstrczh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12760 /* vstrczh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12768 /* vstrczhs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 12768 /* vstrczhs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorPackedDecimal, 12777 /* vstrl */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVectorPackedDecimal, 12777 /* vstrl */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVectorPackedDecimal, 12783 /* vstrlr */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVectorPackedDecimal, 12783 /* vstrlr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVectorPackedDecimal, 12783 /* vstrlr */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12790 /* vsum */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12795 /* vsumb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12801 /* vsumg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12807 /* vsumgf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12814 /* vsumgh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12821 /* vsumh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12827 /* vsumq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12833 /* vsumqf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12840 /* vsumqg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12847 /* vtm */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorPackedDecimal, 12851 /* vtp */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12855 /* vuph */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12860 /* vuphb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12866 /* vuphf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12872 /* vuphh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorPackedDecimal, 12878 /* vupkz */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVectorPackedDecimal, 12878 /* vupkz */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12884 /* vupl */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12889 /* vuplb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12895 /* vuplf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12901 /* vuplh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12907 /* vuplhb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12914 /* vuplhf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12921 /* vuplhh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12928 /* vuplhw */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12935 /* vupll */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12941 /* vupllb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12948 /* vupllf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12955 /* vupllh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12962 /* vx */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 12965 /* vzero */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 12971 /* wcdgb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12977 /* wcdlgb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12984 /* wcgdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12990 /* wclgdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 12997 /* wfadb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13003 /* wfasb */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13009 /* wfaxb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 13015 /* wfc */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 13019 /* wfcdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 13025 /* wfcedb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 13032 /* wfcedbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13040 /* wfcesb */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13047 /* wfcesbs */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13055 /* wfcexb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13062 /* wfcexbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 13070 /* wfchdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 13077 /* wfchdbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 13085 /* wfchedb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 13093 /* wfchedbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13102 /* wfchesb */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13110 /* wfchesbs */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13119 /* wfchexb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13127 /* wfchexbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13136 /* wfchsb */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13143 /* wfchsbs */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13151 /* wfchxb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13158 /* wfchxbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13166 /* wfcsb */, MCK_VR32, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13172 /* wfcxb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 13178 /* wfddb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13184 /* wfdsb */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13190 /* wfdxb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 13196 /* wfidb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13202 /* wfisb */, MCK_VR32, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13208 /* wfixb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 13214 /* wfk */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 13218 /* wfkdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13224 /* wfkedb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13231 /* wfkedbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13239 /* wfkesb */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13246 /* wfkesbs */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13254 /* wfkexb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13261 /* wfkexbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13269 /* wfkhdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13276 /* wfkhdbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13284 /* wfkhedb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13292 /* wfkhedbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13301 /* wfkhesb */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13309 /* wfkhesbs */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13318 /* wfkhexb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13326 /* wfkhexbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13335 /* wfkhsb */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13342 /* wfkhsbs */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13350 /* wfkhxb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13357 /* wfkhxbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13365 /* wfksb */, MCK_VR32, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13371 /* wfkxb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 13377 /* wflcdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13384 /* wflcsb */, MCK_VR32, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13391 /* wflcxb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13398 /* wflld */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVectorEnhancements1, 13398 /* wflld */, MCK_VR64, 2 /* 1 */ },
  { Feature_FeatureVectorEnhancements1, 13404 /* wflls */, MCK_VR32, 2 /* 1 */ },
  { Feature_FeatureVectorEnhancements1, 13404 /* wflls */, MCK_VR64, 1 /* 0 */ },
  { Feature_FeatureVector, 13410 /* wflndb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13417 /* wflnsb */, MCK_VR32, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13424 /* wflnxb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 13431 /* wflpdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13438 /* wflpsb */, MCK_VR32, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13445 /* wflpxb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13452 /* wflrd */, MCK_VR32, 1 /* 0 */ },
  { Feature_FeatureVectorEnhancements1, 13452 /* wflrd */, MCK_VR64, 2 /* 1 */ },
  { Feature_FeatureVectorEnhancements1, 13458 /* wflrx */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVectorEnhancements1, 13458 /* wflrx */, MCK_VR64, 1 /* 0 */ },
  { Feature_FeatureVector, 13464 /* wfmadb */, MCK_VR64, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 13471 /* wfmasb */, MCK_VR32, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 13478 /* wfmaxb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 13485 /* wfmaxdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13493 /* wfmaxsb */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13501 /* wfmaxxb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 13509 /* wfmdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13515 /* wfmindb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13523 /* wfminsb */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13531 /* wfminxb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13539 /* wfmsb */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 13545 /* wfmsdb */, MCK_VR64, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 13552 /* wfmssb */, MCK_VR32, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 13559 /* wfmsxb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 13566 /* wfmxb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13572 /* wfnmadb */, MCK_VR64, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 13580 /* wfnmasb */, MCK_VR32, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 13588 /* wfnmaxb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 13596 /* wfnmsdb */, MCK_VR64, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 13604 /* wfnmssb */, MCK_VR32, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVectorEnhancements1, 13612 /* wfnmsxb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 13620 /* wfpsodb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13628 /* wfpsosb */, MCK_VR32, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13636 /* wfpsoxb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 13644 /* wfsdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 13650 /* wfsqdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13657 /* wfsqsb */, MCK_VR32, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13664 /* wfsqxb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13671 /* wfssb */, MCK_VR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVectorEnhancements1, 13677 /* wfsxb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 13683 /* wftcidb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13691 /* wftcisb */, MCK_VR32, 3 /* 0, 1 */ },
  { Feature_FeatureVectorEnhancements1, 13699 /* wftcixb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 13707 /* wldeb */, MCK_VR32, 2 /* 1 */ },
  { Feature_FeatureVector, 13707 /* wldeb */, MCK_VR64, 1 /* 0 */ },
  { Feature_FeatureVector, 13713 /* wledb */, MCK_VR32, 1 /* 0 */ },
  { Feature_FeatureVector, 13713 /* wledb */, MCK_VR64, 2 /* 1 */ },
  { 0, 13719 /* x */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 13719 /* x */, MCK_GR32, 1 /* 0 */ },
  { 0, 13721 /* xc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 13721 /* xc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 13724 /* xg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 13724 /* xg */, MCK_GR64, 1 /* 0 */ },
  { 0, 13727 /* xgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 13731 /* xgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 13736 /* xi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 13739 /* xihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 13744 /* xilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 13749 /* xiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 13753 /* xr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 13756 /* xrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 13765 /* xy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 13765 /* xy */, MCK_GR32, 1 /* 0 */ },
  { 0, 13768 /* zap */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
};

OperandMatchResultTy SystemZAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ADDR128:
    return parseADDR128(Operands);
  case MCK_ADDR32:
    return parseADDR32(Operands);
  case MCK_ADDR64:
    return parseADDR64(Operands);
  case MCK_AR32:
    return parseAR32(Operands);
  case MCK_AnyReg:
    return parseAnyReg(Operands);
  case MCK_BDAddr32Disp12:
    return parseBDAddr32(Operands);
  case MCK_BDAddr32Disp20:
    return parseBDAddr32(Operands);
  case MCK_BDAddr64Disp12:
    return parseBDAddr64(Operands);
  case MCK_BDAddr64Disp20:
    return parseBDAddr64(Operands);
  case MCK_BDLAddr64Disp12Len4:
    return parseBDLAddr64(Operands);
  case MCK_BDLAddr64Disp12Len8:
    return parseBDLAddr64(Operands);
  case MCK_BDRAddr64Disp12:
    return parseBDRAddr64(Operands);
  case MCK_BDVAddr64Disp12:
    return parseBDVAddr64(Operands);
  case MCK_BDXAddr64Disp12:
    return parseBDXAddr64(Operands);
  case MCK_BDXAddr64Disp20:
    return parseBDXAddr64(Operands);
  case MCK_CR64:
    return parseCR64(Operands);
  case MCK_FP128:
    return parseFP128(Operands);
  case MCK_FP32:
    return parseFP32(Operands);
  case MCK_FP64:
    return parseFP64(Operands);
  case MCK_GR128:
    return parseGR128(Operands);
  case MCK_GR32:
    return parseGR32(Operands);
  case MCK_GR64:
    return parseGR64(Operands);
  case MCK_GRH32:
    return parseGRH32(Operands);
  case MCK_GRX32:
    return parseGRX32(Operands);
  case MCK_PCRel12:
    return parsePCRel12(Operands);
  case MCK_PCRel16:
    return parsePCRel16(Operands);
  case MCK_PCRel24:
    return parsePCRel24(Operands);
  case MCK_PCRel32:
    return parsePCRel32(Operands);
  case MCK_PCRelTLS16:
    return parsePCRelTLS16(Operands);
  case MCK_PCRelTLS32:
    return parsePCRelTLS32(Operands);
  case MCK_VF128:
    return parseVF128(Operands);
  case MCK_VR128:
    return parseVR128(Operands);
  case MCK_VR32:
    return parseVR32(Operands);
  case MCK_VR64:
    return parseVR64(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

OperandMatchResultTy SystemZAsmParser::
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

static std::string SystemZMnemonicSpellCheck(StringRef S, uint64_t FBS, unsigned VariantID) {
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

