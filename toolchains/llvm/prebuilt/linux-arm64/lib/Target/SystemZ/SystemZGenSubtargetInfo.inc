/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM

namespace llvm {
namespace SystemZ {
enum {
  FeatureDFPPackedConversion = 0,
  FeatureDFPZonedConversion = 1,
  FeatureDistinctOps = 2,
  FeatureEnhancedDAT2 = 3,
  FeatureExecutionHint = 4,
  FeatureFPExtension = 5,
  FeatureFastSerialization = 6,
  FeatureGuardedStorage = 7,
  FeatureHighWord = 8,
  FeatureInsertReferenceBitsMultiple = 9,
  FeatureInterlockedAccess1 = 10,
  FeatureLoadAndTrap = 11,
  FeatureLoadAndZeroRightmostByte = 12,
  FeatureLoadStoreOnCond = 13,
  FeatureLoadStoreOnCond2 = 14,
  FeatureMessageSecurityAssist3 = 15,
  FeatureMessageSecurityAssist4 = 16,
  FeatureMessageSecurityAssist5 = 17,
  FeatureMessageSecurityAssist7 = 18,
  FeatureMessageSecurityAssist8 = 19,
  FeatureMiscellaneousExtensions = 20,
  FeatureMiscellaneousExtensions2 = 21,
  FeaturePopulationCount = 22,
  FeatureProcessorAssist = 23,
  FeatureResetReferenceBitsMultiple = 24,
  FeatureTransactionalExecution = 25,
  FeatureVector = 26,
  FeatureVectorEnhancements1 = 27,
  FeatureVectorPackedDecimal = 28,
};
} // end namespace SystemZ
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV SystemZFeatureKV[] = {
  { "dfp-packed-conversion", "Assume that the DFP packed-conversion facility is installed", { SystemZ::FeatureDFPPackedConversion }, { } },
  { "dfp-zoned-conversion", "Assume that the DFP zoned-conversion facility is installed", { SystemZ::FeatureDFPZonedConversion }, { } },
  { "distinct-ops", "Assume that the distinct-operands facility is installed", { SystemZ::FeatureDistinctOps }, { } },
  { "enhanced-dat-2", "Assume that the enhanced-DAT facility 2 is installed", { SystemZ::FeatureEnhancedDAT2 }, { } },
  { "execution-hint", "Assume that the execution-hint facility is installed", { SystemZ::FeatureExecutionHint }, { } },
  { "fast-serialization", "Assume that the fast-serialization facility is installed", { SystemZ::FeatureFastSerialization }, { } },
  { "fp-extension", "Assume that the floating-point extension facility is installed", { SystemZ::FeatureFPExtension }, { } },
  { "guarded-storage", "Assume that the guarded-storage facility is installed", { SystemZ::FeatureGuardedStorage }, { } },
  { "high-word", "Assume that the high-word facility is installed", { SystemZ::FeatureHighWord }, { } },
  { "insert-reference-bits-multiple", "Assume that the insert-reference-bits-multiple facility is installed", { SystemZ::FeatureInsertReferenceBitsMultiple }, { } },
  { "interlocked-access1", "Assume that interlocked-access facility 1 is installed", { SystemZ::FeatureInterlockedAccess1 }, { } },
  { "load-and-trap", "Assume that the load-and-trap facility is installed", { SystemZ::FeatureLoadAndTrap }, { } },
  { "load-and-zero-rightmost-byte", "Assume that the load-and-zero-rightmost-byte facility is installed", { SystemZ::FeatureLoadAndZeroRightmostByte }, { } },
  { "load-store-on-cond", "Assume that the load/store-on-condition facility is installed", { SystemZ::FeatureLoadStoreOnCond }, { } },
  { "load-store-on-cond-2", "Assume that the load/store-on-condition facility 2 is installed", { SystemZ::FeatureLoadStoreOnCond2 }, { } },
  { "message-security-assist-extension3", "Assume that the message-security-assist extension facility 3 is installed", { SystemZ::FeatureMessageSecurityAssist3 }, { } },
  { "message-security-assist-extension4", "Assume that the message-security-assist extension facility 4 is installed", { SystemZ::FeatureMessageSecurityAssist4 }, { } },
  { "message-security-assist-extension5", "Assume that the message-security-assist extension facility 5 is installed", { SystemZ::FeatureMessageSecurityAssist5 }, { } },
  { "message-security-assist-extension7", "Assume that the message-security-assist extension facility 7 is installed", { SystemZ::FeatureMessageSecurityAssist7 }, { } },
  { "message-security-assist-extension8", "Assume that the message-security-assist extension facility 8 is installed", { SystemZ::FeatureMessageSecurityAssist8 }, { } },
  { "miscellaneous-extensions", "Assume that the miscellaneous-extensions facility is installed", { SystemZ::FeatureMiscellaneousExtensions }, { } },
  { "miscellaneous-extensions-2", "Assume that the miscellaneous-extensions facility 2 is installed", { SystemZ::FeatureMiscellaneousExtensions2 }, { } },
  { "population-count", "Assume that the population-count facility is installed", { SystemZ::FeaturePopulationCount }, { } },
  { "processor-assist", "Assume that the processor-assist facility is installed", { SystemZ::FeatureProcessorAssist }, { } },
  { "reset-reference-bits-multiple", "Assume that the reset-reference-bits-multiple facility is installed", { SystemZ::FeatureResetReferenceBitsMultiple }, { } },
  { "transactional-execution", "Assume that the transactional-execution facility is installed", { SystemZ::FeatureTransactionalExecution }, { } },
  { "vector", "Assume that the vectory facility is installed", { SystemZ::FeatureVector }, { } },
  { "vector-enhancements-1", "Assume that the vector enhancements facility 1 is installed", { SystemZ::FeatureVectorEnhancements1 }, { } },
  { "vector-packed-decimal", "Assume that the vector packed decimal facility is installed", { SystemZ::FeatureVectorPackedDecimal }, { } },
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV SystemZSubTypeKV[] = {
  { "arch10", "Select the arch10 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureMessageSecurityAssist3, SystemZ::FeatureMessageSecurityAssist4, SystemZ::FeatureResetReferenceBitsMultiple, SystemZ::FeatureExecutionHint, SystemZ::FeatureLoadAndTrap, SystemZ::FeatureMiscellaneousExtensions, SystemZ::FeatureProcessorAssist, SystemZ::FeatureTransactionalExecution, SystemZ::FeatureDFPZonedConversion, SystemZ::FeatureEnhancedDAT2 }, { } },
  { "arch11", "Select the arch11 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureMessageSecurityAssist3, SystemZ::FeatureMessageSecurityAssist4, SystemZ::FeatureResetReferenceBitsMultiple, SystemZ::FeatureExecutionHint, SystemZ::FeatureLoadAndTrap, SystemZ::FeatureMiscellaneousExtensions, SystemZ::FeatureProcessorAssist, SystemZ::FeatureTransactionalExecution, SystemZ::FeatureDFPZonedConversion, SystemZ::FeatureEnhancedDAT2, SystemZ::FeatureLoadAndZeroRightmostByte, SystemZ::FeatureLoadStoreOnCond2, SystemZ::FeatureMessageSecurityAssist5, SystemZ::FeatureDFPPackedConversion, SystemZ::FeatureVector }, { } },
  { "arch12", "Select the arch12 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureMessageSecurityAssist3, SystemZ::FeatureMessageSecurityAssist4, SystemZ::FeatureResetReferenceBitsMultiple, SystemZ::FeatureExecutionHint, SystemZ::FeatureLoadAndTrap, SystemZ::FeatureMiscellaneousExtensions, SystemZ::FeatureProcessorAssist, SystemZ::FeatureTransactionalExecution, SystemZ::FeatureDFPZonedConversion, SystemZ::FeatureEnhancedDAT2, SystemZ::FeatureLoadAndZeroRightmostByte, SystemZ::FeatureLoadStoreOnCond2, SystemZ::FeatureMessageSecurityAssist5, SystemZ::FeatureDFPPackedConversion, SystemZ::FeatureVector, SystemZ::FeatureMiscellaneousExtensions2, SystemZ::FeatureGuardedStorage, SystemZ::FeatureMessageSecurityAssist7, SystemZ::FeatureMessageSecurityAssist8, SystemZ::FeatureVectorEnhancements1, SystemZ::FeatureVectorPackedDecimal, SystemZ::FeatureInsertReferenceBitsMultiple }, { } },
  { "arch8", "Select the arch8 processor", { }, { } },
  { "arch9", "Select the arch9 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureMessageSecurityAssist3, SystemZ::FeatureMessageSecurityAssist4, SystemZ::FeatureResetReferenceBitsMultiple }, { } },
  { "generic", "Select the generic processor", { }, { } },
  { "z10", "Select the z10 processor", { }, { } },
  { "z13", "Select the z13 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureMessageSecurityAssist3, SystemZ::FeatureMessageSecurityAssist4, SystemZ::FeatureResetReferenceBitsMultiple, SystemZ::FeatureExecutionHint, SystemZ::FeatureLoadAndTrap, SystemZ::FeatureMiscellaneousExtensions, SystemZ::FeatureProcessorAssist, SystemZ::FeatureTransactionalExecution, SystemZ::FeatureDFPZonedConversion, SystemZ::FeatureEnhancedDAT2, SystemZ::FeatureLoadAndZeroRightmostByte, SystemZ::FeatureLoadStoreOnCond2, SystemZ::FeatureMessageSecurityAssist5, SystemZ::FeatureDFPPackedConversion, SystemZ::FeatureVector }, { } },
  { "z14", "Select the z14 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureMessageSecurityAssist3, SystemZ::FeatureMessageSecurityAssist4, SystemZ::FeatureResetReferenceBitsMultiple, SystemZ::FeatureExecutionHint, SystemZ::FeatureLoadAndTrap, SystemZ::FeatureMiscellaneousExtensions, SystemZ::FeatureProcessorAssist, SystemZ::FeatureTransactionalExecution, SystemZ::FeatureDFPZonedConversion, SystemZ::FeatureEnhancedDAT2, SystemZ::FeatureLoadAndZeroRightmostByte, SystemZ::FeatureLoadStoreOnCond2, SystemZ::FeatureMessageSecurityAssist5, SystemZ::FeatureDFPPackedConversion, SystemZ::FeatureVector, SystemZ::FeatureMiscellaneousExtensions2, SystemZ::FeatureGuardedStorage, SystemZ::FeatureMessageSecurityAssist7, SystemZ::FeatureMessageSecurityAssist8, SystemZ::FeatureVectorEnhancements1, SystemZ::FeatureVectorPackedDecimal, SystemZ::FeatureInsertReferenceBitsMultiple }, { } },
  { "z196", "Select the z196 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureMessageSecurityAssist3, SystemZ::FeatureMessageSecurityAssist4, SystemZ::FeatureResetReferenceBitsMultiple }, { } },
  { "zEC12", "Select the zEC12 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureMessageSecurityAssist3, SystemZ::FeatureMessageSecurityAssist4, SystemZ::FeatureResetReferenceBitsMultiple, SystemZ::FeatureExecutionHint, SystemZ::FeatureLoadAndTrap, SystemZ::FeatureMiscellaneousExtensions, SystemZ::FeatureProcessorAssist, SystemZ::FeatureTransactionalExecution, SystemZ::FeatureDFPZonedConversion, SystemZ::FeatureEnhancedDAT2 }, { } },
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#if !defined(NDEBUG) || defined(LLVM_ENABLE_DUMP)
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry SystemZWriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 3,  1}, // #1
  { 5,  1}, // #2
  { 4,  1}, // #3
  { 3,  1}, // #4
  { 4,  1}, // #5
  { 3,  3}, // #6
  { 4,  1}, // #7
  { 3,  2}, // #8
  { 5,  1}, // #9
  { 3,  2}, // #10
  { 4,  1}, // #11
  { 3,  1}, // #12
  { 4,  3}, // #13
  { 4,  5}, // #14
  { 3,  3}, // #15
  { 4,  2}, // #16
  { 3,  1}, // #17
  { 4,  2}, // #18
  { 2,  4}, // #19
  { 3,  5}, // #20
  { 2,  4}, // #21
  { 3,  4}, // #22
  { 4,  1}, // #23
  { 2,  4}, // #24
  { 3,  3}, // #25
  { 4,  1}, // #26
  { 3,  5}, // #27
  { 4,  1}, // #28
  { 3,  6}, // #29
  { 4,  2}, // #30
  { 3,  2}, // #31
  { 4,  2}, // #32
  { 1,  2}, // #33
  { 3,  1}, // #34
  { 4,  2}, // #35
  { 1,  1}, // #36
  { 3,  1}, // #37
  { 4,  1}, // #38
  { 1,  4}, // #39
  { 3,  3}, // #40
  { 4,  1}, // #41
  { 1,  1}, // #42
  { 3,  2}, // #43
  { 4,  1}, // #44
  { 1,  4}, // #45
  { 3,  1}, // #46
  { 4,  2}, // #47
  { 1,  4}, // #48
  { 3,  2}, // #49
  { 4,  3}, // #50
  { 1,  4}, // #51
  { 4,  2}, // #52
  { 1,  2}, // #53
  { 4,  2}, // #54
  { 3,  5}, // #55
  { 4,  2}, // #56
  { 2,  1}, // #57
  { 2,  2}, // #58
  { 2,  1}, // #59
  { 4,  1}, // #60
  { 2,  4}, // #61
  { 4,  1}, // #62
  { 2,  1}, // #63
  { 3,  1}, // #64
  { 2,  4}, // #65
  { 3,  1}, // #66
  { 2,  2}, // #67
  { 3,  1}, // #68
  { 2,  2}, // #69
  { 4,  1}, // #70
  { 1,  2}, // #71
  { 4,  1}, // #72
  { 1,  2}, // #73
  { 3,  1}, // #74
  { 4,  1}, // #75
  { 1,  1}, // #76
  { 4,  1}, // #77
  { 1,  4}, // #78
  { 4,  1}, // #79
  { 3,  1}, // #80
  { 4,  4}, // #81
  { 3,  2}, // #82
  { 4,  4}, // #83
  { 1,  1}, // #84
  { 2,  1}, // #85
  { 1,  2}, // #86
  { 2,  2}, // #87
  { 1,  2}, // #88
  { 2,  1}, // #89
  { 2,  1}, // #90
  { 3,  3}, // #91
  { 2,  3}, // #92
  { 3,  2}, // #93
  { 2,  1}, // #94
  { 3,  2}, // #95
  { 1,  1}, // #96
  { 2,  1}, // #97
  { 3,  1}, // #98
  { 1,  3}, // #99
  { 2,  2}, // #100
  { 3,  1}, // #101
  { 1,  2}, // #102
  { 2,  4}, // #103
  { 3,  3}, // #104
  { 1,  3}, // #105
  { 3,  2}, // #106
  { 2,  1}, // #107
  { 3,  2}, // #108
  { 6,  2}, // #109
  { 2,  1}, // #110
  { 3,  1}, // #111
  { 6,  1}, // #112
  { 2,  3}, // #113
  { 3,  1}, // #114
  { 6,  4}, // #115
  { 2,  2}, // #116
  { 3,  1}, // #117
  { 6,  1}, // #118
  { 2,  1}, // #119
  { 3,  3}, // #120
  { 6,  1}, // #121
  { 2,  1}, // #122
  { 3,  3}, // #123
  { 6,  4}, // #124
  { 3,  2}, // #125
  { 6,  1}, // #126
  { 2,  5}, // #127
  { 3,  2}, // #128
  { 2,  1}, // #129
  { 6,  1}, // #130
  { 2,  1}, // #131
  { 6,  4}, // #132
  { 2,  1}, // #133
  { 6,  2}, // #134
  { 3,  1}, // #135
  { 5, 30}, // #136
  { 5, 60}, // #137
  { 3,  1}, // #138
  { 6,  2}, // #139
  { 2,  2}, // #140
  { 6,  4}, // #141
  { 3,  2}, // #142
  { 6,  4}, // #143
  { 2,  1}, // #144
  { 3,  1}, // #145
  { 6,  2}, // #146
  { 1,  2}, // #147
  { 2,  1}, // #148
  { 3,  1}, // #149
  { 1,  2}, // #150
  { 2,  1}, // #151
  { 3,  3}, // #152
  { 1,  2}, // #153
  { 2,  2}, // #154
  { 3,  4} // #155
}; // SystemZWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry SystemZWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 1,  0}, // #1 FXU_VBU_LSU_lat1_FXa_FXb_VecDFX
  { 4,  0}, // #2 LSU_Lat4_VecStr
  { 4,  0}, // #3 Lat4_LSU
  { 1,  0}, // #4 FXU_LSU_lat1_EndGroup_GroupAlone_FXa_FXb_BeginGroup
  { 1,  0}, // #5 EndGroup_GroupAlone_FXU
  { 1,  0}, // #6 FXU_FXb_FXa
  { 4,  0}, // #7 LSU_VecStr
  { 5,  0}, // #8 Lat5_VecMul
  { 1,  0}, // #9 GroupAlone_EndGroup
  { 1,  0}, // #10 FXU
  { 1,  0}, // #11 FXU
  { 1,  0}, // #12 FXU_FXb
  { 4,  0}, // #13 LSU
  { 7,  0}, // #14 Lat7
  { 1,  0}, // #15 GroupAlone
  { 1,  0}, // #16 VBU_FXa
  { 1,  0}, // #17 FXU_FXa
  { 1,  0}, // #18 FXU_FXa_FXb
  { 3,  0}, // #19 Lat3_VecXsPm
  { 1,  0}, // #20 GroupAlone_EndGroup_BeginGroup
  { 1,  0}, // #21 FXU_FXa_FXb
  { 1,  0}, // #22 FXU_FXa_FXb
  { 4,  0}, // #23 LSU
  { 6,  0}, // #24 Lat6
  { 1,  0}, // #25 GroupAlone_BeginGroup_EndGroup
  { 4,  0}, // #26 LSU
  { 4,  0}, // #27 LSU
  { 4,  0}, // #28 LSU
  { 1,  0}, // #29 FXU_FXa_FXb
  { 8,  0}, // #30 Lat8_FPU_VecDF_VecBF
  { 1,  0}, // #31 GroupAlone_FXU_FXa_FXb
  { 4,  0}, // #32 LSU
  {30,  0}, // #33 Lat30_VecFPd
  { 1,  0}, // #34 GroupAlone_EndGroup
  { 4,  0}, // #35 LSU
  { 4,  0}, // #36 LSU
  { 4,  0}, // #37 LSU
  { 4,  0}, // #38 LSU
  { 4,  0}, // #39 LSU
  {10,  0}, // #40 Lat10
  { 1,  0}, // #41 GroupAlone
  { 4,  0}, // #42 LSU
  { 4,  0}, // #43 LSU
  { 1,  0}, // #44 FXU_FXb
  { 1,  0}, // #45 FXU_FXb
  { 1,  0}, // #46 FXU_FXb
  {10,  0}, // #47 Lat10
  { 1,  0}, // #48 GroupAlone_FXU_FXb_FXa
  { 1,  0}, // #49 FXU_FXa_FXb
  { 2,  0}, // #50 Lat2
  { 1,  0}, // #51 FXU_GroupAlone_BeginGroup_EndGroup
  { 1,  0}, // #52 FXU
  { 2,  0}, // #53 Lat2
  { 1,  0}, // #54 GroupAlone
  { 4,  0}, // #55 LSU
  { 4,  0}, // #56 LSU
  { 1,  0}, // #57 FXU_FXb
  { 9,  0}, // #58 Lat9_VecDF2_VecBF2
  { 1,  0}, // #59 GroupAlone_BeginGroup
  { 1,  0}, // #60 FXU_FXa
  { 4,  0}, // #61 LSU
  {10,  0}, // #62 Lat10
  { 1,  0}, // #63 FXU_FXa
  { 6,  0}, // #64 Lat6
  { 1,  0}, // #65 FXU_FXa
  { 4,  0}, // #66 LSU
  {12,  0}, // #67 Lat12
  { 1,  0}, // #68 FXU_GroupAlone
  { 1,  0}, // #69 FXU
  { 4,  0}, // #70 LSU
  {15,  0}, // #71 Lat15
  { 1,  0}, // #72 GroupAlone
  { 1,  0}, // #73 FXU
  { 1,  0}, // #74 FXU
  { 9,  0}, // #75 Lat9
  { 1,  0}, // #76 GroupAlone_FXU
  { 1,  0}, // #77 FXU_FXa
  { 5,  0}, // #78 Lat5
  { 1,  0}, // #79 FXU_GroupAlone_FXa_FXb
  { 4,  0}, // #80 LSU
  { 9,  0}, // #81 Lat9
  { 1,  0}, // #82 FXU
  { 1,  0}, // #83 FXU_FXa
  { 7,  0}, // #84 Lat7
  { 1,  0}, // #85 GroupAlone
  { 9,  0}, // #86 FPU2_VecBF2
  { 9,  0}, // #87 FPU2_VecBF2
  { 1,  0}, // #88 FXU_GroupAlone
  { 1,  0}, // #89 FXU
  { 1,  0}, // #90 FXU
  { 1,  0}, // #91 FXU
  { 1,  0}, // #92 FXU_FXa_FXb_VecDFX
  {30,  0}, // #93 Lat30
  { 1,  0}, // #94 GroupAlone_EndGroup
  { 9,  0}, // #95 FPU2
  { 9,  0}, // #96 FPU2
  { 4,  0}, // #97 LSU
  { 1,  0}, // #98 FXU_GroupAlone
  { 1,  0}, // #99 FXU
  { 1,  0}, // #100 FXU
  { 1,  0}, // #101 FXU
  {30,  0}, // #102 Lat30
  { 1,  0}, // #103 GroupAlone
  { 9,  0}, // #104 FPU2
  { 9,  0}, // #105 FPU2
  { 1,  0}, // #106 FXU
  { 1,  0}, // #107 FXU
  { 1,  0}, // #108 FXU
  { 1,  0}, // #109 FXU
  {30,  0}, // #110 Lat30
  { 1,  0}, // #111 GroupAlone
  { 9,  0}, // #112 FPU2
  { 9,  0}, // #113 FPU2
  { 4,  0}, // #114 LSU
  { 1,  0}, // #115 FXU
  { 1,  0}, // #116 FXU
  { 1,  0}, // #117 FXU
  {30,  0}, // #118 Lat30
  { 1,  0}, // #119 GroupAlone
  { 1,  0}, // #120 FXU_FXa
  { 1,  0}, // #121 FXU_FXa
  { 1,  0}, // #122 FXU_FXa
  { 1,  0}, // #123 FXU_FXa_FXb
  { 4,  0}, // #124 LSU
  { 8,  0}, // #125 Lat8
  { 1,  0}, // #126 GroupAlone
  { 1,  0}, // #127 FXU_FXb
  { 4,  0}, // #128 LSU
  { 4,  0}, // #129 LSU
  { 9,  0}, // #130 Lat9
  { 1,  0}, // #131 GroupAlone_BeginGroup
  { 1,  0}, // #132 FXU_FXa
  { 1,  0}, // #133 FXU_FXa
  { 1,  0}, // #134 FXU_FXb
  { 1,  0}, // #135 FXU_FXb
  { 1,  0}, // #136 FXU_FXa
  { 4,  0}, // #137 LSU
  {10,  0}, // #138 Lat10
  { 1,  0}, // #139 GroupAlone
  { 1,  0}, // #140 FXU
  { 1,  0}, // #141 FXU
  { 1,  0}, // #142 FXU
  { 1,  0}, // #143 FXU
  { 1,  0}, // #144 FXU
  { 1,  0}, // #145 FXU
  { 4,  0}, // #146 LSU
  { 4,  0}, // #147 LSU
  {12,  0}, // #148 Lat12
  { 1,  0}, // #149 GroupAlone_VecDFX
  { 4,  0}, // #150 LSU
  { 4,  0}, // #151 LSU
  { 5,  0}, // #152 Lat5
  { 1,  0}, // #153 GroupAlone
  { 1,  0}, // #154 FXU
  { 1,  0}, // #155 FXU
  { 4,  0}, // #156 LSU
  { 4,  0}, // #157 LSU
  { 6,  0}, // #158 Lat6
  { 1,  0}, // #159 GroupAlone
  { 1,  0}, // #160 FXU_FXa
  { 1,  0}, // #161 FXU_FXa
  { 1,  0}, // #162 FXU_FXa
  { 4,  0}, // #163 LSU
  { 4,  0}, // #164 LSU
  {30,  0}, // #165 Lat30
  { 1,  0}, // #166 GroupAlone
  { 1,  0}, // #167 FXU
  { 3,  0}, // #168 DFU2_VecXsPm
  { 4,  0}, // #169 LSU_Lat4
  { 4,  0}, // #170 LSU
  {30,  0}, // #171 Lat30
  { 1,  0}, // #172 GroupAlone_FXU
  { 1,  0}, // #173 FXU
  { 2,  0}, // #174 DFU
  { 4,  0}, // #175 LSU
  {30,  0}, // #176 Lat30
  { 1,  0}, // #177 GroupAlone
  { 1,  0}, // #178 FXU
  { 1,  0}, // #179 FXU
  { 1,  0}, // #180 FXU
  { 3,  0}, // #181 DFU2
  { 3,  0}, // #182 DFU2
  { 4,  0}, // #183 LSU
  {30,  0}, // #184 Lat30
  { 1,  0}, // #185 GroupAlone
  { 1,  0}, // #186 FXU
  { 3,  0}, // #187 DFU2
  { 3,  0}, // #188 DFU2
  { 4,  0}, // #189 LSU
  { 4,  0}, // #190 LSU
  {15,  0}, // #191 Lat15
  { 1,  0}, // #192 GroupAlone
  { 1,  0}, // #193 FXU
  { 3,  0}, // #194 DFU2
  { 3,  0}, // #195 DFU2
  { 4,  0}, // #196 LSU
  { 4,  0}, // #197 LSU
  {30,  0}, // #198 Lat30
  { 1,  0}, // #199 GroupAlone
  { 1,  0}, // #200 FXU
  { 1,  0}, // #201 FXU
  { 3,  0}, // #202 DFU2
  { 3,  0}, // #203 DFU2
  { 4,  0}, // #204 LSU
  { 4,  0}, // #205 LSU
  { 4,  0}, // #206 LSU
  {15,  0}, // #207 Lat15
  { 1,  0}, // #208 GroupAlone
  { 3,  0}, // #209 DFU2
  { 3,  0}, // #210 DFU2
  { 4,  0}, // #211 LSU
  { 4,  0}, // #212 LSU
  {11,  0}, // #213 Lat11
  { 1,  0}, // #214 GroupAlone
  { 3,  0}, // #215 DFU2
  { 4,  0}, // #216 LSU
  { 4,  0}, // #217 LSU
  { 5,  0}, // #218 Lat5
  { 1,  0}, // #219 GroupAlone_FXU_FXb_VecDFX
  { 4,  0}, // #220 LSU
  { 1,  0}, // #221 FXU_GroupAlone_FXa
  { 5,  0}, // #222 Lat5
  { 1,  0}, // #223 GroupAlone_BeginGroup
  { 4,  0}, // #224 LSU
  { 4,  0}, // #225 LSU
  { 1,  0}, // #226 FXU_FXb
  { 1,  0}, // #227 FXU_FXb
  { 1,  0}, // #228 FXU_FXb
  { 1,  0}, // #229 FXU_FXb
  { 1,  0}, // #230 FXU_FXb
  {15,  0}, // #231 Lat15
  { 1,  0}, // #232 GroupAlone
  { 9,  0}, // #233 FPU2
  { 9,  0}, // #234 FPU2
  { 9,  0}, // #235 Lat9
  { 1,  0}, // #236 GroupAlone
  { 8,  0}, // #237 FPU_VecDF
  { 8,  0}, // #238 FPU_VecDF
  {20,  0}, // #239 Lat20
  { 8,  0}, // #240 FPU_VecBF
  { 4,  0}, // #241 LSU
  {12,  0}, // #242 Lat12
  { 9,  0}, // #243 FPU2
  { 9,  0}, // #244 FPU2
  { 4,  0}, // #245 LSU
  {15,  0}, // #246 Lat15
  { 1,  0}, // #247 GroupAlone
  { 9,  0}, // #248 FPU2_VecDF2
  { 9,  0}, // #249 FPU2_VecDF2
  {10,  0}, // #250 Lat10
  { 1,  0}, // #251 GroupAlone
  { 1,  0}, // #252 FXU_FXb
  { 8,  0}, // #253 FPU_VecBF_VecDF
  { 9,  0}, // #254 Lat9
  { 1,  0}, // #255 GroupAlone_BeginGroup
  { 1,  0}, // #256 FXU
  { 9,  0}, // #257 FPU2_VecDF2
  { 9,  0}, // #258 FPU2_VecDF2
  {11,  0}, // #259 Lat11
  { 1,  0}, // #260 GroupAlone
  { 1,  0}, // #261 FXU_FXb
  { 8,  0}, // #262 FPU_VecDF
  {12,  0}, // #263 Lat12
  { 1,  0}, // #264 GroupAlone_BeginGroup
  { 1,  0}, // #265 FXU_FXb
  { 8,  0}, // #266 FPU_VecDF
  { 8,  0}, // #267 FPU_VecDF
  {20,  0}, // #268 Lat20
  { 1,  0}, // #269 GroupAlone_BeginGroup
  { 1,  0}, // #270 FXU_FXb
  { 8,  0}, // #271 FPU_VecBF_VecDF
  {11,  0}, // #272 Lat11
  { 1,  0}, // #273 GroupAlone_BeginGroup
  { 8,  0}, // #274 FPU
  { 4,  0}, // #275 LSU
  {30,  0}, // #276 Lat30
  { 8,  0}, // #277 FPU_VecDF
  {30,  0}, // #278 Lat30
  { 9,  0}, // #279 FPU2_VecDF2
  { 9,  0}, // #280 FPU2_VecDF2
  {30,  0}, // #281 Lat30
  { 1,  0}, // #282 GroupAlone_FXb
  { 9,  0}, // #283 FPU2_VecDF2
  { 9,  0}, // #284 FPU2_VecDF2
  {15,  0}, // #285 Lat15
  { 1,  0}, // #286 GroupAlone
  { 9,  0}, // #287 FPU2_VecDF2
  { 9,  0}, // #288 FPU2_VecDF2
  {20,  0}, // #289 Lat20
  { 1,  0}, // #290 GroupAlone
  { 8,  0}, // #291 FPU
  { 8,  0}, // #292 FPU
  { 4,  0}, // #293 LSU
  {12,  0}, // #294 Lat12
  { 1,  0}, // #295 GroupAlone
  { 8,  0}, // #296 FPU
  { 8,  0}, // #297 FPU
  {30,  0}, // #298 Lat30
  { 8,  0}, // #299 FPU
  { 4,  0}, // #300 LSU
  {15,  0}, // #301 Lat15
  { 1,  0}, // #302 FXU
  { 4,  0}, // #303 LSU
  { 3,  0}, // #304 Lat3
  { 1,  0}, // #305 GroupAlone
  { 8,  0}, // #306 FPU
  { 8,  0}, // #307 FPU
  { 4,  0}, // #308 LSU
  {15,  0}, // #309 Lat15
  { 1,  0}, // #310 GroupAlone
  { 8,  0}, // #311 FPU
  {10,  0}, // #312 Lat10
  { 1,  0}, // #313 GroupAlone
  { 8,  0}, // #314 FPU
  { 8,  0}, // #315 FPU_VecDF
  {15,  0}, // #316 Lat15
  { 2,  0}, // #317 DFU
  {20,  0}, // #318 Lat20
  { 3,  0}, // #319 DFU2
  { 3,  0}, // #320 DFU2
  {20,  0}, // #321 Lat20
  { 1,  0}, // #322 GroupAlone
  { 2,  0}, // #323 DFU
  {30,  0}, // #324 Lat30
  { 2,  0}, // #325 DFU_FXa2
  { 2,  0}, // #326 DFU_FXa2
  {30,  0}, // #327 Lat30
  { 1,  0}, // #328 FXU_GroupAlone
  { 2,  0}, // #329 DFU
  {30,  0}, // #330 Lat30
  { 1,  0}, // #331 GroupAlone
  { 1,  0}, // #332 FXU
  { 3,  0}, // #333 DFU2
  { 3,  0}, // #334 DFU2
  {30,  0}, // #335 Lat30
  { 1,  0}, // #336 GroupAlone
  { 1,  0}, // #337 FXU
  { 2,  0}, // #338 DFU
  {11,  0}, // #339 Lat11
  { 1,  0}, // #340 GroupAlone
  { 1,  0}, // #341 FXU
  { 3,  0}, // #342 DFU2
  { 3,  0}, // #343 DFU2
  { 6,  0}, // #344 Lat6
  { 1,  0}, // #345 GroupAlone
  { 1,  0}, // #346 FXU
  { 2,  0}, // #347 DFU
  { 2,  0}, // #348 DFU
  {30,  0}, // #349 Lat30
  { 1,  0}, // #350 GroupAlone
  { 1,  0}, // #351 FXU
  { 2,  0}, // #352 DFU
  { 2,  0}, // #353 DFU
  {11,  0}, // #354 Lat11
  { 1,  0}, // #355 GroupAlone
  { 1,  0}, // #356 FXU
  { 2,  0}, // #357 DFU
  {12,  0}, // #358 Lat12
  { 1,  0}, // #359 GroupAlone
  { 1,  0}, // #360 FXU
  { 1,  0}, // #361 FXU
  { 3,  0}, // #362 DFU2
  { 3,  0}, // #363 DFU2
  {20,  0}, // #364 Lat20
  { 1,  0}, // #365 GroupAlone
  { 4,  0}, // #366 LSU
  { 3,  0}, // #367 DFU2
  { 7,  0}, // #368 Lat7
  { 1,  0}, // #369 GroupAlone
  { 4,  0}, // #370 LSU
  { 4,  0}, // #371 LSU
  { 3,  0}, // #372 DFU2
  { 3,  0}, // #373 DFU2
  {10,  0}, // #374 Lat10
  { 1,  0}, // #375 GroupAlone
  { 1,  0}, // #376 FXU
  { 4,  0}, // #377 LSU
  { 2,  0}, // #378 DFU
  { 2,  0}, // #379 DFU
  {11,  0}, // #380 Lat11
  { 1,  0}, // #381 GroupAlone
  { 1,  0}, // #382 FXU
  { 4,  0}, // #383 LSU
  { 2,  0}, // #384 DFU
  { 2,  0}, // #385 DFU
  {15,  0}, // #386 Lat15
  { 1,  0}, // #387 GroupAlone
  { 1,  0}, // #388 FXU
  { 2,  0}, // #389 DFU
  {15,  0}, // #390 Lat15
  { 1,  0}, // #391 GroupAlone
  { 1,  0}, // #392 FXU
  { 3,  0}, // #393 DFU2
  {15,  0}, // #394 Lat15
  { 1,  0}, // #395 GroupAlone
  { 1,  0}, // #396 FXU
  { 2,  0}, // #397 DFU_FXa2
  { 2,  0}, // #398 DFU_FXa2
  {20,  0}, // #399 Lat20
  { 1,  0}, // #400 GroupAlone
  { 4,  0}, // #401 LSU
  { 2,  0}, // #402 DFU
  {11,  0}, // #403 Lat11
  { 1,  0}, // #404 GroupAlone
  { 4,  0}, // #405 LSU
  { 3,  0}, // #406 DFU2
  { 3,  0}, // #407 DFU2
  {15,  0}, // #408 Lat15
  { 1,  0}, // #409 GroupAlone
  { 1,  0}, // #410 FXU
  { 3,  0}, // #411 DFU2
  { 3,  0}, // #412 DFU2
  {15,  0}, // #413 Lat15
  { 1,  0}, // #414 GroupAlone
  { 2,  0}, // #415 DFU
  { 8,  0}, // #416 Lat8
  { 2,  0}, // #417 DFU
  { 2,  0}, // #418 DFU
  { 9,  0}, // #419 Lat9
  { 4,  0}, // #420 LSU
  { 2,  0}, // #421 DFU
  {15,  0}, // #422 Lat15
  { 4,  0}, // #423 LSU
  { 3,  0}, // #424 DFU2
  {15,  0}, // #425 Lat15
  { 1,  0}, // #426 FXU
  { 4,  0}, // #427 LSU
  { 4,  0}, // #428 LSU
  { 4,  0}, // #429 LSU
  { 4,  0}, // #430 LSU
  {30,  0}, // #431 Lat30
  { 1,  0}, // #432 GroupAlone
  { 1,  0}, // #433 FXU_FXb
  {20,  0}, // #434 Lat20
  { 1,  0}, // #435 FXU_FXb
  { 4,  0}, // #436 LSU
  {20,  0}, // #437 Lat20
  { 4,  0}, // #438 LSU
  { 4,  0}, // #439 LSU
  { 4,  0}, // #440 LSU
  { 4,  0}, // #441 LSU
  { 1,  0}, // #442 FXU
  { 1,  0}, // #443 FXU
  {20,  0}, // #444 Lat20
  { 1,  0}, // #445 GroupAlone
  { 1,  0}, // #446 FXU
  { 2,  0}, // #447 DFU_FXa2
  { 9,  0}, // #448 Lat9
  { 1,  0}, // #449 GroupAlone
  { 1,  0}, // #450 FXU
  { 3,  0}, // #451 DFU2
  { 3,  0}, // #452 DFU2
  { 1,  0}, // #453 GroupAlone
  { 1,  0}, // #454 FXU
  { 3,  0}, // #455 DFU2
  { 3,  0}, // #456 DFU2
  {11,  0}, // #457 Lat11
  { 1,  0}, // #458 GroupAlone
  { 4,  0}, // #459 LSU
  { 6,  0}, // #460 Lat6
  {30,  0}, // #461 Lat30
  { 1,  0}, // #462 GroupAlone
  { 1,  0}, // #463 FXa
  { 1,  0}, // #464 FXa
  { 1,  0}, // #465 FXb_FXa
  { 1,  0}, // #466 FXb_FXa
  { 4,  0}, // #467 Lat4
  { 1,  0}, // #468 GroupAlone
  { 1,  0}, // #469 FXb
  { 4,  0}, // #470 LSU
  { 4,  0}, // #471 LSU
  { 4,  0}, // #472 LSU
  { 8,  0}, // #473 Lat8
  { 1,  0}, // #474 GroupAlone
  { 2,  0}, // #475 FXa2
  { 4,  0}, // #476 LSU
  {15,  0}, // #477 Lat15
  { 1,  0}, // #478 GroupAlone
  { 2,  0}, // #479 FXa2
  { 7,  0}, // #480 Lat7
  { 1,  0}, // #481 GroupAlone
  { 2,  0}, // #482 FXa2
  { 4,  0}, // #483 LSU
  { 7,  0}, // #484 Lat7
  { 1,  0}, // #485 GroupAlone
  { 2,  0}, // #486 FXa2
  { 2,  0}, // #487 FXa2
  { 4,  0}, // #488 LSU
  {30,  0}, // #489 Lat30
  { 1,  0}, // #490 GroupAlone
  { 4,  0}, // #491 LSU
  { 2,  0}, // #492 FXa2
  {30,  0}, // #493 Lat30
  { 1,  0}, // #494 GroupAlone
  { 1,  0}, // #495 FXa
  { 1,  0}, // #496 FXa
  { 1,  0}, // #497 FXb
  { 1,  0}, // #498 FXb
  { 4,  0}, // #499 LSU
  { 1,  0}, // #500 FXb
  { 1,  0}, // #501 FXb
  { 4,  0}, // #502 LSU
  { 4,  0}, // #503 LSU
  {20,  0}, // #504 Lat20
  { 1,  0}, // #505 GroupAlone
  { 1,  0}, // #506 FXb
  { 8,  0}, // #507 VecDF
  { 8,  0}, // #508 VecDF
  { 4,  0}, // #509 LSU
  { 4,  0}, // #510 LSU
  {30,  0}, // #511 Lat30
  { 1,  0}, // #512 GroupAlone
  { 1,  0}, // #513 FXb
  { 8,  0}, // #514 VecDF
  { 4,  0}, // #515 LSU
  {30,  0}, // #516 Lat30
  { 1,  0}, // #517 GroupAlone
  { 1,  0}, // #518 FXb
  { 1,  0}, // #519 FXb
  { 1,  0}, // #520 FXb
  { 9,  0}, // #521 VecDF2
  { 9,  0}, // #522 VecDF2
  { 4,  0}, // #523 LSU
  {30,  0}, // #524 Lat30
  { 1,  0}, // #525 GroupAlone
  { 1,  0}, // #526 FXb
  { 1,  0}, // #527 VecDFX
  { 4,  0}, // #528 LSU
  { 4,  0}, // #529 LSU
  { 4,  0}, // #530 LSU
  { 9,  0}, // #531 Lat9
  { 1,  0}, // #532 GroupAlone
  { 1,  0}, // #533 FXb
  { 2,  0}, // #534 VecDFX2
  { 2,  0}, // #535 VecDFX2
  { 4,  0}, // #536 LSU
  { 4,  0}, // #537 LSU
  { 4,  0}, // #538 LSU
  {30,  0}, // #539 Lat30
  { 1,  0}, // #540 GroupAlone
  { 1,  0}, // #541 FXb
  { 1,  0}, // #542 VecDFX
  { 1,  0}, // #543 VecDFX
  { 4,  0}, // #544 LSU
  { 4,  0}, // #545 LSU
  {15,  0}, // #546 Lat15
  { 1,  0}, // #547 GroupAlone
  { 1,  0}, // #548 FXa
  { 1,  0}, // #549 FXa
  { 1,  0}, // #550 FXb
  { 5,  0}, // #551 Lat5
  { 1,  0}, // #552 GroupAlone
  { 1,  0}, // #553 FXa
  { 1,  0}, // #554 FXa
  { 6,  0}, // #555 Lat6
  { 1,  0}, // #556 GroupAlone
  { 3,  0}, // #557 VecXsPm
  { 4,  0}, // #558 LSU
  { 7,  0}, // #559 Lat7
  { 9,  0}, // #560 VecBF2
  { 9,  0}, // #561 VecBF2
  { 4,  0}, // #562 LSU
  {12,  0}, // #563 Lat12
  { 1,  0}, // #564 GroupAlone
  { 1,  0}, // #565 FXb
  { 9,  0}, // #566 VecDF2
  { 9,  0}, // #567 VecDF2
  {12,  0}, // #568 Lat12
  { 1,  0}, // #569 GroupAlone
  {30,  0}, // #570 VecFPd
  { 4,  0}, // #571 LSU
  {30,  0}, // #572 VecFPd
  {30,  0}, // #573 VecFPd_Lat30
  { 1,  0}, // #574 GroupAlone
  { 3,  0}, // #575 VecXsPm
  { 4,  0}, // #576 LSU
  { 8,  0}, // #577 Lat8
  { 4,  0}, // #578 LSU
  { 3,  0}, // #579 VecXsPm_DFU2
  { 9,  0}, // #580 Lat9
  { 4,  0}, // #581 LSU
  { 9,  0}, // #582 VecDF2
  { 9,  0}, // #583 VecDF2
  {15,  0}, // #584 Lat15
  { 1,  0}, // #585 GroupAlone
  { 1,  0}, // #586 FXb
  { 8,  0}, // #587 VecDF
  {30,  0}, // #588 Lat30
  { 1,  0}, // #589 BeginGroup
  { 1,  0}, // #590 FXb
  { 9,  0}, // #591 VecDF2
  { 9,  0}, // #592 VecDF2
  {30,  0}, // #593 Lat30
  { 1,  0}, // #594 GroupAlone
  { 1,  0}, // #595 FXb
  { 8,  0}, // #596 VecDF
  { 8,  0}, // #597 VecDF
  {30,  0}, // #598 Lat30
  { 1,  0}, // #599 BeginGroup_GroupAlone
  { 1,  0}, // #600 FXb
  { 1,  0}, // #601 FXb
  { 9,  0}, // #602 VecDF2
  { 9,  0}, // #603 VecDF2
  {15,  0}, // #604 Lat15
  { 1,  0}, // #605 GroupAlone_FXb
  { 4,  0}, // #606 LSU
  { 8,  0}, // #607 VecDF
  {11,  0}, // #608 Lat11
  { 1,  0}, // #609 BeginGroup_GroupAlone
  { 4,  0}, // #610 LSU
  { 4,  0}, // #611 LSU
  { 9,  0}, // #612 VecDF2
  { 9,  0}, // #613 VecDF2
  {15,  0}, // #614 Lat15
  { 1,  0}, // #615 GroupAlone
  { 1,  0}, // #616 FXb
  { 4,  0}, // #617 LSU
  { 8,  0}, // #618 VecDF
  { 8,  0}, // #619 VecDF
  {15,  0}, // #620 Lat15
  { 1,  0}, // #621 GroupAlone
  { 1,  0}, // #622 FXb
  { 8,  0}, // #623 VecDF
  { 8,  0}, // #624 VecDF
  {15,  0}, // #625 Lat15
  { 1,  0}, // #626 BeginGroup
  { 8,  0}, // #627 VecDF
  { 8,  0}, // #628 VecDF
  {11,  0}, // #629 Lat11
  { 1,  0}, // #630 GroupAlone
  { 1,  0}, // #631 FXb
  { 4,  0}, // #632 LSU
  { 3,  0}, // #633 VecXsPm
  {11,  0}, // #634 Lat11
  { 1,  0}, // #635 BeginGroup
  { 4,  0}, // #636 LSU
  { 4,  0}, // #637 LSU
  { 1,  0}, // #638 FXb
  { 1,  0}, // #639 FXb
  { 1,  0}, // #640 FXb
  { 1,  0}, // #641 FXb
  { 1,  0}, // #642 FXb
  {20,  0}, // #643 Lat20
  { 1,  0}, // #644 GroupAlone
  { 1,  0}, // #645 FXb_FXa_VecDFX
  { 1,  0}, // #646 FXb_FXa
  { 4,  0}, // #647 LSU
  {12,  0}, // #648 Lat12
  { 1,  0}, // #649 BeginGroup_GroupAlone
  { 3,  0}, // #650 VecXsPm
  { 3,  0}, // #651 VecXsPm
  { 8,  0}, // #652 Lat8
  { 4,  0}, // #653 LSU
  { 4,  0}, // #654 LSU
  { 4,  0}, // #655 LSU
  { 1,  0}, // #656 FXa
  { 1,  0}, // #657 FXa
  { 1,  0}, // #658 FXb
  { 9,  0}, // #659 Lat9
  { 1,  0}, // #660 GroupAlone
  { 4,  0}, // #661 LSU
  { 4,  0}, // #662 LSU
  { 4,  0}, // #663 LSU
  { 4,  0}, // #664 LSU
  { 1,  0}, // #665 FXa
  { 1,  0}, // #666 FXa
  { 1,  0}, // #667 FXb
  { 1,  0}, // #668 FXb
  {11,  0}, // #669 Lat11
  { 1,  0}, // #670 GroupAlone
  { 4,  0}, // #671 LSU
  { 4,  0}, // #672 LSU
  { 1,  0}, // #673 FXb
  { 5,  0}, // #674 Lat5
  { 1,  0}, // #675 BeginGroup
  { 1,  0}, // #676 FXa
  { 4,  0}, // #677 LSU
  {11,  0}, // #678 Lat11
  { 2,  0}, // #679 FXa2
  { 4,  0}, // #680 LSU
  {12,  0}, // #681 Lat12
  { 1,  0}, // #682 GroupAlone
  { 2,  0}, // #683 FXa2
  { 8,  0}, // #684 Lat8
  { 1,  0}, // #685 GroupAlone
  { 2,  0}, // #686 FXa2
  { 6,  0}, // #687 Lat6
  { 1,  0}, // #688 GroupAlone
  { 2,  0}, // #689 FXa2
  { 4,  0}, // #690 LSU
  {10,  0}, // #691 Lat10
  { 1,  0}, // #692 GroupAlone
  { 1,  0}, // #693 FXa
  { 1,  0}, // #694 FXa
  { 8,  0}, // #695 Lat8
  { 1,  0}, // #696 GroupAlone
  { 8,  0}, // #697 VecDF
  { 8,  0}, // #698 VecDF
  {10,  0}, // #699 Lat10
  { 8,  0}, // #700 VecDF
  { 8,  0}, // #701 VecDF
  { 1,  0}, // #702 FXb
  {20,  0}, // #703 Lat20
  { 1,  0}, // #704 GroupAlone
  { 4,  0}, // #705 LSU
  { 1,  0}, // #706 FXU
  { 1,  0}, // #707 FXU
  { 6,  0}, // #708 Lat6
  { 1,  0}, // #709 GroupAlone
  { 1,  0}, // #710 FXU
  { 4,  0}, // #711 LSU
  { 1,  0}, // #712 FXU
  { 6,  0}, // #713 Lat6
  { 1,  0}, // #714 GroupAlone
  { 1,  0}, // #715 FXU
  { 1,  0}, // #716 FXU
  { 4,  0}, // #717 LSU
  { 6,  0}, // #718 Lat6
  { 2,  0}, // #719 Lat2
  { 1,  0}, // #720 GroupAlone
  { 3,  0}, // #721 DFU2
  { 4,  0}, // #722 LSU
  { 4,  0}, // #723 LSU
  { 1,  0}, // #724 GroupAlone
  { 1,  0}, // #725 FXU
  { 4,  0}, // #726 LSU
  { 4,  0}, // #727 LSU
  { 4,  0}, // #728 LSU
  { 4,  0}, // #729 LSU
  {10,  0}, // #730 Lat10
  { 1,  0} // #731 GroupAlone
}; // SystemZWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry SystemZReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // SystemZReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc ZEC12ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("ADJDYNALLOC")        1, false, false,  1, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("BRC_BRCAsm_BRCL_BRCLAsm_CallBRCL") 1, false, false,  2, 1,  1, 1,  0, 0}, // #2
  {DBGFIELD("CallJG_J_JAsmE_JAsmH_JAsmHE_JAsmL_JAsmLE_JAsmLH_JAsmM_JAsmNE_JAsmNH_JAsmNHE_JAsmNL_JAsmNLE_JAsmNLH_JAsmNM_JAsmNO_JAsmNP_JAsmNZ_JAsmO_JAsmP_JAsmZ_JG_JGAsmE_JGAsmH_JGAsmHE_JGAsmL_JGAsmLE_JGAsmLH_JGAsmM_JGAsmNE_JGAsmNH_JGAsmNHE_JGAsmNL_JGAsmNLE_JGAsmNLH_JGAsmNM_JGAsmNO_JGAsmNP_JGAsmNZ_JGAsmO_JGAsmP_JGAsmZ") 1, false, false,  2, 1,  1, 1,  0, 0}, // #3
  {DBGFIELD("BC_BCAsm_BCR_BCRAsm_CallBCR") 1, false, false,  3, 1,  2, 2,  0, 0}, // #4
  {DBGFIELD("B_BAsmE_BAsmH_BAsmHE_BAsmL_BAsmLE_BAsmLH_BAsmM_BAsmNE_BAsmNH_BAsmNHE_BAsmNL_BAsmNLE_BAsmNLH_BAsmNM_BAsmNO_BAsmNP_BAsmNZ_BAsmO_BAsmP_BAsmZ_BR_BRAsmE_BRAsmH_BRAsmHE_BRAsmL_BRAsmLE_BRAsmLH_BRAsmM_BRAsmNE_BRAsmNH_BRAsmNHE_BRAsmNL_BRAsmNLE_BRAsmNLH_BRAsmNM_BRAsmNO_BRAsmNP_BRAsmNZ_BRAsmO_BRAsmP_BRAsmZ_CallBR") 1, false, false,  3, 1,  2, 2,  0, 0}, // #5
  {DBGFIELD("BI_BIAsmE_BIAsmH_BIAsmHE_BIAsmL_BIAsmLE_BIAsmLH_BIAsmM_BIAsmNE_BIAsmNH_BIAsmNHE_BIAsmNL_BIAsmNLE_BIAsmNLH_BIAsmNM_BIAsmNO_BIAsmNP_BIAsmNZ_BIAsmO_BIAsmP_BIAsmZ_BIC_BICAsm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #6
  {DBGFIELD("BRCT_BRCTG")         1, false, true,  1, 1,  4, 2,  0, 0}, // #7
  {DBGFIELD("BRCTH")              2, true, true,  4, 2,  6, 4,  0, 0}, // #8
  {DBGFIELD("BCT_BCTG_BCTGR_BCTR") 2, true, true,  4, 2,  6, 4,  0, 0}, // #9
  {DBGFIELD("BRXH_BRXHG_BRXLE_BRXLG_BXH_BXHG_BXLE_BXLEG") 4, true, true,  6, 2, 10, 6,  0, 0}, // #10
  {DBGFIELD("CGIJ_CGIJAsm_CGIJAsmE_CGIJAsmH_CGIJAsmHE_CGIJAsmL_CGIJAsmLE_CGIJAsmLH_CGIJAsmNE_CGIJAsmNH_CGIJAsmNHE_CGIJAsmNL_CGIJAsmNLE_CGIJAsmNLH_CGRJ_CGRJAsm_CGRJAsmE_CGRJAsmH_CGRJAsmHE_CGRJAsmL_CGRJAsmLE_CGRJAsmLH_CGRJAsmNE_CGRJAsmNH_CGRJAsmNHE_CGRJAsmNL_CGRJAsmNLE_CGRJAsmNLH_CIJ_CIJAsm_CIJAsmE_CIJAsmH_CIJAsmHE_CIJAsmL_CIJAsmLE_CIJAsmLH_CIJAsmNE_CIJAsmNH_CIJAsmNHE_CIJAsmNL_CIJAsmNLE_CIJAsmNLH_CLGIJ_CLGIJAsm_CLGIJAsmE_CLGIJAsmH_CLGIJAsmHE_CLGIJAsmL_CLGIJAsmLE_CLGIJAsmLH_CLGIJAsmNE_CLGIJAsmNH_CLGIJAsmNHE_CLGIJAsmNL_CLGIJAsmNLE_CLGIJAsmNLH_CLGRJ_CLGRJAsm_CLGRJAsmE_CLGRJAsmH_CLGRJAsmHE_CLGRJAsmL_CLGRJAsmLE_CLGRJAsmLH_CLGRJAsmNE_CLGRJAsmNH_CLGRJAsmNHE_CLGRJAsmNL_CLGRJAsmNLE_CLGRJAsmNLH_CLIJ_CLIJAsm_CLIJAsmE_CLIJAsmH_CLIJAsmHE_CLIJAsmL_CLIJAsmLE_CLIJAsmLH_CLIJAsmNE_CLIJAsmNH_CLIJAsmNHE_CLIJAsmNL_CLIJAsmNLE_CLIJAsmNLH_CLRJ_CLRJAsm_CLRJAsmE_CLRJAsmH_CLRJAsmHE_CLRJAsmL_CLRJAsmLE_CLRJAsmLH_CLRJAsmNE_CLRJAsmNH_CLRJAsmNHE_CLRJAsmNL_CLRJAsmNLE_CLRJAsmNLH_CRJ_CRJAsm_CRJAsmE_CRJAsmH_CRJAsmHE_CRJAsmL_CRJAsmLE_CRJAsmLH_CRJAsmNE_CRJAsmNH_CRJAsmNHE_CRJAsmNL_CRJAsmNLE_CRJAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #11
  {DBGFIELD("CGIB_CGIBAsm_CGIBAsmE_CGIBAsmH_CGIBAsmHE_CGIBAsmL_CGIBAsmLE_CGIBAsmLH_CGIBAsmNE_CGIBAsmNH_CGIBAsmNHE_CGIBAsmNL_CGIBAsmNLE_CGIBAsmNLH_CGIBCall_CGIBReturn_CGRB_CGRBAsm_CGRBAsmE_CGRBAsmH_CGRBAsmHE_CGRBAsmL_CGRBAsmLE_CGRBAsmLH_CGRBAsmNE_CGRBAsmNH_CGRBAsmNHE_CGRBAsmNL_CGRBAsmNLE_CGRBAsmNLH_CGRBCall_CGRBReturn_CIB_CIBAsm_CIBAsmE_CIBAsmH_CIBAsmHE_CIBAsmL_CIBAsmLE_CIBAsmLH_CIBAsmNE_CIBAsmNH_CIBAsmNHE_CIBAsmNL_CIBAsmNLE_CIBAsmNLH_CIBCall_CIBReturn_CLGIB_CLGIBAsm_CLGIBAsmE_CLGIBAsmH_CLGIBAsmHE_CLGIBAsmL_CLGIBAsmLE_CLGIBAsmLH_CLGIBAsmNE_CLGIBAsmNH_CLGIBAsmNHE_CLGIBAsmNL_CLGIBAsmNLE_CLGIBAsmNLH_CLGIBCall_CLGIBReturn_CLGRB_CLGRBAsm_CLGRBAsmE_CLGRBAsmH_CLGRBAsmHE_CLGRBAsmL_CLGRBAsmLE_CLGRBAsmLH_CLGRBAsmNE_CLGRBAsmNH_CLGRBAsmNHE_CLGRBAsmNL_CLGRBAsmNLE_CLGRBAsmNLH_CLGRBCall_CLGRBReturn_CLIB_CLIBAsm_CLIBAsmE_CLIBAsmH_CLIBAsmHE_CLIBAsmL_CLIBAsmLE_CLIBAsmLH_CLIBAsmNE_CLIBAsmNH_CLIBAsmNHE_CLIBAsmNL_CLIBAsmNLE_CLIBAsmNLH_CLIBCall_CLIBReturn_CLRB_CLRBAsm_CLRBAsmE_CLRBAsmH_CLRBAsmHE_CLRBAsmL_CLRBAsmLE_CLRBAsmLH_CLRBAsmNE_CLRBAsmNH_CLRBAsmNHE_CLRBAsmNL_CLRBAsmNLE_CLRBAsmNLH_CLRBCall_CLRBReturn_CRB_CRBAsm_CRBAsmE_CRBAsmH_CRBAsmHE_CRBAsmL_CRBAsmLE_CRBAsmLH_CRBAsmNE_CRBAsmNH_CRBAsmNHE_CRBAsmNL_CRBAsmNLE_CRBAsmNLH_CRBCall_CRBReturn") 2, true, true,  4, 2,  6, 4,  0, 0}, // #12
  {DBGFIELD("CondTrap_Trap")      1, false, false,  2, 1,  1, 1,  0, 0}, // #13
  {DBGFIELD("CGIT_CGITAsm_CGITAsmE_CGITAsmH_CGITAsmHE_CGITAsmL_CGITAsmLE_CGITAsmLH_CGITAsmNE_CGITAsmNH_CGITAsmNHE_CGITAsmNL_CGITAsmNLE_CGITAsmNLH_CGRT_CGRTAsm_CGRTAsmE_CGRTAsmH_CGRTAsmHE_CGRTAsmL_CGRTAsmLE_CGRTAsmLH_CGRTAsmNE_CGRTAsmNH_CGRTAsmNHE_CGRTAsmNL_CGRTAsmNLE_CGRTAsmNLH_CIT_CITAsm_CITAsmE_CITAsmH_CITAsmHE_CITAsmL_CITAsmLE_CITAsmLH_CITAsmNE_CITAsmNH_CITAsmNHE_CITAsmNL_CITAsmNLE_CITAsmNLH_CRT_CRTAsm_CRTAsmE_CRTAsmH_CRTAsmHE_CRTAsmL_CRTAsmLE_CRTAsmLH_CRTAsmNE_CRTAsmNH_CRTAsmNHE_CRTAsmNL_CRTAsmNLE_CRTAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #14
  {DBGFIELD("CLGRT_CLGRTAsm_CLGRTAsmE_CLGRTAsmH_CLGRTAsmHE_CLGRTAsmL_CLGRTAsmLE_CLGRTAsmLH_CLGRTAsmNE_CLGRTAsmNH_CLGRTAsmNHE_CLGRTAsmNL_CLGRTAsmNLE_CLGRTAsmNLH_CLRT_CLRTAsm_CLRTAsmE_CLRTAsmH_CLRTAsmHE_CLRTAsmL_CLRTAsmLE_CLRTAsmLH_CLRTAsmNE_CLRTAsmNH_CLRTAsmNHE_CLRTAsmNL_CLRTAsmNLE_CLRTAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #15
  {DBGFIELD("CLFIT_CLFITAsm_CLFITAsmE_CLFITAsmH_CLFITAsmHE_CLFITAsmL_CLFITAsmLE_CLFITAsmLH_CLFITAsmNE_CLFITAsmNH_CLFITAsmNHE_CLFITAsmNL_CLFITAsmNLE_CLFITAsmNLH_CLGIT_CLGITAsm_CLGITAsmE_CLGITAsmH_CLGITAsmHE_CLGITAsmL_CLGITAsmLE_CLGITAsmLH_CLGITAsmNE_CLGITAsmNH_CLGITAsmNHE_CLGITAsmNL_CLGITAsmNLE_CLGITAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #16
  {DBGFIELD("CLGT_CLGTAsm_CLGTAsmE_CLGTAsmH_CLGTAsmHE_CLGTAsmL_CLGTAsmLE_CLGTAsmLH_CLGTAsmNE_CLGTAsmNH_CLGTAsmNHE_CLGTAsmNL_CLGTAsmNLE_CLGTAsmNLH_CLT_CLTAsm_CLTAsmE_CLTAsmH_CLTAsmHE_CLTAsmL_CLTAsmLE_CLTAsmLH_CLTAsmNE_CLTAsmNH_CLTAsmNHE_CLTAsmNL_CLTAsmNLE_CLTAsmNLH") 2, false, false,  4, 2,  6, 3,  0, 0}, // #17
  {DBGFIELD("BRAS")               3, true, true,  8, 2, 16, 5,  0, 0}, // #18
  {DBGFIELD("BRASL_CallBRASL")    3, true, true, 10, 2, 21, 5,  0, 0}, // #19
  {DBGFIELD("BAS_BASR_CallBASR")  3, true, true, 10, 2, 21, 5,  0, 0}, // #20
  {DBGFIELD("TLS_GDCALL_TLS_LDCALL") 3, true, true, 10, 2, 21, 5,  0, 0}, // #21
  {DBGFIELD("Return")             1, false, true,  3, 1,  4, 2,  0, 0}, // #22
  {DBGFIELD("CondReturn")         1, false, false,  3, 1,  1, 1,  0, 0}, // #23
  {DBGFIELD("Select32_Select32Mux_Select64") 1, false, false,  1, 1,  1, 1,  0, 0}, // #24
  {DBGFIELD("CondStore16_CondStore16Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #25
  {DBGFIELD("CondStore16Mux_CondStore16MuxInv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #26
  {DBGFIELD("CondStore32_CondStore32Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #27
  {DBGFIELD("CondStore32Mux_CondStore32MuxInv") 0, false, false,  0, 0,  0, 0,  0, 0}, // #28
  {DBGFIELD("CondStore64_CondStore64Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #29
  {DBGFIELD("CondStore8_CondStore8Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #30
  {DBGFIELD("CondStore8Mux_CondStore8MuxInv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #31
  {DBGFIELD("MVGHI_MVHHI_MVHI")   2, false, false,  4, 2,  6, 3,  0, 0}, // #32
  {DBGFIELD("MVI_MVIY")           2, false, false,  4, 2,  6, 3,  0, 0}, // #33
  {DBGFIELD("MVC")                4, true, true, 12, 2, 26, 6,  0, 0}, // #34
  {DBGFIELD("MVCL_MVCLE_MVCLU")   1, true, true,  3, 1, 32, 3,  0, 0}, // #35
  {DBGFIELD("COPY_TO_REGCLASS_COPY") 1, false, false,  1, 1,  1, 1,  0, 0}, // #36
  {DBGFIELD("EXTRACT_SUBREG")     1, false, false,  1, 1,  1, 1,  0, 0}, // #37
  {DBGFIELD("INSERT_SUBREG")      1, false, false,  1, 1,  1, 1,  0, 0}, // #38
  {DBGFIELD("REG_SEQUENCE")       1, false, false,  1, 1,  1, 1,  0, 0}, // #39
  {DBGFIELD("SUBREG_TO_REG")      1, false, false,  1, 1,  1, 1,  0, 0}, // #40
  {DBGFIELD("L_LCBB_LFH_LMux_LRL_LY") 0, false, false,  0, 0,  0, 0,  0, 0}, // #41
  {DBGFIELD("LG_LGRL")            1, false, false,  3, 1,  2, 1,  0, 0}, // #42
  {DBGFIELD("L128")               1, false, false,  3, 1,  2, 1,  0, 0}, // #43
  {DBGFIELD("LLIHF_LLIHH_LLIHL")  1, false, false,  1, 1,  1, 1,  0, 0}, // #44
  {DBGFIELD("LLILF_LLILH_LLILL")  1, false, false,  1, 1,  1, 1,  0, 0}, // #45
  {DBGFIELD("LGFI_LGHI")          1, false, false,  1, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("LHI_LHIMux")         1, false, false,  1, 1,  1, 1,  0, 0}, // #47
  {DBGFIELD("LR_LRMux")           1, false, false,  1, 1,  1, 1,  0, 0}, // #48
  {DBGFIELD("LZRF_LZRG")          0, false, false,  0, 0,  0, 0,  0, 0}, // #49
  {DBGFIELD("LAT_LFHAT_LGAT")     2, false, false,  4, 2,  6, 3,  0, 0}, // #50
  {DBGFIELD("LT_LTG")             2, false, false,  4, 2,  6, 3,  0, 0}, // #51
  {DBGFIELD("LTGR_LTR")           1, false, false,  1, 1,  1, 1,  0, 0}, // #52
  {DBGFIELD("STG_STGRL")          2, false, false,  4, 2,  6, 3,  0, 0}, // #53
  {DBGFIELD("ST128")              2, false, false,  4, 2,  6, 3,  0, 0}, // #54
  {DBGFIELD("ST_STFH_STMux_STRL_STY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #55
  {DBGFIELD("MVST")               1, true, true,  3, 1, 32, 3,  0, 0}, // #56
  {DBGFIELD("LOCRMux")            0, false, false,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("LOCFHR_LOCFHRAsm_LOCFHRAsmE_LOCFHRAsmH_LOCFHRAsmHE_LOCFHRAsmL_LOCFHRAsmLE_LOCFHRAsmLH_LOCFHRAsmM_LOCFHRAsmNE_LOCFHRAsmNH_LOCFHRAsmNHE_LOCFHRAsmNL_LOCFHRAsmNLE_LOCFHRAsmNLH_LOCFHRAsmNM_LOCFHRAsmNO_LOCFHRAsmNP_LOCFHRAsmNZ_LOCFHRAsmO_LOCFHRAsmP_LOCFHRAsmZ_LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #58
  {DBGFIELD("LOCGHI_LOCGHIAsm_LOCGHIAsmE_LOCGHIAsmH_LOCGHIAsmHE_LOCGHIAsmL_LOCGHIAsmLE_LOCGHIAsmLH_LOCGHIAsmM_LOCGHIAsmNE_LOCGHIAsmNH_LOCGHIAsmNHE_LOCGHIAsmNL_LOCGHIAsmNLE_LOCGHIAsmNLH_LOCGHIAsmNM_LOCGHIAsmNO_LOCGHIAsmNP_LOCGHIAsmNZ_LOCGHIAsmO_LOCGHIAsmP_LOCGHIAsmZ_LOCHHI_LOCHHIAsm_LOCHHIAsmE_LOCHHIAsmH_LOCHHIAsmHE_LOCHHIAsmL_LOCHHIAsmLE_LOCHHIAsmLH_LOCHHIAsmM_LOCHHIAsmNE_LOCHHIAsmNH_LOCHHIAsmNHE_LOCHHIAsmNL_LOCHHIAsmNLE_LOCHHIAsmNLH_LOCHHIAsmNM_LOCHHIAsmNO_LOCHHIAsmNP_LOCHHIAsmNZ_LOCHHIAsmO_LOCHHIAsmP_LOCHHIAsmZ_LOCHI_LOCHIAsm_LOCHIAsmE_LOCHIAsmH_LOCHIAsmHE_LOCHIAsmL_LOCHIAsmLE_LOCHIAsmLH_LOCHIAsmM_LOCHIAsmNE_LOCHIAsmNH_LOCHIAsmNHE_LOCHIAsmNL_LOCHIAsmNLE_LOCHIAsmNLH_LOCHIAsmNM_LOCHIAsmNO_LOCHIAsmNP_LOCHIAsmNZ_LOCHIAsmO_LOCHIAsmP_LOCHIAsmZ_LOCHIMux") 0, false, false,  0, 0,  0, 0,  0, 0}, // #59
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCFH_LOCFHAsm_LOCFHAsmE_LOCFHAsmH_LOCFHAsmHE_LOCFHAsmL_LOCFHAsmLE_LOCFHAsmLH_LOCFHAsmM_LOCFHAsmNE_LOCFHAsmNH_LOCFHAsmNHE_LOCFHAsmNL_LOCFHAsmNLE_LOCFHAsmNLH_LOCFHAsmNM_LOCFHAsmNO_LOCFHAsmNP_LOCFHAsmNZ_LOCFHAsmO_LOCFHAsmP_LOCFHAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ_LOCMux") 0, false, false,  0, 0,  0, 0,  0, 0}, // #60
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCFH_STOCFHAsm_STOCFHAsmE_STOCFHAsmH_STOCFHAsmHE_STOCFHAsmL_STOCFHAsmLE_STOCFHAsmLH_STOCFHAsmM_STOCFHAsmNE_STOCFHAsmNH_STOCFHAsmNHE_STOCFHAsmNL_STOCFHAsmNLE_STOCFHAsmNLH_STOCFHAsmNM_STOCFHAsmNO_STOCFHAsmNP_STOCFHAsmNZ_STOCFHAsmO_STOCFHAsmP_STOCFHAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ_STOCMux") 0, false, false,  0, 0,  0, 0,  0, 0}, // #61
  {DBGFIELD("LBR_LGR_LHR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #62
  {DBGFIELD("LGBR_LGFR_LGHR")     1, false, false,  1, 1,  1, 1,  0, 0}, // #63
  {DBGFIELD("LTGF")               2, false, false,  4, 2,  6, 3,  0, 0}, // #64
  {DBGFIELD("LTGFR")              1, false, false,  1, 1,  1, 1,  0, 0}, // #65
  {DBGFIELD("LB_LBH_LBMux")       2, false, false,  4, 2,  6, 3,  0, 0}, // #66
  {DBGFIELD("LH_LHY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #67
  {DBGFIELD("LHH_LHMux_LHRL")     2, false, false,  4, 2,  6, 3,  0, 0}, // #68
  {DBGFIELD("LGB_LGF_LGH")        2, false, false,  4, 2,  6, 3,  0, 0}, // #69
  {DBGFIELD("LGFRL_LGHRL")        2, false, false,  4, 2,  6, 3,  0, 0}, // #70
  {DBGFIELD("LLCR_LLCRMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #71
  {DBGFIELD("LLHR_LLHRMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #72
  {DBGFIELD("LLGCR_LLGFR_LLGHR_LLGTR") 1, false, false,  1, 1,  1, 1,  0, 0}, // #73
  {DBGFIELD("LLC_LLCMux")         1, false, false,  3, 1,  2, 1,  0, 0}, // #74
  {DBGFIELD("LLH_LLHMux")         1, false, false,  3, 1,  2, 1,  0, 0}, // #75
  {DBGFIELD("LLCH_LLHH")          2, false, false,  4, 2,  6, 3,  0, 0}, // #76
  {DBGFIELD("LLHRL")              1, false, false,  3, 1,  2, 1,  0, 0}, // #77
  {DBGFIELD("LLGC_LLGF_LLGFRL_LLGH_LLGHRL_LLGT") 1, false, false,  3, 1,  2, 1,  0, 0}, // #78
  {DBGFIELD("LLZRGF")             0, false, false,  0, 0,  0, 0,  0, 0}, // #79
  {DBGFIELD("LLGFAT_LLGTAT")      2, false, false,  4, 2,  6, 3,  0, 0}, // #80
  {DBGFIELD("STC_STCH_STCMux_STCY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #81
  {DBGFIELD("STH_STHH_STHMux_STHRL_STHY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #82
  {DBGFIELD("STCM_STCMH_STCMY")   2, false, false,  4, 2,  6, 3,  0, 0}, // #83
  {DBGFIELD("LM_LMG_LMH_LMY")     5, true, true, 14, 1, 35, 7,  0, 0}, // #84
  {DBGFIELD("LMD")                1, true, true,  3, 1, 32, 3,  0, 0}, // #85
  {DBGFIELD("STM_STMG_STMH_STMY") 5, true, true, 15, 2, 42, 7,  0, 0}, // #86
  {DBGFIELD("LRVGR_LRVR")         1, false, false,  1, 1,  1, 1,  0, 0}, // #87
  {DBGFIELD("LRV_LRVG_LRVH")      2, false, false,  4, 2,  6, 3,  0, 0}, // #88
  {DBGFIELD("STRV_STRVG_STRVH")   2, false, false,  4, 2,  6, 3,  0, 0}, // #89
  {DBGFIELD("MVCIN")              1, true, true,  3, 1, 32, 3,  0, 0}, // #90
  {DBGFIELD("LA_LARL_LAY")        1, false, false,  1, 1,  1, 1,  0, 0}, // #91
  {DBGFIELD("GOT")                1, false, false,  1, 1,  1, 1,  0, 0}, // #92
  {DBGFIELD("LPGR_LPR")           1, false, false,  1, 1, 49, 2,  0, 0}, // #93
  {DBGFIELD("LNGFR_LPGFR")        2, true, true,  8, 1, 17, 4,  0, 0}, // #94
  {DBGFIELD("LNGR_LNR")           1, false, false,  1, 1, 49, 2,  0, 0}, // #95
  {DBGFIELD("LCGR_LCR")           1, false, false,  1, 1,  1, 1,  0, 0}, // #96
  {DBGFIELD("LCGFR")              2, true, true,  8, 1, 51, 4,  0, 0}, // #97
  {DBGFIELD("IC_ICY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #98
  {DBGFIELD("IC32_IC32Y")         2, false, false,  4, 2,  6, 3,  0, 0}, // #99
  {DBGFIELD("ICM_ICMH_ICMY")      2, false, false,  4, 2,  6, 3,  0, 0}, // #100
  {DBGFIELD("IIFMux_IIHMux_IILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #101
  {DBGFIELD("IIHF_IIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #102
  {DBGFIELD("IIHH_IIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #103
  {DBGFIELD("IIHL_IIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #104
  {DBGFIELD("IILF_IILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #105
  {DBGFIELD("IILH_IILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #106
  {DBGFIELD("IILL_IILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #107
  {DBGFIELD("A_AY")               2, false, false,  4, 2,  6, 3,  0, 0}, // #108
  {DBGFIELD("AH_AHY")             2, false, false,  4, 2, 22, 3,  0, 0}, // #109
  {DBGFIELD("AIH")                1, false, false,  1, 1,  1, 1,  0, 0}, // #110
  {DBGFIELD("AFI_AFIMux")         1, false, false,  1, 1,  1, 1,  0, 0}, // #111
  {DBGFIELD("AG")                 2, false, false,  4, 2,  6, 3,  0, 0}, // #112
  {DBGFIELD("AGFI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #113
  {DBGFIELD("AGHI_AGHIK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #114
  {DBGFIELD("AGR_AGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #115
  {DBGFIELD("AHI_AHIK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #116
  {DBGFIELD("AHIMux_AHIMuxK")     1, false, false,  1, 1,  1, 1,  0, 0}, // #117
  {DBGFIELD("AL_ALY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #118
  {DBGFIELD("ALFI_ALHSIK")        1, false, false,  1, 1,  1, 1,  0, 0}, // #119
  {DBGFIELD("ALG_ALGF")           2, false, false,  4, 2,  6, 3,  0, 0}, // #120
  {DBGFIELD("ALGHSIK")            1, false, false,  1, 1,  1, 1,  0, 0}, // #121
  {DBGFIELD("ALGFI_ALGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #122
  {DBGFIELD("ALGR_ALGRK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #123
  {DBGFIELD("ALR_ALRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #124
  {DBGFIELD("AR_ARK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #125
  {DBGFIELD("AHHHR_ALHHHR")       1, false, false,  1, 1,  1, 1,  0, 0}, // #126
  {DBGFIELD("AHHLR_ALHHLR")       1, false, false,  1, 1, 49, 2,  0, 0}, // #127
  {DBGFIELD("ALSIH_ALSIHN")       1, false, false,  1, 1,  1, 1,  0, 0}, // #128
  {DBGFIELD("AGSI_ALGSI_ALSI_ASI") 2, false, false,  4, 2,  6, 3,  0, 0}, // #129
  {DBGFIELD("ALC_ALCG")           2, true, true,  4, 2, 12, 4,  0, 0}, // #130
  {DBGFIELD("ALCGR_ALCR")         1, true, true,  1, 1, 18, 3,  0, 0}, // #131
  {DBGFIELD("AGF_AGH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #132
  {DBGFIELD("AGFR")               1, false, false,  1, 1, 49, 2,  0, 0}, // #133
  {DBGFIELD("S_SG_SY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #134
  {DBGFIELD("SH_SHY")             2, false, false,  4, 2, 22, 3,  0, 0}, // #135
  {DBGFIELD("SGR_SGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #136
  {DBGFIELD("SLFI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #137
  {DBGFIELD("SL_SLG_SLGF_SLY")    2, false, false,  4, 2,  6, 3,  0, 0}, // #138
  {DBGFIELD("SLGFI_SLGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #139
  {DBGFIELD("SLGR_SLGRK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #140
  {DBGFIELD("SLR_SLRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #141
  {DBGFIELD("SR_SRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #142
  {DBGFIELD("SHHHR_SLHHHR")       1, false, false,  1, 1,  1, 1,  0, 0}, // #143
  {DBGFIELD("SHHLR_SLHHLR")       1, false, false,  1, 1, 49, 2,  0, 0}, // #144
  {DBGFIELD("SLB_SLBG")           2, true, true,  4, 2, 12, 4,  0, 0}, // #145
  {DBGFIELD("SLBGR_SLBR")         1, true, true,  1, 1, 18, 3,  0, 0}, // #146
  {DBGFIELD("SGF_SGH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #147
  {DBGFIELD("SGFR")               1, false, false,  1, 1, 49, 2,  0, 0}, // #148
  {DBGFIELD("N_NG_NY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #149
  {DBGFIELD("NGR_NGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #150
  {DBGFIELD("NIFMux_NIHMux_NILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #151
  {DBGFIELD("NI_NIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #152
  {DBGFIELD("NIHF_NIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #153
  {DBGFIELD("NIHH_NIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #154
  {DBGFIELD("NIHL_NIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #155
  {DBGFIELD("NILF_NILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #156
  {DBGFIELD("NILH_NILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #157
  {DBGFIELD("NILL_NILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #158
  {DBGFIELD("NR_NRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #159
  {DBGFIELD("NC")                 3, true, true, 17, 2, 55, 5,  0, 0}, // #160
  {DBGFIELD("O_OG_OY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #161
  {DBGFIELD("OGR_OGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #162
  {DBGFIELD("OI_OIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #163
  {DBGFIELD("OIFMux_OIHMux_OILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #164
  {DBGFIELD("OIHF_OIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #165
  {DBGFIELD("OIHH_OIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #166
  {DBGFIELD("OIHL_OIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #167
  {DBGFIELD("OILF_OILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #168
  {DBGFIELD("OILH_OILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #169
  {DBGFIELD("OILL_OILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #170
  {DBGFIELD("OR_ORK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #171
  {DBGFIELD("OC")                 3, true, true, 17, 2, 55, 5,  0, 0}, // #172
  {DBGFIELD("X_XG_XY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #173
  {DBGFIELD("XI_XIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #174
  {DBGFIELD("XIFMux")             1, false, false,  1, 1,  1, 1,  0, 0}, // #175
  {DBGFIELD("XGR_XGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #176
  {DBGFIELD("XIHF_XIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #177
  {DBGFIELD("XILF_XILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #178
  {DBGFIELD("XR_XRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #179
  {DBGFIELD("XC")                 3, true, true, 17, 2, 55, 5,  0, 0}, // #180
  {DBGFIELD("MS_MSGF_MSY")        2, false, false,  4, 2, 60, 3,  0, 0}, // #181
  {DBGFIELD("MSFI_MSR")           1, false, false,  1, 1, 63, 2,  0, 0}, // #182
  {DBGFIELD("MSG")                2, false, false,  4, 2, 65, 3,  0, 0}, // #183
  {DBGFIELD("MSGR")               1, false, false,  1, 1, 29, 2,  0, 0}, // #184
  {DBGFIELD("MSGFI_MSGFR")        1, false, false,  1, 1, 63, 2,  0, 0}, // #185
  {DBGFIELD("MLG")                3, true, true, 10, 2, 68, 5,  0, 0}, // #186
  {DBGFIELD("MLGR")               2, true, true,  8, 1, 73, 4,  0, 0}, // #187
  {DBGFIELD("MGHI")               1, false, false,  1, 1, 77, 2,  0, 0}, // #188
  {DBGFIELD("MHI")                1, false, false,  1, 1, 77, 2,  0, 0}, // #189
  {DBGFIELD("MH_MHY")             2, false, false,  4, 2, 79, 3,  0, 0}, // #190
  {DBGFIELD("MLR_MR")             2, true, true,  8, 1, 82, 4,  0, 0}, // #191
  {DBGFIELD("M_MFY_ML")           3, true, true, 10, 2, 11, 5,  0, 0}, // #192
  {DBGFIELD("MGH")                0, false, false,  0, 0,  0, 0,  0, 0}, // #193
  {DBGFIELD("MG")                 0, false, false,  0, 0,  0, 0,  0, 0}, // #194
  {DBGFIELD("MGRK")               0, false, false,  0, 0,  0, 0,  0, 0}, // #195
  {DBGFIELD("MSC")                0, false, false,  0, 0,  0, 0,  0, 0}, // #196
  {DBGFIELD("MSGC")               0, false, false,  0, 0,  0, 0,  0, 0}, // #197
  {DBGFIELD("MSRKC")              0, false, false,  0, 0,  0, 0,  0, 0}, // #198
  {DBGFIELD("MSGRKC")             0, false, false,  0, 0,  0, 0,  0, 0}, // #199
  {DBGFIELD("DR")                 7, true, true, 19, 2, 86, 9,  0, 0}, // #200
  {DBGFIELD("D")                  7, true, true, 21, 3, 95, 9,  0, 0}, // #201
  {DBGFIELD("DSGFR_DSGR")         6, true, true, 21, 2, 104, 8,  0, 0}, // #202
  {DBGFIELD("DSG_DSGF")           6, true, true, 24, 3, 112, 8,  0, 0}, // #203
  {DBGFIELD("DLR")                7, true, true, 19, 2, 86, 9,  0, 0}, // #204
  {DBGFIELD("DLGR")               7, true, true, 19, 2, 86, 9,  0, 0}, // #205
  {DBGFIELD("DL_DLG")             7, true, true, 21, 3, 95, 9,  0, 0}, // #206
  {DBGFIELD("SLL_SLLG_SLLK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #207
  {DBGFIELD("SRL_SRLG_SRLK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #208
  {DBGFIELD("SRA_SRAG_SRAK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #209
  {DBGFIELD("SLA_SLAG_SLAK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #210
  {DBGFIELD("SLDA_SLDL_SRDA_SRDL") 5, true, true, 22, 2, 120, 7,  0, 0}, // #211
  {DBGFIELD("RLL_RLLG")           2, false, false,  4, 2, 22, 3,  0, 0}, // #212
  {DBGFIELD("RISBG_RISBG32_RISBGN") 1, false, false,  1, 1,  1, 1,  0, 0}, // #213
  {DBGFIELD("RISBHG_RISBHH_RISBHL") 1, false, false,  1, 1,  1, 1,  0, 0}, // #214
  {DBGFIELD("RISBLG_RISBLH_RISBLL") 1, false, false,  1, 1,  1, 1,  0, 0}, // #215
  {DBGFIELD("RISBMux")            1, false, false,  1, 1,  1, 1,  0, 0}, // #216
  {DBGFIELD("RNSBG_ROSBG_RXSBG")  2, true, true,  8, 1, 17, 4,  0, 0}, // #217
  {DBGFIELD("C_CG_CMux_CRL_CY")   2, false, false,  4, 2,  6, 3,  0, 0}, // #218
  {DBGFIELD("CFI_CFIMux_CHI_CHIMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #219
  {DBGFIELD("CGFI_CGHI")          1, false, false,  1, 1,  1, 1,  0, 0}, // #220
  {DBGFIELD("CGHSI_CGRL")         2, false, false,  4, 2,  6, 3,  0, 0}, // #221
  {DBGFIELD("CGR_CR")             1, false, false,  1, 1,  1, 1,  0, 0}, // #222
  {DBGFIELD("CIH")                1, false, false,  1, 1,  1, 1,  0, 0}, // #223
  {DBGFIELD("CHF_CHSI")           2, false, false,  4, 2,  6, 3,  0, 0}, // #224
  {DBGFIELD("CL_CLFHSI_CLMux_CLY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #225
  {DBGFIELD("CLFI_CLFIMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #226
  {DBGFIELD("CLG_CLGHRL_CLGHSI")  2, false, false,  4, 2,  6, 3,  0, 0}, // #227
  {DBGFIELD("CLGF_CLGFRL")        2, false, false,  4, 2,  6, 3,  0, 0}, // #228
  {DBGFIELD("CLGFI_CLGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #229
  {DBGFIELD("CLGR")               1, false, false,  1, 1,  1, 1,  0, 0}, // #230
  {DBGFIELD("CLGRL")              2, false, false,  4, 2,  6, 3,  0, 0}, // #231
  {DBGFIELD("CLHF_CLHHSI_CLHRL")  2, false, false,  4, 2,  6, 3,  0, 0}, // #232
  {DBGFIELD("CLIH")               1, false, false,  1, 1,  1, 1,  0, 0}, // #233
  {DBGFIELD("CLI_CLIY")           2, false, false,  4, 2,  6, 3,  0, 0}, // #234
  {DBGFIELD("CLR")                1, false, false,  1, 1,  1, 1,  0, 0}, // #235
  {DBGFIELD("CLRL")               2, false, false,  4, 2,  6, 3,  0, 0}, // #236
  {DBGFIELD("CHHR_CLHHR")         1, false, false,  1, 1,  1, 1,  0, 0}, // #237
  {DBGFIELD("CHLR_CLHLR")         1, false, false,  1, 1, 49, 2,  0, 0}, // #238
  {DBGFIELD("CH_CHRL_CHY")        2, false, false,  4, 2, 22, 3,  0, 0}, // #239
  {DBGFIELD("CGH_CGHRL")          2, false, false,  4, 2, 22, 3,  0, 0}, // #240
  {DBGFIELD("CHHSI")              3, true, true, 10, 2, 21, 5,  0, 0}, // #241
  {DBGFIELD("CGF_CGFRL")          2, false, false,  4, 2, 22, 3,  0, 0}, // #242
  {DBGFIELD("CGFR")               1, false, false,  1, 1, 49, 2,  0, 0}, // #243
  {DBGFIELD("CLC")                3, true, true, 17, 2, 127, 5,  0, 0}, // #244
  {DBGFIELD("CLCL_CLCLE_CLCLU")   1, true, true,  3, 1, 32, 3,  0, 0}, // #245
  {DBGFIELD("CLST")               1, true, true,  3, 1, 32, 3,  0, 0}, // #246
  {DBGFIELD("TM_TMY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #247
  {DBGFIELD("TMHMux_TMLMux")      1, false, false,  1, 1,  1, 1,  0, 0}, // #248
  {DBGFIELD("TMHH_TMHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #249
  {DBGFIELD("TMHL_TMHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #250
  {DBGFIELD("TMLH_TMLH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #251
  {DBGFIELD("TMLL_TMLL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #252
  {DBGFIELD("CLM_CLMH_CLMY")      2, false, false,  4, 2,  6, 3,  0, 0}, // #253
  {DBGFIELD("PFD_PFDRL")          1, false, false,  3, 1,  2, 1,  0, 0}, // #254
  {DBGFIELD("BPP")                1, false, false,  3, 1,  2, 1,  0, 0}, // #255
  {DBGFIELD("BPRP")               1, false, false,  3, 1,  2, 1,  0, 0}, // #256
  {DBGFIELD("NIAI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #257
  {DBGFIELD("Serialize")          1, false, true,  3, 1,  3, 2,  0, 0}, // #258
  {DBGFIELD("LAA_LAAG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #259
  {DBGFIELD("LAAL_LAALG")         2, false, false,  4, 2,  6, 3,  0, 0}, // #260
  {DBGFIELD("LAN_LANG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #261
  {DBGFIELD("LAO_LAOG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #262
  {DBGFIELD("LAX_LAXG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #263
  {DBGFIELD("TS")                 2, false, true,  4, 2,  6, 4,  0, 0}, // #264
  {DBGFIELD("CS_CSG_CSY")         3, true, true, 10, 2, 21, 5,  0, 0}, // #265
  {DBGFIELD("CDS_CDSY")           6, true, true, 27, 2, 132, 8,  0, 0}, // #266
  {DBGFIELD("CDSG")               8, true, true, 29, 2, 140, 10,  0, 0}, // #267
  {DBGFIELD("CSST")               2, false, false,  4, 2, 31, 3,  0, 0}, // #268
  {DBGFIELD("PLO")                1, true, true,  3, 1, 32, 3,  0, 0}, // #269
  {DBGFIELD("LPQ")                2, true, true, 16, 1, 150, 4,  0, 0}, // #270
  {DBGFIELD("STPQ")               4, true, true, 31, 2, 154, 6,  0, 0}, // #271
  {DBGFIELD("LPD_LPDG")           2, true, true, 16, 1, 150, 4,  0, 0}, // #272
  {DBGFIELD("TR")                 1, true, true,  3, 1, 32, 3,  0, 0}, // #273
  {DBGFIELD("TRT")                5, true, true, 15, 2, 160, 7,  0, 0}, // #274
  {DBGFIELD("TRTR")               2, false, false,  4, 2, 31, 3,  0, 0}, // #275
  {DBGFIELD("TRE_TRTE_TRTEOpt_TRTRE_TRTREOpt") 1, false, false,  1, 1, 92, 2,  0, 0}, // #276
  {DBGFIELD("TROO_TROOOpt_TROT_TROTOpt_TRTO_TRTOOpt_TRTT_TRTTOpt") 1, false, false,  3, 1, 32, 2,  0, 0}, // #277
  {DBGFIELD("CU12_CU12Opt_CU14_CU14Opt_CU21_CU21Opt_CU24_CU24Opt_CU41_CU42") 1, false, false,  1, 1, 92, 2,  0, 0}, // #278
  {DBGFIELD("CUTFU_CUTFUOpt_CUUTF_CUUTFOpt") 1, false, false,  1, 1, 92, 2,  0, 0}, // #279
  {DBGFIELD("KM_KMA_KMC_KMCTR_KMF_KMO") 0, false, false,  0, 0,  0, 0,  0, 0}, // #280
  {DBGFIELD("KIMD_KLMD_KMAC")     1, false, false,  1, 1, 92, 2,  0, 0}, // #281
  {DBGFIELD("PCC_PPNO_PRNO")      0, false, false,  0, 0,  0, 0,  0, 0}, // #282
  {DBGFIELD("LGG")                0, false, false,  0, 0,  0, 0,  0, 0}, // #283
  {DBGFIELD("LLGFSG")             0, false, false,  0, 0,  0, 0,  0, 0}, // #284
  {DBGFIELD("LGSC_STGSC")         0, false, false,  0, 0,  0, 0,  0, 0}, // #285
  {DBGFIELD("CVBG")               4, true, true, 33, 3, 167, 6,  0, 0}, // #286
  {DBGFIELD("CVB_CVBY")           3, true, true, 36, 3, 173, 5,  0, 0}, // #287
  {DBGFIELD("CVDG")               6, true, true, 39, 3, 178, 8,  0, 0}, // #288
  {DBGFIELD("CVD_CVDY")           4, true, true, 42, 3, 172, 6,  0, 0}, // #289
  {DBGFIELD("MVO")                1, true, true,  3, 1, 39, 3,  0, 0}, // #290
  {DBGFIELD("MVN_MVZ")            1, true, true,  3, 1, 32, 3,  0, 0}, // #291
  {DBGFIELD("PACK_PKA_PKU")       1, true, true,  3, 1, 32, 3,  0, 0}, // #292
  {DBGFIELD("UNPKA_UNPKU")        1, true, true,  3, 1, 66, 3,  0, 0}, // #293
  {DBGFIELD("UNPK")               1, true, true,  3, 1, 32, 3,  0, 0}, // #294
  {DBGFIELD("AP_SP_ZAP")          5, true, true, 45, 3, 186, 7,  0, 0}, // #295
  {DBGFIELD("DP_MP")              5, true, true, 45, 3, 193, 7,  0, 0}, // #296
  {DBGFIELD("SRP")                7, true, true, 48, 3, 200, 9,  0, 0}, // #297
  {DBGFIELD("CP")                 4, true, true, 51, 2, 209, 6,  0, 0}, // #298
  {DBGFIELD("TP")                 3, true, true, 53, 2, 215, 5,  0, 0}, // #299
  {DBGFIELD("ED_EDMK")            1, true, true,  3, 1, 32, 3,  0, 0}, // #300
  {DBGFIELD("CPYA_EAR_SAR")       1, false, false,  3, 1,  2, 1,  0, 0}, // #301
  {DBGFIELD("LAE_LAEY")           2, true, true,  4, 2, 220, 4,  0, 0}, // #302
  {DBGFIELD("LAM_LAMY_STAM_STAMY") 1, true, true,  3, 1, 32, 3,  0, 0}, // #303
  {DBGFIELD("IPM")                1, false, true,  1, 1, 18, 3,  0, 0}, // #304
  {DBGFIELD("SPM")                1, false, true,  3, 1,  3, 2,  0, 0}, // #305
  {DBGFIELD("BAL_BALR")           3, true, true, 10, 2, 122, 5,  0, 0}, // #306
  {DBGFIELD("TAM")                1, false, false,  1, 1,  1, 1,  0, 0}, // #307
  {DBGFIELD("SAM24_SAM31_SAM64")  1, false, true,  3, 1,  3, 2,  0, 0}, // #308
  {DBGFIELD("BSM")                2, true, true,  4, 2,  6, 4,  0, 0}, // #309
  {DBGFIELD("BASSM")              3, true, true, 10, 2, 21, 5,  0, 0}, // #310
  {DBGFIELD("TBEGIN_TBEGINC_TBEGIN_nofloat") 7, true, true, 55, 2, 224, 9,  0, 0}, // #311
  {DBGFIELD("TEND")               1, true, true,  3, 1,  3, 2,  0, 0}, // #312
  {DBGFIELD("TABORT")             1, true, true,  3, 1,  3, 2,  0, 0}, // #313
  {DBGFIELD("ETND")               1, false, false,  1, 1,  1, 1,  0, 0}, // #314
  {DBGFIELD("NTSTG")              2, false, false,  4, 2,  6, 3,  0, 0}, // #315
  {DBGFIELD("PPA")                1, false, false,  1, 1,  1, 1,  0, 0}, // #316
  {DBGFIELD("FLOGR")              2, true, true,  8, 1, 82, 4,  0, 0}, // #317
  {DBGFIELD("POPCNT")             1, false, false,  1, 1, 18, 2,  0, 0}, // #318
  {DBGFIELD("AEXT128")            1, false, false,  1, 1,  1, 1,  0, 0}, // #319
  {DBGFIELD("ZEXT128")            1, false, false,  1, 1,  1, 1,  0, 0}, // #320
  {DBGFIELD("SRST")               2, false, false,  4, 2, 31, 3,  0, 0}, // #321
  {DBGFIELD("SRSTU")              1, false, false,  1, 1, 92, 2,  0, 0}, // #322
  {DBGFIELD("CUSE")               1, true, true,  3, 1, 32, 3,  0, 0}, // #323
  {DBGFIELD("CFC")                1, false, false,  3, 1, 32, 2,  0, 0}, // #324
  {DBGFIELD("UPT")                2, false, false,  4, 2, 31, 3,  0, 0}, // #325
  {DBGFIELD("CKSM")               1, false, false,  3, 1, 32, 2,  0, 0}, // #326
  {DBGFIELD("CMPSC")              1, false, false,  1, 1, 92, 2,  0, 0}, // #327
  {DBGFIELD("EX_EXRL")            1, true, true,  3, 1,  3, 2,  0, 0}, // #328
  {DBGFIELD("InsnE_InsnRI_InsnRIE_InsnRIL_InsnRILU_InsnRIS_InsnRR_InsnRRE_InsnRRF_InsnRRS_InsnRS_InsnRSE_InsnRSI_InsnRSY_InsnRX_InsnRXE_InsnRXF_InsnRXY_InsnS_InsnSI_InsnSIL_InsnSIY_InsnSS_InsnSSE_InsnSSF") 0, false, false,  0, 0,  0, 0,  0, 0}, // #329
  {DBGFIELD("SelectF128_SelectF32_SelectF64_SelectVR128") 0, false, false,  0, 0,  0, 0,  0, 0}, // #330
  {DBGFIELD("CondStoreF32_CondStoreF32Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #331
  {DBGFIELD("CondStoreF64_CondStoreF64Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #332
  {DBGFIELD("LZDR_LZER")          1, false, false,  1, 1,  1, 1,  0, 0}, // #333
  {DBGFIELD("LZXR")               2, true, true,  8, 1, 48, 4,  0, 0}, // #334
  {DBGFIELD("LER")                1, false, false,  1, 1,  1, 1,  0, 0}, // #335
  {DBGFIELD("LDGR_LDR_LDR32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #336
  {DBGFIELD("LGDR")               1, false, false,  1, 1, 18, 2,  0, 0}, // #337
  {DBGFIELD("LXR")                2, true, true,  8, 1, 48, 4,  0, 0}, // #338
  {DBGFIELD("LTDBR_LTEBR")        1, false, false, 57, 1, 30, 1,  0, 0}, // #339
  {DBGFIELD("LTEBRCompare_LTEBRCompare_VecPseudo") 1, false, false, 57, 1, 30, 1,  0, 0}, // #340
  {DBGFIELD("LTDBRCompare_LTDBRCompare_VecPseudo") 1, false, false, 57, 1, 30, 1,  0, 0}, // #341
  {DBGFIELD("LTXBR")              2, true, true, 19, 1, 233, 4,  0, 0}, // #342
  {DBGFIELD("LTXBRCompare_LTXBRCompare_VecPseudo") 2, true, true, 19, 1, 233, 4,  0, 0}, // #343
  {DBGFIELD("CPSDRdd_CPSDRds")    2, true, true,  8, 1, 76, 4,  0, 0}, // #344
  {DBGFIELD("CPSDRsd_CPSDRss")    2, true, true,  8, 1, 76, 4,  0, 0}, // #345
  {DBGFIELD("LE_LEY")             1, false, false,  3, 1,  2, 1,  0, 0}, // #346
  {DBGFIELD("LD_LDE32_LDY")       1, false, false,  3, 1,  2, 1,  0, 0}, // #347
  {DBGFIELD("LX")                 1, false, false,  3, 1,  2, 1,  0, 0}, // #348
  {DBGFIELD("STD_STDY")           2, false, false,  4, 2, 12, 3,  0, 0}, // #349
  {DBGFIELD("STE_STEY")           2, false, false,  4, 2, 12, 3,  0, 0}, // #350
  {DBGFIELD("STX")                2, false, false,  4, 2,  6, 3,  0, 0}, // #351
  {DBGFIELD("LEDBR_LEDBRA")       1, false, false, 57, 1, 30, 1,  0, 0}, // #352
  {DBGFIELD("LEXBR_LEXBRA")       2, false, false, 58, 1, 237, 3,  0, 0}, // #353
  {DBGFIELD("LDXBR_LDXBRA")       2, false, false, 58, 1, 237, 3,  0, 0}, // #354
  {DBGFIELD("LDEB")               2, false, false, 59, 2, 240, 3,  0, 0}, // #355
  {DBGFIELD("LDEBR")              1, false, false, 57, 1, 30, 1,  0, 0}, // #356
  {DBGFIELD("LXDB_LXEB")          3, true, true, 61, 2, 243, 5,  0, 0}, // #357
  {DBGFIELD("LXDBR_LXEBR")        2, true, true, 19, 1, 248, 4,  0, 0}, // #358
  {DBGFIELD("CEFBR_CEFBRA_CEGBR_CEGBRA") 2, true, true, 63, 2, 252, 4,  0, 0}, // #359
  {DBGFIELD("CDFBR_CDFBRA_CDGBR_CDGBRA") 2, true, true, 63, 2, 252, 4,  0, 0}, // #360
  {DBGFIELD("CXFBR_CXFBRA_CXGBR_CXGBRA") 3, true, true, 65, 2, 256, 5,  0, 0}, // #361
  {DBGFIELD("CELFBR_CELGBR")      2, true, true, 63, 2, 252, 4,  0, 0}, // #362
  {DBGFIELD("CDLFBR_CDLGBR")      2, true, true, 63, 2, 252, 4,  0, 0}, // #363
  {DBGFIELD("CXLFBR_CXLGBR")      3, true, true, 65, 2, 256, 5,  0, 0}, // #364
  {DBGFIELD("CFDBR_CFDBRA_CFEBR_CFEBRA") 2, true, true, 63, 2, 261, 4,  0, 0}, // #365
  {DBGFIELD("CGDBR_CGDBRA_CGEBR_CGEBRA") 2, true, true, 63, 2, 261, 4,  0, 0}, // #366
  {DBGFIELD("CFXBR_CFXBRA_CGXBR_CGXBRA") 3, true, true, 67, 2, 265, 5,  0, 0}, // #367
  {DBGFIELD("CLFEBR")             2, true, true, 63, 2, 270, 4,  0, 0}, // #368
  {DBGFIELD("CLFDBR")             2, true, true, 63, 2, 270, 4,  0, 0}, // #369
  {DBGFIELD("CLGDBR_CLGEBR")      2, true, true, 63, 2, 270, 4,  0, 0}, // #370
  {DBGFIELD("CLFXBR_CLGXBR")      3, true, true, 67, 2, 265, 5,  0, 0}, // #371
  {DBGFIELD("LCDBR_LNDBR_LPDBR")  1, false, false, 57, 1, 30, 1,  0, 0}, // #372
  {DBGFIELD("LCEBR_LNEBR_LPEBR")  1, false, false, 57, 1, 30, 1,  0, 0}, // #373
  {DBGFIELD("LCDFR_LCDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #374
  {DBGFIELD("LNDFR_LNDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #375
  {DBGFIELD("LPDFR_LPDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #376
  {DBGFIELD("LCXBR_LNXBR_LPXBR")  2, true, true, 19, 1, 233, 4,  0, 0}, // #377
  {DBGFIELD("SQDB_SQEB")          2, false, false, 59, 2, 274, 3,  0, 0}, // #378
  {DBGFIELD("SQDBR_SQEBR")        1, false, false, 57, 1, 277, 2,  0, 0}, // #379
  {DBGFIELD("SQXBR")              2, true, true, 19, 1, 279, 4,  0, 0}, // #380
  {DBGFIELD("FIEBR_FIEBRA")       1, false, false, 57, 1, 30, 1,  0, 0}, // #381
  {DBGFIELD("FIDBR_FIDBRA")       1, false, false, 57, 1, 30, 1,  0, 0}, // #382
  {DBGFIELD("FIXBR_FIXBRA")       2, true, true, 19, 1, 283, 4,  0, 0}, // #383
  {DBGFIELD("ADB_AEB")            2, false, false, 59, 2, 240, 3,  0, 0}, // #384
  {DBGFIELD("ADBR_AEBR")          1, false, false, 57, 1, 30, 1,  0, 0}, // #385
  {DBGFIELD("AXBR")               2, true, true, 19, 1, 287, 4,  0, 0}, // #386
  {DBGFIELD("SDB_SEB")            2, false, false, 59, 2, 240, 3,  0, 0}, // #387
  {DBGFIELD("SDBR_SEBR")          1, false, false, 57, 1, 30, 1,  0, 0}, // #388
  {DBGFIELD("SXBR")               2, true, true, 19, 1, 287, 4,  0, 0}, // #389
  {DBGFIELD("MDB_MDEB_MEEB")      2, false, false, 59, 2, 240, 3,  0, 0}, // #390
  {DBGFIELD("MDBR_MDEBR_MEEBR")   1, false, false, 57, 1, 30, 1,  0, 0}, // #391
  {DBGFIELD("MXDB")               3, true, true, 61, 2, 243, 5,  0, 0}, // #392
  {DBGFIELD("MXDBR")              2, true, true, 19, 1, 248, 4,  0, 0}, // #393
  {DBGFIELD("MXBR")               2, true, true, 19, 1, 279, 4,  0, 0}, // #394
  {DBGFIELD("MAEB_MSEB")          3, true, true, 69, 2, 291, 5,  0, 0}, // #395
  {DBGFIELD("MAEBR_MSEBR")        1, true, true, 57, 1, 30, 2,  0, 0}, // #396
  {DBGFIELD("MADB_MSDB")          3, true, true, 69, 2, 291, 5,  0, 0}, // #397
  {DBGFIELD("MADBR_MSDBR")        1, true, true, 57, 1, 30, 2,  0, 0}, // #398
  {DBGFIELD("DDB_DEB")            2, false, false, 59, 2, 274, 3,  0, 0}, // #399
  {DBGFIELD("DDBR_DEBR")          1, false, false, 57, 1, 277, 2,  0, 0}, // #400
  {DBGFIELD("DXBR")               2, true, true, 19, 1, 279, 4,  0, 0}, // #401
  {DBGFIELD("DIDBR_DIEBR")        1, false, false, 57, 1, 277, 2,  0, 0}, // #402
  {DBGFIELD("CDB_CEB_KDB_KEB")    2, false, false, 59, 2, 240, 3,  0, 0}, // #403
  {DBGFIELD("CDBR_CEBR_KDBR_KEBR") 1, false, false, 57, 1, 30, 1,  0, 0}, // #404
  {DBGFIELD("CXBR_KXBR")          2, false, false, 58, 1, 296, 3,  0, 0}, // #405
  {DBGFIELD("TCDB_TCEB")          2, false, false, 59, 2, 299, 3,  0, 0}, // #406
  {DBGFIELD("TCXB")               3, true, true, 61, 2, 243, 5,  0, 0}, // #407
  {DBGFIELD("EFPC")               2, true, true,  4, 2,  1, 4,  0, 0}, // #408
  {DBGFIELD("STFPC")              2, true, true,  4, 2, 302, 4,  0, 0}, // #409
  {DBGFIELD("SFPC")               1, true, true,  3, 1, 303, 3,  0, 0}, // #410
  {DBGFIELD("LFPC")               2, true, true, 16, 1, 156, 4,  0, 0}, // #411
  {DBGFIELD("SFASR")              1, false, false,  1, 1, 92, 2,  0, 0}, // #412
  {DBGFIELD("LFAS")               2, false, false,  4, 2, 31, 3,  0, 0}, // #413
  {DBGFIELD("SRNM_SRNMB_SRNMT")   1, true, true,  1, 1,  4, 2,  0, 0}, // #414
  {DBGFIELD("LTDR_LTER")          1, false, false, 57, 1, 30, 1,  0, 0}, // #415
  {DBGFIELD("LTXR")               2, true, true, 19, 1, 233, 4,  0, 0}, // #416
  {DBGFIELD("LEDR_LRER")          1, false, false, 57, 1, 30, 1,  0, 0}, // #417
  {DBGFIELD("LEXR")               1, false, false, 57, 1, 30, 1,  0, 0}, // #418
  {DBGFIELD("LDXR_LRDR")          1, false, false, 57, 1, 30, 1,  0, 0}, // #419
  {DBGFIELD("LDE")                1, false, false,  3, 1,  2, 1,  0, 0}, // #420
  {DBGFIELD("LDER")               1, false, false,  1, 1,  1, 1,  0, 0}, // #421
  {DBGFIELD("LXD_LXE")            3, true, true, 61, 2, 243, 5,  0, 0}, // #422
  {DBGFIELD("LXDR_LXER")          2, true, true, 19, 1, 248, 4,  0, 0}, // #423
  {DBGFIELD("CEFR_CEGR")          2, true, true, 63, 2, 252, 4,  0, 0}, // #424
  {DBGFIELD("CDFR_CDGR")          2, true, true, 63, 2, 252, 4,  0, 0}, // #425
  {DBGFIELD("CXFR_CXGR")          3, true, true, 65, 2, 256, 5,  0, 0}, // #426
  {DBGFIELD("CFDR_CFER")          2, true, true, 63, 2, 261, 4,  0, 0}, // #427
  {DBGFIELD("CGDR_CGER")          2, true, true, 63, 2, 261, 4,  0, 0}, // #428
  {DBGFIELD("CFXR_CGXR")          3, true, true, 67, 2, 265, 5,  0, 0}, // #429
  {DBGFIELD("THDER_THDR")         1, false, false, 57, 1, 30, 1,  0, 0}, // #430
  {DBGFIELD("TBDR_TBEDR")         1, false, false, 57, 1, 30, 1,  0, 0}, // #431
  {DBGFIELD("LCDR_LNDR_LPDR")     1, false, false, 57, 1, 30, 1,  0, 0}, // #432
  {DBGFIELD("LCER_LNER_LPER")     1, false, false, 57, 1, 30, 1,  0, 0}, // #433
  {DBGFIELD("LCXR_LNXR_LPXR")     2, true, true, 19, 1, 233, 4,  0, 0}, // #434
  {DBGFIELD("HDR_HER")            1, false, false, 57, 1, 30, 1,  0, 0}, // #435
  {DBGFIELD("SQD_SQE")            2, false, false, 59, 2, 274, 3,  0, 0}, // #436
  {DBGFIELD("SQDR_SQER")          1, false, false, 57, 1, 277, 2,  0, 0}, // #437
  {DBGFIELD("SQXR")               2, true, true, 19, 1, 279, 4,  0, 0}, // #438
  {DBGFIELD("FIER")               1, false, false, 57, 1, 30, 1,  0, 0}, // #439
  {DBGFIELD("FIDR")               1, false, false, 57, 1, 30, 1,  0, 0}, // #440
  {DBGFIELD("FIXR")               2, true, true, 19, 1, 283, 4,  0, 0}, // #441
  {DBGFIELD("AD_AE_AU_AW")        2, false, false, 59, 2, 240, 3,  0, 0}, // #442
  {DBGFIELD("ADR_AER_AUR_AWR")    1, false, false, 57, 1, 30, 1,  0, 0}, // #443
  {DBGFIELD("AXR")                2, true, true, 19, 1, 287, 4,  0, 0}, // #444
  {DBGFIELD("SD_SE_SU_SW")        2, false, false, 59, 2, 240, 3,  0, 0}, // #445
  {DBGFIELD("SDR_SER_SUR_SWR")    1, false, false, 57, 1, 30, 1,  0, 0}, // #446
  {DBGFIELD("SXR")                2, true, true, 19, 1, 287, 4,  0, 0}, // #447
  {DBGFIELD("MD_MDE_ME_MEE")      2, false, false, 59, 2, 240, 3,  0, 0}, // #448
  {DBGFIELD("MDER_MDR_MEER_MER")  1, false, false, 57, 1, 30, 1,  0, 0}, // #449
  {DBGFIELD("MXD")                3, true, true, 61, 2, 243, 5,  0, 0}, // #450
  {DBGFIELD("MXDR")               2, true, true, 19, 1, 248, 4,  0, 0}, // #451
  {DBGFIELD("MXR")                2, true, true, 19, 1, 279, 4,  0, 0}, // #452
  {DBGFIELD("MY")                 3, true, true, 61, 2, 243, 5,  0, 0}, // #453
  {DBGFIELD("MYH_MYL")            3, true, true, 69, 2, 306, 5,  0, 0}, // #454
  {DBGFIELD("MYR")                2, true, true, 19, 1, 248, 4,  0, 0}, // #455
  {DBGFIELD("MYHR_MYLR")          1, true, true, 57, 1, 311, 3,  0, 0}, // #456
  {DBGFIELD("MAE_MSE")            3, true, true, 69, 2, 291, 5,  0, 0}, // #457
  {DBGFIELD("MAER_MSER")          1, true, true, 57, 1, 30, 2,  0, 0}, // #458
  {DBGFIELD("MAD_MSD")            3, true, true, 69, 2, 291, 5,  0, 0}, // #459
  {DBGFIELD("MADR_MSDR")          1, true, true, 57, 1, 30, 2,  0, 0}, // #460
  {DBGFIELD("MAYH_MAYL")          3, true, true, 69, 2, 291, 5,  0, 0}, // #461
  {DBGFIELD("MAY")                3, true, true, 61, 2, 95, 4,  0, 0}, // #462
  {DBGFIELD("MAYHR_MAYLR")        1, true, true, 57, 1, 30, 2,  0, 0}, // #463
  {DBGFIELD("MAYR")               2, true, true, 19, 1, 86, 3,  0, 0}, // #464
  {DBGFIELD("DD_DE")              2, false, false, 59, 2, 274, 3,  0, 0}, // #465
  {DBGFIELD("DDR_DER")            1, false, false, 57, 1, 277, 2,  0, 0}, // #466
  {DBGFIELD("DXR")                2, true, true, 19, 1, 279, 4,  0, 0}, // #467
  {DBGFIELD("CD_CE")              2, false, false, 59, 2, 240, 3,  0, 0}, // #468
  {DBGFIELD("CDR_CER")            1, false, false, 57, 1, 30, 1,  0, 0}, // #469
  {DBGFIELD("CXR")                2, false, false, 58, 1, 314, 3,  0, 0}, // #470
  {DBGFIELD("LTDTR")              1, false, false, 36, 1, 317, 2,  0, 0}, // #471
  {DBGFIELD("LTXTR")              2, true, true, 39, 1, 319, 4,  0, 0}, // #472
  {DBGFIELD("LEDTR")              1, false, false, 36, 1, 323, 2,  0, 0}, // #473
  {DBGFIELD("LDXTR")              2, false, false, 33, 1, 325, 3,  0, 0}, // #474
  {DBGFIELD("LDETR")              1, false, false, 36, 1, 317, 2,  0, 0}, // #475
  {DBGFIELD("LXDTR")              2, true, true, 39, 1, 319, 4,  0, 0}, // #476
  {DBGFIELD("CDFTR_CDGTR_CDGTRA") 2, true, true, 36, 2, 328, 4,  0, 0}, // #477
  {DBGFIELD("CXFTR_CXGTR_CXGTRA") 3, true, true, 45, 2, 332, 5,  0, 0}, // #478
  {DBGFIELD("CDLFTR_CDLGTR")      2, true, true, 36, 2, 337, 4,  0, 0}, // #479
  {DBGFIELD("CXLFTR_CXLGTR")      3, true, true, 45, 2, 341, 5,  0, 0}, // #480
  {DBGFIELD("CFDTR_CGDTR_CGDTRA") 2, true, true, 36, 2, 328, 4,  0, 0}, // #481
  {DBGFIELD("CFXTR_CGXTR_CGXTRA") 3, true, true, 33, 2, 346, 5,  0, 0}, // #482
  {DBGFIELD("CLFDTR_CLGDTR")      2, true, true, 36, 2, 337, 4,  0, 0}, // #483
  {DBGFIELD("CLFXTR_CLGXTR")      3, true, true, 33, 2, 351, 5,  0, 0}, // #484
  {DBGFIELD("CDSTR_CDUTR")        2, true, true, 36, 2, 356, 4,  0, 0}, // #485
  {DBGFIELD("CXSTR_CXUTR")        4, true, true, 48, 2, 360, 6,  0, 0}, // #486
  {DBGFIELD("CSDTR_CUDTR")        2, true, true, 36, 2, 356, 4,  0, 0}, // #487
  {DBGFIELD("CSXTR_CUXTR")        4, true, true, 48, 2, 360, 6,  0, 0}, // #488
  {DBGFIELD("CDZT")               2, true, true, 71, 2, 366, 4,  0, 0}, // #489
  {DBGFIELD("CXZT")               4, true, true, 51, 2, 370, 6,  0, 0}, // #490
  {DBGFIELD("CZDT")               4, true, true, 73, 3, 376, 6,  0, 0}, // #491
  {DBGFIELD("CZXT")               4, true, true, 73, 3, 382, 6,  0, 0}, // #492
  {DBGFIELD("CDPT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #493
  {DBGFIELD("CXPT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #494
  {DBGFIELD("CPDT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #495
  {DBGFIELD("CPXT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #496
  {DBGFIELD("PFPO")               1, false, false,  1, 1, 92, 2,  0, 0}, // #497
  {DBGFIELD("FIDTR")              1, false, false, 36, 1, 317, 2,  0, 0}, // #498
  {DBGFIELD("FIXTR")              2, true, true, 39, 1, 319, 4,  0, 0}, // #499
  {DBGFIELD("EEDTR")              2, true, true, 36, 2, 388, 4,  0, 0}, // #500
  {DBGFIELD("EEXTR")              2, true, true, 33, 2, 392, 4,  0, 0}, // #501
  {DBGFIELD("ESDTR")              2, true, true, 36, 2, 388, 4,  0, 0}, // #502
  {DBGFIELD("ESXTR")              3, true, true, 33, 2, 396, 5,  0, 0}, // #503
  {DBGFIELD("ADTR_ADTRA")         1, false, false, 36, 1, 323, 2,  0, 0}, // #504
  {DBGFIELD("AXTR_AXTRA")         2, true, true, 39, 1, 333, 4,  0, 0}, // #505
  {DBGFIELD("SDTR_SDTRA")         1, false, false, 36, 1, 323, 2,  0, 0}, // #506
  {DBGFIELD("SXTR_SXTRA")         2, true, true, 39, 1, 333, 4,  0, 0}, // #507
  {DBGFIELD("MDTR_MDTRA")         1, false, false, 36, 1, 323, 2,  0, 0}, // #508
  {DBGFIELD("MXTR_MXTRA")         2, true, true, 39, 1, 333, 4,  0, 0}, // #509
  {DBGFIELD("DDTR_DDTRA")         1, false, false, 36, 1, 323, 2,  0, 0}, // #510
  {DBGFIELD("DXTR_DXTRA")         2, true, true, 39, 1, 333, 4,  0, 0}, // #511
  {DBGFIELD("QADTR")              1, false, false, 36, 1, 323, 2,  0, 0}, // #512
  {DBGFIELD("QAXTR")              2, true, true, 39, 1, 333, 4,  0, 0}, // #513
  {DBGFIELD("RRDTR")              2, true, true, 36, 2, 328, 4,  0, 0}, // #514
  {DBGFIELD("RRXTR")              3, true, true, 45, 2, 332, 5,  0, 0}, // #515
  {DBGFIELD("SLDT_SRDT")          2, true, true, 76, 2, 401, 4,  0, 0}, // #516
  {DBGFIELD("SLXT_SRXT")          3, true, true, 78, 2, 405, 5,  0, 0}, // #517
  {DBGFIELD("IEDTR")              2, true, true, 36, 2, 337, 4,  0, 0}, // #518
  {DBGFIELD("IEXTR")              3, true, true, 45, 2, 410, 5,  0, 0}, // #519
  {DBGFIELD("CDTR_KDTR")          1, false, false, 36, 1, 338, 2,  0, 0}, // #520
  {DBGFIELD("CXTR_KXTR")          2, false, false, 33, 1, 384, 3,  0, 0}, // #521
  {DBGFIELD("CEDTR")              1, false, false, 36, 1, 415, 2,  0, 0}, // #522
  {DBGFIELD("CEXTR")              2, false, false, 33, 1, 417, 3,  0, 0}, // #523
  {DBGFIELD("TDCDT_TDCET_TDGDT_TDGET") 2, false, false, 76, 2, 420, 3,  0, 0}, // #524
  {DBGFIELD("TDCXT_TDGXT")        2, false, false, 71, 2, 423, 3,  0, 0}, // #525
  {DBGFIELD("VLR_VLR32_VLR64")    0, false, false,  0, 0,  0, 0,  0, 0}, // #526
  {DBGFIELD("VLGV_VLGVB_VLGVF_VLGVG_VLGVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #527
  {DBGFIELD("VLVG_VLVGB_VLVGF_VLVGG_VLVGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #528
  {DBGFIELD("VLVGP_VLVGP32")      0, false, false,  0, 0,  0, 0,  0, 0}, // #529
  {DBGFIELD("VZERO")              0, false, false,  0, 0,  0, 0,  0, 0}, // #530
  {DBGFIELD("VONE")               0, false, false,  0, 0,  0, 0,  0, 0}, // #531
  {DBGFIELD("VGBM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #532
  {DBGFIELD("VGM_VGMB_VGMF_VGMG_VGMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #533
  {DBGFIELD("VREPI_VREPIB_VREPIF_VREPIG_VREPIH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #534
  {DBGFIELD("VLEIB_VLEIF_VLEIG_VLEIH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #535
  {DBGFIELD("VL_VLBB_VLL")        0, false, false,  0, 0,  0, 0,  0, 0}, // #536
  {DBGFIELD("VL32_VL64")          0, false, false,  0, 0,  0, 0,  0, 0}, // #537
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH_VLLEZLF") 0, false, false,  0, 0,  0, 0,  0, 0}, // #538
  {DBGFIELD("VLREP_VLREPB_VLREPF_VLREPG_VLREPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #539
  {DBGFIELD("VLEB_VLEF_VLEG_VLEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #540
  {DBGFIELD("VGEF_VGEG")          0, false, false,  0, 0,  0, 0,  0, 0}, // #541
  {DBGFIELD("VLM")                0, false, false,  0, 0,  0, 0,  0, 0}, // #542
  {DBGFIELD("VLRL_VLRLR")         0, false, false,  0, 0,  0, 0,  0, 0}, // #543
  {DBGFIELD("VST_VST32_VST64_VSTL") 0, false, false,  0, 0,  0, 0,  0, 0}, // #544
  {DBGFIELD("VSTEF_VSTEG")        0, false, false,  0, 0,  0, 0,  0, 0}, // #545
  {DBGFIELD("VSTEB_VSTEH")        0, false, false,  0, 0,  0, 0,  0, 0}, // #546
  {DBGFIELD("VSTM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #547
  {DBGFIELD("VSCEF_VSCEG")        0, false, false,  0, 0,  0, 0,  0, 0}, // #548
  {DBGFIELD("VSTRL_VSTRLR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #549
  {DBGFIELD("VMRH_VMRHB_VMRHF_VMRHG_VMRHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #550
  {DBGFIELD("VMRL_VMRLB_VMRLF_VMRLG_VMRLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #551
  {DBGFIELD("VPERM")              0, false, false,  0, 0,  0, 0,  0, 0}, // #552
  {DBGFIELD("VPDI")               0, false, false,  0, 0,  0, 0,  0, 0}, // #553
  {DBGFIELD("VBPERM")             0, false, false,  0, 0,  0, 0,  0, 0}, // #554
  {DBGFIELD("VREP_VREPB_VREPF_VREPG_VREPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #555
  {DBGFIELD("VSEL")               0, false, false,  0, 0,  0, 0,  0, 0}, // #556
  {DBGFIELD("VPK_VPKF_VPKG_VPKH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #557
  {DBGFIELD("VPKS_VPKSF_VPKSG_VPKSH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #558
  {DBGFIELD("VPKSFS_VPKSGS_VPKSHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #559
  {DBGFIELD("VPKLS_VPKLSF_VPKLSG_VPKLSH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #560
  {DBGFIELD("VPKLSFS_VPKLSGS_VPKLSHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #561
  {DBGFIELD("VSEG_VSEGB_VSEGF_VSEGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #562
  {DBGFIELD("VUPH_VUPHB_VUPHF_VUPHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #563
  {DBGFIELD("VUPL_VUPLB_VUPLF")   0, false, false,  0, 0,  0, 0,  0, 0}, // #564
  {DBGFIELD("VUPLH_VUPLHB_VUPLHF_VUPLHH_VUPLHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #565
  {DBGFIELD("VUPLL_VUPLLB_VUPLLF_VUPLLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #566
  {DBGFIELD("VA_VAB_VAC_VACQ_VAF_VAG_VAH_VAQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #567
  {DBGFIELD("VACC_VACCB_VACCC_VACCCQ_VACCF_VACCG_VACCH_VACCQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #568
  {DBGFIELD("VAVG_VAVGB_VAVGF_VAVGG_VAVGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #569
  {DBGFIELD("VAVGL_VAVGLB_VAVGLF_VAVGLG_VAVGLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #570
  {DBGFIELD("VN_VNC_VNN_VNO_VNX") 0, false, false,  0, 0,  0, 0,  0, 0}, // #571
  {DBGFIELD("VO_VOC")             0, false, false,  0, 0,  0, 0,  0, 0}, // #572
  {DBGFIELD("VCKSM")              0, false, false,  0, 0,  0, 0,  0, 0}, // #573
  {DBGFIELD("VCLZ_VCLZB_VCLZF_VCLZG_VCLZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #574
  {DBGFIELD("VCTZ_VCTZB_VCTZF_VCTZG_VCTZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #575
  {DBGFIELD("VX")                 0, false, false,  0, 0,  0, 0,  0, 0}, // #576
  {DBGFIELD("VGFM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #577
  {DBGFIELD("VGFMA_VGFMAB_VGFMAF_VGFMAG_VGFMAH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #578
  {DBGFIELD("VGFMB_VGFMF_VGFMG_VGFMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #579
  {DBGFIELD("VLC_VLCB_VLCF_VLCG_VLCH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #580
  {DBGFIELD("VLP_VLPB_VLPF_VLPG_VLPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #581
  {DBGFIELD("VMX_VMXB_VMXF_VMXG_VMXH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #582
  {DBGFIELD("VMXL_VMXLB_VMXLF_VMXLG_VMXLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #583
  {DBGFIELD("VMN_VMNB_VMNF_VMNG_VMNH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #584
  {DBGFIELD("VMNL_VMNLB_VMNLF_VMNLG_VMNLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #585
  {DBGFIELD("VMAL_VMALB_VMALF")   0, false, false,  0, 0,  0, 0,  0, 0}, // #586
  {DBGFIELD("VMALE_VMALEB_VMALEF_VMALEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #587
  {DBGFIELD("VMALH_VMALHB_VMALHF_VMALHH_VMALHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #588
  {DBGFIELD("VMALO_VMALOB_VMALOF_VMALOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #589
  {DBGFIELD("VMAO_VMAOB_VMAOF_VMAOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #590
  {DBGFIELD("VMAE_VMAEB_VMAEF_VMAEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #591
  {DBGFIELD("VMAH_VMAHB_VMAHF_VMAHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #592
  {DBGFIELD("VME_VMEB_VMEF_VMEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #593
  {DBGFIELD("VMH_VMHB_VMHF_VMHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #594
  {DBGFIELD("VML_VMLB_VMLF")      0, false, false,  0, 0,  0, 0,  0, 0}, // #595
  {DBGFIELD("VMLE_VMLEB_VMLEF_VMLEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #596
  {DBGFIELD("VMLH_VMLHB_VMLHF_VMLHH_VMLHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #597
  {DBGFIELD("VMLO_VMLOB_VMLOF_VMLOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #598
  {DBGFIELD("VMO_VMOB_VMOF_VMOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #599
  {DBGFIELD("VMSL_VMSLG")         0, false, false,  0, 0,  0, 0,  0, 0}, // #600
  {DBGFIELD("VPOPCT_VPOPCTB_VPOPCTF_VPOPCTG_VPOPCTH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #601
  {DBGFIELD("VERLL_VERLLB_VERLLF_VERLLG_VERLLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #602
  {DBGFIELD("VERLLV_VERLLVB_VERLLVF_VERLLVG_VERLLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #603
  {DBGFIELD("VERIM_VERIMB_VERIMF_VERIMG_VERIMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #604
  {DBGFIELD("VESL_VESLB_VESLF_VESLG_VESLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #605
  {DBGFIELD("VESLV_VESLVB_VESLVF_VESLVG_VESLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #606
  {DBGFIELD("VESRA_VESRAB_VESRAF_VESRAG_VESRAH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #607
  {DBGFIELD("VESRAV_VESRAVB_VESRAVF_VESRAVG_VESRAVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #608
  {DBGFIELD("VESRL_VESRLB_VESRLF_VESRLG_VESRLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #609
  {DBGFIELD("VESRLV_VESRLVB_VESRLVF_VESRLVG_VESRLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #610
  {DBGFIELD("VSL_VSLDB")          0, false, false,  0, 0,  0, 0,  0, 0}, // #611
  {DBGFIELD("VSLB")               0, false, false,  0, 0,  0, 0,  0, 0}, // #612
  {DBGFIELD("VSRA_VSRL")          0, false, false,  0, 0,  0, 0,  0, 0}, // #613
  {DBGFIELD("VSRAB_VSRLB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #614
  {DBGFIELD("VSB_VSBCBI_VSBCBIQ_VSBI_VSBIQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #615
  {DBGFIELD("VSCBI_VSCBIB_VSCBIF_VSCBIG_VSCBIH_VSCBIQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #616
  {DBGFIELD("VS_VSF_VSG_VSH_VSQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #617
  {DBGFIELD("VSUM_VSUMB_VSUMH")   0, false, false,  0, 0,  0, 0,  0, 0}, // #618
  {DBGFIELD("VSUMG_VSUMGF_VSUMGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #619
  {DBGFIELD("VSUMQ_VSUMQF_VSUMQG") 0, false, false,  0, 0,  0, 0,  0, 0}, // #620
  {DBGFIELD("VEC_VECB_VECF_VECG_VECH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #621
  {DBGFIELD("VECL_VECLB_VECLF_VECLG_VECLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #622
  {DBGFIELD("VCEQ_VCEQB_VCEQF_VCEQG_VCEQH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #623
  {DBGFIELD("VCEQBS_VCEQFS_VCEQGS_VCEQHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #624
  {DBGFIELD("VCH_VCHB_VCHF_VCHG_VCHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #625
  {DBGFIELD("VCHBS_VCHFS_VCHGS_VCHHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #626
  {DBGFIELD("VCHL_VCHLB_VCHLF_VCHLG_VCHLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #627
  {DBGFIELD("VCHLBS_VCHLFS_VCHLGS_VCHLHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #628
  {DBGFIELD("VTM")                0, false, false,  0, 0,  0, 0,  0, 0}, // #629
  {DBGFIELD("VCDG_VCDLG")         0, false, false,  0, 0,  0, 0,  0, 0}, // #630
  {DBGFIELD("VCDGB_VCDLGB")       0, false, false,  0, 0,  0, 0,  0, 0}, // #631
  {DBGFIELD("WCDGB_WCDLGB")       0, false, false,  0, 0,  0, 0,  0, 0}, // #632
  {DBGFIELD("VCGD_VCLGD")         0, false, false,  0, 0,  0, 0,  0, 0}, // #633
  {DBGFIELD("VCGDB_VCLGDB")       0, false, false,  0, 0,  0, 0,  0, 0}, // #634
  {DBGFIELD("WCGDB_WCLGDB")       0, false, false,  0, 0,  0, 0,  0, 0}, // #635
  {DBGFIELD("VLDE_VLED")          0, false, false,  0, 0,  0, 0,  0, 0}, // #636
  {DBGFIELD("VLDEB_VLEDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #637
  {DBGFIELD("WLDEB_WLEDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #638
  {DBGFIELD("VFLL_VFLR")          0, false, false,  0, 0,  0, 0,  0, 0}, // #639
  {DBGFIELD("VFLLS_VFLRD")        0, false, false,  0, 0,  0, 0,  0, 0}, // #640
  {DBGFIELD("WFLLS_WFLRD")        0, false, false,  0, 0,  0, 0,  0, 0}, // #641
  {DBGFIELD("WFLLD")              0, false, false,  0, 0,  0, 0,  0, 0}, // #642
  {DBGFIELD("WFLRX")              0, false, false,  0, 0,  0, 0,  0, 0}, // #643
  {DBGFIELD("VFI")                0, false, false,  0, 0,  0, 0,  0, 0}, // #644
  {DBGFIELD("VFIDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #645
  {DBGFIELD("WFIDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #646
  {DBGFIELD("VFISB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #647
  {DBGFIELD("WFISB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #648
  {DBGFIELD("WFIXB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #649
  {DBGFIELD("VFPSO")              0, false, false,  0, 0,  0, 0,  0, 0}, // #650
  {DBGFIELD("VFPSODB_WFPSODB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #651
  {DBGFIELD("VFPSOSB_WFPSOSB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #652
  {DBGFIELD("WFPSOXB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #653
  {DBGFIELD("VFLCDB_VFLNDB_VFLPDB_WFLCDB_WFLNDB_WFLPDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #654
  {DBGFIELD("VFLCSB_VFLNSB_VFLPSB_WFLCSB_WFLNSB_WFLPSB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #655
  {DBGFIELD("WFLCXB_WFLNXB_WFLPXB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #656
  {DBGFIELD("VFMAX_VFMIN")        0, false, false,  0, 0,  0, 0,  0, 0}, // #657
  {DBGFIELD("VFMAXDB_VFMINDB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #658
  {DBGFIELD("WFMAXDB_WFMINDB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #659
  {DBGFIELD("VFMAXSB_VFMINSB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #660
  {DBGFIELD("WFMAXSB_WFMINSB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #661
  {DBGFIELD("WFMAXXB_WFMINXB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #662
  {DBGFIELD("VFTCI")              0, false, false,  0, 0,  0, 0,  0, 0}, // #663
  {DBGFIELD("VFTCIDB_WFTCIDB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #664
  {DBGFIELD("VFTCISB_WFTCISB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #665
  {DBGFIELD("WFTCIXB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #666
  {DBGFIELD("VFA_VFS")            0, false, false,  0, 0,  0, 0,  0, 0}, // #667
  {DBGFIELD("VFADB_VFSDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #668
  {DBGFIELD("WFADB_WFSDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #669
  {DBGFIELD("VFASB_VFSSB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #670
  {DBGFIELD("WFASB_WFSSB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #671
  {DBGFIELD("WFAXB_WFSXB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #672
  {DBGFIELD("VFM")                0, false, false,  0, 0,  0, 0,  0, 0}, // #673
  {DBGFIELD("VFMDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #674
  {DBGFIELD("WFMDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #675
  {DBGFIELD("VFMSB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #676
  {DBGFIELD("WFMSB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #677
  {DBGFIELD("WFMXB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #678
  {DBGFIELD("VFMA_VFMS_VFNMA_VFNMS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #679
  {DBGFIELD("VFMADB_VFMSDB_VFNMADB_VFNMSDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #680
  {DBGFIELD("WFMADB_WFMSDB_WFNMADB_WFNMSDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #681
  {DBGFIELD("VFMASB_VFMSSB_VFNMASB_VFNMSSB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #682
  {DBGFIELD("WFMASB_WFMSSB_WFNMASB_WFNMSSB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #683
  {DBGFIELD("WFMAXB_WFMSXB_WFNMAXB_WFNMSXB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #684
  {DBGFIELD("VFD")                0, false, false,  0, 0,  0, 0,  0, 0}, // #685
  {DBGFIELD("VFDDB_WFDDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #686
  {DBGFIELD("VFDSB_WFDSB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #687
  {DBGFIELD("WFDXB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #688
  {DBGFIELD("VFSQ")               0, false, false,  0, 0,  0, 0,  0, 0}, // #689
  {DBGFIELD("VFSQDB_WFSQDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #690
  {DBGFIELD("VFSQSB_WFSQSB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #691
  {DBGFIELD("WFSQXB")             0, false, false,  0, 0,  0, 0,  0, 0}, // #692
  {DBGFIELD("VFCE_VFCH_VFCHE")    0, false, false,  0, 0,  0, 0,  0, 0}, // #693
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB_VFKEDB_VFKHDB_VFKHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #694
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB_WFKEDB_WFKHDB_WFKHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #695
  {DBGFIELD("VFCESB_VFCHESB_VFCHSB_VFKESB_VFKHESB_VFKHSB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #696
  {DBGFIELD("WFCESB_WFCHESB_WFCHSB_WFKESB_WFKHESB_WFKHSB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #697
  {DBGFIELD("WFCEXB_WFCHEXB_WFCHXB_WFKEXB_WFKHEXB_WFKHXB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #698
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS_VFKEDBS_VFKHDBS_VFKHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #699
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS_WFKEDBS_WFKHDBS_WFKHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #700
  {DBGFIELD("VFCESBS_VFCHESBS_VFCHSBS_VFKESBS_VFKHESBS_VFKHSBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #701
  {DBGFIELD("WFCESBS_WFCHESBS_WFCHSBS_WFKESBS_WFKHESBS_WFKHSBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #702
  {DBGFIELD("WFCEXBS_WFCHEXBS_WFCHXBS_WFKEXBS_WFKHEXBS_WFKHXBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #703
  {DBGFIELD("WFC_WFK")            0, false, false,  0, 0,  0, 0,  0, 0}, // #704
  {DBGFIELD("WFCDB_WFKDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #705
  {DBGFIELD("WFCSB_WFKSB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #706
  {DBGFIELD("WFCXB_WFKXB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #707
  {DBGFIELD("LEFR")               0, false, false,  0, 0,  0, 0,  0, 0}, // #708
  {DBGFIELD("LFER")               0, false, false,  0, 0,  0, 0,  0, 0}, // #709
  {DBGFIELD("VFAE_VFAEB")         0, false, false,  0, 0,  0, 0,  0, 0}, // #710
  {DBGFIELD("VFAEBS")             0, false, false,  0, 0,  0, 0,  0, 0}, // #711
  {DBGFIELD("VFAEF_VFAEH")        0, false, false,  0, 0,  0, 0,  0, 0}, // #712
  {DBGFIELD("VFAEFS_VFAEHS")      0, false, false,  0, 0,  0, 0,  0, 0}, // #713
  {DBGFIELD("VFAEZB_VFAEZF_VFAEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #714
  {DBGFIELD("VFAEZBS_VFAEZFS_VFAEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #715
  {DBGFIELD("VFEE_VFEEB_VFEEF_VFEEH_VFEEZB_VFEEZF_VFEEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #716
  {DBGFIELD("VFEEBS_VFEEFS_VFEEHS_VFEEZBS_VFEEZFS_VFEEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #717
  {DBGFIELD("VFENE_VFENEB_VFENEF_VFENEH_VFENEZB_VFENEZF_VFENEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #718
  {DBGFIELD("VFENEBS_VFENEFS_VFENEHS_VFENEZBS_VFENEZFS_VFENEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #719
  {DBGFIELD("VISTR_VISTRB_VISTRF_VISTRH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #720
  {DBGFIELD("VISTRBS_VISTRFS_VISTRHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #721
  {DBGFIELD("VSTRC_VSTRCB_VSTRCF_VSTRCH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #722
  {DBGFIELD("VSTRCBS_VSTRCFS_VSTRCHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #723
  {DBGFIELD("VSTRCZB_VSTRCZF_VSTRCZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #724
  {DBGFIELD("VSTRCZBS_VSTRCZFS_VSTRCZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #725
  {DBGFIELD("VLIP")               0, false, false,  0, 0,  0, 0,  0, 0}, // #726
  {DBGFIELD("VPKZ")               0, false, false,  0, 0,  0, 0,  0, 0}, // #727
  {DBGFIELD("VUPKZ")              0, false, false,  0, 0,  0, 0,  0, 0}, // #728
  {DBGFIELD("VCVB_VCVBG")         0, false, false,  0, 0,  0, 0,  0, 0}, // #729
  {DBGFIELD("VCVD_VCVDG")         0, false, false,  0, 0,  0, 0,  0, 0}, // #730
  {DBGFIELD("VAP_VSP")            0, false, false,  0, 0,  0, 0,  0, 0}, // #731
  {DBGFIELD("VMP_VMSP")           0, false, false,  0, 0,  0, 0,  0, 0}, // #732
  {DBGFIELD("VDP_VRP")            0, false, false,  0, 0,  0, 0,  0, 0}, // #733
  {DBGFIELD("VSDP")               0, false, false,  0, 0,  0, 0,  0, 0}, // #734
  {DBGFIELD("VSRP")               0, false, false,  0, 0,  0, 0,  0, 0}, // #735
  {DBGFIELD("VPSOP")              0, false, false,  0, 0,  0, 0,  0, 0}, // #736
  {DBGFIELD("VCP_VTP")            0, false, false,  0, 0,  0, 0,  0, 0}, // #737
  {DBGFIELD("EPSW")               1, false, false,  1, 1, 92, 2,  0, 0}, // #738
  {DBGFIELD("LPSW_LPSWE")         2, false, false,  4, 2, 31, 3,  0, 0}, // #739
  {DBGFIELD("IPK")                1, true, true,  1, 1, 18, 3,  0, 0}, // #740
  {DBGFIELD("SPKA")               1, false, true,  3, 1,  3, 2,  0, 0}, // #741
  {DBGFIELD("SSM")                1, false, true,  3, 1,  3, 2,  0, 0}, // #742
  {DBGFIELD("STNSM_STOSM")        2, true, true,  4, 2, 219, 3,  0, 0}, // #743
  {DBGFIELD("IAC")                1, false, false,  1, 1, 18, 2,  0, 0}, // #744
  {DBGFIELD("SAC_SACF")           1, false, true,  3, 1,  3, 2,  0, 0}, // #745
  {DBGFIELD("LCTL_LCTLG")         2, false, false,  4, 2, 31, 3,  0, 0}, // #746
  {DBGFIELD("STCTG_STCTL")        5, true, true, 80, 2, 426, 7,  0, 0}, // #747
  {DBGFIELD("EPAIR_EPAR_ESAIR_ESAR") 1, false, false,  3, 1,  2, 1,  0, 0}, // #748
  {DBGFIELD("SSAIR_SSAR")         1, false, false,  1, 1, 92, 2,  0, 0}, // #749
  {DBGFIELD("ESEA")               1, false, false,  1, 1, 92, 2,  0, 0}, // #750
  {DBGFIELD("SPX")                2, false, false,  4, 2, 31, 3,  0, 0}, // #751
  {DBGFIELD("STPX")               2, false, false,  4, 2, 31, 3,  0, 0}, // #752
  {DBGFIELD("ISKE")               1, false, false,  1, 1, 92, 2,  0, 0}, // #753
  {DBGFIELD("IVSK")               1, false, false,  1, 1, 92, 2,  0, 0}, // #754
  {DBGFIELD("SSKE_SSKEOpt")       1, false, false,  1, 1, 92, 2,  0, 0}, // #755
  {DBGFIELD("RRBE_RRBM")          1, false, false,  1, 1, 92, 2,  0, 0}, // #756
  {DBGFIELD("IRBM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #757
  {DBGFIELD("PFMF")               1, false, false,  1, 1, 92, 2,  0, 0}, // #758
  {DBGFIELD("TB")                 1, false, false,  1, 1, 92, 2,  0, 0}, // #759
  {DBGFIELD("PGIN")               2, false, false,  4, 2, 31, 3,  0, 0}, // #760
  {DBGFIELD("PGOUT")              2, false, false,  4, 2, 31, 3,  0, 0}, // #761
  {DBGFIELD("IPTE_IPTEOpt_IPTEOptOpt") 2, false, false,  4, 2, 31, 3,  0, 0}, // #762
  {DBGFIELD("IDTE_IDTEOpt")       1, false, false,  1, 1, 92, 2,  0, 0}, // #763
  {DBGFIELD("CRDTE_CRDTEOpt")     1, false, false,  1, 1, 92, 2,  0, 0}, // #764
  {DBGFIELD("PTLB")               1, false, false,  1, 1, 92, 2,  0, 0}, // #765
  {DBGFIELD("CSP_CSPG")           2, false, false,  4, 2, 31, 3,  0, 0}, // #766
  {DBGFIELD("LPTEA")              2, false, false,  4, 2, 31, 3,  0, 0}, // #767
  {DBGFIELD("LRA_LRAG_LRAY")      2, false, false,  4, 2, 31, 3,  0, 0}, // #768
  {DBGFIELD("STRAG")              2, false, false,  4, 2, 31, 3,  0, 0}, // #769
  {DBGFIELD("LURA_LURAG")         2, false, false,  4, 2, 31, 3,  0, 0}, // #770
  {DBGFIELD("STURA_STURG")        2, false, false,  4, 2, 31, 3,  0, 0}, // #771
  {DBGFIELD("TPROT")              2, false, false,  4, 2, 31, 3,  0, 0}, // #772
  {DBGFIELD("MVCK_MVCP_MVCS")     1, true, true,  3, 1, 124, 3,  0, 0}, // #773
  {DBGFIELD("MVCDK_MVCSK")        1, true, true,  3, 1, 23, 3,  0, 0}, // #774
  {DBGFIELD("MVCOS")              2, false, false,  4, 2, 31, 3,  0, 0}, // #775
  {DBGFIELD("MVPG")               1, true, true,  3, 1, 32, 3,  0, 0}, // #776
  {DBGFIELD("LASP")               2, false, false,  4, 2, 31, 3,  0, 0}, // #777
  {DBGFIELD("PALB")               1, true, true,  3, 1,  3, 2,  0, 0}, // #778
  {DBGFIELD("PC")                 2, false, false,  4, 2, 31, 3,  0, 0}, // #779
  {DBGFIELD("PR")                 1, false, false,  1, 1, 92, 2,  0, 0}, // #780
  {DBGFIELD("PT_PTI")             1, false, false,  1, 1, 92, 2,  0, 0}, // #781
  {DBGFIELD("RP")                 2, false, false,  4, 2, 31, 3,  0, 0}, // #782
  {DBGFIELD("BSA_BSG")            1, false, false,  1, 1, 92, 2,  0, 0}, // #783
  {DBGFIELD("TAR")                1, false, false,  1, 1, 433, 2,  0, 0}, // #784
  {DBGFIELD("BAKR")               2, false, true,  4, 2, 31, 4,  0, 0}, // #785
  {DBGFIELD("EREG_EREGG")         1, false, false,  1, 1, 92, 2,  0, 0}, // #786
  {DBGFIELD("ESTA_MSTA")          1, false, false,  1, 1, 92, 2,  0, 0}, // #787
  {DBGFIELD("PTFF")               1, false, false,  1, 1, 92, 2,  0, 0}, // #788
  {DBGFIELD("SCK")                2, false, false,  4, 2, 435, 3,  0, 0}, // #789
  {DBGFIELD("SCKPF")              1, false, false,  1, 1, 92, 2,  0, 0}, // #790
  {DBGFIELD("SCKC")               2, false, false,  4, 2, 435, 3,  0, 0}, // #791
  {DBGFIELD("SPT")                2, false, false,  4, 2, 435, 3,  0, 0}, // #792
  {DBGFIELD("STCK_STCKF")         3, true, true, 17, 2, 127, 5,  0, 0}, // #793
  {DBGFIELD("STCKE")              6, true, true, 82, 2, 438, 8,  0, 0}, // #794
  {DBGFIELD("STCKC")              2, false, false,  4, 2, 79, 3,  0, 0}, // #795
  {DBGFIELD("STPT")               2, false, false,  4, 2, 123, 3,  0, 0}, // #796
  {DBGFIELD("STAP")               2, false, false,  4, 2, 31, 3,  0, 0}, // #797
  {DBGFIELD("STIDP")              2, false, false,  4, 2, 31, 3,  0, 0}, // #798
  {DBGFIELD("STSI")               2, false, false,  4, 2, 31, 3,  0, 0}, // #799
  {DBGFIELD("STFL_STFLE")         2, false, false,  4, 2, 31, 3,  0, 0}, // #800
  {DBGFIELD("ECAG")               2, false, false,  4, 2, 31, 3,  0, 0}, // #801
  {DBGFIELD("ECTG")               2, false, false,  4, 2, 31, 3,  0, 0}, // #802
  {DBGFIELD("PTF")                1, false, false,  1, 1, 92, 2,  0, 0}, // #803
  {DBGFIELD("PCKMO")              1, false, false,  1, 1, 92, 2,  0, 0}, // #804
  {DBGFIELD("SVC")                1, false, false,  1, 1, 92, 2,  0, 0}, // #805
  {DBGFIELD("MC")                 1, true, true,  1, 1,  4, 2,  0, 0}, // #806
  {DBGFIELD("DIAG")               1, false, false,  1, 1, 92, 2,  0, 0}, // #807
  {DBGFIELD("TRACE_TRACG")        1, false, false,  1, 1,  1, 1,  0, 0}, // #808
  {DBGFIELD("TRAP2_TRAP4")        1, false, false,  1, 1, 92, 2,  0, 0}, // #809
  {DBGFIELD("SIGP")               1, false, false,  1, 1, 92, 2,  0, 0}, // #810
  {DBGFIELD("SIGA")               2, false, false,  4, 2, 31, 3,  0, 0}, // #811
  {DBGFIELD("SIE")                2, false, false,  4, 2, 31, 3,  0, 0}, // #812
  {DBGFIELD("LPP")                1, false, false,  1, 1,  1, 1,  0, 0}, // #813
  {DBGFIELD("ECPGA")              1, false, false,  1, 1, 92, 2,  0, 0}, // #814
  {DBGFIELD("ECCTR_EPCTR")        1, false, false,  1, 1, 92, 2,  0, 0}, // #815
  {DBGFIELD("LCCTL")              1, false, false,  1, 1, 92, 2,  0, 0}, // #816
  {DBGFIELD("LPCTL_LSCTL")        2, false, false,  4, 2, 31, 3,  0, 0}, // #817
  {DBGFIELD("QCTRI_QSI")          2, false, false,  4, 2, 31, 3,  0, 0}, // #818
  {DBGFIELD("SCCTR_SPCTR")        1, false, false,  1, 1, 92, 2,  0, 0}, // #819
  {DBGFIELD("CSCH_HSCH_RSCH_XSCH") 1, false, false,  1, 1, 92, 2,  0, 0}, // #820
  {DBGFIELD("MSCH_SSCH_STSCH_TSCH") 2, false, false,  4, 2, 31, 3,  0, 0}, // #821
  {DBGFIELD("RCHP")               1, false, false,  1, 1, 92, 2,  0, 0}, // #822
  {DBGFIELD("SCHM")               1, false, false,  1, 1, 92, 2,  0, 0}, // #823
  {DBGFIELD("STCPS_STCRW")        2, false, false,  4, 2, 31, 3,  0, 0}, // #824
  {DBGFIELD("TPI")                2, false, false,  4, 2, 31, 3,  0, 0}, // #825
  {DBGFIELD("SAL")                1, false, false,  1, 1, 92, 2,  0, 0}, // #826
  {DBGFIELD("AGF")                2, false, false,  4, 2, 22, 3,  0, 0}, // #827
  {DBGFIELD("SGF")                2, false, false,  4, 2, 22, 3,  0, 0}, // #828
  {DBGFIELD("KM_KMC_KMCTR_KMF_KMO") 1, false, false,  1, 1, 92, 2,  0, 0}, // #829
  {DBGFIELD("PCC_PPNO")           0, false, false,  0, 0,  0, 0,  0, 0}, // #830
  {DBGFIELD("SelectF128_SelectF32_SelectF64") 1, false, false,  1, 1,  1, 1,  0, 0}, // #831
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #832
  {DBGFIELD("VN_VNC_VNO")         0, false, false,  0, 0,  0, 0,  0, 0}, // #833
  {DBGFIELD("VO")                 0, false, false,  0, 0,  0, 0,  0, 0}, // #834
  {DBGFIELD("VPOPCT")             0, false, false,  0, 0,  0, 0,  0, 0}, // #835
  {DBGFIELD("VFMA_VFMS")          0, false, false,  0, 0,  0, 0,  0, 0}, // #836
  {DBGFIELD("VFMADB_VFMSDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #837
  {DBGFIELD("WFMADB_WFMSDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #838
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #839
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #840
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #841
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #842
  {DBGFIELD("L_LFH_LMux_LRL_LY")  1, false, false,  3, 1,  2, 1,  0, 0}, // #843
  {DBGFIELD("LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false,  1, 1, 49, 2,  0, 0}, // #844
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 2, false, false,  4, 2, 22, 3,  0, 0}, // #845
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 2, false, false,  4, 2,  6, 3,  0, 0}, // #846
  {DBGFIELD("ALSI_ASI")           2, false, false,  4, 2,  6, 3,  0, 0}, // #847
  {DBGFIELD("ALGF")               2, false, false,  4, 2,  6, 3,  0, 0}, // #848
  {DBGFIELD("PCC")                1, false, false,  1, 1, 92, 2,  0, 0}, // #849
  {DBGFIELD("CDFTR")              2, true, true, 36, 2, 446, 4,  0, 0}, // #850
  {DBGFIELD("CXFTR")              3, true, true, 45, 2, 450, 4,  0, 0}, // #851
  {DBGFIELD("CXLFTR")             3, true, true, 45, 2, 454, 5,  0, 0}, // #852
  {DBGFIELD("CFDTR")              2, true, true, 36, 2, 337, 4,  0, 0}, // #853
  {DBGFIELD("CFXTR")              3, true, true, 33, 2, 351, 5,  0, 0}, // #854
  {DBGFIELD("MVCSK")              1, true, true,  3, 1, 459, 4,  0, 0}, // #855
  {DBGFIELD("RISBG_RISBG32")      1, false, false,  1, 1,  1, 1,  0, 0}, // #856
  {DBGFIELD("STCK")               3, true, true, 17, 2, 127, 5,  0, 0}, // #857
}; // ZEC12ModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc Z13ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("ADJDYNALLOC")        1, false, false, 36, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("BRC_BRCAsm_BRCL_BRCLAsm_CallBRCL") 1, false, false,  3, 1,  1, 1,  0, 0}, // #2
  {DBGFIELD("CallJG_J_JAsmE_JAsmH_JAsmHE_JAsmL_JAsmLE_JAsmLH_JAsmM_JAsmNE_JAsmNH_JAsmNHE_JAsmNL_JAsmNLE_JAsmNLH_JAsmNM_JAsmNO_JAsmNP_JAsmNZ_JAsmO_JAsmP_JAsmZ_JG_JGAsmE_JGAsmH_JGAsmHE_JGAsmL_JGAsmLE_JGAsmLH_JGAsmM_JGAsmNE_JGAsmNH_JGAsmNHE_JGAsmNL_JGAsmNLE_JGAsmNLH_JGAsmNM_JGAsmNO_JGAsmNP_JGAsmNZ_JGAsmO_JGAsmP_JGAsmZ") 1, false, false,  3, 1,  1, 1,  0, 0}, // #3
  {DBGFIELD("BC_BCAsm_BCR_BCRAsm_CallBCR") 1, false, false, 57, 1,  1, 1,  0, 0}, // #4
  {DBGFIELD("B_BAsmE_BAsmH_BAsmHE_BAsmL_BAsmLE_BAsmLH_BAsmM_BAsmNE_BAsmNH_BAsmNHE_BAsmNL_BAsmNLE_BAsmNLH_BAsmNM_BAsmNO_BAsmNP_BAsmNZ_BAsmO_BAsmP_BAsmZ_BR_BRAsmE_BRAsmH_BRAsmHE_BRAsmL_BRAsmLE_BRAsmLH_BRAsmM_BRAsmNE_BRAsmNH_BRAsmNHE_BRAsmNL_BRAsmNLE_BRAsmNLH_BRAsmNM_BRAsmNO_BRAsmNP_BRAsmNZ_BRAsmO_BRAsmP_BRAsmZ_CallBR") 1, false, false, 57, 1,  1, 1,  0, 0}, // #5
  {DBGFIELD("BI_BIAsmE_BIAsmH_BIAsmHE_BIAsmL_BIAsmLE_BIAsmLH_BIAsmM_BIAsmNE_BIAsmNH_BIAsmNHE_BIAsmNL_BIAsmNLE_BIAsmNLH_BIAsmNM_BIAsmNO_BIAsmNP_BIAsmNZ_BIAsmO_BIAsmP_BIAsmZ_BIC_BICAsm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #6
  {DBGFIELD("BRCT_BRCTG")         1, false, true, 36, 1,  4, 2,  0, 0}, // #7
  {DBGFIELD("BRCTH")              2, true, true, 84, 2, 48, 4,  0, 0}, // #8
  {DBGFIELD("BCT_BCTG_BCTGR_BCTR") 2, true, true, 84, 2, 48, 4,  0, 0}, // #9
  {DBGFIELD("BRXH_BRXHG_BRXLE_BRXLG_BXH_BXHG_BXLE_BXLEG") 4, true, true, 86, 2, 463, 6,  0, 0}, // #10
  {DBGFIELD("CGIJ_CGIJAsm_CGIJAsmE_CGIJAsmH_CGIJAsmHE_CGIJAsmL_CGIJAsmLE_CGIJAsmLH_CGIJAsmNE_CGIJAsmNH_CGIJAsmNHE_CGIJAsmNL_CGIJAsmNLE_CGIJAsmNLH_CGRJ_CGRJAsm_CGRJAsmE_CGRJAsmH_CGRJAsmHE_CGRJAsmL_CGRJAsmLE_CGRJAsmLH_CGRJAsmNE_CGRJAsmNH_CGRJAsmNHE_CGRJAsmNL_CGRJAsmNLE_CGRJAsmNLH_CIJ_CIJAsm_CIJAsmE_CIJAsmH_CIJAsmHE_CIJAsmL_CIJAsmLE_CIJAsmLH_CIJAsmNE_CIJAsmNH_CIJAsmNHE_CIJAsmNL_CIJAsmNLE_CIJAsmNLH_CLGIJ_CLGIJAsm_CLGIJAsmE_CLGIJAsmH_CLGIJAsmHE_CLGIJAsmL_CLGIJAsmLE_CLGIJAsmLH_CLGIJAsmNE_CLGIJAsmNH_CLGIJAsmNHE_CLGIJAsmNL_CLGIJAsmNLE_CLGIJAsmNLH_CLGRJ_CLGRJAsm_CLGRJAsmE_CLGRJAsmH_CLGRJAsmHE_CLGRJAsmL_CLGRJAsmLE_CLGRJAsmLH_CLGRJAsmNE_CLGRJAsmNH_CLGRJAsmNHE_CLGRJAsmNL_CLGRJAsmNLE_CLGRJAsmNLH_CLIJ_CLIJAsm_CLIJAsmE_CLIJAsmH_CLIJAsmHE_CLIJAsmL_CLIJAsmLE_CLIJAsmLH_CLIJAsmNE_CLIJAsmNH_CLIJAsmNHE_CLIJAsmNL_CLIJAsmNLE_CLIJAsmNLH_CLRJ_CLRJAsm_CLRJAsmE_CLRJAsmH_CLRJAsmHE_CLRJAsmL_CLRJAsmLE_CLRJAsmLH_CLRJAsmNE_CLRJAsmNH_CLRJAsmNHE_CLRJAsmNL_CLRJAsmNLE_CLRJAsmNLH_CRJ_CRJAsm_CRJAsmE_CRJAsmH_CRJAsmHE_CRJAsmL_CRJAsmLE_CRJAsmLH_CRJAsmNE_CRJAsmNH_CRJAsmNHE_CRJAsmNL_CRJAsmNLE_CRJAsmNLH") 1, false, false, 57, 1,  1, 1,  0, 0}, // #11
  {DBGFIELD("CGIB_CGIBAsm_CGIBAsmE_CGIBAsmH_CGIBAsmHE_CGIBAsmL_CGIBAsmLE_CGIBAsmLH_CGIBAsmNE_CGIBAsmNH_CGIBAsmNHE_CGIBAsmNL_CGIBAsmNLE_CGIBAsmNLH_CGIBCall_CGIBReturn_CGRB_CGRBAsm_CGRBAsmE_CGRBAsmH_CGRBAsmHE_CGRBAsmL_CGRBAsmLE_CGRBAsmLH_CGRBAsmNE_CGRBAsmNH_CGRBAsmNHE_CGRBAsmNL_CGRBAsmNLE_CGRBAsmNLH_CGRBCall_CGRBReturn_CIB_CIBAsm_CIBAsmE_CIBAsmH_CIBAsmHE_CIBAsmL_CIBAsmLE_CIBAsmLH_CIBAsmNE_CIBAsmNH_CIBAsmNHE_CIBAsmNL_CIBAsmNLE_CIBAsmNLH_CIBCall_CIBReturn_CLGIB_CLGIBAsm_CLGIBAsmE_CLGIBAsmH_CLGIBAsmHE_CLGIBAsmL_CLGIBAsmLE_CLGIBAsmLH_CLGIBAsmNE_CLGIBAsmNH_CLGIBAsmNHE_CLGIBAsmNL_CLGIBAsmNLE_CLGIBAsmNLH_CLGIBCall_CLGIBReturn_CLGRB_CLGRBAsm_CLGRBAsmE_CLGRBAsmH_CLGRBAsmHE_CLGRBAsmL_CLGRBAsmLE_CLGRBAsmLH_CLGRBAsmNE_CLGRBAsmNH_CLGRBAsmNHE_CLGRBAsmNL_CLGRBAsmNLE_CLGRBAsmNLH_CLGRBCall_CLGRBReturn_CLIB_CLIBAsm_CLIBAsmE_CLIBAsmH_CLIBAsmHE_CLIBAsmL_CLIBAsmLE_CLIBAsmLH_CLIBAsmNE_CLIBAsmNH_CLIBAsmNHE_CLIBAsmNL_CLIBAsmNLE_CLIBAsmNLH_CLIBCall_CLIBReturn_CLRB_CLRBAsm_CLRBAsmE_CLRBAsmH_CLRBAsmHE_CLRBAsmL_CLRBAsmLE_CLRBAsmLH_CLRBAsmNE_CLRBAsmNH_CLRBAsmNHE_CLRBAsmNL_CLRBAsmNLE_CLRBAsmNLH_CLRBCall_CLRBReturn_CRB_CRBAsm_CRBAsmE_CRBAsmH_CRBAsmHE_CRBAsmL_CRBAsmLE_CRBAsmLH_CRBAsmNE_CRBAsmNH_CRBAsmNHE_CRBAsmNL_CRBAsmNLE_CRBAsmNLH_CRBCall_CRBReturn") 2, true, true, 58, 1, 48, 4,  0, 0}, // #12
  {DBGFIELD("CondTrap_Trap")      1, false, false,  3, 1,  1, 1,  0, 0}, // #13
  {DBGFIELD("CGIT_CGITAsm_CGITAsmE_CGITAsmH_CGITAsmHE_CGITAsmL_CGITAsmLE_CGITAsmLH_CGITAsmNE_CGITAsmNH_CGITAsmNHE_CGITAsmNL_CGITAsmNLE_CGITAsmNLH_CGRT_CGRTAsm_CGRTAsmE_CGRTAsmH_CGRTAsmHE_CGRTAsmL_CGRTAsmLE_CGRTAsmLH_CGRTAsmNE_CGRTAsmNH_CGRTAsmNHE_CGRTAsmNL_CGRTAsmNLE_CGRTAsmNLH_CIT_CITAsm_CITAsmE_CITAsmH_CITAsmHE_CITAsmL_CITAsmLE_CITAsmLH_CITAsmNE_CITAsmNH_CITAsmNHE_CITAsmNL_CITAsmNLE_CITAsmNLH_CRT_CRTAsm_CRTAsmE_CRTAsmH_CRTAsmHE_CRTAsmL_CRTAsmLE_CRTAsmLH_CRTAsmNE_CRTAsmNH_CRTAsmNHE_CRTAsmNL_CRTAsmNLE_CRTAsmNLH") 1, false, false, 57, 1,  1, 1,  0, 0}, // #14
  {DBGFIELD("CLGRT_CLGRTAsm_CLGRTAsmE_CLGRTAsmH_CLGRTAsmHE_CLGRTAsmL_CLGRTAsmLE_CLGRTAsmLH_CLGRTAsmNE_CLGRTAsmNH_CLGRTAsmNHE_CLGRTAsmNL_CLGRTAsmNLE_CLGRTAsmNLH_CLRT_CLRTAsm_CLRTAsmE_CLRTAsmH_CLRTAsmHE_CLRTAsmL_CLRTAsmLE_CLRTAsmLH_CLRTAsmNE_CLRTAsmNH_CLRTAsmNHE_CLRTAsmNL_CLRTAsmNLE_CLRTAsmNLH") 1, false, false, 57, 1,  1, 1,  0, 0}, // #15
  {DBGFIELD("CLFIT_CLFITAsm_CLFITAsmE_CLFITAsmH_CLFITAsmHE_CLFITAsmL_CLFITAsmLE_CLFITAsmLH_CLFITAsmNE_CLFITAsmNH_CLFITAsmNHE_CLFITAsmNL_CLFITAsmNLE_CLFITAsmNLH_CLGIT_CLGITAsm_CLGITAsmE_CLGITAsmH_CLGITAsmHE_CLGITAsmL_CLGITAsmLE_CLGITAsmLH_CLGITAsmNE_CLGITAsmNH_CLGITAsmNHE_CLGITAsmNL_CLGITAsmNLE_CLGITAsmNLH") 1, false, false, 57, 1,  1, 1,  0, 0}, // #16
  {DBGFIELD("CLGT_CLGTAsm_CLGTAsmE_CLGTAsmH_CLGTAsmHE_CLGTAsmL_CLGTAsmLE_CLGTAsmLH_CLGTAsmNE_CLGTAsmNH_CLGTAsmNHE_CLGTAsmNL_CLGTAsmNLE_CLGTAsmNLH_CLT_CLTAsm_CLTAsmE_CLTAsmH_CLTAsmHE_CLTAsmL_CLTAsmLE_CLTAsmLH_CLTAsmNE_CLTAsmNH_CLTAsmNHE_CLTAsmNL_CLTAsmNLE_CLTAsmNLH") 2, false, false, 63, 2,  6, 3,  0, 0}, // #17
  {DBGFIELD("BRAS")               3, true, true, 71, 2, 16, 5,  0, 0}, // #18
  {DBGFIELD("BRASL_CallBRASL")    3, true, true, 88, 2, 16, 5,  0, 0}, // #19
  {DBGFIELD("BAS_BASR_CallBASR")  3, true, true, 88, 2, 16, 5,  0, 0}, // #20
  {DBGFIELD("TLS_GDCALL_TLS_LDCALL") 3, true, true, 88, 2, 16, 5,  0, 0}, // #21
  {DBGFIELD("Return")             1, false, true, 57, 1,  4, 2,  0, 0}, // #22
  {DBGFIELD("CondReturn")         1, false, false, 57, 1,  1, 1,  0, 0}, // #23
  {DBGFIELD("Select32_Select32Mux_Select64") 1, false, false, 36, 1,  1, 1,  0, 0}, // #24
  {DBGFIELD("CondStore16_CondStore16Inv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #25
  {DBGFIELD("CondStore16Mux_CondStore16MuxInv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #26
  {DBGFIELD("CondStore32_CondStore32Inv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #27
  {DBGFIELD("CondStore32Mux_CondStore32MuxInv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #28
  {DBGFIELD("CondStore64_CondStore64Inv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #29
  {DBGFIELD("CondStore8_CondStore8Inv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #30
  {DBGFIELD("CondStore8Mux_CondStore8MuxInv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #31
  {DBGFIELD("MVGHI_MVHHI_MVHI")   2, false, false, 63, 2,  6, 3,  0, 0}, // #32
  {DBGFIELD("MVI_MVIY")           2, false, false, 63, 2,  6, 3,  0, 0}, // #33
  {DBGFIELD("MVC")                4, true, true, 90, 2, 469, 6,  0, 0}, // #34
  {DBGFIELD("MVCL_MVCLE_MVCLU")   1, true, true,  1, 1, 32, 3,  0, 0}, // #35
  {DBGFIELD("COPY_TO_REGCLASS_COPY") 1, false, false, 36, 1,  1, 1,  0, 0}, // #36
  {DBGFIELD("EXTRACT_SUBREG")     1, false, false, 36, 1,  1, 1,  0, 0}, // #37
  {DBGFIELD("INSERT_SUBREG")      1, false, false, 36, 1,  1, 1,  0, 0}, // #38
  {DBGFIELD("REG_SEQUENCE")       1, false, false, 36, 1,  1, 1,  0, 0}, // #39
  {DBGFIELD("SUBREG_TO_REG")      1, false, false, 36, 1,  1, 1,  0, 0}, // #40
  {DBGFIELD("L_LCBB_LFH_LMux_LRL_LY") 1, false, false,  1, 1,  2, 1,  0, 0}, // #41
  {DBGFIELD("LG_LGRL")            1, false, false,  1, 1,  2, 1,  0, 0}, // #42
  {DBGFIELD("L128")               1, false, false,  1, 1,  2, 1,  0, 0}, // #43
  {DBGFIELD("LLIHF_LLIHH_LLIHL")  1, false, false, 36, 1,  1, 1,  0, 0}, // #44
  {DBGFIELD("LLILF_LLILH_LLILL")  1, false, false, 36, 1,  1, 1,  0, 0}, // #45
  {DBGFIELD("LGFI_LGHI")          1, false, false, 36, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("LHI_LHIMux")         1, false, false, 36, 1,  1, 1,  0, 0}, // #47
  {DBGFIELD("LR_LRMux")           1, false, false, 36, 1,  1, 1,  0, 0}, // #48
  {DBGFIELD("LZRF_LZRG")          1, false, false,  1, 1,  2, 1,  0, 0}, // #49
  {DBGFIELD("LAT_LFHAT_LGAT")     2, false, false, 63, 2,  6, 3,  0, 0}, // #50
  {DBGFIELD("LT_LTG")             2, false, false, 36, 2,  6, 3,  0, 0}, // #51
  {DBGFIELD("LTGR_LTR")           1, false, false, 36, 1,  1, 1,  0, 0}, // #52
  {DBGFIELD("STG_STGRL")          2, false, false, 63, 2,  6, 3,  0, 0}, // #53
  {DBGFIELD("ST128")              2, false, false, 63, 2,  6, 3,  0, 0}, // #54
  {DBGFIELD("ST_STFH_STMux_STRL_STY") 2, false, false, 63, 2,  6, 3,  0, 0}, // #55
  {DBGFIELD("MVST")               1, true, true,  1, 1, 32, 3,  0, 0}, // #56
  {DBGFIELD("LOCRMux")            1, false, false, 36, 1, 49, 2,  0, 0}, // #57
  {DBGFIELD("LOCFHR_LOCFHRAsm_LOCFHRAsmE_LOCFHRAsmH_LOCFHRAsmHE_LOCFHRAsmL_LOCFHRAsmLE_LOCFHRAsmLH_LOCFHRAsmM_LOCFHRAsmNE_LOCFHRAsmNH_LOCFHRAsmNHE_LOCFHRAsmNL_LOCFHRAsmNLE_LOCFHRAsmNLH_LOCFHRAsmNM_LOCFHRAsmNO_LOCFHRAsmNP_LOCFHRAsmNZ_LOCFHRAsmO_LOCFHRAsmP_LOCFHRAsmZ_LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false, 36, 1, 49, 2,  0, 0}, // #58
  {DBGFIELD("LOCGHI_LOCGHIAsm_LOCGHIAsmE_LOCGHIAsmH_LOCGHIAsmHE_LOCGHIAsmL_LOCGHIAsmLE_LOCGHIAsmLH_LOCGHIAsmM_LOCGHIAsmNE_LOCGHIAsmNH_LOCGHIAsmNHE_LOCGHIAsmNL_LOCGHIAsmNLE_LOCGHIAsmNLH_LOCGHIAsmNM_LOCGHIAsmNO_LOCGHIAsmNP_LOCGHIAsmNZ_LOCGHIAsmO_LOCGHIAsmP_LOCGHIAsmZ_LOCHHI_LOCHHIAsm_LOCHHIAsmE_LOCHHIAsmH_LOCHHIAsmHE_LOCHHIAsmL_LOCHHIAsmLE_LOCHHIAsmLH_LOCHHIAsmM_LOCHHIAsmNE_LOCHHIAsmNH_LOCHHIAsmNHE_LOCHHIAsmNL_LOCHHIAsmNLE_LOCHHIAsmNLH_LOCHHIAsmNM_LOCHHIAsmNO_LOCHHIAsmNP_LOCHHIAsmNZ_LOCHHIAsmO_LOCHHIAsmP_LOCHHIAsmZ_LOCHI_LOCHIAsm_LOCHIAsmE_LOCHIAsmH_LOCHIAsmHE_LOCHIAsmL_LOCHIAsmLE_LOCHIAsmLH_LOCHIAsmM_LOCHIAsmNE_LOCHIAsmNH_LOCHIAsmNHE_LOCHIAsmNL_LOCHIAsmNLE_LOCHIAsmNLH_LOCHIAsmNM_LOCHIAsmNO_LOCHIAsmNP_LOCHIAsmNZ_LOCHIAsmO_LOCHIAsmP_LOCHIAsmZ_LOCHIMux") 1, false, false, 36, 1, 49, 2,  0, 0}, // #59
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCFH_LOCFHAsm_LOCFHAsmE_LOCFHAsmH_LOCFHAsmHE_LOCFHAsmL_LOCFHAsmLE_LOCFHAsmLH_LOCFHAsmM_LOCFHAsmNE_LOCFHAsmNH_LOCFHAsmNHE_LOCFHAsmNL_LOCFHAsmNLE_LOCFHAsmNLH_LOCFHAsmNM_LOCFHAsmNO_LOCFHAsmNP_LOCFHAsmNZ_LOCFHAsmO_LOCFHAsmP_LOCFHAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ_LOCMux") 2, false, false, 36, 2, 22, 3,  0, 0}, // #60
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCFH_STOCFHAsm_STOCFHAsmE_STOCFHAsmH_STOCFHAsmHE_STOCFHAsmL_STOCFHAsmLE_STOCFHAsmLH_STOCFHAsmM_STOCFHAsmNE_STOCFHAsmNH_STOCFHAsmNHE_STOCFHAsmNL_STOCFHAsmNLE_STOCFHAsmNLH_STOCFHAsmNM_STOCFHAsmNO_STOCFHAsmNP_STOCFHAsmNZ_STOCFHAsmO_STOCFHAsmP_STOCFHAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ_STOCMux") 2, false, false, 63, 2,  6, 3,  0, 0}, // #61
  {DBGFIELD("LBR_LGR_LHR")        1, false, false, 36, 1,  1, 1,  0, 0}, // #62
  {DBGFIELD("LGBR_LGFR_LGHR")     1, false, false, 36, 1,  1, 1,  0, 0}, // #63
  {DBGFIELD("LTGF")               2, false, false, 36, 2,  6, 3,  0, 0}, // #64
  {DBGFIELD("LTGFR")              1, false, false, 36, 1,  1, 1,  0, 0}, // #65
  {DBGFIELD("LB_LBH_LBMux")       2, false, false, 36, 2,  6, 3,  0, 0}, // #66
  {DBGFIELD("LH_LHY")             2, false, false, 36, 2,  6, 3,  0, 0}, // #67
  {DBGFIELD("LHH_LHMux_LHRL")     2, false, false, 36, 2,  6, 3,  0, 0}, // #68
  {DBGFIELD("LGB_LGF_LGH")        2, false, false, 36, 2,  6, 3,  0, 0}, // #69
  {DBGFIELD("LGFRL_LGHRL")        2, false, false, 36, 2,  6, 3,  0, 0}, // #70
  {DBGFIELD("LLCR_LLCRMux")       1, false, false, 36, 1,  1, 1,  0, 0}, // #71
  {DBGFIELD("LLHR_LLHRMux")       1, false, false, 36, 1,  1, 1,  0, 0}, // #72
  {DBGFIELD("LLGCR_LLGFR_LLGHR_LLGTR") 1, false, false, 36, 1,  1, 1,  0, 0}, // #73
  {DBGFIELD("LLC_LLCMux")         1, false, false,  1, 1,  2, 1,  0, 0}, // #74
  {DBGFIELD("LLH_LLHMux")         1, false, false,  1, 1,  2, 1,  0, 0}, // #75
  {DBGFIELD("LLCH_LLHH")          2, false, false, 36, 2,  6, 3,  0, 0}, // #76
  {DBGFIELD("LLHRL")              1, false, false,  1, 1,  2, 1,  0, 0}, // #77
  {DBGFIELD("LLGC_LLGF_LLGFRL_LLGH_LLGHRL_LLGT") 1, false, false,  1, 1,  2, 1,  0, 0}, // #78
  {DBGFIELD("LLZRGF")             1, false, false,  1, 1,  2, 1,  0, 0}, // #79
  {DBGFIELD("LLGFAT_LLGTAT")      2, false, false, 63, 2,  6, 3,  0, 0}, // #80
  {DBGFIELD("STC_STCH_STCMux_STCY") 2, false, false, 63, 2,  6, 3,  0, 0}, // #81
  {DBGFIELD("STH_STHH_STHMux_STHRL_STHY") 2, false, false, 63, 2,  6, 3,  0, 0}, // #82
  {DBGFIELD("STCM_STCMH_STCMY")   2, false, false, 63, 2,  6, 3,  0, 0}, // #83
  {DBGFIELD("LM_LMG_LMH_LMY")     5, true, true, 20, 1, 35, 7,  0, 0}, // #84
  {DBGFIELD("LMD")                1, true, true,  1, 1, 32, 3,  0, 0}, // #85
  {DBGFIELD("STM_STMG_STMH_STMY") 5, true, true, 92, 2, 42, 7,  0, 0}, // #86
  {DBGFIELD("LRVGR_LRVR")         1, false, false, 36, 1,  1, 1,  0, 0}, // #87
  {DBGFIELD("LRV_LRVG_LRVH")      2, false, false, 36, 2,  6, 3,  0, 0}, // #88
  {DBGFIELD("STRV_STRVG_STRVH")   2, false, false, 63, 2,  6, 3,  0, 0}, // #89
  {DBGFIELD("MVCIN")              1, true, true,  1, 1, 32, 3,  0, 0}, // #90
  {DBGFIELD("LA_LARL_LAY")        1, false, false, 36, 1,  1, 1,  0, 0}, // #91
  {DBGFIELD("GOT")                1, false, false, 36, 1,  1, 1,  0, 0}, // #92
  {DBGFIELD("LPGR_LPR")           1, false, false, 36, 1, 49, 2,  0, 0}, // #93
  {DBGFIELD("LNGFR_LPGFR")        2, true, false, 33, 1, 17, 4,  0, 0}, // #94
  {DBGFIELD("LNGR_LNR")           1, false, false, 36, 1, 49, 2,  0, 0}, // #95
  {DBGFIELD("LCGR_LCR")           1, false, false, 36, 1,  1, 1,  0, 0}, // #96
  {DBGFIELD("LCGFR")              2, true, false, 33, 1, 48, 4,  0, 0}, // #97
  {DBGFIELD("IC_ICY")             2, false, false, 36, 2,  6, 3,  0, 0}, // #98
  {DBGFIELD("IC32_IC32Y")         2, false, false, 36, 2,  6, 3,  0, 0}, // #99
  {DBGFIELD("ICM_ICMH_ICMY")      2, false, false, 36, 2,  6, 3,  0, 0}, // #100
  {DBGFIELD("IIFMux_IIHMux_IILMux") 1, false, false, 36, 1,  1, 1,  0, 0}, // #101
  {DBGFIELD("IIHF_IIHF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #102
  {DBGFIELD("IIHH_IIHH64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #103
  {DBGFIELD("IIHL_IIHL64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #104
  {DBGFIELD("IILF_IILF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #105
  {DBGFIELD("IILH_IILH64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #106
  {DBGFIELD("IILL_IILL64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #107
  {DBGFIELD("A_AY")               2, false, false, 36, 2,  6, 3,  0, 0}, // #108
  {DBGFIELD("AH_AHY")             2, false, false, 36, 2, 22, 3,  0, 0}, // #109
  {DBGFIELD("AIH")                1, false, false, 36, 1,  1, 1,  0, 0}, // #110
  {DBGFIELD("AFI_AFIMux")         1, false, false, 36, 1,  1, 1,  0, 0}, // #111
  {DBGFIELD("AG")                 2, false, false, 36, 2,  6, 3,  0, 0}, // #112
  {DBGFIELD("AGFI")               1, false, false, 36, 1,  1, 1,  0, 0}, // #113
  {DBGFIELD("AGHI_AGHIK")         1, false, false, 36, 1,  1, 1,  0, 0}, // #114
  {DBGFIELD("AGR_AGRK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #115
  {DBGFIELD("AHI_AHIK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #116
  {DBGFIELD("AHIMux_AHIMuxK")     1, false, false, 36, 1,  1, 1,  0, 0}, // #117
  {DBGFIELD("AL_ALY")             2, false, false, 36, 2,  6, 3,  0, 0}, // #118
  {DBGFIELD("ALFI_ALHSIK")        1, false, false, 36, 1,  1, 1,  0, 0}, // #119
  {DBGFIELD("ALG_ALGF")           2, false, false, 36, 2,  6, 3,  0, 0}, // #120
  {DBGFIELD("ALGHSIK")            1, false, false, 36, 1,  1, 1,  0, 0}, // #121
  {DBGFIELD("ALGFI_ALGFR")        1, false, false, 36, 1,  1, 1,  0, 0}, // #122
  {DBGFIELD("ALGR_ALGRK")         1, false, false, 36, 1,  1, 1,  0, 0}, // #123
  {DBGFIELD("ALR_ALRK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #124
  {DBGFIELD("AR_ARK")             1, false, false, 36, 1,  1, 1,  0, 0}, // #125
  {DBGFIELD("AHHHR_ALHHHR")       1, false, false, 36, 1,  1, 1,  0, 0}, // #126
  {DBGFIELD("AHHLR_ALHHLR")       1, false, false, 36, 1, 49, 2,  0, 0}, // #127
  {DBGFIELD("ALSIH_ALSIHN")       1, false, false, 36, 1,  1, 1,  0, 0}, // #128
  {DBGFIELD("AGSI_ALGSI_ALSI_ASI") 2, false, false, 63, 2,  6, 3,  0, 0}, // #129
  {DBGFIELD("ALC_ALCG")           2, true, true, 36, 2, 22, 4,  0, 0}, // #130
  {DBGFIELD("ALCGR_ALCR")         1, true, true, 36, 1, 49, 3,  0, 0}, // #131
  {DBGFIELD("AGF_AGH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #132
  {DBGFIELD("AGFR")               1, false, false, 36, 1, 49, 2,  0, 0}, // #133
  {DBGFIELD("S_SG_SY")            2, false, false, 36, 2,  6, 3,  0, 0}, // #134
  {DBGFIELD("SH_SHY")             2, false, false, 36, 2, 22, 3,  0, 0}, // #135
  {DBGFIELD("SGR_SGRK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #136
  {DBGFIELD("SLFI")               1, false, false, 36, 1,  1, 1,  0, 0}, // #137
  {DBGFIELD("SL_SLG_SLGF_SLY")    2, false, false, 36, 2,  6, 3,  0, 0}, // #138
  {DBGFIELD("SLGFI_SLGFR")        1, false, false, 36, 1,  1, 1,  0, 0}, // #139
  {DBGFIELD("SLGR_SLGRK")         1, false, false, 36, 1,  1, 1,  0, 0}, // #140
  {DBGFIELD("SLR_SLRK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #141
  {DBGFIELD("SR_SRK")             1, false, false, 36, 1,  1, 1,  0, 0}, // #142
  {DBGFIELD("SHHHR_SLHHHR")       1, false, false, 36, 1,  1, 1,  0, 0}, // #143
  {DBGFIELD("SHHLR_SLHHLR")       1, false, false, 36, 1, 49, 2,  0, 0}, // #144
  {DBGFIELD("SLB_SLBG")           2, true, true, 36, 2, 22, 4,  0, 0}, // #145
  {DBGFIELD("SLBGR_SLBR")         1, true, true, 36, 1, 49, 3,  0, 0}, // #146
  {DBGFIELD("SGF_SGH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #147
  {DBGFIELD("SGFR")               1, false, false, 36, 1, 49, 2,  0, 0}, // #148
  {DBGFIELD("N_NG_NY")            2, false, false, 36, 2,  6, 3,  0, 0}, // #149
  {DBGFIELD("NGR_NGRK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #150
  {DBGFIELD("NIFMux_NIHMux_NILMux") 1, false, false, 36, 1,  1, 1,  0, 0}, // #151
  {DBGFIELD("NI_NIY")             2, false, false, 63, 2,  6, 3,  0, 0}, // #152
  {DBGFIELD("NIHF_NIHF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #153
  {DBGFIELD("NIHH_NIHH64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #154
  {DBGFIELD("NIHL_NIHL64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #155
  {DBGFIELD("NILF_NILF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #156
  {DBGFIELD("NILH_NILH64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #157
  {DBGFIELD("NILL_NILL64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #158
  {DBGFIELD("NR_NRK")             1, false, false, 36, 1,  1, 1,  0, 0}, // #159
  {DBGFIELD("NC")                 3, true, false, 94, 2, 55, 5,  0, 0}, // #160
  {DBGFIELD("O_OG_OY")            2, false, false, 36, 2,  6, 3,  0, 0}, // #161
  {DBGFIELD("OGR_OGRK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #162
  {DBGFIELD("OI_OIY")             2, false, false, 63, 2,  6, 3,  0, 0}, // #163
  {DBGFIELD("OIFMux_OIHMux_OILMux") 1, false, false, 36, 1,  1, 1,  0, 0}, // #164
  {DBGFIELD("OIHF_OIHF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #165
  {DBGFIELD("OIHH_OIHH64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #166
  {DBGFIELD("OIHL_OIHL64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #167
  {DBGFIELD("OILF_OILF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #168
  {DBGFIELD("OILH_OILH64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #169
  {DBGFIELD("OILL_OILL64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #170
  {DBGFIELD("OR_ORK")             1, false, false, 36, 1,  1, 1,  0, 0}, // #171
  {DBGFIELD("OC")                 3, true, false, 94, 2, 55, 5,  0, 0}, // #172
  {DBGFIELD("X_XG_XY")            2, false, false, 36, 2,  6, 3,  0, 0}, // #173
  {DBGFIELD("XI_XIY")             2, false, false, 63, 2,  6, 3,  0, 0}, // #174
  {DBGFIELD("XIFMux")             1, false, false, 36, 1,  1, 1,  0, 0}, // #175
  {DBGFIELD("XGR_XGRK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #176
  {DBGFIELD("XIHF_XIHF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #177
  {DBGFIELD("XILF_XILF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #178
  {DBGFIELD("XR_XRK")             1, false, false, 36, 1,  1, 1,  0, 0}, // #179
  {DBGFIELD("XC")                 3, true, false, 94, 2, 55, 5,  0, 0}, // #180
  {DBGFIELD("MS_MSGF_MSY")        2, false, false, 36, 2, 60, 3,  0, 0}, // #181
  {DBGFIELD("MSFI_MSR")           1, false, false, 36, 1, 63, 2,  0, 0}, // #182
  {DBGFIELD("MSG")                2, false, false, 36, 2, 65, 3,  0, 0}, // #183
  {DBGFIELD("MSGR")               1, false, false, 36, 1, 29, 2,  0, 0}, // #184
  {DBGFIELD("MSGFI_MSGFR")        1, false, false, 36, 1, 63, 2,  0, 0}, // #185
  {DBGFIELD("MLG")                2, true, true, 33, 2, 475, 4,  0, 0}, // #186
  {DBGFIELD("MLGR")               1, true, true, 33, 1, 447, 3,  0, 0}, // #187
  {DBGFIELD("MGHI")               1, false, false, 36, 1, 77, 2,  0, 0}, // #188
  {DBGFIELD("MHI")                1, false, false, 36, 1, 77, 2,  0, 0}, // #189
  {DBGFIELD("MH_MHY")             2, false, false, 36, 2, 79, 3,  0, 0}, // #190
  {DBGFIELD("MLR_MR")             1, true, true, 33, 1, 479, 3,  0, 0}, // #191
  {DBGFIELD("M_MFY_ML")           2, true, true, 33, 2, 482, 4,  0, 0}, // #192
  {DBGFIELD("MGH")                0, false, false,  0, 0,  0, 0,  0, 0}, // #193
  {DBGFIELD("MG")                 0, false, false,  0, 0,  0, 0,  0, 0}, // #194
  {DBGFIELD("MGRK")               0, false, false,  0, 0,  0, 0,  0, 0}, // #195
  {DBGFIELD("MSC")                0, false, false,  0, 0,  0, 0,  0, 0}, // #196
  {DBGFIELD("MSGC")               0, false, false,  0, 0,  0, 0,  0, 0}, // #197
  {DBGFIELD("MSRKC")              0, false, false,  0, 0,  0, 0,  0, 0}, // #198
  {DBGFIELD("MSGRKC")             0, false, false,  0, 0,  0, 0,  0, 0}, // #199
  {DBGFIELD("DR")                 2, true, true, 39, 1, 397, 4,  0, 0}, // #200
  {DBGFIELD("D")                  3, true, true, 45, 2, 486, 5,  0, 0}, // #201
  {DBGFIELD("DSGFR_DSGR")         1, true, true, 33, 1, 326, 3,  0, 0}, // #202
  {DBGFIELD("DSG_DSGF")           2, true, true, 33, 2, 491, 4,  0, 0}, // #203
  {DBGFIELD("DLR")                2, true, true, 39, 1, 397, 4,  0, 0}, // #204
  {DBGFIELD("DLGR")               2, true, true, 39, 1, 325, 4,  0, 0}, // #205
  {DBGFIELD("DL_DLG")             3, true, true, 45, 2, 486, 5,  0, 0}, // #206
  {DBGFIELD("SLL_SLLG_SLLK")      1, false, false, 36, 1,  1, 1,  0, 0}, // #207
  {DBGFIELD("SRL_SRLG_SRLK")      1, false, false, 36, 1,  1, 1,  0, 0}, // #208
  {DBGFIELD("SRA_SRAG_SRAK")      1, false, false, 36, 1,  1, 1,  0, 0}, // #209
  {DBGFIELD("SLA_SLAG_SLAK")      1, false, false, 36, 1,  1, 1,  0, 0}, // #210
  {DBGFIELD("SLDA_SLDL_SRDA_SRDL") 5, true, true, 45, 2, 120, 7,  0, 0}, // #211
  {DBGFIELD("RLL_RLLG")           2, false, false, 36, 2, 22, 3,  0, 0}, // #212
  {DBGFIELD("RISBG_RISBG32_RISBGN") 1, false, false, 36, 1,  1, 1,  0, 0}, // #213
  {DBGFIELD("RISBHG_RISBHH_RISBHL") 1, false, false, 36, 1,  1, 1,  0, 0}, // #214
  {DBGFIELD("RISBLG_RISBLH_RISBLL") 1, false, false, 36, 1,  1, 1,  0, 0}, // #215
  {DBGFIELD("RISBMux")            1, false, false, 36, 1,  1, 1,  0, 0}, // #216
  {DBGFIELD("RNSBG_ROSBG_RXSBG")  2, true, false, 33, 1, 17, 4,  0, 0}, // #217
  {DBGFIELD("C_CG_CMux_CRL_CY")   2, false, false, 63, 2,  6, 3,  0, 0}, // #218
  {DBGFIELD("CFI_CFIMux_CHI_CHIMux") 1, false, false, 57, 1,  1, 1,  0, 0}, // #219
  {DBGFIELD("CGFI_CGHI")          1, false, false, 57, 1,  1, 1,  0, 0}, // #220
  {DBGFIELD("CGHSI_CGRL")         2, false, false, 63, 2,  6, 3,  0, 0}, // #221
  {DBGFIELD("CGR_CR")             1, false, false, 57, 1,  1, 1,  0, 0}, // #222
  {DBGFIELD("CIH")                1, false, false, 57, 1,  1, 1,  0, 0}, // #223
  {DBGFIELD("CHF_CHSI")           2, false, false, 63, 2,  6, 3,  0, 0}, // #224
  {DBGFIELD("CL_CLFHSI_CLMux_CLY") 2, false, false, 63, 2,  6, 3,  0, 0}, // #225
  {DBGFIELD("CLFI_CLFIMux")       1, false, false, 57, 1,  1, 1,  0, 0}, // #226
  {DBGFIELD("CLG_CLGHRL_CLGHSI")  2, false, false, 63, 2,  6, 3,  0, 0}, // #227
  {DBGFIELD("CLGF_CLGFRL")        2, false, false, 63, 2,  6, 3,  0, 0}, // #228
  {DBGFIELD("CLGFI_CLGFR")        1, false, false, 57, 1,  1, 1,  0, 0}, // #229
  {DBGFIELD("CLGR")               1, false, false, 57, 1,  1, 1,  0, 0}, // #230
  {DBGFIELD("CLGRL")              2, false, false, 63, 2,  6, 3,  0, 0}, // #231
  {DBGFIELD("CLHF_CLHHSI_CLHRL")  2, false, false, 63, 2,  6, 3,  0, 0}, // #232
  {DBGFIELD("CLIH")               1, false, false, 57, 1,  1, 1,  0, 0}, // #233
  {DBGFIELD("CLI_CLIY")           2, false, false, 63, 2,  6, 3,  0, 0}, // #234
  {DBGFIELD("CLR")                1, false, false, 57, 1,  1, 1,  0, 0}, // #235
  {DBGFIELD("CLRL")               2, false, false, 63, 2,  6, 3,  0, 0}, // #236
  {DBGFIELD("CHHR_CLHHR")         1, false, false, 57, 1,  1, 1,  0, 0}, // #237
  {DBGFIELD("CHLR_CLHLR")         1, false, false, 57, 1, 49, 2,  0, 0}, // #238
  {DBGFIELD("CH_CHRL_CHY")        2, false, false, 63, 2, 22, 3,  0, 0}, // #239
  {DBGFIELD("CGH_CGHRL")          2, false, false, 63, 2, 22, 3,  0, 0}, // #240
  {DBGFIELD("CHHSI")              3, true, false, 96, 3, 21, 5,  0, 0}, // #241
  {DBGFIELD("CGF_CGFRL")          2, false, false, 63, 2, 22, 3,  0, 0}, // #242
  {DBGFIELD("CGFR")               1, false, false, 57, 1, 49, 2,  0, 0}, // #243
  {DBGFIELD("CLC")                3, true, false, 94, 2, 127, 5,  0, 0}, // #244
  {DBGFIELD("CLCL_CLCLE_CLCLU")   1, true, true,  1, 1, 32, 3,  0, 0}, // #245
  {DBGFIELD("CLST")               1, true, true,  1, 1, 32, 3,  0, 0}, // #246
  {DBGFIELD("TM_TMY")             2, false, false, 63, 2,  6, 3,  0, 0}, // #247
  {DBGFIELD("TMHMux_TMLMux")      1, false, false, 57, 1,  1, 1,  0, 0}, // #248
  {DBGFIELD("TMHH_TMHH64")        1, false, false, 57, 1,  1, 1,  0, 0}, // #249
  {DBGFIELD("TMHL_TMHL64")        1, false, false, 57, 1,  1, 1,  0, 0}, // #250
  {DBGFIELD("TMLH_TMLH64")        1, false, false, 57, 1,  1, 1,  0, 0}, // #251
  {DBGFIELD("TMLL_TMLL64")        1, false, false, 57, 1,  1, 1,  0, 0}, // #252
  {DBGFIELD("CLM_CLMH_CLMY")      2, false, false, 63, 2, 22, 3,  0, 0}, // #253
  {DBGFIELD("PFD_PFDRL")          1, false, false,  1, 1,  2, 1,  0, 0}, // #254
  {DBGFIELD("BPP")                1, false, false, 57, 1, 49, 2,  0, 0}, // #255
  {DBGFIELD("BPRP")               1, false, true, 57, 1,  4, 2,  0, 0}, // #256
  {DBGFIELD("NIAI")               1, false, false, 57, 1,  1, 1,  0, 0}, // #257
  {DBGFIELD("Serialize")          1, false, true, 57, 1,  4, 2,  0, 0}, // #258
  {DBGFIELD("LAA_LAAG")           2, false, false, 63, 2,  6, 3,  0, 0}, // #259
  {DBGFIELD("LAAL_LAALG")         2, false, false, 63, 2,  6, 3,  0, 0}, // #260
  {DBGFIELD("LAN_LANG")           2, false, false, 63, 2,  6, 3,  0, 0}, // #261
  {DBGFIELD("LAO_LAOG")           2, false, false, 63, 2,  6, 3,  0, 0}, // #262
  {DBGFIELD("LAX_LAXG")           2, false, false, 63, 2,  6, 3,  0, 0}, // #263
  {DBGFIELD("TS")                 2, false, true, 63, 2,  6, 4,  0, 0}, // #264
  {DBGFIELD("CS_CSG_CSY")         3, true, true, 96, 3, 21, 5,  0, 0}, // #265
  {DBGFIELD("CDS_CDSY")           6, true, true, 99, 3, 132, 8,  0, 0}, // #266
  {DBGFIELD("CDSG")               9, true, true, 102, 3, 495, 11,  0, 0}, // #267
  {DBGFIELD("CSST")               2, false, false, 36, 2, 31, 3,  0, 0}, // #268
  {DBGFIELD("PLO")                1, true, true,  1, 1, 32, 3,  0, 0}, // #269
  {DBGFIELD("LPQ")                2, true, true,  8, 1, 150, 4,  0, 0}, // #270
  {DBGFIELD("STPQ")               3, true, true, 67, 2, 21, 5,  0, 0}, // #271
  {DBGFIELD("LPD_LPDG")           2, true, true,  8, 1, 150, 4,  0, 0}, // #272
  {DBGFIELD("TR")                 1, true, true,  1, 1, 32, 3,  0, 0}, // #273
  {DBGFIELD("TRT")                5, true, true, 105, 2, 160, 7,  0, 0}, // #274
  {DBGFIELD("TRTR")               2, false, false, 36, 2, 31, 3,  0, 0}, // #275
  {DBGFIELD("TRE_TRTE_TRTEOpt_TRTRE_TRTREOpt") 1, false, false, 36, 1, 92, 2,  0, 0}, // #276
  {DBGFIELD("TROO_TROOOpt_TROT_TROTOpt_TRTO_TRTOOpt_TRTT_TRTTOpt") 1, false, false,  1, 1, 32, 2,  0, 0}, // #277
  {DBGFIELD("CU12_CU12Opt_CU14_CU14Opt_CU21_CU21Opt_CU24_CU24Opt_CU41_CU42") 1, false, false, 36, 1, 92, 2,  0, 0}, // #278
  {DBGFIELD("CUTFU_CUTFUOpt_CUUTF_CUUTFOpt") 1, false, false, 36, 1, 92, 2,  0, 0}, // #279
  {DBGFIELD("KM_KMA_KMC_KMCTR_KMF_KMO") 0, false, false,  0, 0,  0, 0,  0, 0}, // #280
  {DBGFIELD("KIMD_KLMD_KMAC")     1, false, false, 36, 1, 92, 2,  0, 0}, // #281
  {DBGFIELD("PCC_PPNO_PRNO")      0, false, false,  0, 0,  0, 0,  0, 0}, // #282
  {DBGFIELD("LGG")                0, false, false,  0, 0,  0, 0,  0, 0}, // #283
  {DBGFIELD("LLGFSG")             0, false, false,  0, 0,  0, 0,  0, 0}, // #284
  {DBGFIELD("LGSC_STGSC")         0, false, false,  0, 0,  0, 0,  0, 0}, // #285
  {DBGFIELD("CVBG")               5, true, true, 107, 3, 506, 7,  0, 0}, // #286
  {DBGFIELD("CVB_CVBY")           3, true, true, 110, 3, 513, 5,  0, 0}, // #287
  {DBGFIELD("CVDG")               6, true, true, 113, 3, 518, 8,  0, 0}, // #288
  {DBGFIELD("CVD_CVDY")           4, true, true, 116, 3, 29, 6,  0, 0}, // #289
  {DBGFIELD("MVO")                1, true, true,  1, 1, 39, 3,  0, 0}, // #290
  {DBGFIELD("MVN_MVZ")            1, true, true,  1, 1, 32, 3,  0, 0}, // #291
  {DBGFIELD("PACK_PKA_PKU")       1, true, true,  1, 1, 32, 3,  0, 0}, // #292
  {DBGFIELD("UNPKA_UNPKU")        1, true, true,  1, 1, 66, 3,  0, 0}, // #293
  {DBGFIELD("UNPK")               3, true, false, 94, 2, 127, 5,  0, 0}, // #294
  {DBGFIELD("AP_SP_ZAP")          5, true, true, 119, 3, 526, 7,  0, 0}, // #295
  {DBGFIELD("DP_MP")              6, true, true, 122, 3, 533, 8,  0, 0}, // #296
  {DBGFIELD("SRP")                5, true, true, 107, 3, 541, 7,  0, 0}, // #297
  {DBGFIELD("CP")                 3, true, true, 125, 2, 149, 5,  0, 0}, // #298
  {DBGFIELD("TP")                 2, true, false, 111, 2,  1, 4,  0, 0}, // #299
  {DBGFIELD("ED_EDMK")            1, true, true,  1, 1, 32, 3,  0, 0}, // #300
  {DBGFIELD("CPYA_EAR_SAR")       1, false, false,  1, 1,  2, 1,  0, 0}, // #301
  {DBGFIELD("LAE_LAEY")           2, true, false, 36, 2, 220, 4,  0, 0}, // #302
  {DBGFIELD("LAM_LAMY_STAM_STAMY") 1, true, true,  1, 1, 32, 3,  0, 0}, // #303
  {DBGFIELD("IPM")                1, false, true, 36, 1, 18, 3,  0, 0}, // #304
  {DBGFIELD("SPM")                1, false, true,  1, 1,  3, 2,  0, 0}, // #305
  {DBGFIELD("BAL_BALR")           3, true, true, 88, 2, 548, 5,  0, 0}, // #306
  {DBGFIELD("TAM")                1, false, false, 57, 1,  1, 1,  0, 0}, // #307
  {DBGFIELD("SAM24_SAM31_SAM64")  1, false, true, 57, 1, 49, 3,  0, 0}, // #308
  {DBGFIELD("BSM")                2, true, true, 84, 2, 48, 4,  0, 0}, // #309
  {DBGFIELD("BASSM")              3, true, true, 88, 2, 16, 5,  0, 0}, // #310
  {DBGFIELD("TBEGIN_TBEGINC_TBEGIN_nofloat") 7, true, true, 127, 2, 224, 9,  0, 0}, // #311
  {DBGFIELD("TEND")               1, true, true, 57, 1,  4, 2,  0, 0}, // #312
  {DBGFIELD("TABORT")             1, true, true,  1, 1,  3, 2,  0, 0}, // #313
  {DBGFIELD("ETND")               1, false, false, 36, 1,  1, 1,  0, 0}, // #314
  {DBGFIELD("NTSTG")              2, false, false, 63, 2,  6, 3,  0, 0}, // #315
  {DBGFIELD("PPA")                1, false, false, 57, 1,  1, 1,  0, 0}, // #316
  {DBGFIELD("FLOGR")              2, true, true, 33, 1, 553, 4,  0, 0}, // #317
  {DBGFIELD("POPCNT")             1, false, false, 36, 1, 18, 2,  0, 0}, // #318
  {DBGFIELD("AEXT128")            1, false, false, 36, 1,  1, 1,  0, 0}, // #319
  {DBGFIELD("ZEXT128")            1, false, false, 36, 1,  1, 1,  0, 0}, // #320
  {DBGFIELD("SRST")               2, false, false, 36, 2, 31, 3,  0, 0}, // #321
  {DBGFIELD("SRSTU")              1, false, false, 36, 1, 92, 2,  0, 0}, // #322
  {DBGFIELD("CUSE")               1, true, true,  1, 1, 32, 3,  0, 0}, // #323
  {DBGFIELD("CFC")                1, false, false,  1, 1, 32, 2,  0, 0}, // #324
  {DBGFIELD("UPT")                2, false, false, 63, 2, 31, 3,  0, 0}, // #325
  {DBGFIELD("CKSM")               1, false, false,  1, 1, 32, 2,  0, 0}, // #326
  {DBGFIELD("CMPSC")              1, false, false, 36, 1, 92, 2,  0, 0}, // #327
  {DBGFIELD("EX_EXRL")            1, true, true, 57, 1,  4, 2,  0, 0}, // #328
  {DBGFIELD("InsnE_InsnRI_InsnRIE_InsnRIL_InsnRILU_InsnRIS_InsnRR_InsnRRE_InsnRRF_InsnRRS_InsnRS_InsnRSE_InsnRSI_InsnRSY_InsnRX_InsnRXE_InsnRXF_InsnRXY_InsnS_InsnSI_InsnSIL_InsnSIY_InsnSS_InsnSSE_InsnSSF") 0, false, false,  0, 0,  0, 0,  0, 0}, // #329
  {DBGFIELD("SelectF128_SelectF32_SelectF64_SelectVR128") 0, false, false,  0, 0,  0, 0,  0, 0}, // #330
  {DBGFIELD("CondStoreF32_CondStoreF32Inv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #331
  {DBGFIELD("CondStoreF64_CondStoreF64Inv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #332
  {DBGFIELD("LZDR_LZER")          1, false, false, 57, 1,  1, 1,  0, 0}, // #333
  {DBGFIELD("LZXR")               2, true, false, 58, 1, 48, 4,  0, 0}, // #334
  {DBGFIELD("LER")                1, false, false, 112, 1, 19, 1,  0, 0}, // #335
  {DBGFIELD("LDGR_LDR_LDR32")     1, false, false, 57, 1,  1, 1,  0, 0}, // #336
  {DBGFIELD("LGDR")               1, false, false, 57, 1, 18, 2,  0, 0}, // #337
  {DBGFIELD("LXR")                2, true, true, 58, 1, 48, 4,  0, 0}, // #338
  {DBGFIELD("LTDBR_LTEBR")        1, false, false, 112, 1, 168, 2,  0, 0}, // #339
  {DBGFIELD("LTEBRCompare_LTEBRCompare_VecPseudo") 1, false, false, 112, 1, 168, 2,  0, 0}, // #340
  {DBGFIELD("LTDBRCompare_LTDBRCompare_VecPseudo") 1, false, false, 112, 1, 168, 2,  0, 0}, // #341
  {DBGFIELD("LTXBR")              2, true, true, 115, 1, 257, 4,  0, 0}, // #342
  {DBGFIELD("LTXBRCompare_LTXBRCompare_VecPseudo") 2, true, true, 115, 1, 257, 4,  0, 0}, // #343
  {DBGFIELD("CPSDRdd_CPSDRds")    1, false, false, 112, 1, 19, 1,  0, 0}, // #344
  {DBGFIELD("CPSDRsd_CPSDRss")    1, false, false, 112, 1, 19, 1,  0, 0}, // #345
  {DBGFIELD("LE_LEY")             2, false, false, 111, 2, 557, 3,  0, 0}, // #346
  {DBGFIELD("LD_LDE32_LDY")       1, false, false,  1, 1,  2, 1,  0, 0}, // #347
  {DBGFIELD("LX")                 1, false, false,  1, 1,  2, 1,  0, 0}, // #348
  {DBGFIELD("STD_STDY")           2, false, false, 63, 2, 12, 3,  0, 0}, // #349
  {DBGFIELD("STE_STEY")           2, false, false, 63, 2, 12, 3,  0, 0}, // #350
  {DBGFIELD("STX")                2, false, false, 63, 2,  6, 3,  0, 0}, // #351
  {DBGFIELD("LEDBR_LEDBRA")       1, false, false, 112, 1, 30, 1,  0, 0}, // #352
  {DBGFIELD("LEXBR_LEXBRA")       2, false, false, 109, 1, 237, 3,  0, 0}, // #353
  {DBGFIELD("LDXBR_LDXBRA")       2, false, false, 109, 1, 237, 3,  0, 0}, // #354
  {DBGFIELD("LDEB")               2, false, false, 111, 2, 240, 3,  0, 0}, // #355
  {DBGFIELD("LDEBR")              1, false, false, 112, 1, 30, 1,  0, 0}, // #356
  {DBGFIELD("LXDB_LXEB")          3, true, true, 114, 2, 560, 5,  0, 0}, // #357
  {DBGFIELD("LXDBR_LXEBR")        2, true, true, 115, 1, 86, 3,  0, 0}, // #358
  {DBGFIELD("CEFBR_CEFBRA_CEGBR_CEGBRA") 2, true, false, 129, 2, 252, 4,  0, 0}, // #359
  {DBGFIELD("CDFBR_CDFBRA_CDGBR_CDGBRA") 2, true, false, 129, 2, 252, 4,  0, 0}, // #360
  {DBGFIELD("CXFBR_CXFBRA_CXGBR_CXGBRA") 3, true, true, 131, 2, 565, 5,  0, 0}, // #361
  {DBGFIELD("CELFBR_CELGBR")      2, true, false, 129, 2, 252, 4,  0, 0}, // #362
  {DBGFIELD("CDLFBR_CDLGBR")      2, true, false, 129, 2, 252, 4,  0, 0}, // #363
  {DBGFIELD("CXLFBR_CXLGBR")      3, true, true, 131, 2, 565, 5,  0, 0}, // #364
  {DBGFIELD("CFDBR_CFDBRA_CFEBR_CFEBRA") 2, true, false, 129, 2, 270, 4,  0, 0}, // #365
  {DBGFIELD("CGDBR_CGDBRA_CGEBR_CGEBRA") 2, true, false, 129, 2, 270, 4,  0, 0}, // #366
  {DBGFIELD("CFXBR_CFXBRA_CGXBR_CGXBRA") 3, true, false, 133, 2, 265, 5,  0, 0}, // #367
  {DBGFIELD("CLFEBR")             2, true, true, 129, 2, 270, 4,  0, 0}, // #368
  {DBGFIELD("CLFDBR")             2, true, false, 129, 2, 270, 4,  0, 0}, // #369
  {DBGFIELD("CLGDBR_CLGEBR")      2, true, false, 129, 2, 270, 4,  0, 0}, // #370
  {DBGFIELD("CLFXBR_CLGXBR")      3, true, false, 133, 2, 265, 5,  0, 0}, // #371
  {DBGFIELD("LCDBR_LNDBR_LPDBR")  1, false, false, 112, 1, 168, 2,  0, 0}, // #372
  {DBGFIELD("LCEBR_LNEBR_LPEBR")  1, false, false, 112, 1, 168, 2,  0, 0}, // #373
  {DBGFIELD("LCDFR_LCDFR_32")     1, false, false, 57, 1,  1, 1,  0, 0}, // #374
  {DBGFIELD("LNDFR_LNDFR_32")     1, false, false, 57, 1,  1, 1,  0, 0}, // #375
  {DBGFIELD("LPDFR_LPDFR_32")     1, false, false, 57, 1,  1, 1,  0, 0}, // #376
  {DBGFIELD("LCXBR_LNXBR_LPXBR")  2, true, true, 115, 1, 257, 4,  0, 0}, // #377
  {DBGFIELD("SQDB_SQEB")          2, false, false, 135, 2, 570, 2,  0, 0}, // #378
  {DBGFIELD("SQDBR_SQEBR")        1, false, false, 136, 1, 33, 1,  0, 0}, // #379
  {DBGFIELD("SQXBR")              2, true, true, 137, 1, 572, 3,  0, 0}, // #380
  {DBGFIELD("FIEBR_FIEBRA")       1, false, false, 112, 1, 30, 1,  0, 0}, // #381
  {DBGFIELD("FIDBR_FIDBRA")       1, false, false, 112, 1, 30, 1,  0, 0}, // #382
  {DBGFIELD("FIXBR_FIXBRA")       2, true, true, 115, 1, 257, 4,  0, 0}, // #383
  {DBGFIELD("ADB_AEB")            2, false, false, 111, 2, 240, 3,  0, 0}, // #384
  {DBGFIELD("ADBR_AEBR")          1, false, false, 112, 1, 30, 1,  0, 0}, // #385
  {DBGFIELD("AXBR")               2, true, true, 115, 1, 248, 4,  0, 0}, // #386
  {DBGFIELD("SDB_SEB")            2, false, false, 111, 2, 240, 3,  0, 0}, // #387
  {DBGFIELD("SDBR_SEBR")          1, false, false, 112, 1, 30, 1,  0, 0}, // #388
  {DBGFIELD("SXBR")               2, true, true, 115, 1, 257, 4,  0, 0}, // #389
  {DBGFIELD("MDB_MDEB_MEEB")      2, false, false, 111, 2, 240, 3,  0, 0}, // #390
  {DBGFIELD("MDBR_MDEBR_MEEBR")   1, false, false, 112, 1, 30, 1,  0, 0}, // #391
  {DBGFIELD("MXDB")               3, true, true, 114, 2, 560, 5,  0, 0}, // #392
  {DBGFIELD("MXDBR")              2, true, true, 115, 1, 86, 3,  0, 0}, // #393
  {DBGFIELD("MXBR")               2, true, true, 115, 1, 287, 4,  0, 0}, // #394
  {DBGFIELD("MAEB_MSEB")          2, true, true, 138, 2, 561, 4,  0, 0}, // #395
  {DBGFIELD("MAEBR_MSEBR")        1, true, true, 112, 1, 30, 2,  0, 0}, // #396
  {DBGFIELD("MADB_MSDB")          2, true, true, 138, 2, 561, 4,  0, 0}, // #397
  {DBGFIELD("MADBR_MSDBR")        1, false, false, 112, 1, 30, 1,  0, 0}, // #398
  {DBGFIELD("DDB_DEB")            2, false, false, 135, 2, 570, 2,  0, 0}, // #399
  {DBGFIELD("DDBR_DEBR")          1, false, false, 136, 1, 33, 1,  0, 0}, // #400
  {DBGFIELD("DXBR")               2, true, true, 137, 1, 572, 3,  0, 0}, // #401
  {DBGFIELD("DIDBR_DIEBR")        1, false, false, 136, 1, 572, 2,  0, 0}, // #402
  {DBGFIELD("CDB_CEB_KDB_KEB")    2, false, false, 111, 2, 575, 3,  0, 0}, // #403
  {DBGFIELD("CDBR_CEBR_KDBR_KEBR") 1, false, false, 112, 1, 168, 2,  0, 0}, // #404
  {DBGFIELD("CXBR_KXBR")          2, true, true, 109, 1, 266, 4,  0, 0}, // #405
  {DBGFIELD("TCDB_TCEB")          2, false, false, 111, 2, 578, 3,  0, 0}, // #406
  {DBGFIELD("TCXB")               3, true, true, 114, 2, 581, 5,  0, 0}, // #407
  {DBGFIELD("EFPC")               2, true, true, 36, 2,  1, 4,  0, 0}, // #408
  {DBGFIELD("STFPC")              2, true, true, 63, 2,  6, 4,  0, 0}, // #409
  {DBGFIELD("SFPC")               1, true, true,  1, 1, 303, 3,  0, 0}, // #410
  {DBGFIELD("LFPC")               2, true, true,  8, 1, 156, 4,  0, 0}, // #411
  {DBGFIELD("SFASR")              1, false, false, 36, 1, 92, 2,  0, 0}, // #412
  {DBGFIELD("LFAS")               2, false, false, 36, 2, 31, 3,  0, 0}, // #413
  {DBGFIELD("SRNM_SRNMB_SRNMT")   1, true, true, 57, 1, 18, 3,  0, 0}, // #414
  {DBGFIELD("LTDR_LTER")          1, false, false, 112, 1, 168, 2,  0, 0}, // #415
  {DBGFIELD("LTXR")               2, true, true, 115, 1, 257, 4,  0, 0}, // #416
  {DBGFIELD("LEDR_LRER")          1, false, false, 112, 1, 30, 1,  0, 0}, // #417
  {DBGFIELD("LEXR")               1, false, false, 112, 1, 30, 1,  0, 0}, // #418
  {DBGFIELD("LDXR_LRDR")          1, false, false, 109, 1, 58, 1,  0, 0}, // #419
  {DBGFIELD("LDE")                1, false, false,  1, 1,  2, 1,  0, 0}, // #420
  {DBGFIELD("LDER")               1, false, false, 57, 1,  1, 1,  0, 0}, // #421
  {DBGFIELD("LXD_LXE")            3, true, true, 114, 2, 560, 5,  0, 0}, // #422
  {DBGFIELD("LXDR_LXER")          2, true, true, 115, 1, 86, 3,  0, 0}, // #423
  {DBGFIELD("CEFR_CEGR")          2, true, false, 129, 2, 252, 4,  0, 0}, // #424
  {DBGFIELD("CDFR_CDGR")          2, true, false, 129, 2, 252, 4,  0, 0}, // #425
  {DBGFIELD("CXFR_CXGR")          3, true, true, 131, 2, 565, 5,  0, 0}, // #426
  {DBGFIELD("CFDR_CFER")          2, true, false, 129, 2, 270, 4,  0, 0}, // #427
  {DBGFIELD("CGDR_CGER")          2, true, false, 129, 2, 270, 4,  0, 0}, // #428
  {DBGFIELD("CFXR_CGXR")          3, true, false, 133, 2, 265, 5,  0, 0}, // #429
  {DBGFIELD("THDER_THDR")         1, false, false, 112, 1, 30, 1,  0, 0}, // #430
  {DBGFIELD("TBDR_TBEDR")         1, false, false, 112, 1, 30, 1,  0, 0}, // #431
  {DBGFIELD("LCDR_LNDR_LPDR")     1, false, false, 112, 1, 168, 2,  0, 0}, // #432
  {DBGFIELD("LCER_LNER_LPER")     1, false, false, 112, 1, 168, 2,  0, 0}, // #433
  {DBGFIELD("LCXR_LNXR_LPXR")     2, true, true, 115, 1, 257, 4,  0, 0}, // #434
  {DBGFIELD("HDR_HER")            1, false, false, 112, 1, 30, 1,  0, 0}, // #435
  {DBGFIELD("SQD_SQE")            2, false, false, 135, 2, 570, 2,  0, 0}, // #436
  {DBGFIELD("SQDR_SQER")          1, false, false, 136, 1, 33, 1,  0, 0}, // #437
  {DBGFIELD("SQXR")               2, true, true, 137, 1, 572, 3,  0, 0}, // #438
  {DBGFIELD("FIER")               1, false, false, 112, 1, 30, 1,  0, 0}, // #439
  {DBGFIELD("FIDR")               1, false, false, 112, 1, 30, 1,  0, 0}, // #440
  {DBGFIELD("FIXR")               2, true, true, 115, 1, 257, 4,  0, 0}, // #441
  {DBGFIELD("AD_AE_AU_AW")        2, false, false, 111, 2, 240, 3,  0, 0}, // #442
  {DBGFIELD("ADR_AER_AUR_AWR")    1, false, false, 112, 1, 30, 1,  0, 0}, // #443
  {DBGFIELD("AXR")                2, true, true, 115, 1, 248, 4,  0, 0}, // #444
  {DBGFIELD("SD_SE_SU_SW")        2, false, false, 111, 2, 240, 3,  0, 0}, // #445
  {DBGFIELD("SDR_SER_SUR_SWR")    1, false, false, 112, 1, 30, 1,  0, 0}, // #446
  {DBGFIELD("SXR")                2, true, true, 115, 1, 257, 4,  0, 0}, // #447
  {DBGFIELD("MD_MDE_ME_MEE")      2, false, false, 111, 2, 240, 3,  0, 0}, // #448
  {DBGFIELD("MDER_MDR_MEER_MER")  1, false, false, 112, 1, 30, 1,  0, 0}, // #449
  {DBGFIELD("MXD")                3, true, true, 114, 2, 560, 5,  0, 0}, // #450
  {DBGFIELD("MXDR")               2, true, true, 115, 1, 86, 3,  0, 0}, // #451
  {DBGFIELD("MXR")                2, true, true, 115, 1, 287, 4,  0, 0}, // #452
  {DBGFIELD("MY")                 3, true, true, 114, 2, 560, 5,  0, 0}, // #453
  {DBGFIELD("MYH_MYL")            2, true, true, 138, 2, 561, 4,  0, 0}, // #454
  {DBGFIELD("MYR")                2, true, true, 115, 1, 86, 3,  0, 0}, // #455
  {DBGFIELD("MYHR_MYLR")          1, true, true, 112, 1, 30, 2,  0, 0}, // #456
  {DBGFIELD("MAE_MSE")            2, true, true, 138, 2, 561, 4,  0, 0}, // #457
  {DBGFIELD("MAER_MSER")          1, true, true, 112, 1, 30, 2,  0, 0}, // #458
  {DBGFIELD("MAD_MSD")            2, true, true, 138, 2, 561, 4,  0, 0}, // #459
  {DBGFIELD("MADR_MSDR")          1, true, true, 112, 1, 30, 2,  0, 0}, // #460
  {DBGFIELD("MAYH_MAYL")          2, true, true, 138, 2, 561, 4,  0, 0}, // #461
  {DBGFIELD("MAY")                3, true, true, 114, 2, 560, 5,  0, 0}, // #462
  {DBGFIELD("MAYHR_MAYLR")        1, true, true, 112, 1, 30, 2,  0, 0}, // #463
  {DBGFIELD("MAYR")               2, true, true, 115, 1, 86, 3,  0, 0}, // #464
  {DBGFIELD("DD_DE")              2, false, false, 135, 2, 570, 2,  0, 0}, // #465
  {DBGFIELD("DDR_DER")            1, false, false, 136, 1, 33, 1,  0, 0}, // #466
  {DBGFIELD("DXR")                2, true, true, 137, 1, 572, 3,  0, 0}, // #467
  {DBGFIELD("CD_CE")              2, false, false, 111, 2, 240, 3,  0, 0}, // #468
  {DBGFIELD("CDR_CER")            1, false, false, 112, 1, 30, 1,  0, 0}, // #469
  {DBGFIELD("CXR")                2, true, true, 109, 1, 266, 4,  0, 0}, // #470
  {DBGFIELD("LTDTR")              1, false, false, 112, 1, 30, 1,  0, 0}, // #471
  {DBGFIELD("LTXTR")              2, true, true, 115, 1, 257, 4,  0, 0}, // #472
  {DBGFIELD("LEDTR")              1, false, false, 112, 1, 315, 2,  0, 0}, // #473
  {DBGFIELD("LDXTR")              2, false, false, 109, 1, 237, 3,  0, 0}, // #474
  {DBGFIELD("LDETR")              1, false, false, 112, 1, 30, 1,  0, 0}, // #475
  {DBGFIELD("LXDTR")              2, true, true, 115, 1, 257, 4,  0, 0}, // #476
  {DBGFIELD("CDFTR_CDGTR_CDGTRA") 2, true, false, 129, 2, 586, 4,  0, 0}, // #477
  {DBGFIELD("CXFTR_CXGTR_CXGTRA") 3, true, true, 131, 2, 590, 5,  0, 0}, // #478
  {DBGFIELD("CDLFTR_CDLGTR")      2, true, false, 129, 2, 586, 4,  0, 0}, // #479
  {DBGFIELD("CXLFTR_CXLGTR")      3, true, true, 131, 2, 590, 5,  0, 0}, // #480
  {DBGFIELD("CFDTR_CGDTR_CGDTRA") 2, true, false, 129, 2, 586, 4,  0, 0}, // #481
  {DBGFIELD("CFXTR_CGXTR_CGXTRA") 3, true, false, 133, 2, 595, 5,  0, 0}, // #482
  {DBGFIELD("CLFDTR_CLGDTR")      2, true, false, 129, 2, 586, 4,  0, 0}, // #483
  {DBGFIELD("CLFXTR_CLGXTR")      3, true, false, 133, 2, 595, 5,  0, 0}, // #484
  {DBGFIELD("CDSTR_CDUTR")        2, true, false, 129, 2, 252, 4,  0, 0}, // #485
  {DBGFIELD("CXSTR_CXUTR")        4, true, true, 140, 2, 600, 6,  0, 0}, // #486
  {DBGFIELD("CSDTR_CUDTR")        2, true, false, 129, 2, 261, 4,  0, 0}, // #487
  {DBGFIELD("CSXTR_CUXTR")        4, true, true, 140, 2, 600, 6,  0, 0}, // #488
  {DBGFIELD("CDZT")               2, true, false, 111, 2, 606, 4,  0, 0}, // #489
  {DBGFIELD("CXZT")               4, true, true, 142, 2, 610, 6,  0, 0}, // #490
  {DBGFIELD("CZDT")               3, true, false, 110, 3, 605, 5,  0, 0}, // #491
  {DBGFIELD("CZXT")               4, true, true, 144, 3, 616, 6,  0, 0}, // #492
  {DBGFIELD("CDPT")               2, true, false, 111, 2, 606, 4,  0, 0}, // #493
  {DBGFIELD("CXPT")               4, true, true, 142, 2, 610, 6,  0, 0}, // #494
  {DBGFIELD("CPDT")               3, true, false, 110, 3, 605, 5,  0, 0}, // #495
  {DBGFIELD("CPXT")               4, true, true, 144, 3, 616, 6,  0, 0}, // #496
  {DBGFIELD("PFPO")               1, false, false, 57, 1, 92, 2,  0, 0}, // #497
  {DBGFIELD("FIDTR")              1, false, false, 112, 1, 30, 1,  0, 0}, // #498
  {DBGFIELD("FIXTR")              2, true, true, 115, 1, 257, 4,  0, 0}, // #499
  {DBGFIELD("EEDTR")              2, true, false, 129, 2, 261, 4,  0, 0}, // #500
  {DBGFIELD("EEXTR")              2, true, false, 129, 2, 261, 4,  0, 0}, // #501
  {DBGFIELD("ESDTR")              2, true, false, 129, 2, 261, 4,  0, 0}, // #502
  {DBGFIELD("ESXTR")              3, true, false, 133, 2, 622, 5,  0, 0}, // #503
  {DBGFIELD("ADTR_ADTRA")         1, false, false, 112, 1, 30, 1,  0, 0}, // #504
  {DBGFIELD("AXTR_AXTRA")         2, true, true, 115, 1, 248, 4,  0, 0}, // #505
  {DBGFIELD("SDTR_SDTRA")         1, false, false, 112, 1, 30, 1,  0, 0}, // #506
  {DBGFIELD("SXTR_SXTRA")         2, true, true, 115, 1, 257, 4,  0, 0}, // #507
  {DBGFIELD("MDTR_MDTRA")         1, false, false, 112, 1, 277, 2,  0, 0}, // #508
  {DBGFIELD("MXTR_MXTRA")         2, true, true, 115, 1, 279, 4,  0, 0}, // #509
  {DBGFIELD("DDTR_DDTRA")         1, false, false, 112, 1, 277, 2,  0, 0}, // #510
  {DBGFIELD("DXTR_DXTRA")         2, true, true, 115, 1, 279, 4,  0, 0}, // #511
  {DBGFIELD("QADTR")              1, false, false, 112, 1, 30, 1,  0, 0}, // #512
  {DBGFIELD("QAXTR")              2, true, true, 115, 1, 257, 4,  0, 0}, // #513
  {DBGFIELD("RRDTR")              2, true, false, 129, 2, 270, 4,  0, 0}, // #514
  {DBGFIELD("RRXTR")              3, true, true, 131, 2, 282, 5,  0, 0}, // #515
  {DBGFIELD("SLDT_SRDT")          2, true, true, 111, 2, 606, 4,  0, 0}, // #516
  {DBGFIELD("SLXT_SRXT")          3, true, true, 114, 2, 581, 5,  0, 0}, // #517
  {DBGFIELD("IEDTR")              2, true, false, 129, 2, 270, 4,  0, 0}, // #518
  {DBGFIELD("IEXTR")              3, true, true, 131, 2, 282, 5,  0, 0}, // #519
  {DBGFIELD("CDTR_KDTR")          1, false, false, 112, 1, 30, 1,  0, 0}, // #520
  {DBGFIELD("CXTR_KXTR")          2, true, true, 109, 1, 627, 4,  0, 0}, // #521
  {DBGFIELD("CEDTR")              1, false, false, 112, 1, 30, 1,  0, 0}, // #522
  {DBGFIELD("CEXTR")              1, false, false, 112, 1, 30, 1,  0, 0}, // #523
  {DBGFIELD("TDCDT_TDCET_TDGDT_TDGET") 2, false, false, 111, 2, 606, 3,  0, 0}, // #524
  {DBGFIELD("TDCXT_TDGXT")        3, true, true, 138, 2, 617, 5,  0, 0}, // #525
  {DBGFIELD("VLR_VLR32_VLR64")    1, false, false, 57, 1,  1, 1,  0, 0}, // #526
  {DBGFIELD("VLGV_VLGVB_VLGVF_VLGVG_VLGVH") 1, false, false, 57, 1,  1, 2,  0, 0}, // #527
  {DBGFIELD("VLVG_VLVGB_VLVGF_VLVGG_VLVGH") 1, false, false, 57, 1,  1, 1,  0, 0}, // #528
  {DBGFIELD("VLVGP_VLVGP32")      1, false, false, 57, 1, 49, 2,  0, 0}, // #529
  {DBGFIELD("VZERO")              1, false, false, 112, 1, 19, 1,  0, 0}, // #530
  {DBGFIELD("VONE")               1, false, false, 112, 1, 19, 1,  0, 0}, // #531
  {DBGFIELD("VGBM")               1, false, false, 112, 1, 19, 1,  0, 0}, // #532
  {DBGFIELD("VGM_VGMB_VGMF_VGMG_VGMH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #533
  {DBGFIELD("VREPI_VREPIB_VREPIF_VREPIG_VREPIH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #534
  {DBGFIELD("VLEIB_VLEIF_VLEIG_VLEIH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #535
  {DBGFIELD("VL_VLBB_VLL")        1, false, false,  1, 1,  2, 1,  0, 0}, // #536
  {DBGFIELD("VL32_VL64")          1, false, false,  1, 1,  2, 1,  0, 0}, // #537
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH_VLLEZLF") 0, false, false,  0, 0,  0, 0,  0, 0}, // #538
  {DBGFIELD("VLREP_VLREPB_VLREPF_VLREPG_VLREPH") 1, false, false,  1, 1,  2, 1,  0, 0}, // #539
  {DBGFIELD("VLEB_VLEF_VLEG_VLEH") 2, false, false, 111, 2, 557, 3,  0, 0}, // #540
  {DBGFIELD("VGEF_VGEG")          3, true, false, 110, 3, 631, 5,  0, 0}, // #541
  {DBGFIELD("VLM")                5, true, true, 20, 1, 35, 7,  0, 0}, // #542
  {DBGFIELD("VLRL_VLRLR")         0, false, false,  0, 0,  0, 0,  0, 0}, // #543
  {DBGFIELD("VST_VST32_VST64_VSTL") 2, false, false, 63, 2, 123, 3,  0, 0}, // #544
  {DBGFIELD("VSTEF_VSTEG")        2, false, false, 63, 2, 123, 3,  0, 0}, // #545
  {DBGFIELD("VSTEB_VSTEH")        3, true, false, 110, 3, 631, 5,  0, 0}, // #546
  {DBGFIELD("VSTM")               7, true, true, 127, 2, 636, 9,  0, 0}, // #547
  {DBGFIELD("VSCEF_VSCEG")        3, true, false, 67, 2, 645, 5,  0, 0}, // #548
  {DBGFIELD("VSTRL_VSTRLR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #549
  {DBGFIELD("VMRH_VMRHB_VMRHF_VMRHG_VMRHH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #550
  {DBGFIELD("VMRL_VMRLB_VMRLF_VMRLG_VMRLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #551
  {DBGFIELD("VPERM")              1, false, false, 112, 1, 19, 1,  0, 0}, // #552
  {DBGFIELD("VPDI")               1, false, false, 112, 1, 19, 1,  0, 0}, // #553
  {DBGFIELD("VBPERM")             0, false, false,  0, 0,  0, 0,  0, 0}, // #554
  {DBGFIELD("VREP_VREPB_VREPF_VREPG_VREPH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #555
  {DBGFIELD("VSEL")               1, false, false, 112, 1, 19, 1,  0, 0}, // #556
  {DBGFIELD("VPK_VPKF_VPKG_VPKH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #557
  {DBGFIELD("VPKS_VPKSF_VPKSG_VPKSH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #558
  {DBGFIELD("VPKSFS_VPKSGS_VPKSHS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #559
  {DBGFIELD("VPKLS_VPKLSF_VPKLSG_VPKLSH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #560
  {DBGFIELD("VPKLSFS_VPKLSGS_VPKLSHS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #561
  {DBGFIELD("VSEG_VSEGB_VSEGF_VSEGH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #562
  {DBGFIELD("VUPH_VUPHB_VUPHF_VUPHH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #563
  {DBGFIELD("VUPL_VUPLB_VUPLF")   1, false, false, 112, 1, 19, 1,  0, 0}, // #564
  {DBGFIELD("VUPLH_VUPLHB_VUPLHF_VUPLHH_VUPLHW") 1, false, false, 112, 1, 19, 1,  0, 0}, // #565
  {DBGFIELD("VUPLL_VUPLLB_VUPLLF_VUPLLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #566
  {DBGFIELD("VA_VAB_VAC_VACQ_VAF_VAG_VAH_VAQ") 1, false, false, 112, 1, 19, 1,  0, 0}, // #567
  {DBGFIELD("VACC_VACCB_VACCC_VACCCQ_VACCF_VACCG_VACCH_VACCQ") 1, false, false, 112, 1, 19, 1,  0, 0}, // #568
  {DBGFIELD("VAVG_VAVGB_VAVGF_VAVGG_VAVGH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #569
  {DBGFIELD("VAVGL_VAVGLB_VAVGLF_VAVGLG_VAVGLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #570
  {DBGFIELD("VN_VNC_VNN_VNO_VNX") 0, false, false,  0, 0,  0, 0,  0, 0}, // #571
  {DBGFIELD("VO_VOC")             0, false, false,  0, 0,  0, 0,  0, 0}, // #572
  {DBGFIELD("VCKSM")              1, false, false, 112, 1,  8, 1,  0, 0}, // #573
  {DBGFIELD("VCLZ_VCLZB_VCLZF_VCLZG_VCLZH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #574
  {DBGFIELD("VCTZ_VCTZB_VCTZF_VCTZG_VCTZH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #575
  {DBGFIELD("VX")                 1, false, false, 112, 1, 19, 1,  0, 0}, // #576
  {DBGFIELD("VGFM")               1, false, false, 112, 1,  8, 1,  0, 0}, // #577
  {DBGFIELD("VGFMA_VGFMAB_VGFMAF_VGFMAG_VGFMAH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #578
  {DBGFIELD("VGFMB_VGFMF_VGFMG_VGFMH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #579
  {DBGFIELD("VLC_VLCB_VLCF_VLCG_VLCH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #580
  {DBGFIELD("VLP_VLPB_VLPF_VLPG_VLPH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #581
  {DBGFIELD("VMX_VMXB_VMXF_VMXG_VMXH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #582
  {DBGFIELD("VMXL_VMXLB_VMXLF_VMXLG_VMXLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #583
  {DBGFIELD("VMN_VMNB_VMNF_VMNG_VMNH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #584
  {DBGFIELD("VMNL_VMNLB_VMNLF_VMNLG_VMNLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #585
  {DBGFIELD("VMAL_VMALB_VMALF")   1, false, false, 112, 1,  8, 1,  0, 0}, // #586
  {DBGFIELD("VMALE_VMALEB_VMALEF_VMALEH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #587
  {DBGFIELD("VMALH_VMALHB_VMALHF_VMALHH_VMALHW") 1, false, false, 112, 1,  8, 1,  0, 0}, // #588
  {DBGFIELD("VMALO_VMALOB_VMALOF_VMALOH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #589
  {DBGFIELD("VMAO_VMAOB_VMAOF_VMAOH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #590
  {DBGFIELD("VMAE_VMAEB_VMAEF_VMAEH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #591
  {DBGFIELD("VMAH_VMAHB_VMAHF_VMAHH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #592
  {DBGFIELD("VME_VMEB_VMEF_VMEH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #593
  {DBGFIELD("VMH_VMHB_VMHF_VMHH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #594
  {DBGFIELD("VML_VMLB_VMLF")      1, false, false, 112, 1,  8, 1,  0, 0}, // #595
  {DBGFIELD("VMLE_VMLEB_VMLEF_VMLEH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #596
  {DBGFIELD("VMLH_VMLHB_VMLHF_VMLHH_VMLHW") 1, false, false, 112, 1,  8, 1,  0, 0}, // #597
  {DBGFIELD("VMLO_VMLOB_VMLOF_VMLOH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #598
  {DBGFIELD("VMO_VMOB_VMOF_VMOH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #599
  {DBGFIELD("VMSL_VMSLG")         0, false, false,  0, 0,  0, 0,  0, 0}, // #600
  {DBGFIELD("VPOPCT_VPOPCTB_VPOPCTF_VPOPCTG_VPOPCTH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #601
  {DBGFIELD("VERLL_VERLLB_VERLLF_VERLLG_VERLLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #602
  {DBGFIELD("VERLLV_VERLLVB_VERLLVF_VERLLVG_VERLLVH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #603
  {DBGFIELD("VERIM_VERIMB_VERIMF_VERIMG_VERIMH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #604
  {DBGFIELD("VESL_VESLB_VESLF_VESLG_VESLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #605
  {DBGFIELD("VESLV_VESLVB_VESLVF_VESLVG_VESLVH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #606
  {DBGFIELD("VESRA_VESRAB_VESRAF_VESRAG_VESRAH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #607
  {DBGFIELD("VESRAV_VESRAVB_VESRAVF_VESRAVG_VESRAVH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #608
  {DBGFIELD("VESRL_VESRLB_VESRLF_VESRLG_VESRLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #609
  {DBGFIELD("VESRLV_VESRLVB_VESRLVF_VESRLVG_VESRLVH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #610
  {DBGFIELD("VSL_VSLDB")          1, false, false, 112, 1, 19, 1,  0, 0}, // #611
  {DBGFIELD("VSLB")               2, false, false, 109, 1, 650, 3,  0, 0}, // #612
  {DBGFIELD("VSRA_VSRL")          1, false, false, 112, 1, 19, 1,  0, 0}, // #613
  {DBGFIELD("VSRAB_VSRLB")        2, false, false, 109, 1, 650, 3,  0, 0}, // #614
  {DBGFIELD("VSB_VSBCBI_VSBCBIQ_VSBI_VSBIQ") 1, false, false, 112, 1, 19, 1,  0, 0}, // #615
  {DBGFIELD("VSCBI_VSCBIB_VSCBIF_VSCBIG_VSCBIH_VSCBIQ") 1, false, false, 112, 1, 19, 1,  0, 0}, // #616
  {DBGFIELD("VS_VSF_VSG_VSH_VSQ") 1, false, false, 112, 1, 19, 1,  0, 0}, // #617
  {DBGFIELD("VSUM_VSUMB_VSUMH")   1, false, false, 112, 1,  8, 1,  0, 0}, // #618
  {DBGFIELD("VSUMG_VSUMGF_VSUMGH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #619
  {DBGFIELD("VSUMQ_VSUMQF_VSUMQG") 1, false, false, 112, 1,  8, 1,  0, 0}, // #620
  {DBGFIELD("VEC_VECB_VECF_VECG_VECH") 1, false, false, 112, 1, 168, 2,  0, 0}, // #621
  {DBGFIELD("VECL_VECLB_VECLF_VECLG_VECLH") 1, false, false, 112, 1, 168, 2,  0, 0}, // #622
  {DBGFIELD("VCEQ_VCEQB_VCEQF_VCEQG_VCEQH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #623
  {DBGFIELD("VCEQBS_VCEQFS_VCEQGS_VCEQHS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #624
  {DBGFIELD("VCH_VCHB_VCHF_VCHG_VCHH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #625
  {DBGFIELD("VCHBS_VCHFS_VCHGS_VCHHS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #626
  {DBGFIELD("VCHL_VCHLB_VCHLF_VCHLG_VCHLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #627
  {DBGFIELD("VCHLBS_VCHLFS_VCHLGS_VCHLHS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #628
  {DBGFIELD("VTM")                1, false, false, 112, 1,  7, 2,  0, 0}, // #629
  {DBGFIELD("VCDG_VCDLG")         1, false, false, 109, 1, 58, 1,  0, 0}, // #630
  {DBGFIELD("VCDGB_VCDLGB")       1, false, false, 109, 1, 58, 1,  0, 0}, // #631
  {DBGFIELD("WCDGB_WCDLGB")       1, false, false, 112, 1, 30, 1,  0, 0}, // #632
  {DBGFIELD("VCGD_VCLGD")         1, false, false, 109, 1, 58, 1,  0, 0}, // #633
  {DBGFIELD("VCGDB_VCLGDB")       1, false, false, 109, 1, 58, 1,  0, 0}, // #634
  {DBGFIELD("WCGDB_WCLGDB")       1, false, false, 112, 1, 30, 1,  0, 0}, // #635
  {DBGFIELD("VLDE_VLED")          1, false, false, 109, 1, 58, 1,  0, 0}, // #636
  {DBGFIELD("VLDEB_VLEDB")        1, false, false, 109, 1, 58, 1,  0, 0}, // #637
  {DBGFIELD("WLDEB_WLEDB")        1, false, false, 112, 1, 30, 1,  0, 0}, // #638
  {DBGFIELD("VFLL_VFLR")          0, false, false,  0, 0,  0, 0,  0, 0}, // #639
  {DBGFIELD("VFLLS_VFLRD")        0, false, false,  0, 0,  0, 0,  0, 0}, // #640
  {DBGFIELD("WFLLS_WFLRD")        0, false, false,  0, 0,  0, 0,  0, 0}, // #641
  {DBGFIELD("WFLLD")              0, false, false,  0, 0,  0, 0,  0, 0}, // #642
  {DBGFIELD("WFLRX")              0, false, false,  0, 0,  0, 0,  0, 0}, // #643
  {DBGFIELD("VFI")                1, false, false, 109, 1, 58, 1,  0, 0}, // #644
  {DBGFIELD("VFIDB")              1, false, false, 109, 1, 58, 1,  0, 0}, // #645
  {DBGFIELD("WFIDB")              1, false, false, 112, 1, 30, 1,  0, 0}, // #646
  {DBGFIELD("VFISB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #647
  {DBGFIELD("WFISB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #648
  {DBGFIELD("WFIXB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #649
  {DBGFIELD("VFPSO")              1, false, false, 112, 1, 19, 1,  0, 0}, // #650
  {DBGFIELD("VFPSODB_WFPSODB")    1, false, false, 112, 1, 19, 1,  0, 0}, // #651
  {DBGFIELD("VFPSOSB_WFPSOSB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #652
  {DBGFIELD("WFPSOXB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #653
  {DBGFIELD("VFLCDB_VFLNDB_VFLPDB_WFLCDB_WFLNDB_WFLPDB") 1, false, false, 112, 1, 19, 1,  0, 0}, // #654
  {DBGFIELD("VFLCSB_VFLNSB_VFLPSB_WFLCSB_WFLNSB_WFLPSB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #655
  {DBGFIELD("WFLCXB_WFLNXB_WFLPXB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #656
  {DBGFIELD("VFMAX_VFMIN")        0, false, false,  0, 0,  0, 0,  0, 0}, // #657
  {DBGFIELD("VFMAXDB_VFMINDB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #658
  {DBGFIELD("WFMAXDB_WFMINDB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #659
  {DBGFIELD("VFMAXSB_VFMINSB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #660
  {DBGFIELD("WFMAXSB_WFMINSB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #661
  {DBGFIELD("WFMAXXB_WFMINXB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #662
  {DBGFIELD("VFTCI")              1, false, false, 112, 1, 168, 2,  0, 0}, // #663
  {DBGFIELD("VFTCIDB_WFTCIDB")    1, false, false, 112, 1, 168, 2,  0, 0}, // #664
  {DBGFIELD("VFTCISB_WFTCISB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #665
  {DBGFIELD("WFTCIXB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #666
  {DBGFIELD("VFA_VFS")            1, false, false, 109, 1, 58, 1,  0, 0}, // #667
  {DBGFIELD("VFADB_VFSDB")        1, false, false, 109, 1, 58, 1,  0, 0}, // #668
  {DBGFIELD("WFADB_WFSDB")        1, false, false, 112, 1, 30, 1,  0, 0}, // #669
  {DBGFIELD("VFASB_VFSSB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #670
  {DBGFIELD("WFASB_WFSSB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #671
  {DBGFIELD("WFAXB_WFSXB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #672
  {DBGFIELD("VFM")                1, false, false, 109, 1, 58, 1,  0, 0}, // #673
  {DBGFIELD("VFMDB")              1, false, false, 109, 1, 58, 1,  0, 0}, // #674
  {DBGFIELD("WFMDB")              1, false, false, 112, 1, 30, 1,  0, 0}, // #675
  {DBGFIELD("VFMSB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #676
  {DBGFIELD("WFMSB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #677
  {DBGFIELD("WFMXB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #678
  {DBGFIELD("VFMA_VFMS_VFNMA_VFNMS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #679
  {DBGFIELD("VFMADB_VFMSDB_VFNMADB_VFNMSDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #680
  {DBGFIELD("WFMADB_WFMSDB_WFNMADB_WFNMSDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #681
  {DBGFIELD("VFMASB_VFMSSB_VFNMASB_VFNMSSB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #682
  {DBGFIELD("WFMASB_WFMSSB_WFNMASB_WFNMSSB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #683
  {DBGFIELD("WFMAXB_WFMSXB_WFNMAXB_WFNMSXB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #684
  {DBGFIELD("VFD")                1, false, false, 136, 1, 33, 1,  0, 0}, // #685
  {DBGFIELD("VFDDB_WFDDB")        1, false, false, 136, 1, 33, 1,  0, 0}, // #686
  {DBGFIELD("VFDSB_WFDSB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #687
  {DBGFIELD("WFDXB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #688
  {DBGFIELD("VFSQ")               1, false, false, 136, 1, 33, 1,  0, 0}, // #689
  {DBGFIELD("VFSQDB_WFSQDB")      1, false, false, 136, 1, 33, 1,  0, 0}, // #690
  {DBGFIELD("VFSQSB_WFSQSB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #691
  {DBGFIELD("WFSQXB")             0, false, false,  0, 0,  0, 0,  0, 0}, // #692
  {DBGFIELD("VFCE_VFCH_VFCHE")    1, false, false, 112, 1, 19, 1,  0, 0}, // #693
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB_VFKEDB_VFKHDB_VFKHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #694
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB_WFKEDB_WFKHDB_WFKHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #695
  {DBGFIELD("VFCESB_VFCHESB_VFCHSB_VFKESB_VFKHESB_VFKHSB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #696
  {DBGFIELD("WFCESB_WFCHESB_WFCHSB_WFKESB_WFKHESB_WFKHSB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #697
  {DBGFIELD("WFCEXB_WFCHEXB_WFCHXB_WFKEXB_WFKHEXB_WFKHXB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #698
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS_VFKEDBS_VFKHDBS_VFKHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #699
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS_WFKEDBS_WFKHDBS_WFKHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #700
  {DBGFIELD("VFCESBS_VFCHESBS_VFCHSBS_VFKESBS_VFKHESBS_VFKHSBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #701
  {DBGFIELD("WFCESBS_WFCHESBS_WFCHSBS_WFKESBS_WFKHESBS_WFKHSBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #702
  {DBGFIELD("WFCEXBS_WFCHEXBS_WFCHXBS_WFKEXBS_WFKHEXBS_WFKHXBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #703
  {DBGFIELD("WFC_WFK")            1, false, false, 112, 1, 168, 2,  0, 0}, // #704
  {DBGFIELD("WFCDB_WFKDB")        1, false, false, 112, 1, 168, 2,  0, 0}, // #705
  {DBGFIELD("WFCSB_WFKSB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #706
  {DBGFIELD("WFCXB_WFKXB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #707
  {DBGFIELD("LEFR")               1, false, false, 57, 1,  1, 1,  0, 0}, // #708
  {DBGFIELD("LFER")               1, false, false, 57, 1,  1, 2,  0, 0}, // #709
  {DBGFIELD("VFAE_VFAEB")         1, false, false, 112, 1,  2, 1,  0, 0}, // #710
  {DBGFIELD("VFAEBS")             1, false, false, 112, 1,  7, 2,  0, 0}, // #711
  {DBGFIELD("VFAEF_VFAEH")        1, false, false, 112, 1,  2, 1,  0, 0}, // #712
  {DBGFIELD("VFAEFS_VFAEHS")      1, false, false, 112, 1,  7, 2,  0, 0}, // #713
  {DBGFIELD("VFAEZB_VFAEZF_VFAEZH") 1, false, false, 112, 1,  2, 1,  0, 0}, // #714
  {DBGFIELD("VFAEZBS_VFAEZFS_VFAEZHS") 1, false, false, 112, 1,  7, 2,  0, 0}, // #715
  {DBGFIELD("VFEE_VFEEB_VFEEF_VFEEH_VFEEZB_VFEEZF_VFEEZH") 1, false, false, 112, 1,  2, 1,  0, 0}, // #716
  {DBGFIELD("VFEEBS_VFEEFS_VFEEHS_VFEEZBS_VFEEZFS_VFEEZHS") 1, false, false, 112, 1,  7, 2,  0, 0}, // #717
  {DBGFIELD("VFENE_VFENEB_VFENEF_VFENEH_VFENEZB_VFENEZF_VFENEZH") 1, false, false, 112, 1,  2, 1,  0, 0}, // #718
  {DBGFIELD("VFENEBS_VFENEFS_VFENEHS_VFENEZBS_VFENEZFS_VFENEZHS") 1, false, false, 112, 1,  7, 2,  0, 0}, // #719
  {DBGFIELD("VISTR_VISTRB_VISTRF_VISTRH") 1, false, false, 112, 1,  2, 1,  0, 0}, // #720
  {DBGFIELD("VISTRBS_VISTRFS_VISTRHS") 1, false, false, 112, 1,  7, 2,  0, 0}, // #721
  {DBGFIELD("VSTRC_VSTRCB_VSTRCF_VSTRCH") 1, false, false, 112, 1,  2, 1,  0, 0}, // #722
  {DBGFIELD("VSTRCBS_VSTRCFS_VSTRCHS") 1, false, false, 112, 1,  7, 2,  0, 0}, // #723
  {DBGFIELD("VSTRCZB_VSTRCZF_VSTRCZH") 1, false, false, 112, 1,  2, 1,  0, 0}, // #724
  {DBGFIELD("VSTRCZBS_VSTRCZFS_VSTRCZHS") 1, false, false, 112, 1,  7, 2,  0, 0}, // #725
  {DBGFIELD("VLIP")               0, false, false,  0, 0,  0, 0,  0, 0}, // #726
  {DBGFIELD("VPKZ")               0, false, false,  0, 0,  0, 0,  0, 0}, // #727
  {DBGFIELD("VUPKZ")              0, false, false,  0, 0,  0, 0,  0, 0}, // #728
  {DBGFIELD("VCVB_VCVBG")         0, false, false,  0, 0,  0, 0,  0, 0}, // #729
  {DBGFIELD("VCVD_VCVDG")         0, false, false,  0, 0,  0, 0,  0, 0}, // #730
  {DBGFIELD("VAP_VSP")            0, false, false,  0, 0,  0, 0,  0, 0}, // #731
  {DBGFIELD("VMP_VMSP")           0, false, false,  0, 0,  0, 0,  0, 0}, // #732
  {DBGFIELD("VDP_VRP")            0, false, false,  0, 0,  0, 0,  0, 0}, // #733
  {DBGFIELD("VSDP")               0, false, false,  0, 0,  0, 0,  0, 0}, // #734
  {DBGFIELD("VSRP")               0, false, false,  0, 0,  0, 0,  0, 0}, // #735
  {DBGFIELD("VPSOP")              0, false, false,  0, 0,  0, 0,  0, 0}, // #736
  {DBGFIELD("VCP_VTP")            0, false, false,  0, 0,  0, 0,  0, 0}, // #737
  {DBGFIELD("EPSW")               1, false, false, 57, 1, 92, 2,  0, 0}, // #738
  {DBGFIELD("LPSW_LPSWE")         2, false, false, 63, 2, 31, 3,  0, 0}, // #739
  {DBGFIELD("IPK")                1, true, true, 36, 1, 18, 3,  0, 0}, // #740
  {DBGFIELD("SPKA")               1, false, true,  1, 1,  3, 2,  0, 0}, // #741
  {DBGFIELD("SSM")                1, false, true,  1, 1,  3, 2,  0, 0}, // #742
  {DBGFIELD("STNSM_STOSM")        2, true, true, 63, 2, 219, 3,  0, 0}, // #743
  {DBGFIELD("IAC")                1, false, false, 36, 1, 18, 2,  0, 0}, // #744
  {DBGFIELD("SAC_SACF")           1, false, true,  1, 1,  3, 2,  0, 0}, // #745
  {DBGFIELD("LCTL_LCTLG")         2, false, false, 63, 2, 31, 3,  0, 0}, // #746
  {DBGFIELD("STCTG_STCTL")        1, false, false,  1, 1, 32, 2,  0, 0}, // #747
  {DBGFIELD("EPAIR_EPAR_ESAIR_ESAR") 1, false, false,  1, 1,  2, 1,  0, 0}, // #748
  {DBGFIELD("SSAIR_SSAR")         1, false, false, 57, 1, 92, 2,  0, 0}, // #749
  {DBGFIELD("ESEA")               1, false, false, 57, 1, 92, 2,  0, 0}, // #750
  {DBGFIELD("SPX")                2, false, false, 63, 2, 31, 3,  0, 0}, // #751
  {DBGFIELD("STPX")               2, false, false, 63, 2, 31, 3,  0, 0}, // #752
  {DBGFIELD("ISKE")               1, false, false, 57, 1, 92, 2,  0, 0}, // #753
  {DBGFIELD("IVSK")               1, false, false, 57, 1, 92, 2,  0, 0}, // #754
  {DBGFIELD("SSKE_SSKEOpt")       1, false, false, 57, 1, 92, 2,  0, 0}, // #755
  {DBGFIELD("RRBE_RRBM")          1, false, false, 57, 1, 92, 2,  0, 0}, // #756
  {DBGFIELD("IRBM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #757
  {DBGFIELD("PFMF")               1, false, false, 57, 1, 92, 2,  0, 0}, // #758
  {DBGFIELD("TB")                 1, false, false, 57, 1, 92, 2,  0, 0}, // #759
  {DBGFIELD("PGIN")               2, false, false, 63, 2, 31, 3,  0, 0}, // #760
  {DBGFIELD("PGOUT")              2, false, false, 63, 2, 31, 3,  0, 0}, // #761
  {DBGFIELD("IPTE_IPTEOpt_IPTEOptOpt") 2, false, false, 63, 2, 31, 3,  0, 0}, // #762
  {DBGFIELD("IDTE_IDTEOpt")       1, false, false, 57, 1, 92, 2,  0, 0}, // #763
  {DBGFIELD("CRDTE_CRDTEOpt")     1, false, false, 57, 1, 92, 2,  0, 0}, // #764
  {DBGFIELD("PTLB")               1, false, false, 57, 1, 92, 2,  0, 0}, // #765
  {DBGFIELD("CSP_CSPG")           2, false, false, 63, 2, 31, 3,  0, 0}, // #766
  {DBGFIELD("LPTEA")              2, false, false, 63, 2, 31, 3,  0, 0}, // #767
  {DBGFIELD("LRA_LRAG_LRAY")      2, false, false, 63, 2, 31, 3,  0, 0}, // #768
  {DBGFIELD("STRAG")              2, false, false, 63, 2, 31, 3,  0, 0}, // #769
  {DBGFIELD("LURA_LURAG")         2, false, false, 63, 2, 31, 3,  0, 0}, // #770
  {DBGFIELD("STURA_STURG")        2, false, false, 63, 2, 31, 3,  0, 0}, // #771
  {DBGFIELD("TPROT")              2, false, false, 63, 2, 31, 3,  0, 0}, // #772
  {DBGFIELD("MVCK_MVCP_MVCS")     4, true, true, 147, 3, 121, 6,  0, 0}, // #773
  {DBGFIELD("MVCDK_MVCSK")        2, true, true, 36, 2, 22, 4,  0, 0}, // #774
  {DBGFIELD("MVCOS")              2, false, false, 63, 2, 31, 3,  0, 0}, // #775
  {DBGFIELD("MVPG")               1, true, true,  1, 1, 32, 3,  0, 0}, // #776
  {DBGFIELD("LASP")               2, false, false, 63, 2, 31, 3,  0, 0}, // #777
  {DBGFIELD("PALB")               1, true, true,  1, 1,  3, 2,  0, 0}, // #778
  {DBGFIELD("PC")                 2, false, false, 63, 2, 31, 3,  0, 0}, // #779
  {DBGFIELD("PR")                 1, false, false, 57, 1, 92, 2,  0, 0}, // #780
  {DBGFIELD("PT_PTI")             1, false, false, 57, 1, 92, 2,  0, 0}, // #781
  {DBGFIELD("RP")                 2, false, false, 63, 2, 31, 3,  0, 0}, // #782
  {DBGFIELD("BSA_BSG")            1, false, false, 57, 1, 92, 2,  0, 0}, // #783
  {DBGFIELD("TAR")                1, false, false, 57, 1, 433, 2,  0, 0}, // #784
  {DBGFIELD("BAKR")               1, false, true, 57, 1, 92, 3,  0, 0}, // #785
  {DBGFIELD("EREG_EREGG")         1, false, false, 57, 1, 92, 2,  0, 0}, // #786
  {DBGFIELD("ESTA_MSTA")          1, false, false, 57, 1, 92, 2,  0, 0}, // #787
  {DBGFIELD("PTFF")               1, false, false, 57, 1, 92, 2,  0, 0}, // #788
  {DBGFIELD("SCK")                2, false, false, 63, 2, 435, 3,  0, 0}, // #789
  {DBGFIELD("SCKPF")              1, false, false, 57, 1, 92, 2,  0, 0}, // #790
  {DBGFIELD("SCKC")               2, false, false, 63, 2, 435, 3,  0, 0}, // #791
  {DBGFIELD("SPT")                2, true, true,  8, 1,  2, 3,  0, 0}, // #792
  {DBGFIELD("STCK_STCKF")         6, true, true, 150, 3, 653, 8,  0, 0}, // #793
  {DBGFIELD("STCKE")              8, true, true, 153, 3, 661, 10,  0, 0}, // #794
  {DBGFIELD("STCKC")              2, false, false, 63, 2, 79, 3,  0, 0}, // #795
  {DBGFIELD("STPT")               3, true, false, 94, 2, 671, 5,  0, 0}, // #796
  {DBGFIELD("STAP")               2, false, false, 63, 2, 31, 3,  0, 0}, // #797
  {DBGFIELD("STIDP")              2, false, false, 63, 2, 31, 3,  0, 0}, // #798
  {DBGFIELD("STSI")               2, false, false, 63, 2, 31, 3,  0, 0}, // #799
  {DBGFIELD("STFL_STFLE")         2, false, false, 63, 2, 31, 3,  0, 0}, // #800
  {DBGFIELD("ECAG")               2, false, false, 63, 2, 31, 3,  0, 0}, // #801
  {DBGFIELD("ECTG")               2, false, false, 36, 2, 31, 3,  0, 0}, // #802
  {DBGFIELD("PTF")                1, false, false, 57, 1, 92, 2,  0, 0}, // #803
  {DBGFIELD("PCKMO")              1, false, false, 57, 1, 92, 2,  0, 0}, // #804
  {DBGFIELD("SVC")                1, false, false, 57, 1, 92, 2,  0, 0}, // #805
  {DBGFIELD("MC")                 1, true, true, 57, 1,  4, 2,  0, 0}, // #806
  {DBGFIELD("DIAG")               1, false, false, 57, 1, 92, 2,  0, 0}, // #807
  {DBGFIELD("TRACE_TRACG")        1, false, false, 57, 1,  1, 1,  0, 0}, // #808
  {DBGFIELD("TRAP2_TRAP4")        1, false, false, 57, 1, 92, 2,  0, 0}, // #809
  {DBGFIELD("SIGP")               1, false, false, 57, 1, 92, 2,  0, 0}, // #810
  {DBGFIELD("SIGA")               2, false, false, 63, 2, 31, 3,  0, 0}, // #811
  {DBGFIELD("SIE")                2, false, false, 63, 2, 31, 3,  0, 0}, // #812
  {DBGFIELD("LPP")                1, false, false, 57, 1,  1, 1,  0, 0}, // #813
  {DBGFIELD("ECPGA")              1, false, false, 57, 1, 92, 2,  0, 0}, // #814
  {DBGFIELD("ECCTR_EPCTR")        1, false, false, 57, 1, 92, 2,  0, 0}, // #815
  {DBGFIELD("LCCTL")              1, false, false, 57, 1, 92, 2,  0, 0}, // #816
  {DBGFIELD("LPCTL_LSCTL")        2, false, false, 63, 2, 31, 3,  0, 0}, // #817
  {DBGFIELD("QCTRI_QSI")          2, false, false, 63, 2, 31, 3,  0, 0}, // #818
  {DBGFIELD("SCCTR_SPCTR")        1, false, false, 57, 1, 92, 2,  0, 0}, // #819
  {DBGFIELD("CSCH_HSCH_RSCH_XSCH") 1, false, false, 57, 1, 92, 2,  0, 0}, // #820
  {DBGFIELD("MSCH_SSCH_STSCH_TSCH") 2, false, false, 63, 2, 31, 3,  0, 0}, // #821
  {DBGFIELD("RCHP")               1, false, false, 57, 1, 92, 2,  0, 0}, // #822
  {DBGFIELD("SCHM")               1, false, false, 57, 1, 92, 2,  0, 0}, // #823
  {DBGFIELD("STCPS_STCRW")        2, false, false, 63, 2, 31, 3,  0, 0}, // #824
  {DBGFIELD("TPI")                2, false, false, 63, 2, 31, 3,  0, 0}, // #825
  {DBGFIELD("SAL")                1, false, false, 57, 1, 92, 2,  0, 0}, // #826
  {DBGFIELD("AGF")                2, false, false, 36, 2, 22, 3,  0, 0}, // #827
  {DBGFIELD("SGF")                2, false, false, 36, 2, 22, 3,  0, 0}, // #828
  {DBGFIELD("KM_KMC_KMCTR_KMF_KMO") 1, false, false, 36, 1, 92, 2,  0, 0}, // #829
  {DBGFIELD("PCC_PPNO")           1, false, false, 36, 1, 92, 2,  0, 0}, // #830
  {DBGFIELD("SelectF128_SelectF32_SelectF64") 1, false, false, 36, 1,  1, 1,  0, 0}, // #831
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH") 1, false, false,  1, 1,  2, 1,  0, 0}, // #832
  {DBGFIELD("VN_VNC_VNO")         1, false, false, 112, 1, 19, 1,  0, 0}, // #833
  {DBGFIELD("VO")                 1, false, false, 112, 1, 19, 1,  0, 0}, // #834
  {DBGFIELD("VPOPCT")             1, false, false, 112, 1, 19, 1,  0, 0}, // #835
  {DBGFIELD("VFMA_VFMS")          1, false, false, 109, 1, 58, 1,  0, 0}, // #836
  {DBGFIELD("VFMADB_VFMSDB")      1, false, false, 109, 1, 58, 1,  0, 0}, // #837
  {DBGFIELD("WFMADB_WFMSDB")      1, false, false, 112, 1, 30, 1,  0, 0}, // #838
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB") 1, false, false, 112, 1, 19, 1,  0, 0}, // #839
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB") 1, false, false, 112, 1, 19, 1,  0, 0}, // #840
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #841
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #842
  {DBGFIELD("L_LFH_LMux_LRL_LY")  1, false, false,  1, 1,  2, 1,  0, 0}, // #843
  {DBGFIELD("LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false, 36, 1, 49, 2,  0, 0}, // #844
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 2, false, false, 36, 2, 22, 3,  0, 0}, // #845
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 2, false, false, 63, 2,  6, 3,  0, 0}, // #846
  {DBGFIELD("ALSI_ASI")           2, false, false, 63, 2,  6, 3,  0, 0}, // #847
  {DBGFIELD("ALGF")               2, false, false, 36, 2,  6, 3,  0, 0}, // #848
  {DBGFIELD("PCC")                1, false, false, 36, 1, 92, 2,  0, 0}, // #849
  {DBGFIELD("CDFTR")              2, true, false, 129, 2, 586, 4,  0, 0}, // #850
  {DBGFIELD("CXFTR")              3, true, true, 131, 2, 590, 5,  0, 0}, // #851
  {DBGFIELD("CXLFTR")             3, true, true, 131, 2, 590, 5,  0, 0}, // #852
  {DBGFIELD("CFDTR")              2, true, false, 129, 2, 586, 4,  0, 0}, // #853
  {DBGFIELD("CFXTR")              3, true, false, 133, 2, 595, 5,  0, 0}, // #854
  {DBGFIELD("MVCSK")              2, true, true, 36, 2, 22, 4,  0, 0}, // #855
  {DBGFIELD("RISBG_RISBG32")      1, false, false, 36, 1,  1, 1,  0, 0}, // #856
  {DBGFIELD("STCK")               6, true, true, 150, 3, 653, 8,  0, 0}, // #857
}; // Z13ModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc Z14ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("ADJDYNALLOC")        1, false, false, 36, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("BRC_BRCAsm_BRCL_BRCLAsm_CallBRCL") 1, false, false,  3, 1,  1, 1,  0, 0}, // #2
  {DBGFIELD("CallJG_J_JAsmE_JAsmH_JAsmHE_JAsmL_JAsmLE_JAsmLH_JAsmM_JAsmNE_JAsmNH_JAsmNHE_JAsmNL_JAsmNLE_JAsmNLH_JAsmNM_JAsmNO_JAsmNP_JAsmNZ_JAsmO_JAsmP_JAsmZ_JG_JGAsmE_JGAsmH_JGAsmHE_JGAsmL_JGAsmLE_JGAsmLH_JGAsmM_JGAsmNE_JGAsmNH_JGAsmNHE_JGAsmNL_JGAsmNLE_JGAsmNLH_JGAsmNM_JGAsmNO_JGAsmNP_JGAsmNZ_JGAsmO_JGAsmP_JGAsmZ") 1, false, false,  3, 1,  1, 1,  0, 0}, // #3
  {DBGFIELD("BC_BCAsm_BCR_BCRAsm_CallBCR") 1, false, false, 57, 1,  1, 1,  0, 0}, // #4
  {DBGFIELD("B_BAsmE_BAsmH_BAsmHE_BAsmL_BAsmLE_BAsmLH_BAsmM_BAsmNE_BAsmNH_BAsmNHE_BAsmNL_BAsmNLE_BAsmNLH_BAsmNM_BAsmNO_BAsmNP_BAsmNZ_BAsmO_BAsmP_BAsmZ_BR_BRAsmE_BRAsmH_BRAsmHE_BRAsmL_BRAsmLE_BRAsmLH_BRAsmM_BRAsmNE_BRAsmNH_BRAsmNHE_BRAsmNL_BRAsmNLE_BRAsmNLH_BRAsmNM_BRAsmNO_BRAsmNP_BRAsmNZ_BRAsmO_BRAsmP_BRAsmZ_CallBR") 1, false, false, 57, 1,  1, 1,  0, 0}, // #5
  {DBGFIELD("BI_BIAsmE_BIAsmH_BIAsmHE_BIAsmL_BIAsmLE_BIAsmLH_BIAsmM_BIAsmNE_BIAsmNH_BIAsmNHE_BIAsmNL_BIAsmNLE_BIAsmNLH_BIAsmNM_BIAsmNO_BIAsmNP_BIAsmNZ_BIAsmO_BIAsmP_BIAsmZ_BIC_BICAsm") 2, false, false, 63, 2,  6, 3,  0, 0}, // #6
  {DBGFIELD("BRCT_BRCTG")         1, false, true, 36, 1,  4, 2,  0, 0}, // #7
  {DBGFIELD("BRCTH")              2, true, true, 84, 2, 48, 4,  0, 0}, // #8
  {DBGFIELD("BCT_BCTG_BCTGR_BCTR") 2, true, true, 84, 2, 48, 4,  0, 0}, // #9
  {DBGFIELD("BRXH_BRXHG_BRXLE_BRXLG_BXH_BXHG_BXLE_BXLEG") 4, true, true, 86, 2, 463, 6,  0, 0}, // #10
  {DBGFIELD("CGIJ_CGIJAsm_CGIJAsmE_CGIJAsmH_CGIJAsmHE_CGIJAsmL_CGIJAsmLE_CGIJAsmLH_CGIJAsmNE_CGIJAsmNH_CGIJAsmNHE_CGIJAsmNL_CGIJAsmNLE_CGIJAsmNLH_CGRJ_CGRJAsm_CGRJAsmE_CGRJAsmH_CGRJAsmHE_CGRJAsmL_CGRJAsmLE_CGRJAsmLH_CGRJAsmNE_CGRJAsmNH_CGRJAsmNHE_CGRJAsmNL_CGRJAsmNLE_CGRJAsmNLH_CIJ_CIJAsm_CIJAsmE_CIJAsmH_CIJAsmHE_CIJAsmL_CIJAsmLE_CIJAsmLH_CIJAsmNE_CIJAsmNH_CIJAsmNHE_CIJAsmNL_CIJAsmNLE_CIJAsmNLH_CLGIJ_CLGIJAsm_CLGIJAsmE_CLGIJAsmH_CLGIJAsmHE_CLGIJAsmL_CLGIJAsmLE_CLGIJAsmLH_CLGIJAsmNE_CLGIJAsmNH_CLGIJAsmNHE_CLGIJAsmNL_CLGIJAsmNLE_CLGIJAsmNLH_CLGRJ_CLGRJAsm_CLGRJAsmE_CLGRJAsmH_CLGRJAsmHE_CLGRJAsmL_CLGRJAsmLE_CLGRJAsmLH_CLGRJAsmNE_CLGRJAsmNH_CLGRJAsmNHE_CLGRJAsmNL_CLGRJAsmNLE_CLGRJAsmNLH_CLIJ_CLIJAsm_CLIJAsmE_CLIJAsmH_CLIJAsmHE_CLIJAsmL_CLIJAsmLE_CLIJAsmLH_CLIJAsmNE_CLIJAsmNH_CLIJAsmNHE_CLIJAsmNL_CLIJAsmNLE_CLIJAsmNLH_CLRJ_CLRJAsm_CLRJAsmE_CLRJAsmH_CLRJAsmHE_CLRJAsmL_CLRJAsmLE_CLRJAsmLH_CLRJAsmNE_CLRJAsmNH_CLRJAsmNHE_CLRJAsmNL_CLRJAsmNLE_CLRJAsmNLH_CRJ_CRJAsm_CRJAsmE_CRJAsmH_CRJAsmHE_CRJAsmL_CRJAsmLE_CRJAsmLH_CRJAsmNE_CRJAsmNH_CRJAsmNHE_CRJAsmNL_CRJAsmNLE_CRJAsmNLH") 1, false, false, 57, 1,  1, 1,  0, 0}, // #11
  {DBGFIELD("CGIB_CGIBAsm_CGIBAsmE_CGIBAsmH_CGIBAsmHE_CGIBAsmL_CGIBAsmLE_CGIBAsmLH_CGIBAsmNE_CGIBAsmNH_CGIBAsmNHE_CGIBAsmNL_CGIBAsmNLE_CGIBAsmNLH_CGIBCall_CGIBReturn_CGRB_CGRBAsm_CGRBAsmE_CGRBAsmH_CGRBAsmHE_CGRBAsmL_CGRBAsmLE_CGRBAsmLH_CGRBAsmNE_CGRBAsmNH_CGRBAsmNHE_CGRBAsmNL_CGRBAsmNLE_CGRBAsmNLH_CGRBCall_CGRBReturn_CIB_CIBAsm_CIBAsmE_CIBAsmH_CIBAsmHE_CIBAsmL_CIBAsmLE_CIBAsmLH_CIBAsmNE_CIBAsmNH_CIBAsmNHE_CIBAsmNL_CIBAsmNLE_CIBAsmNLH_CIBCall_CIBReturn_CLGIB_CLGIBAsm_CLGIBAsmE_CLGIBAsmH_CLGIBAsmHE_CLGIBAsmL_CLGIBAsmLE_CLGIBAsmLH_CLGIBAsmNE_CLGIBAsmNH_CLGIBAsmNHE_CLGIBAsmNL_CLGIBAsmNLE_CLGIBAsmNLH_CLGIBCall_CLGIBReturn_CLGRB_CLGRBAsm_CLGRBAsmE_CLGRBAsmH_CLGRBAsmHE_CLGRBAsmL_CLGRBAsmLE_CLGRBAsmLH_CLGRBAsmNE_CLGRBAsmNH_CLGRBAsmNHE_CLGRBAsmNL_CLGRBAsmNLE_CLGRBAsmNLH_CLGRBCall_CLGRBReturn_CLIB_CLIBAsm_CLIBAsmE_CLIBAsmH_CLIBAsmHE_CLIBAsmL_CLIBAsmLE_CLIBAsmLH_CLIBAsmNE_CLIBAsmNH_CLIBAsmNHE_CLIBAsmNL_CLIBAsmNLE_CLIBAsmNLH_CLIBCall_CLIBReturn_CLRB_CLRBAsm_CLRBAsmE_CLRBAsmH_CLRBAsmHE_CLRBAsmL_CLRBAsmLE_CLRBAsmLH_CLRBAsmNE_CLRBAsmNH_CLRBAsmNHE_CLRBAsmNL_CLRBAsmNLE_CLRBAsmNLH_CLRBCall_CLRBReturn_CRB_CRBAsm_CRBAsmE_CRBAsmH_CRBAsmHE_CRBAsmL_CRBAsmLE_CRBAsmLH_CRBAsmNE_CRBAsmNH_CRBAsmNHE_CRBAsmNL_CRBAsmNLE_CRBAsmNLH_CRBCall_CRBReturn") 2, true, true, 58, 1, 48, 4,  0, 0}, // #12
  {DBGFIELD("CondTrap_Trap")      1, false, false,  3, 1,  1, 1,  0, 0}, // #13
  {DBGFIELD("CGIT_CGITAsm_CGITAsmE_CGITAsmH_CGITAsmHE_CGITAsmL_CGITAsmLE_CGITAsmLH_CGITAsmNE_CGITAsmNH_CGITAsmNHE_CGITAsmNL_CGITAsmNLE_CGITAsmNLH_CGRT_CGRTAsm_CGRTAsmE_CGRTAsmH_CGRTAsmHE_CGRTAsmL_CGRTAsmLE_CGRTAsmLH_CGRTAsmNE_CGRTAsmNH_CGRTAsmNHE_CGRTAsmNL_CGRTAsmNLE_CGRTAsmNLH_CIT_CITAsm_CITAsmE_CITAsmH_CITAsmHE_CITAsmL_CITAsmLE_CITAsmLH_CITAsmNE_CITAsmNH_CITAsmNHE_CITAsmNL_CITAsmNLE_CITAsmNLH_CRT_CRTAsm_CRTAsmE_CRTAsmH_CRTAsmHE_CRTAsmL_CRTAsmLE_CRTAsmLH_CRTAsmNE_CRTAsmNH_CRTAsmNHE_CRTAsmNL_CRTAsmNLE_CRTAsmNLH") 1, false, false, 57, 1,  1, 1,  0, 0}, // #14
  {DBGFIELD("CLGRT_CLGRTAsm_CLGRTAsmE_CLGRTAsmH_CLGRTAsmHE_CLGRTAsmL_CLGRTAsmLE_CLGRTAsmLH_CLGRTAsmNE_CLGRTAsmNH_CLGRTAsmNHE_CLGRTAsmNL_CLGRTAsmNLE_CLGRTAsmNLH_CLRT_CLRTAsm_CLRTAsmE_CLRTAsmH_CLRTAsmHE_CLRTAsmL_CLRTAsmLE_CLRTAsmLH_CLRTAsmNE_CLRTAsmNH_CLRTAsmNHE_CLRTAsmNL_CLRTAsmNLE_CLRTAsmNLH") 1, false, false, 57, 1,  1, 1,  0, 0}, // #15
  {DBGFIELD("CLFIT_CLFITAsm_CLFITAsmE_CLFITAsmH_CLFITAsmHE_CLFITAsmL_CLFITAsmLE_CLFITAsmLH_CLFITAsmNE_CLFITAsmNH_CLFITAsmNHE_CLFITAsmNL_CLFITAsmNLE_CLFITAsmNLH_CLGIT_CLGITAsm_CLGITAsmE_CLGITAsmH_CLGITAsmHE_CLGITAsmL_CLGITAsmLE_CLGITAsmLH_CLGITAsmNE_CLGITAsmNH_CLGITAsmNHE_CLGITAsmNL_CLGITAsmNLE_CLGITAsmNLH") 1, false, false, 57, 1,  1, 1,  0, 0}, // #16
  {DBGFIELD("CLGT_CLGTAsm_CLGTAsmE_CLGTAsmH_CLGTAsmHE_CLGTAsmL_CLGTAsmLE_CLGTAsmLH_CLGTAsmNE_CLGTAsmNH_CLGTAsmNHE_CLGTAsmNL_CLGTAsmNLE_CLGTAsmNLH_CLT_CLTAsm_CLTAsmE_CLTAsmH_CLTAsmHE_CLTAsmL_CLTAsmLE_CLTAsmLH_CLTAsmNE_CLTAsmNH_CLTAsmNHE_CLTAsmNL_CLTAsmNLE_CLTAsmNLH") 2, false, false, 63, 2,  6, 3,  0, 0}, // #17
  {DBGFIELD("BRAS")               3, true, true, 71, 2, 16, 5,  0, 0}, // #18
  {DBGFIELD("BRASL_CallBRASL")    3, true, true, 88, 2, 16, 5,  0, 0}, // #19
  {DBGFIELD("BAS_BASR_CallBASR")  3, true, true, 88, 2, 16, 5,  0, 0}, // #20
  {DBGFIELD("TLS_GDCALL_TLS_LDCALL") 3, true, true, 88, 2, 16, 5,  0, 0}, // #21
  {DBGFIELD("Return")             1, false, true, 57, 1,  4, 2,  0, 0}, // #22
  {DBGFIELD("CondReturn")         1, false, false, 57, 1,  1, 1,  0, 0}, // #23
  {DBGFIELD("Select32_Select32Mux_Select64") 1, false, false, 36, 1,  1, 1,  0, 0}, // #24
  {DBGFIELD("CondStore16_CondStore16Inv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #25
  {DBGFIELD("CondStore16Mux_CondStore16MuxInv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #26
  {DBGFIELD("CondStore32_CondStore32Inv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #27
  {DBGFIELD("CondStore32Mux_CondStore32MuxInv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #28
  {DBGFIELD("CondStore64_CondStore64Inv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #29
  {DBGFIELD("CondStore8_CondStore8Inv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #30
  {DBGFIELD("CondStore8Mux_CondStore8MuxInv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #31
  {DBGFIELD("MVGHI_MVHHI_MVHI")   2, false, false, 63, 2,  6, 3,  0, 0}, // #32
  {DBGFIELD("MVI_MVIY")           2, false, false, 63, 2,  6, 3,  0, 0}, // #33
  {DBGFIELD("MVC")                4, true, true, 90, 2, 469, 6,  0, 0}, // #34
  {DBGFIELD("MVCL_MVCLE_MVCLU")   1, true, true,  1, 1, 32, 3,  0, 0}, // #35
  {DBGFIELD("COPY_TO_REGCLASS_COPY") 1, false, false, 36, 1,  1, 1,  0, 0}, // #36
  {DBGFIELD("EXTRACT_SUBREG")     1, false, false, 36, 1,  1, 1,  0, 0}, // #37
  {DBGFIELD("INSERT_SUBREG")      1, false, false, 36, 1,  1, 1,  0, 0}, // #38
  {DBGFIELD("REG_SEQUENCE")       1, false, false, 36, 1,  1, 1,  0, 0}, // #39
  {DBGFIELD("SUBREG_TO_REG")      1, false, false, 36, 1,  1, 1,  0, 0}, // #40
  {DBGFIELD("L_LCBB_LFH_LMux_LRL_LY") 1, false, false,  1, 1,  2, 1,  0, 0}, // #41
  {DBGFIELD("LG_LGRL")            1, false, false,  1, 1,  2, 1,  0, 0}, // #42
  {DBGFIELD("L128")               1, false, false,  1, 1,  2, 1,  0, 0}, // #43
  {DBGFIELD("LLIHF_LLIHH_LLIHL")  1, false, false, 36, 1,  1, 1,  0, 0}, // #44
  {DBGFIELD("LLILF_LLILH_LLILL")  1, false, false, 36, 1,  1, 1,  0, 0}, // #45
  {DBGFIELD("LGFI_LGHI")          1, false, false, 36, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("LHI_LHIMux")         1, false, false, 36, 1,  1, 1,  0, 0}, // #47
  {DBGFIELD("LR_LRMux")           1, false, false, 36, 1,  1, 1,  0, 0}, // #48
  {DBGFIELD("LZRF_LZRG")          1, false, false,  1, 1,  2, 1,  0, 0}, // #49
  {DBGFIELD("LAT_LFHAT_LGAT")     2, false, false, 63, 2,  6, 3,  0, 0}, // #50
  {DBGFIELD("LT_LTG")             2, false, false, 36, 2,  6, 3,  0, 0}, // #51
  {DBGFIELD("LTGR_LTR")           1, false, false, 36, 1,  1, 1,  0, 0}, // #52
  {DBGFIELD("STG_STGRL")          2, false, false, 63, 2,  6, 3,  0, 0}, // #53
  {DBGFIELD("ST128")              2, false, false, 63, 2,  6, 3,  0, 0}, // #54
  {DBGFIELD("ST_STFH_STMux_STRL_STY") 2, false, false, 63, 2,  6, 3,  0, 0}, // #55
  {DBGFIELD("MVST")               1, true, true,  1, 1, 32, 3,  0, 0}, // #56
  {DBGFIELD("LOCRMux")            1, false, false, 36, 1, 49, 2,  0, 0}, // #57
  {DBGFIELD("LOCFHR_LOCFHRAsm_LOCFHRAsmE_LOCFHRAsmH_LOCFHRAsmHE_LOCFHRAsmL_LOCFHRAsmLE_LOCFHRAsmLH_LOCFHRAsmM_LOCFHRAsmNE_LOCFHRAsmNH_LOCFHRAsmNHE_LOCFHRAsmNL_LOCFHRAsmNLE_LOCFHRAsmNLH_LOCFHRAsmNM_LOCFHRAsmNO_LOCFHRAsmNP_LOCFHRAsmNZ_LOCFHRAsmO_LOCFHRAsmP_LOCFHRAsmZ_LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false, 36, 1, 49, 2,  0, 0}, // #58
  {DBGFIELD("LOCGHI_LOCGHIAsm_LOCGHIAsmE_LOCGHIAsmH_LOCGHIAsmHE_LOCGHIAsmL_LOCGHIAsmLE_LOCGHIAsmLH_LOCGHIAsmM_LOCGHIAsmNE_LOCGHIAsmNH_LOCGHIAsmNHE_LOCGHIAsmNL_LOCGHIAsmNLE_LOCGHIAsmNLH_LOCGHIAsmNM_LOCGHIAsmNO_LOCGHIAsmNP_LOCGHIAsmNZ_LOCGHIAsmO_LOCGHIAsmP_LOCGHIAsmZ_LOCHHI_LOCHHIAsm_LOCHHIAsmE_LOCHHIAsmH_LOCHHIAsmHE_LOCHHIAsmL_LOCHHIAsmLE_LOCHHIAsmLH_LOCHHIAsmM_LOCHHIAsmNE_LOCHHIAsmNH_LOCHHIAsmNHE_LOCHHIAsmNL_LOCHHIAsmNLE_LOCHHIAsmNLH_LOCHHIAsmNM_LOCHHIAsmNO_LOCHHIAsmNP_LOCHHIAsmNZ_LOCHHIAsmO_LOCHHIAsmP_LOCHHIAsmZ_LOCHI_LOCHIAsm_LOCHIAsmE_LOCHIAsmH_LOCHIAsmHE_LOCHIAsmL_LOCHIAsmLE_LOCHIAsmLH_LOCHIAsmM_LOCHIAsmNE_LOCHIAsmNH_LOCHIAsmNHE_LOCHIAsmNL_LOCHIAsmNLE_LOCHIAsmNLH_LOCHIAsmNM_LOCHIAsmNO_LOCHIAsmNP_LOCHIAsmNZ_LOCHIAsmO_LOCHIAsmP_LOCHIAsmZ_LOCHIMux") 1, false, false, 36, 1, 49, 2,  0, 0}, // #59
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCFH_LOCFHAsm_LOCFHAsmE_LOCFHAsmH_LOCFHAsmHE_LOCFHAsmL_LOCFHAsmLE_LOCFHAsmLH_LOCFHAsmM_LOCFHAsmNE_LOCFHAsmNH_LOCFHAsmNHE_LOCFHAsmNL_LOCFHAsmNLE_LOCFHAsmNLH_LOCFHAsmNM_LOCFHAsmNO_LOCFHAsmNP_LOCFHAsmNZ_LOCFHAsmO_LOCFHAsmP_LOCFHAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ_LOCMux") 2, false, false, 36, 2, 22, 3,  0, 0}, // #60
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCFH_STOCFHAsm_STOCFHAsmE_STOCFHAsmH_STOCFHAsmHE_STOCFHAsmL_STOCFHAsmLE_STOCFHAsmLH_STOCFHAsmM_STOCFHAsmNE_STOCFHAsmNH_STOCFHAsmNHE_STOCFHAsmNL_STOCFHAsmNLE_STOCFHAsmNLH_STOCFHAsmNM_STOCFHAsmNO_STOCFHAsmNP_STOCFHAsmNZ_STOCFHAsmO_STOCFHAsmP_STOCFHAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ_STOCMux") 2, false, false, 63, 2,  6, 3,  0, 0}, // #61
  {DBGFIELD("LBR_LGR_LHR")        1, false, false, 36, 1,  1, 1,  0, 0}, // #62
  {DBGFIELD("LGBR_LGFR_LGHR")     1, false, false, 36, 1,  1, 1,  0, 0}, // #63
  {DBGFIELD("LTGF")               2, false, false, 36, 2,  6, 3,  0, 0}, // #64
  {DBGFIELD("LTGFR")              1, false, false, 36, 1,  1, 1,  0, 0}, // #65
  {DBGFIELD("LB_LBH_LBMux")       2, false, false, 36, 2,  6, 3,  0, 0}, // #66
  {DBGFIELD("LH_LHY")             2, false, false, 36, 2,  6, 3,  0, 0}, // #67
  {DBGFIELD("LHH_LHMux_LHRL")     2, false, false, 36, 2,  6, 3,  0, 0}, // #68
  {DBGFIELD("LGB_LGF_LGH")        2, false, false, 36, 2,  6, 3,  0, 0}, // #69
  {DBGFIELD("LGFRL_LGHRL")        2, false, false, 36, 2,  6, 3,  0, 0}, // #70
  {DBGFIELD("LLCR_LLCRMux")       1, false, false, 36, 1,  1, 1,  0, 0}, // #71
  {DBGFIELD("LLHR_LLHRMux")       1, false, false, 36, 1,  1, 1,  0, 0}, // #72
  {DBGFIELD("LLGCR_LLGFR_LLGHR_LLGTR") 1, false, false, 36, 1,  1, 1,  0, 0}, // #73
  {DBGFIELD("LLC_LLCMux")         1, false, false,  1, 1,  2, 1,  0, 0}, // #74
  {DBGFIELD("LLH_LLHMux")         1, false, false,  1, 1,  2, 1,  0, 0}, // #75
  {DBGFIELD("LLCH_LLHH")          2, false, false, 36, 2,  6, 3,  0, 0}, // #76
  {DBGFIELD("LLHRL")              1, false, false,  1, 1,  2, 1,  0, 0}, // #77
  {DBGFIELD("LLGC_LLGF_LLGFRL_LLGH_LLGHRL_LLGT") 1, false, false,  1, 1,  2, 1,  0, 0}, // #78
  {DBGFIELD("LLZRGF")             1, false, false,  1, 1,  2, 1,  0, 0}, // #79
  {DBGFIELD("LLGFAT_LLGTAT")      2, false, false, 63, 2,  6, 3,  0, 0}, // #80
  {DBGFIELD("STC_STCH_STCMux_STCY") 2, false, false, 63, 2,  6, 3,  0, 0}, // #81
  {DBGFIELD("STH_STHH_STHMux_STHRL_STHY") 2, false, false, 63, 2,  6, 3,  0, 0}, // #82
  {DBGFIELD("STCM_STCMH_STCMY")   2, false, false, 63, 2,  6, 3,  0, 0}, // #83
  {DBGFIELD("LM_LMG_LMH_LMY")     5, true, true, 20, 1, 35, 7,  0, 0}, // #84
  {DBGFIELD("LMD")                1, true, true,  1, 1, 32, 3,  0, 0}, // #85
  {DBGFIELD("STM_STMG_STMH_STMY") 5, true, true, 92, 2, 42, 7,  0, 0}, // #86
  {DBGFIELD("LRVGR_LRVR")         1, false, false, 36, 1,  1, 1,  0, 0}, // #87
  {DBGFIELD("LRV_LRVG_LRVH")      2, false, false, 36, 2,  6, 3,  0, 0}, // #88
  {DBGFIELD("STRV_STRVG_STRVH")   2, false, false, 63, 2,  6, 3,  0, 0}, // #89
  {DBGFIELD("MVCIN")              1, true, true,  1, 1, 32, 3,  0, 0}, // #90
  {DBGFIELD("LA_LARL_LAY")        1, false, false, 36, 1,  1, 1,  0, 0}, // #91
  {DBGFIELD("GOT")                1, false, false, 36, 1,  1, 1,  0, 0}, // #92
  {DBGFIELD("LPGR_LPR")           1, false, false, 36, 1,  1, 1,  0, 0}, // #93
  {DBGFIELD("LNGFR_LPGFR")        2, true, false, 33, 1, 48, 4,  0, 0}, // #94
  {DBGFIELD("LNGR_LNR")           1, false, false, 36, 1,  1, 1,  0, 0}, // #95
  {DBGFIELD("LCGR_LCR")           1, false, false, 36, 1,  1, 1,  0, 0}, // #96
  {DBGFIELD("LCGFR")              2, true, false, 33, 1, 48, 4,  0, 0}, // #97
  {DBGFIELD("IC_ICY")             2, false, false, 36, 2,  6, 3,  0, 0}, // #98
  {DBGFIELD("IC32_IC32Y")         2, false, false, 36, 2,  6, 3,  0, 0}, // #99
  {DBGFIELD("ICM_ICMH_ICMY")      2, false, false, 36, 2,  6, 3,  0, 0}, // #100
  {DBGFIELD("IIFMux_IIHMux_IILMux") 1, false, false, 36, 1,  1, 1,  0, 0}, // #101
  {DBGFIELD("IIHF_IIHF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #102
  {DBGFIELD("IIHH_IIHH64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #103
  {DBGFIELD("IIHL_IIHL64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #104
  {DBGFIELD("IILF_IILF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #105
  {DBGFIELD("IILH_IILH64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #106
  {DBGFIELD("IILL_IILL64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #107
  {DBGFIELD("A_AY")               2, false, false, 36, 2,  6, 3,  0, 0}, // #108
  {DBGFIELD("AH_AHY")             2, false, false, 36, 2, 22, 3,  0, 0}, // #109
  {DBGFIELD("AIH")                1, false, false, 36, 1,  1, 1,  0, 0}, // #110
  {DBGFIELD("AFI_AFIMux")         1, false, false, 36, 1,  1, 1,  0, 0}, // #111
  {DBGFIELD("AG")                 2, false, false, 36, 2,  6, 3,  0, 0}, // #112
  {DBGFIELD("AGFI")               1, false, false, 36, 1,  1, 1,  0, 0}, // #113
  {DBGFIELD("AGHI_AGHIK")         1, false, false, 36, 1,  1, 1,  0, 0}, // #114
  {DBGFIELD("AGR_AGRK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #115
  {DBGFIELD("AHI_AHIK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #116
  {DBGFIELD("AHIMux_AHIMuxK")     1, false, false, 36, 1,  1, 1,  0, 0}, // #117
  {DBGFIELD("AL_ALY")             2, false, false, 36, 2,  6, 3,  0, 0}, // #118
  {DBGFIELD("ALFI_ALHSIK")        1, false, false, 36, 1,  1, 1,  0, 0}, // #119
  {DBGFIELD("ALG_ALGF")           2, false, false, 36, 2,  6, 3,  0, 0}, // #120
  {DBGFIELD("ALGHSIK")            1, false, false, 36, 1,  1, 1,  0, 0}, // #121
  {DBGFIELD("ALGFI_ALGFR")        1, false, false, 36, 1,  1, 1,  0, 0}, // #122
  {DBGFIELD("ALGR_ALGRK")         1, false, false, 36, 1,  1, 1,  0, 0}, // #123
  {DBGFIELD("ALR_ALRK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #124
  {DBGFIELD("AR_ARK")             1, false, false, 36, 1,  1, 1,  0, 0}, // #125
  {DBGFIELD("AHHHR_ALHHHR")       1, false, false, 36, 1,  1, 1,  0, 0}, // #126
  {DBGFIELD("AHHLR_ALHHLR")       1, false, false, 36, 1, 49, 2,  0, 0}, // #127
  {DBGFIELD("ALSIH_ALSIHN")       1, false, false, 36, 1,  1, 1,  0, 0}, // #128
  {DBGFIELD("AGSI_ALGSI_ALSI_ASI") 2, false, false, 63, 2,  6, 3,  0, 0}, // #129
  {DBGFIELD("ALC_ALCG")           2, true, true, 36, 2, 22, 4,  0, 0}, // #130
  {DBGFIELD("ALCGR_ALCR")         1, true, true, 36, 1, 49, 3,  0, 0}, // #131
  {DBGFIELD("AGF_AGH")            2, false, false, 36, 2, 22, 3,  0, 0}, // #132
  {DBGFIELD("AGFR")               1, false, false, 36, 1, 49, 2,  0, 0}, // #133
  {DBGFIELD("S_SG_SY")            2, false, false, 36, 2,  6, 3,  0, 0}, // #134
  {DBGFIELD("SH_SHY")             2, false, false, 36, 2, 22, 3,  0, 0}, // #135
  {DBGFIELD("SGR_SGRK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #136
  {DBGFIELD("SLFI")               1, false, false, 36, 1,  1, 1,  0, 0}, // #137
  {DBGFIELD("SL_SLG_SLGF_SLY")    2, false, false, 36, 2,  6, 3,  0, 0}, // #138
  {DBGFIELD("SLGFI_SLGFR")        1, false, false, 36, 1,  1, 1,  0, 0}, // #139
  {DBGFIELD("SLGR_SLGRK")         1, false, false, 36, 1,  1, 1,  0, 0}, // #140
  {DBGFIELD("SLR_SLRK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #141
  {DBGFIELD("SR_SRK")             1, false, false, 36, 1,  1, 1,  0, 0}, // #142
  {DBGFIELD("SHHHR_SLHHHR")       1, false, false, 36, 1,  1, 1,  0, 0}, // #143
  {DBGFIELD("SHHLR_SLHHLR")       1, false, false, 36, 1, 49, 2,  0, 0}, // #144
  {DBGFIELD("SLB_SLBG")           2, true, true, 36, 2, 22, 4,  0, 0}, // #145
  {DBGFIELD("SLBGR_SLBR")         1, true, true, 36, 1, 49, 3,  0, 0}, // #146
  {DBGFIELD("SGF_SGH")            2, false, false, 36, 2, 22, 3,  0, 0}, // #147
  {DBGFIELD("SGFR")               1, false, false, 36, 1, 49, 2,  0, 0}, // #148
  {DBGFIELD("N_NG_NY")            2, false, false, 36, 2,  6, 3,  0, 0}, // #149
  {DBGFIELD("NGR_NGRK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #150
  {DBGFIELD("NIFMux_NIHMux_NILMux") 1, false, false, 36, 1,  1, 1,  0, 0}, // #151
  {DBGFIELD("NI_NIY")             2, false, false, 63, 2,  6, 3,  0, 0}, // #152
  {DBGFIELD("NIHF_NIHF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #153
  {DBGFIELD("NIHH_NIHH64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #154
  {DBGFIELD("NIHL_NIHL64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #155
  {DBGFIELD("NILF_NILF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #156
  {DBGFIELD("NILH_NILH64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #157
  {DBGFIELD("NILL_NILL64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #158
  {DBGFIELD("NR_NRK")             1, false, false, 36, 1,  1, 1,  0, 0}, // #159
  {DBGFIELD("NC")                 3, true, false, 94, 2, 55, 5,  0, 0}, // #160
  {DBGFIELD("O_OG_OY")            2, false, false, 36, 2,  6, 3,  0, 0}, // #161
  {DBGFIELD("OGR_OGRK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #162
  {DBGFIELD("OI_OIY")             2, false, false, 63, 2,  6, 3,  0, 0}, // #163
  {DBGFIELD("OIFMux_OIHMux_OILMux") 1, false, false, 36, 1,  1, 1,  0, 0}, // #164
  {DBGFIELD("OIHF_OIHF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #165
  {DBGFIELD("OIHH_OIHH64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #166
  {DBGFIELD("OIHL_OIHL64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #167
  {DBGFIELD("OILF_OILF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #168
  {DBGFIELD("OILH_OILH64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #169
  {DBGFIELD("OILL_OILL64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #170
  {DBGFIELD("OR_ORK")             1, false, false, 36, 1,  1, 1,  0, 0}, // #171
  {DBGFIELD("OC")                 3, true, false, 94, 2, 55, 5,  0, 0}, // #172
  {DBGFIELD("X_XG_XY")            2, false, false, 36, 2,  6, 3,  0, 0}, // #173
  {DBGFIELD("XI_XIY")             2, false, false, 63, 2,  6, 3,  0, 0}, // #174
  {DBGFIELD("XIFMux")             1, false, false, 36, 1,  1, 1,  0, 0}, // #175
  {DBGFIELD("XGR_XGRK")           1, false, false, 36, 1,  1, 1,  0, 0}, // #176
  {DBGFIELD("XIHF_XIHF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #177
  {DBGFIELD("XILF_XILF64")        1, false, false, 36, 1,  1, 1,  0, 0}, // #178
  {DBGFIELD("XR_XRK")             1, false, false, 36, 1,  1, 1,  0, 0}, // #179
  {DBGFIELD("XC")                 3, true, false, 94, 2, 55, 5,  0, 0}, // #180
  {DBGFIELD("MS_MSGF_MSY")        2, false, false, 36, 2, 79, 3,  0, 0}, // #181
  {DBGFIELD("MSFI_MSR")           1, false, false, 36, 1, 77, 2,  0, 0}, // #182
  {DBGFIELD("MSG")                2, false, false, 36, 2, 676, 3,  0, 0}, // #183
  {DBGFIELD("MSGR")               1, false, false, 36, 1, 83, 2,  0, 0}, // #184
  {DBGFIELD("MSGFI_MSGFR")        1, false, false, 36, 1, 77, 2,  0, 0}, // #185
  {DBGFIELD("MLG")                2, true, true, 33, 2, 679, 4,  0, 0}, // #186
  {DBGFIELD("MLGR")               1, true, true, 33, 1, 683, 3,  0, 0}, // #187
  {DBGFIELD("MGHI")               1, false, false, 36, 1,  1, 2,  0, 0}, // #188
  {DBGFIELD("MHI")                1, false, false, 36, 1,  1, 2,  0, 0}, // #189
  {DBGFIELD("MH_MHY")             2, false, false, 36, 2, 123, 3,  0, 0}, // #190
  {DBGFIELD("MLR_MR")             1, true, true, 33, 1, 686, 3,  0, 0}, // #191
  {DBGFIELD("M_MFY_ML")           2, true, true, 33, 2, 689, 4,  0, 0}, // #192
  {DBGFIELD("MGH")                2, false, false, 36, 2, 123, 3,  0, 0}, // #193
  {DBGFIELD("MG")                 3, true, true, 33, 2, 645, 5,  0, 0}, // #194
  {DBGFIELD("MGRK")               2, true, true, 33, 1, 693, 4,  0, 0}, // #195
  {DBGFIELD("MSC")                2, false, false, 36, 2, 79, 3,  0, 0}, // #196
  {DBGFIELD("MSGC")               2, false, false, 36, 2, 676, 3,  0, 0}, // #197
  {DBGFIELD("MSRKC")              1, false, false, 36, 1, 77, 2,  0, 0}, // #198
  {DBGFIELD("MSGRKC")             1, false, false, 36, 1, 83, 2,  0, 0}, // #199
  {DBGFIELD("DR")                 2, true, true, 39, 1, 397, 4,  0, 0}, // #200
  {DBGFIELD("D")                  3, true, true, 45, 2, 486, 5,  0, 0}, // #201
  {DBGFIELD("DSGFR_DSGR")         1, true, true, 33, 1, 326, 3,  0, 0}, // #202
  {DBGFIELD("DSG_DSGF")           2, true, true, 33, 2, 491, 4,  0, 0}, // #203
  {DBGFIELD("DLR")                2, true, true, 39, 1, 397, 4,  0, 0}, // #204
  {DBGFIELD("DLGR")               2, true, true, 39, 1, 325, 4,  0, 0}, // #205
  {DBGFIELD("DL_DLG")             3, true, true, 45, 2, 486, 5,  0, 0}, // #206
  {DBGFIELD("SLL_SLLG_SLLK")      1, false, false, 36, 1,  1, 1,  0, 0}, // #207
  {DBGFIELD("SRL_SRLG_SRLK")      1, false, false, 36, 1,  1, 1,  0, 0}, // #208
  {DBGFIELD("SRA_SRAG_SRAK")      1, false, false, 36, 1,  1, 1,  0, 0}, // #209
  {DBGFIELD("SLA_SLAG_SLAK")      1, false, false, 36, 1,  1, 1,  0, 0}, // #210
  {DBGFIELD("SLDA_SLDL_SRDA_SRDL") 5, true, true, 45, 2, 120, 7,  0, 0}, // #211
  {DBGFIELD("RLL_RLLG")           2, false, false, 36, 2, 22, 3,  0, 0}, // #212
  {DBGFIELD("RISBG_RISBG32_RISBGN") 1, false, false, 36, 1,  1, 1,  0, 0}, // #213
  {DBGFIELD("RISBHG_RISBHH_RISBHL") 1, false, false, 36, 1,  1, 1,  0, 0}, // #214
  {DBGFIELD("RISBLG_RISBLH_RISBLL") 1, false, false, 36, 1,  1, 1,  0, 0}, // #215
  {DBGFIELD("RISBMux")            1, false, false, 36, 1,  1, 1,  0, 0}, // #216
  {DBGFIELD("RNSBG_ROSBG_RXSBG")  2, true, false, 33, 1, 48, 4,  0, 0}, // #217
  {DBGFIELD("C_CG_CMux_CRL_CY")   2, false, false, 63, 2,  6, 3,  0, 0}, // #218
  {DBGFIELD("CFI_CFIMux_CHI_CHIMux") 1, false, false, 57, 1,  1, 1,  0, 0}, // #219
  {DBGFIELD("CGFI_CGHI")          1, false, false, 57, 1,  1, 1,  0, 0}, // #220
  {DBGFIELD("CGHSI_CGRL")         2, false, false, 63, 2,  6, 3,  0, 0}, // #221
  {DBGFIELD("CGR_CR")             1, false, false, 57, 1,  1, 1,  0, 0}, // #222
  {DBGFIELD("CIH")                1, false, false, 57, 1,  1, 1,  0, 0}, // #223
  {DBGFIELD("CHF_CHSI")           2, false, false, 63, 2,  6, 3,  0, 0}, // #224
  {DBGFIELD("CL_CLFHSI_CLMux_CLY") 2, false, false, 63, 2,  6, 3,  0, 0}, // #225
  {DBGFIELD("CLFI_CLFIMux")       1, false, false, 57, 1,  1, 1,  0, 0}, // #226
  {DBGFIELD("CLG_CLGHRL_CLGHSI")  2, false, false, 63, 2,  6, 3,  0, 0}, // #227
  {DBGFIELD("CLGF_CLGFRL")        2, false, false, 63, 2,  6, 3,  0, 0}, // #228
  {DBGFIELD("CLGFI_CLGFR")        1, false, false, 57, 1,  1, 1,  0, 0}, // #229
  {DBGFIELD("CLGR")               1, false, false, 57, 1,  1, 1,  0, 0}, // #230
  {DBGFIELD("CLGRL")              2, false, false, 63, 2,  6, 3,  0, 0}, // #231
  {DBGFIELD("CLHF_CLHHSI_CLHRL")  2, false, false, 63, 2,  6, 3,  0, 0}, // #232
  {DBGFIELD("CLIH")               1, false, false, 57, 1,  1, 1,  0, 0}, // #233
  {DBGFIELD("CLI_CLIY")           2, false, false, 63, 2,  6, 3,  0, 0}, // #234
  {DBGFIELD("CLR")                1, false, false, 57, 1,  1, 1,  0, 0}, // #235
  {DBGFIELD("CLRL")               2, false, false, 63, 2,  6, 3,  0, 0}, // #236
  {DBGFIELD("CHHR_CLHHR")         1, false, false, 57, 1,  1, 1,  0, 0}, // #237
  {DBGFIELD("CHLR_CLHLR")         1, false, false, 57, 1, 49, 2,  0, 0}, // #238
  {DBGFIELD("CH_CHRL_CHY")        2, false, false, 63, 2, 22, 3,  0, 0}, // #239
  {DBGFIELD("CGH_CGHRL")          2, false, false, 63, 2, 22, 3,  0, 0}, // #240
  {DBGFIELD("CHHSI")              3, true, false, 96, 3, 21, 5,  0, 0}, // #241
  {DBGFIELD("CGF_CGFRL")          2, false, false, 63, 2, 22, 3,  0, 0}, // #242
  {DBGFIELD("CGFR")               1, false, false, 57, 1, 49, 2,  0, 0}, // #243
  {DBGFIELD("CLC")                3, true, false, 94, 2, 127, 5,  0, 0}, // #244
  {DBGFIELD("CLCL_CLCLE_CLCLU")   1, true, true,  1, 1, 32, 3,  0, 0}, // #245
  {DBGFIELD("CLST")               1, true, true,  1, 1, 32, 3,  0, 0}, // #246
  {DBGFIELD("TM_TMY")             2, false, false, 63, 2,  6, 3,  0, 0}, // #247
  {DBGFIELD("TMHMux_TMLMux")      1, false, false, 57, 1,  1, 1,  0, 0}, // #248
  {DBGFIELD("TMHH_TMHH64")        1, false, false, 57, 1,  1, 1,  0, 0}, // #249
  {DBGFIELD("TMHL_TMHL64")        1, false, false, 57, 1,  1, 1,  0, 0}, // #250
  {DBGFIELD("TMLH_TMLH64")        1, false, false, 57, 1,  1, 1,  0, 0}, // #251
  {DBGFIELD("TMLL_TMLL64")        1, false, false, 57, 1,  1, 1,  0, 0}, // #252
  {DBGFIELD("CLM_CLMH_CLMY")      2, false, false, 63, 2, 22, 3,  0, 0}, // #253
  {DBGFIELD("PFD_PFDRL")          1, false, false,  1, 1,  2, 1,  0, 0}, // #254
  {DBGFIELD("BPP")                1, false, false, 57, 1, 49, 2,  0, 0}, // #255
  {DBGFIELD("BPRP")               1, false, true, 57, 1,  4, 2,  0, 0}, // #256
  {DBGFIELD("NIAI")               1, false, false, 57, 1,  1, 1,  0, 0}, // #257
  {DBGFIELD("Serialize")          1, false, true, 57, 1,  4, 2,  0, 0}, // #258
  {DBGFIELD("LAA_LAAG")           2, false, false, 63, 2,  6, 3,  0, 0}, // #259
  {DBGFIELD("LAAL_LAALG")         2, false, false, 63, 2,  6, 3,  0, 0}, // #260
  {DBGFIELD("LAN_LANG")           2, false, false, 63, 2,  6, 3,  0, 0}, // #261
  {DBGFIELD("LAO_LAOG")           2, false, false, 63, 2,  6, 3,  0, 0}, // #262
  {DBGFIELD("LAX_LAXG")           2, false, false, 63, 2,  6, 3,  0, 0}, // #263
  {DBGFIELD("TS")                 2, false, true, 63, 2,  6, 4,  0, 0}, // #264
  {DBGFIELD("CS_CSG_CSY")         3, true, true, 96, 3, 21, 5,  0, 0}, // #265
  {DBGFIELD("CDS_CDSY")           6, true, true, 99, 3, 132, 8,  0, 0}, // #266
  {DBGFIELD("CDSG")               9, true, true, 102, 3, 495, 11,  0, 0}, // #267
  {DBGFIELD("CSST")               2, false, false, 36, 2, 31, 3,  0, 0}, // #268
  {DBGFIELD("PLO")                1, true, true,  1, 1, 32, 3,  0, 0}, // #269
  {DBGFIELD("LPQ")                2, true, true,  8, 1, 150, 4,  0, 0}, // #270
  {DBGFIELD("STPQ")               3, true, true, 67, 2, 21, 5,  0, 0}, // #271
  {DBGFIELD("LPD_LPDG")           2, true, true,  8, 1, 150, 4,  0, 0}, // #272
  {DBGFIELD("TR")                 1, true, true,  1, 1, 32, 3,  0, 0}, // #273
  {DBGFIELD("TRT")                5, true, true, 105, 2, 160, 7,  0, 0}, // #274
  {DBGFIELD("TRTR")               2, false, false, 36, 2, 31, 3,  0, 0}, // #275
  {DBGFIELD("TRE_TRTE_TRTEOpt_TRTRE_TRTREOpt") 1, false, false, 36, 1, 92, 2,  0, 0}, // #276
  {DBGFIELD("TROO_TROOOpt_TROT_TROTOpt_TRTO_TRTOOpt_TRTT_TRTTOpt") 1, false, false,  1, 1, 32, 2,  0, 0}, // #277
  {DBGFIELD("CU12_CU12Opt_CU14_CU14Opt_CU21_CU21Opt_CU24_CU24Opt_CU41_CU42") 1, false, false, 36, 1, 92, 2,  0, 0}, // #278
  {DBGFIELD("CUTFU_CUTFUOpt_CUUTF_CUUTFOpt") 1, false, false, 36, 1, 92, 2,  0, 0}, // #279
  {DBGFIELD("KM_KMA_KMC_KMCTR_KMF_KMO") 1, false, false, 36, 1, 92, 2,  0, 0}, // #280
  {DBGFIELD("KIMD_KLMD_KMAC")     1, false, false, 36, 1, 92, 2,  0, 0}, // #281
  {DBGFIELD("PCC_PPNO_PRNO")      1, false, false, 36, 1, 92, 2,  0, 0}, // #282
  {DBGFIELD("LGG")                1, false, false,  1, 1,  2, 1,  0, 0}, // #283
  {DBGFIELD("LLGFSG")             1, false, false,  1, 1,  7, 2,  0, 0}, // #284
  {DBGFIELD("LGSC_STGSC")         1, false, false,  1, 1, 32, 2,  0, 0}, // #285
  {DBGFIELD("CVBG")               5, true, true, 107, 3, 506, 7,  0, 0}, // #286
  {DBGFIELD("CVB_CVBY")           3, true, true, 110, 3, 513, 5,  0, 0}, // #287
  {DBGFIELD("CVDG")               6, true, true, 113, 3, 518, 8,  0, 0}, // #288
  {DBGFIELD("CVD_CVDY")           4, true, true, 116, 3, 29, 6,  0, 0}, // #289
  {DBGFIELD("MVO")                1, true, true,  1, 1, 39, 3,  0, 0}, // #290
  {DBGFIELD("MVN_MVZ")            1, true, true,  1, 1, 32, 3,  0, 0}, // #291
  {DBGFIELD("PACK_PKA_PKU")       1, true, true,  1, 1, 32, 3,  0, 0}, // #292
  {DBGFIELD("UNPKA_UNPKU")        1, true, true,  1, 1, 66, 3,  0, 0}, // #293
  {DBGFIELD("UNPK")               3, true, false, 94, 2, 127, 5,  0, 0}, // #294
  {DBGFIELD("AP_SP_ZAP")          5, true, true, 119, 3, 526, 7,  0, 0}, // #295
  {DBGFIELD("DP_MP")              6, true, true, 122, 3, 533, 8,  0, 0}, // #296
  {DBGFIELD("SRP")                5, true, true, 107, 3, 541, 7,  0, 0}, // #297
  {DBGFIELD("CP")                 3, true, true, 125, 2, 149, 5,  0, 0}, // #298
  {DBGFIELD("TP")                 2, true, false, 111, 2,  1, 4,  0, 0}, // #299
  {DBGFIELD("ED_EDMK")            1, true, true,  1, 1, 32, 3,  0, 0}, // #300
  {DBGFIELD("CPYA_EAR_SAR")       1, false, false,  1, 1,  2, 1,  0, 0}, // #301
  {DBGFIELD("LAE_LAEY")           2, true, false, 36, 2, 220, 4,  0, 0}, // #302
  {DBGFIELD("LAM_LAMY_STAM_STAMY") 1, true, true,  1, 1, 32, 3,  0, 0}, // #303
  {DBGFIELD("IPM")                1, false, true, 36, 1, 18, 3,  0, 0}, // #304
  {DBGFIELD("SPM")                1, false, true,  1, 1,  3, 2,  0, 0}, // #305
  {DBGFIELD("BAL_BALR")           3, true, true, 88, 2, 548, 5,  0, 0}, // #306
  {DBGFIELD("TAM")                1, false, false, 57, 1,  1, 1,  0, 0}, // #307
  {DBGFIELD("SAM24_SAM31_SAM64")  1, false, true, 57, 1, 49, 3,  0, 0}, // #308
  {DBGFIELD("BSM")                2, true, true, 84, 2, 48, 4,  0, 0}, // #309
  {DBGFIELD("BASSM")              3, true, true, 88, 2, 16, 5,  0, 0}, // #310
  {DBGFIELD("TBEGIN_TBEGINC_TBEGIN_nofloat") 7, true, true, 127, 2, 224, 9,  0, 0}, // #311
  {DBGFIELD("TEND")               1, true, true, 57, 1,  4, 2,  0, 0}, // #312
  {DBGFIELD("TABORT")             1, true, true,  1, 1,  3, 2,  0, 0}, // #313
  {DBGFIELD("ETND")               1, false, false, 36, 1,  1, 1,  0, 0}, // #314
  {DBGFIELD("NTSTG")              2, false, false, 63, 2,  6, 3,  0, 0}, // #315
  {DBGFIELD("PPA")                1, true, true, 57, 1,  4, 2,  0, 0}, // #316
  {DBGFIELD("FLOGR")              2, true, true, 33, 1, 465, 4,  0, 0}, // #317
  {DBGFIELD("POPCNT")             1, false, false, 36, 1, 18, 2,  0, 0}, // #318
  {DBGFIELD("AEXT128")            1, false, false, 36, 1,  1, 1,  0, 0}, // #319
  {DBGFIELD("ZEXT128")            1, false, false, 36, 1,  1, 1,  0, 0}, // #320
  {DBGFIELD("SRST")               2, false, false, 36, 2, 31, 3,  0, 0}, // #321
  {DBGFIELD("SRSTU")              1, false, false, 36, 1, 92, 2,  0, 0}, // #322
  {DBGFIELD("CUSE")               1, true, true,  1, 1, 32, 3,  0, 0}, // #323
  {DBGFIELD("CFC")                1, false, false,  1, 1, 32, 2,  0, 0}, // #324
  {DBGFIELD("UPT")                2, false, false, 63, 2, 31, 3,  0, 0}, // #325
  {DBGFIELD("CKSM")               1, false, false,  1, 1, 32, 2,  0, 0}, // #326
  {DBGFIELD("CMPSC")              1, false, false, 36, 1, 92, 2,  0, 0}, // #327
  {DBGFIELD("EX_EXRL")            1, true, true, 57, 1,  4, 2,  0, 0}, // #328
  {DBGFIELD("InsnE_InsnRI_InsnRIE_InsnRIL_InsnRILU_InsnRIS_InsnRR_InsnRRE_InsnRRF_InsnRRS_InsnRS_InsnRSE_InsnRSI_InsnRSY_InsnRX_InsnRXE_InsnRXF_InsnRXY_InsnS_InsnSI_InsnSIL_InsnSIY_InsnSS_InsnSSE_InsnSSF") 0, false, false,  0, 0,  0, 0,  0, 0}, // #329
  {DBGFIELD("SelectF128_SelectF32_SelectF64_SelectVR128") 1, false, false, 36, 1,  1, 1,  0, 0}, // #330
  {DBGFIELD("CondStoreF32_CondStoreF32Inv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #331
  {DBGFIELD("CondStoreF64_CondStoreF64Inv") 1, false, false, 36, 1,  1, 1,  0, 0}, // #332
  {DBGFIELD("LZDR_LZER")          1, false, false, 57, 1,  1, 1,  0, 0}, // #333
  {DBGFIELD("LZXR")               2, true, false, 58, 1, 48, 4,  0, 0}, // #334
  {DBGFIELD("LER")                1, false, false, 112, 1, 19, 1,  0, 0}, // #335
  {DBGFIELD("LDGR_LDR_LDR32")     1, false, false, 57, 1,  1, 1,  0, 0}, // #336
  {DBGFIELD("LGDR")               1, false, false, 57, 1, 18, 2,  0, 0}, // #337
  {DBGFIELD("LXR")                2, true, true, 58, 1, 48, 4,  0, 0}, // #338
  {DBGFIELD("LTDBR_LTEBR")        1, false, false, 112, 1, 168, 2,  0, 0}, // #339
  {DBGFIELD("LTEBRCompare_LTEBRCompare_VecPseudo") 1, false, false, 112, 1, 168, 2,  0, 0}, // #340
  {DBGFIELD("LTDBRCompare_LTDBRCompare_VecPseudo") 1, false, false, 112, 1, 168, 2,  0, 0}, // #341
  {DBGFIELD("LTXBR")              2, true, true, 115, 1, 257, 4,  0, 0}, // #342
  {DBGFIELD("LTXBRCompare_LTXBRCompare_VecPseudo") 2, true, true, 115, 1, 257, 4,  0, 0}, // #343
  {DBGFIELD("CPSDRdd_CPSDRds")    1, false, false, 112, 1, 19, 1,  0, 0}, // #344
  {DBGFIELD("CPSDRsd_CPSDRss")    1, false, false, 112, 1, 19, 1,  0, 0}, // #345
  {DBGFIELD("LE_LEY")             2, false, false, 111, 2, 557, 3,  0, 0}, // #346
  {DBGFIELD("LD_LDE32_LDY")       1, false, false,  1, 1,  2, 1,  0, 0}, // #347
  {DBGFIELD("LX")                 1, false, false,  1, 1,  2, 1,  0, 0}, // #348
  {DBGFIELD("STD_STDY")           2, false, false, 63, 2, 12, 3,  0, 0}, // #349
  {DBGFIELD("STE_STEY")           2, false, false, 63, 2, 12, 3,  0, 0}, // #350
  {DBGFIELD("STX")                2, false, false, 63, 2,  6, 3,  0, 0}, // #351
  {DBGFIELD("LEDBR_LEDBRA")       1, false, false, 112, 1, 30, 1,  0, 0}, // #352
  {DBGFIELD("LEXBR_LEXBRA")       2, false, false, 109, 1, 237, 3,  0, 0}, // #353
  {DBGFIELD("LDXBR_LDXBRA")       2, false, false, 109, 1, 237, 3,  0, 0}, // #354
  {DBGFIELD("LDEB")               2, false, false, 111, 2, 240, 3,  0, 0}, // #355
  {DBGFIELD("LDEBR")              1, false, false, 112, 1, 30, 1,  0, 0}, // #356
  {DBGFIELD("LXDB_LXEB")          3, true, true, 114, 2, 560, 5,  0, 0}, // #357
  {DBGFIELD("LXDBR_LXEBR")        2, true, true, 115, 1, 86, 3,  0, 0}, // #358
  {DBGFIELD("CEFBR_CEFBRA_CEGBR_CEGBRA") 2, true, false, 129, 2, 252, 4,  0, 0}, // #359
  {DBGFIELD("CDFBR_CDFBRA_CDGBR_CDGBRA") 2, true, false, 129, 2, 252, 4,  0, 0}, // #360
  {DBGFIELD("CXFBR_CXFBRA_CXGBR_CXGBRA") 3, true, true, 131, 2, 565, 5,  0, 0}, // #361
  {DBGFIELD("CELFBR_CELGBR")      2, true, false, 129, 2, 252, 4,  0, 0}, // #362
  {DBGFIELD("CDLFBR_CDLGBR")      2, true, false, 129, 2, 252, 4,  0, 0}, // #363
  {DBGFIELD("CXLFBR_CXLGBR")      3, true, true, 131, 2, 565, 5,  0, 0}, // #364
  {DBGFIELD("CFDBR_CFDBRA_CFEBR_CFEBRA") 2, true, false, 129, 2, 270, 4,  0, 0}, // #365
  {DBGFIELD("CGDBR_CGDBRA_CGEBR_CGEBRA") 2, true, false, 129, 2, 270, 4,  0, 0}, // #366
  {DBGFIELD("CFXBR_CFXBRA_CGXBR_CGXBRA") 3, true, false, 133, 2, 265, 5,  0, 0}, // #367
  {DBGFIELD("CLFEBR")             2, true, true, 129, 2, 270, 4,  0, 0}, // #368
  {DBGFIELD("CLFDBR")             2, true, false, 129, 2, 270, 4,  0, 0}, // #369
  {DBGFIELD("CLGDBR_CLGEBR")      2, true, false, 129, 2, 270, 4,  0, 0}, // #370
  {DBGFIELD("CLFXBR_CLGXBR")      3, true, false, 133, 2, 265, 5,  0, 0}, // #371
  {DBGFIELD("LCDBR_LNDBR_LPDBR")  1, false, false, 112, 1, 168, 2,  0, 0}, // #372
  {DBGFIELD("LCEBR_LNEBR_LPEBR")  1, false, false, 112, 1, 168, 2,  0, 0}, // #373
  {DBGFIELD("LCDFR_LCDFR_32")     1, false, false, 57, 1,  1, 1,  0, 0}, // #374
  {DBGFIELD("LNDFR_LNDFR_32")     1, false, false, 57, 1,  1, 1,  0, 0}, // #375
  {DBGFIELD("LPDFR_LPDFR_32")     1, false, false, 57, 1,  1, 1,  0, 0}, // #376
  {DBGFIELD("LCXBR_LNXBR_LPXBR")  2, true, true, 115, 1, 257, 4,  0, 0}, // #377
  {DBGFIELD("SQDB_SQEB")          2, false, false, 135, 2, 570, 2,  0, 0}, // #378
  {DBGFIELD("SQDBR_SQEBR")        1, false, false, 136, 1, 33, 1,  0, 0}, // #379
  {DBGFIELD("SQXBR")              2, true, true, 137, 1, 572, 3,  0, 0}, // #380
  {DBGFIELD("FIEBR_FIEBRA")       1, false, false, 112, 1, 30, 1,  0, 0}, // #381
  {DBGFIELD("FIDBR_FIDBRA")       1, false, false, 112, 1, 30, 1,  0, 0}, // #382
  {DBGFIELD("FIXBR_FIXBRA")       2, true, true, 115, 1, 257, 4,  0, 0}, // #383
  {DBGFIELD("ADB_AEB")            2, false, false, 111, 2, 240, 3,  0, 0}, // #384
  {DBGFIELD("ADBR_AEBR")          1, false, false, 112, 1, 30, 1,  0, 0}, // #385
  {DBGFIELD("AXBR")               2, true, true, 115, 1, 248, 4,  0, 0}, // #386
  {DBGFIELD("SDB_SEB")            2, false, false, 111, 2, 240, 3,  0, 0}, // #387
  {DBGFIELD("SDBR_SEBR")          1, false, false, 112, 1, 30, 1,  0, 0}, // #388
  {DBGFIELD("SXBR")               2, true, true, 115, 1, 257, 4,  0, 0}, // #389
  {DBGFIELD("MDB_MDEB_MEEB")      2, false, false, 111, 2, 240, 3,  0, 0}, // #390
  {DBGFIELD("MDBR_MDEBR_MEEBR")   1, false, false, 112, 1, 30, 1,  0, 0}, // #391
  {DBGFIELD("MXDB")               3, true, true, 114, 2, 560, 5,  0, 0}, // #392
  {DBGFIELD("MXDBR")              2, true, true, 115, 1, 86, 3,  0, 0}, // #393
  {DBGFIELD("MXBR")               2, true, true, 115, 1, 287, 4,  0, 0}, // #394
  {DBGFIELD("MAEB_MSEB")          2, true, true, 138, 2, 561, 4,  0, 0}, // #395
  {DBGFIELD("MAEBR_MSEBR")        1, true, true, 112, 1, 30, 2,  0, 0}, // #396
  {DBGFIELD("MADB_MSDB")          2, true, true, 138, 2, 561, 4,  0, 0}, // #397
  {DBGFIELD("MADBR_MSDBR")        1, false, false, 112, 1, 30, 1,  0, 0}, // #398
  {DBGFIELD("DDB_DEB")            2, false, false, 135, 2, 570, 2,  0, 0}, // #399
  {DBGFIELD("DDBR_DEBR")          1, false, false, 136, 1, 33, 1,  0, 0}, // #400
  {DBGFIELD("DXBR")               2, true, true, 137, 1, 572, 3,  0, 0}, // #401
  {DBGFIELD("DIDBR_DIEBR")        1, false, false, 136, 1, 572, 2,  0, 0}, // #402
  {DBGFIELD("CDB_CEB_KDB_KEB")    2, false, false, 111, 2, 575, 3,  0, 0}, // #403
  {DBGFIELD("CDBR_CEBR_KDBR_KEBR") 1, false, false, 112, 1, 168, 2,  0, 0}, // #404
  {DBGFIELD("CXBR_KXBR")          2, true, true, 109, 1, 266, 4,  0, 0}, // #405
  {DBGFIELD("TCDB_TCEB")          2, false, false, 111, 2, 578, 3,  0, 0}, // #406
  {DBGFIELD("TCXB")               3, true, true, 114, 2, 581, 5,  0, 0}, // #407
  {DBGFIELD("EFPC")               2, true, true, 36, 2,  1, 4,  0, 0}, // #408
  {DBGFIELD("STFPC")              2, true, true, 63, 2,  6, 4,  0, 0}, // #409
  {DBGFIELD("SFPC")               1, true, true,  1, 1, 303, 3,  0, 0}, // #410
  {DBGFIELD("LFPC")               2, true, true,  8, 1, 156, 4,  0, 0}, // #411
  {DBGFIELD("SFASR")              1, false, false, 36, 1, 92, 2,  0, 0}, // #412
  {DBGFIELD("LFAS")               2, false, false, 36, 2, 31, 3,  0, 0}, // #413
  {DBGFIELD("SRNM_SRNMB_SRNMT")   1, true, true, 57, 1, 18, 3,  0, 0}, // #414
  {DBGFIELD("LTDR_LTER")          1, false, false, 112, 1, 168, 2,  0, 0}, // #415
  {DBGFIELD("LTXR")               2, true, true, 115, 1, 257, 4,  0, 0}, // #416
  {DBGFIELD("LEDR_LRER")          1, false, false, 112, 1, 30, 1,  0, 0}, // #417
  {DBGFIELD("LEXR")               1, false, false, 112, 1, 30, 1,  0, 0}, // #418
  {DBGFIELD("LDXR_LRDR")          1, false, false, 109, 1, 58, 1,  0, 0}, // #419
  {DBGFIELD("LDE")                1, false, false,  1, 1,  2, 1,  0, 0}, // #420
  {DBGFIELD("LDER")               1, false, false, 57, 1,  1, 1,  0, 0}, // #421
  {DBGFIELD("LXD_LXE")            3, true, true, 114, 2, 560, 5,  0, 0}, // #422
  {DBGFIELD("LXDR_LXER")          2, true, true, 115, 1, 86, 3,  0, 0}, // #423
  {DBGFIELD("CEFR_CEGR")          2, true, false, 129, 2, 252, 4,  0, 0}, // #424
  {DBGFIELD("CDFR_CDGR")          2, true, false, 129, 2, 252, 4,  0, 0}, // #425
  {DBGFIELD("CXFR_CXGR")          3, true, true, 131, 2, 565, 5,  0, 0}, // #426
  {DBGFIELD("CFDR_CFER")          2, true, false, 129, 2, 270, 4,  0, 0}, // #427
  {DBGFIELD("CGDR_CGER")          2, true, false, 129, 2, 270, 4,  0, 0}, // #428
  {DBGFIELD("CFXR_CGXR")          3, true, false, 133, 2, 265, 5,  0, 0}, // #429
  {DBGFIELD("THDER_THDR")         1, false, false, 112, 1, 30, 1,  0, 0}, // #430
  {DBGFIELD("TBDR_TBEDR")         1, false, false, 112, 1, 30, 1,  0, 0}, // #431
  {DBGFIELD("LCDR_LNDR_LPDR")     1, false, false, 112, 1, 168, 2,  0, 0}, // #432
  {DBGFIELD("LCER_LNER_LPER")     1, false, false, 112, 1, 168, 2,  0, 0}, // #433
  {DBGFIELD("LCXR_LNXR_LPXR")     2, true, true, 115, 1, 257, 4,  0, 0}, // #434
  {DBGFIELD("HDR_HER")            1, false, false, 112, 1, 30, 1,  0, 0}, // #435
  {DBGFIELD("SQD_SQE")            2, false, false, 135, 2, 570, 2,  0, 0}, // #436
  {DBGFIELD("SQDR_SQER")          1, false, false, 136, 1, 33, 1,  0, 0}, // #437
  {DBGFIELD("SQXR")               2, true, true, 137, 1, 572, 3,  0, 0}, // #438
  {DBGFIELD("FIER")               1, false, false, 112, 1, 30, 1,  0, 0}, // #439
  {DBGFIELD("FIDR")               1, false, false, 112, 1, 30, 1,  0, 0}, // #440
  {DBGFIELD("FIXR")               2, true, true, 115, 1, 257, 4,  0, 0}, // #441
  {DBGFIELD("AD_AE_AU_AW")        2, false, false, 111, 2, 240, 3,  0, 0}, // #442
  {DBGFIELD("ADR_AER_AUR_AWR")    1, false, false, 112, 1, 30, 1,  0, 0}, // #443
  {DBGFIELD("AXR")                2, true, true, 115, 1, 248, 4,  0, 0}, // #444
  {DBGFIELD("SD_SE_SU_SW")        2, false, false, 111, 2, 240, 3,  0, 0}, // #445
  {DBGFIELD("SDR_SER_SUR_SWR")    1, false, false, 112, 1, 30, 1,  0, 0}, // #446
  {DBGFIELD("SXR")                2, true, true, 115, 1, 257, 4,  0, 0}, // #447
  {DBGFIELD("MD_MDE_ME_MEE")      2, false, false, 111, 2, 240, 3,  0, 0}, // #448
  {DBGFIELD("MDER_MDR_MEER_MER")  1, false, false, 112, 1, 30, 1,  0, 0}, // #449
  {DBGFIELD("MXD")                3, true, true, 114, 2, 560, 5,  0, 0}, // #450
  {DBGFIELD("MXDR")               2, true, true, 115, 1, 86, 3,  0, 0}, // #451
  {DBGFIELD("MXR")                2, true, true, 115, 1, 287, 4,  0, 0}, // #452
  {DBGFIELD("MY")                 3, true, true, 114, 2, 560, 5,  0, 0}, // #453
  {DBGFIELD("MYH_MYL")            2, true, true, 138, 2, 561, 4,  0, 0}, // #454
  {DBGFIELD("MYR")                2, true, true, 115, 1, 86, 3,  0, 0}, // #455
  {DBGFIELD("MYHR_MYLR")          1, true, true, 112, 1, 30, 2,  0, 0}, // #456
  {DBGFIELD("MAE_MSE")            2, true, true, 138, 2, 561, 4,  0, 0}, // #457
  {DBGFIELD("MAER_MSER")          1, true, true, 112, 1, 30, 2,  0, 0}, // #458
  {DBGFIELD("MAD_MSD")            2, true, true, 138, 2, 561, 4,  0, 0}, // #459
  {DBGFIELD("MADR_MSDR")          1, true, true, 112, 1, 30, 2,  0, 0}, // #460
  {DBGFIELD("MAYH_MAYL")          2, true, true, 138, 2, 561, 4,  0, 0}, // #461
  {DBGFIELD("MAY")                3, true, true, 114, 2, 560, 5,  0, 0}, // #462
  {DBGFIELD("MAYHR_MAYLR")        1, true, true, 112, 1, 30, 2,  0, 0}, // #463
  {DBGFIELD("MAYR")               2, true, true, 115, 1, 86, 3,  0, 0}, // #464
  {DBGFIELD("DD_DE")              2, false, false, 135, 2, 570, 2,  0, 0}, // #465
  {DBGFIELD("DDR_DER")            1, false, false, 136, 1, 33, 1,  0, 0}, // #466
  {DBGFIELD("DXR")                2, true, true, 137, 1, 572, 3,  0, 0}, // #467
  {DBGFIELD("CD_CE")              2, false, false, 111, 2, 240, 3,  0, 0}, // #468
  {DBGFIELD("CDR_CER")            1, false, false, 112, 1, 30, 1,  0, 0}, // #469
  {DBGFIELD("CXR")                2, true, true, 109, 1, 266, 4,  0, 0}, // #470
  {DBGFIELD("LTDTR")              1, false, false, 112, 1, 30, 1,  0, 0}, // #471
  {DBGFIELD("LTXTR")              2, true, true, 115, 1, 257, 4,  0, 0}, // #472
  {DBGFIELD("LEDTR")              1, false, false, 112, 1, 315, 2,  0, 0}, // #473
  {DBGFIELD("LDXTR")              2, false, false, 109, 1, 237, 3,  0, 0}, // #474
  {DBGFIELD("LDETR")              1, false, false, 112, 1, 30, 1,  0, 0}, // #475
  {DBGFIELD("LXDTR")              2, true, true, 115, 1, 257, 4,  0, 0}, // #476
  {DBGFIELD("CDFTR_CDGTR_CDGTRA") 2, true, false, 129, 2, 586, 4,  0, 0}, // #477
  {DBGFIELD("CXFTR_CXGTR_CXGTRA") 3, true, true, 131, 2, 590, 5,  0, 0}, // #478
  {DBGFIELD("CDLFTR_CDLGTR")      2, true, false, 129, 2, 586, 4,  0, 0}, // #479
  {DBGFIELD("CXLFTR_CXLGTR")      3, true, true, 131, 2, 590, 5,  0, 0}, // #480
  {DBGFIELD("CFDTR_CGDTR_CGDTRA") 2, true, false, 129, 2, 586, 4,  0, 0}, // #481
  {DBGFIELD("CFXTR_CGXTR_CGXTRA") 3, true, false, 133, 2, 595, 5,  0, 0}, // #482
  {DBGFIELD("CLFDTR_CLGDTR")      2, true, false, 129, 2, 586, 4,  0, 0}, // #483
  {DBGFIELD("CLFXTR_CLGXTR")      3, true, false, 133, 2, 595, 5,  0, 0}, // #484
  {DBGFIELD("CDSTR_CDUTR")        2, true, false, 129, 2, 252, 4,  0, 0}, // #485
  {DBGFIELD("CXSTR_CXUTR")        4, true, true, 140, 2, 600, 6,  0, 0}, // #486
  {DBGFIELD("CSDTR_CUDTR")        2, true, false, 129, 2, 261, 4,  0, 0}, // #487
  {DBGFIELD("CSXTR_CUXTR")        4, true, true, 140, 2, 600, 6,  0, 0}, // #488
  {DBGFIELD("CDZT")               2, true, false, 111, 2, 606, 4,  0, 0}, // #489
  {DBGFIELD("CXZT")               4, true, true, 142, 2, 610, 6,  0, 0}, // #490
  {DBGFIELD("CZDT")               3, true, false, 110, 3, 605, 5,  0, 0}, // #491
  {DBGFIELD("CZXT")               4, true, true, 144, 3, 616, 6,  0, 0}, // #492
  {DBGFIELD("CDPT")               2, true, false, 111, 2, 606, 4,  0, 0}, // #493
  {DBGFIELD("CXPT")               4, true, true, 142, 2, 610, 6,  0, 0}, // #494
  {DBGFIELD("CPDT")               3, true, false, 110, 3, 605, 5,  0, 0}, // #495
  {DBGFIELD("CPXT")               4, true, true, 144, 3, 616, 6,  0, 0}, // #496
  {DBGFIELD("PFPO")               1, false, false, 57, 1, 92, 2,  0, 0}, // #497
  {DBGFIELD("FIDTR")              1, false, false, 112, 1, 30, 1,  0, 0}, // #498
  {DBGFIELD("FIXTR")              2, true, true, 115, 1, 257, 4,  0, 0}, // #499
  {DBGFIELD("EEDTR")              2, true, false, 129, 2, 261, 4,  0, 0}, // #500
  {DBGFIELD("EEXTR")              2, true, false, 129, 2, 261, 4,  0, 0}, // #501
  {DBGFIELD("ESDTR")              2, true, false, 129, 2, 261, 4,  0, 0}, // #502
  {DBGFIELD("ESXTR")              3, true, false, 133, 2, 622, 5,  0, 0}, // #503
  {DBGFIELD("ADTR_ADTRA")         1, false, false, 112, 1, 30, 1,  0, 0}, // #504
  {DBGFIELD("AXTR_AXTRA")         2, true, true, 115, 1, 248, 4,  0, 0}, // #505
  {DBGFIELD("SDTR_SDTRA")         1, false, false, 112, 1, 30, 1,  0, 0}, // #506
  {DBGFIELD("SXTR_SXTRA")         2, true, true, 115, 1, 257, 4,  0, 0}, // #507
  {DBGFIELD("MDTR_MDTRA")         1, false, false, 112, 1, 277, 2,  0, 0}, // #508
  {DBGFIELD("MXTR_MXTRA")         2, true, true, 115, 1, 279, 4,  0, 0}, // #509
  {DBGFIELD("DDTR_DDTRA")         1, false, false, 112, 1, 277, 2,  0, 0}, // #510
  {DBGFIELD("DXTR_DXTRA")         2, true, true, 115, 1, 279, 4,  0, 0}, // #511
  {DBGFIELD("QADTR")              1, false, false, 112, 1, 30, 1,  0, 0}, // #512
  {DBGFIELD("QAXTR")              2, true, true, 115, 1, 257, 4,  0, 0}, // #513
  {DBGFIELD("RRDTR")              2, true, false, 129, 2, 270, 4,  0, 0}, // #514
  {DBGFIELD("RRXTR")              3, true, true, 131, 2, 282, 5,  0, 0}, // #515
  {DBGFIELD("SLDT_SRDT")          2, true, true, 111, 2, 606, 4,  0, 0}, // #516
  {DBGFIELD("SLXT_SRXT")          3, true, true, 114, 2, 581, 5,  0, 0}, // #517
  {DBGFIELD("IEDTR")              2, true, false, 129, 2, 270, 4,  0, 0}, // #518
  {DBGFIELD("IEXTR")              3, true, true, 131, 2, 282, 5,  0, 0}, // #519
  {DBGFIELD("CDTR_KDTR")          1, false, false, 112, 1, 30, 1,  0, 0}, // #520
  {DBGFIELD("CXTR_KXTR")          2, true, true, 109, 1, 627, 4,  0, 0}, // #521
  {DBGFIELD("CEDTR")              1, false, false, 112, 1, 30, 1,  0, 0}, // #522
  {DBGFIELD("CEXTR")              1, false, false, 112, 1, 30, 1,  0, 0}, // #523
  {DBGFIELD("TDCDT_TDCET_TDGDT_TDGET") 2, false, false, 111, 2, 606, 3,  0, 0}, // #524
  {DBGFIELD("TDCXT_TDGXT")        3, true, true, 138, 2, 617, 5,  0, 0}, // #525
  {DBGFIELD("VLR_VLR32_VLR64")    1, false, false, 57, 1,  1, 1,  0, 0}, // #526
  {DBGFIELD("VLGV_VLGVB_VLGVF_VLGVG_VLGVH") 1, false, false, 57, 1,  1, 2,  0, 0}, // #527
  {DBGFIELD("VLVG_VLVGB_VLVGF_VLVGG_VLVGH") 1, false, false, 57, 1,  1, 1,  0, 0}, // #528
  {DBGFIELD("VLVGP_VLVGP32")      1, false, false, 57, 1, 49, 2,  0, 0}, // #529
  {DBGFIELD("VZERO")              1, false, false, 112, 1, 19, 1,  0, 0}, // #530
  {DBGFIELD("VONE")               1, false, false, 112, 1, 19, 1,  0, 0}, // #531
  {DBGFIELD("VGBM")               1, false, false, 112, 1, 19, 1,  0, 0}, // #532
  {DBGFIELD("VGM_VGMB_VGMF_VGMG_VGMH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #533
  {DBGFIELD("VREPI_VREPIB_VREPIF_VREPIG_VREPIH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #534
  {DBGFIELD("VLEIB_VLEIF_VLEIG_VLEIH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #535
  {DBGFIELD("VL_VLBB_VLL")        1, false, false,  1, 1,  2, 1,  0, 0}, // #536
  {DBGFIELD("VL32_VL64")          1, false, false,  1, 1,  2, 1,  0, 0}, // #537
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH_VLLEZLF") 1, false, false,  1, 1,  2, 1,  0, 0}, // #538
  {DBGFIELD("VLREP_VLREPB_VLREPF_VLREPG_VLREPH") 1, false, false,  1, 1,  2, 1,  0, 0}, // #539
  {DBGFIELD("VLEB_VLEF_VLEG_VLEH") 2, false, false, 111, 2, 557, 3,  0, 0}, // #540
  {DBGFIELD("VGEF_VGEG")          3, true, false, 110, 3, 631, 5,  0, 0}, // #541
  {DBGFIELD("VLM")                5, true, true, 20, 1, 35, 7,  0, 0}, // #542
  {DBGFIELD("VLRL_VLRLR")         1, false, false,  1, 1,  7, 2,  0, 0}, // #543
  {DBGFIELD("VST_VST32_VST64_VSTL") 2, false, false, 63, 2, 123, 3,  0, 0}, // #544
  {DBGFIELD("VSTEF_VSTEG")        2, false, false, 63, 2, 123, 3,  0, 0}, // #545
  {DBGFIELD("VSTEB_VSTEH")        3, true, false, 110, 3, 631, 5,  0, 0}, // #546
  {DBGFIELD("VSTM")               7, true, true, 127, 2, 636, 9,  0, 0}, // #547
  {DBGFIELD("VSCEF_VSCEG")        3, true, false, 67, 2, 645, 5,  0, 0}, // #548
  {DBGFIELD("VSTRL_VSTRLR")       2, false, false, 63, 2, 123, 3,  0, 0}, // #549
  {DBGFIELD("VMRH_VMRHB_VMRHF_VMRHG_VMRHH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #550
  {DBGFIELD("VMRL_VMRLB_VMRLF_VMRLG_VMRLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #551
  {DBGFIELD("VPERM")              1, false, false, 112, 1, 19, 1,  0, 0}, // #552
  {DBGFIELD("VPDI")               1, false, false, 112, 1, 19, 1,  0, 0}, // #553
  {DBGFIELD("VBPERM")             1, false, false, 112, 1, 19, 1,  0, 0}, // #554
  {DBGFIELD("VREP_VREPB_VREPF_VREPG_VREPH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #555
  {DBGFIELD("VSEL")               1, false, false, 112, 1, 19, 1,  0, 0}, // #556
  {DBGFIELD("VPK_VPKF_VPKG_VPKH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #557
  {DBGFIELD("VPKS_VPKSF_VPKSG_VPKSH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #558
  {DBGFIELD("VPKSFS_VPKSGS_VPKSHS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #559
  {DBGFIELD("VPKLS_VPKLSF_VPKLSG_VPKLSH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #560
  {DBGFIELD("VPKLSFS_VPKLSGS_VPKLSHS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #561
  {DBGFIELD("VSEG_VSEGB_VSEGF_VSEGH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #562
  {DBGFIELD("VUPH_VUPHB_VUPHF_VUPHH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #563
  {DBGFIELD("VUPL_VUPLB_VUPLF")   1, false, false, 112, 1, 19, 1,  0, 0}, // #564
  {DBGFIELD("VUPLH_VUPLHB_VUPLHF_VUPLHH_VUPLHW") 1, false, false, 112, 1, 19, 1,  0, 0}, // #565
  {DBGFIELD("VUPLL_VUPLLB_VUPLLF_VUPLLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #566
  {DBGFIELD("VA_VAB_VAC_VACQ_VAF_VAG_VAH_VAQ") 1, false, false, 112, 1, 19, 1,  0, 0}, // #567
  {DBGFIELD("VACC_VACCB_VACCC_VACCCQ_VACCF_VACCG_VACCH_VACCQ") 1, false, false, 112, 1, 19, 1,  0, 0}, // #568
  {DBGFIELD("VAVG_VAVGB_VAVGF_VAVGG_VAVGH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #569
  {DBGFIELD("VAVGL_VAVGLB_VAVGLF_VAVGLG_VAVGLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #570
  {DBGFIELD("VN_VNC_VNN_VNO_VNX") 1, false, false, 112, 1, 19, 1,  0, 0}, // #571
  {DBGFIELD("VO_VOC")             1, false, false, 112, 1, 19, 1,  0, 0}, // #572
  {DBGFIELD("VCKSM")              1, false, false, 112, 1,  8, 1,  0, 0}, // #573
  {DBGFIELD("VCLZ_VCLZB_VCLZF_VCLZG_VCLZH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #574
  {DBGFIELD("VCTZ_VCTZB_VCTZF_VCTZG_VCTZH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #575
  {DBGFIELD("VX")                 1, false, false, 112, 1, 19, 1,  0, 0}, // #576
  {DBGFIELD("VGFM")               1, false, false, 112, 1,  8, 1,  0, 0}, // #577
  {DBGFIELD("VGFMA_VGFMAB_VGFMAF_VGFMAG_VGFMAH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #578
  {DBGFIELD("VGFMB_VGFMF_VGFMG_VGFMH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #579
  {DBGFIELD("VLC_VLCB_VLCF_VLCG_VLCH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #580
  {DBGFIELD("VLP_VLPB_VLPF_VLPG_VLPH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #581
  {DBGFIELD("VMX_VMXB_VMXF_VMXG_VMXH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #582
  {DBGFIELD("VMXL_VMXLB_VMXLF_VMXLG_VMXLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #583
  {DBGFIELD("VMN_VMNB_VMNF_VMNG_VMNH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #584
  {DBGFIELD("VMNL_VMNLB_VMNLF_VMNLG_VMNLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #585
  {DBGFIELD("VMAL_VMALB_VMALF")   1, false, false, 112, 1,  8, 1,  0, 0}, // #586
  {DBGFIELD("VMALE_VMALEB_VMALEF_VMALEH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #587
  {DBGFIELD("VMALH_VMALHB_VMALHF_VMALHH_VMALHW") 1, false, false, 112, 1,  8, 1,  0, 0}, // #588
  {DBGFIELD("VMALO_VMALOB_VMALOF_VMALOH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #589
  {DBGFIELD("VMAO_VMAOB_VMAOF_VMAOH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #590
  {DBGFIELD("VMAE_VMAEB_VMAEF_VMAEH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #591
  {DBGFIELD("VMAH_VMAHB_VMAHF_VMAHH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #592
  {DBGFIELD("VME_VMEB_VMEF_VMEH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #593
  {DBGFIELD("VMH_VMHB_VMHF_VMHH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #594
  {DBGFIELD("VML_VMLB_VMLF")      1, false, false, 112, 1,  8, 1,  0, 0}, // #595
  {DBGFIELD("VMLE_VMLEB_VMLEF_VMLEH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #596
  {DBGFIELD("VMLH_VMLHB_VMLHF_VMLHH_VMLHW") 1, false, false, 112, 1,  8, 1,  0, 0}, // #597
  {DBGFIELD("VMLO_VMLOB_VMLOF_VMLOH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #598
  {DBGFIELD("VMO_VMOB_VMOF_VMOH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #599
  {DBGFIELD("VMSL_VMSLG")         1, false, false, 109, 1, 58, 1,  0, 0}, // #600
  {DBGFIELD("VPOPCT_VPOPCTB_VPOPCTF_VPOPCTG_VPOPCTH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #601
  {DBGFIELD("VERLL_VERLLB_VERLLF_VERLLG_VERLLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #602
  {DBGFIELD("VERLLV_VERLLVB_VERLLVF_VERLLVG_VERLLVH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #603
  {DBGFIELD("VERIM_VERIMB_VERIMF_VERIMG_VERIMH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #604
  {DBGFIELD("VESL_VESLB_VESLF_VESLG_VESLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #605
  {DBGFIELD("VESLV_VESLVB_VESLVF_VESLVG_VESLVH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #606
  {DBGFIELD("VESRA_VESRAB_VESRAF_VESRAG_VESRAH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #607
  {DBGFIELD("VESRAV_VESRAVB_VESRAVF_VESRAVG_VESRAVH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #608
  {DBGFIELD("VESRL_VESRLB_VESRLF_VESRLG_VESRLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #609
  {DBGFIELD("VESRLV_VESRLVB_VESRLVF_VESRLVG_VESRLVH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #610
  {DBGFIELD("VSL_VSLDB")          1, false, false, 112, 1, 19, 1,  0, 0}, // #611
  {DBGFIELD("VSLB")               1, false, false, 112, 1, 19, 1,  0, 0}, // #612
  {DBGFIELD("VSRA_VSRL")          1, false, false, 112, 1, 19, 1,  0, 0}, // #613
  {DBGFIELD("VSRAB_VSRLB")        1, false, false, 112, 1, 19, 1,  0, 0}, // #614
  {DBGFIELD("VSB_VSBCBI_VSBCBIQ_VSBI_VSBIQ") 1, false, false, 112, 1, 19, 1,  0, 0}, // #615
  {DBGFIELD("VSCBI_VSCBIB_VSCBIF_VSCBIG_VSCBIH_VSCBIQ") 1, false, false, 112, 1, 19, 1,  0, 0}, // #616
  {DBGFIELD("VS_VSF_VSG_VSH_VSQ") 1, false, false, 112, 1, 19, 1,  0, 0}, // #617
  {DBGFIELD("VSUM_VSUMB_VSUMH")   1, false, false, 112, 1,  8, 1,  0, 0}, // #618
  {DBGFIELD("VSUMG_VSUMGF_VSUMGH") 1, false, false, 112, 1,  8, 1,  0, 0}, // #619
  {DBGFIELD("VSUMQ_VSUMQF_VSUMQG") 1, false, false, 112, 1,  8, 1,  0, 0}, // #620
  {DBGFIELD("VEC_VECB_VECF_VECG_VECH") 1, false, false, 112, 1, 168, 2,  0, 0}, // #621
  {DBGFIELD("VECL_VECLB_VECLF_VECLG_VECLH") 1, false, false, 112, 1, 168, 2,  0, 0}, // #622
  {DBGFIELD("VCEQ_VCEQB_VCEQF_VCEQG_VCEQH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #623
  {DBGFIELD("VCEQBS_VCEQFS_VCEQGS_VCEQHS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #624
  {DBGFIELD("VCH_VCHB_VCHF_VCHG_VCHH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #625
  {DBGFIELD("VCHBS_VCHFS_VCHGS_VCHHS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #626
  {DBGFIELD("VCHL_VCHLB_VCHLF_VCHLG_VCHLH") 1, false, false, 112, 1, 19, 1,  0, 0}, // #627
  {DBGFIELD("VCHLBS_VCHLFS_VCHLGS_VCHLHS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #628
  {DBGFIELD("VTM")                1, false, false, 112, 1,  7, 2,  0, 0}, // #629
  {DBGFIELD("VCDG_VCDLG")         1, false, false, 112, 1, 30, 1,  0, 0}, // #630
  {DBGFIELD("VCDGB_VCDLGB")       1, false, false, 112, 1, 30, 1,  0, 0}, // #631
  {DBGFIELD("WCDGB_WCDLGB")       1, false, false, 112, 1, 30, 1,  0, 0}, // #632
  {DBGFIELD("VCGD_VCLGD")         1, false, false, 112, 1, 30, 1,  0, 0}, // #633
  {DBGFIELD("VCGDB_VCLGDB")       1, false, false, 112, 1, 30, 1,  0, 0}, // #634
  {DBGFIELD("WCGDB_WCLGDB")       1, false, false, 112, 1, 30, 1,  0, 0}, // #635
  {DBGFIELD("VLDE_VLED")          1, false, false, 112, 1, 30, 1,  0, 0}, // #636
  {DBGFIELD("VLDEB_VLEDB")        1, false, false, 112, 1, 30, 1,  0, 0}, // #637
  {DBGFIELD("WLDEB_WLEDB")        1, false, false, 112, 1, 30, 1,  0, 0}, // #638
  {DBGFIELD("VFLL_VFLR")          1, false, false, 112, 1, 30, 1,  0, 0}, // #639
  {DBGFIELD("VFLLS_VFLRD")        1, false, false, 112, 1, 30, 1,  0, 0}, // #640
  {DBGFIELD("WFLLS_WFLRD")        1, false, false, 112, 1, 30, 1,  0, 0}, // #641
  {DBGFIELD("WFLLD")              1, false, false, 109, 1, 58, 1,  0, 0}, // #642
  {DBGFIELD("WFLRX")              1, false, false, 109, 1, 249, 2,  0, 0}, // #643
  {DBGFIELD("VFI")                1, false, false, 109, 1, 58, 1,  0, 0}, // #644
  {DBGFIELD("VFIDB")              1, false, false, 112, 1, 30, 1,  0, 0}, // #645
  {DBGFIELD("WFIDB")              1, false, false, 112, 1, 30, 1,  0, 0}, // #646
  {DBGFIELD("VFISB")              1, false, false, 109, 1, 58, 1,  0, 0}, // #647
  {DBGFIELD("WFISB")              1, false, false, 112, 1, 30, 1,  0, 0}, // #648
  {DBGFIELD("WFIXB")              1, false, false, 109, 1, 249, 2,  0, 0}, // #649
  {DBGFIELD("VFPSO")              1, false, false, 112, 1, 19, 1,  0, 0}, // #650
  {DBGFIELD("VFPSODB_WFPSODB")    1, false, false, 112, 1, 19, 1,  0, 0}, // #651
  {DBGFIELD("VFPSOSB_WFPSOSB")    1, false, false, 112, 1, 19, 1,  0, 0}, // #652
  {DBGFIELD("WFPSOXB")            1, false, false, 112, 1, 19, 1,  0, 0}, // #653
  {DBGFIELD("VFLCDB_VFLNDB_VFLPDB_WFLCDB_WFLNDB_WFLPDB") 1, false, false, 112, 1, 19, 1,  0, 0}, // #654
  {DBGFIELD("VFLCSB_VFLNSB_VFLPSB_WFLCSB_WFLNSB_WFLPSB") 1, false, false, 112, 1, 19, 1,  0, 0}, // #655
  {DBGFIELD("WFLCXB_WFLNXB_WFLPXB") 1, false, false, 112, 1, 19, 1,  0, 0}, // #656
  {DBGFIELD("VFMAX_VFMIN")        1, false, false, 112, 1, 19, 1,  0, 0}, // #657
  {DBGFIELD("VFMAXDB_VFMINDB")    1, false, false, 112, 1, 19, 1,  0, 0}, // #658
  {DBGFIELD("WFMAXDB_WFMINDB")    1, false, false, 112, 1, 19, 1,  0, 0}, // #659
  {DBGFIELD("VFMAXSB_VFMINSB")    1, false, false, 112, 1, 19, 1,  0, 0}, // #660
  {DBGFIELD("WFMAXSB_WFMINSB")    1, false, false, 112, 1, 19, 1,  0, 0}, // #661
  {DBGFIELD("WFMAXXB_WFMINXB")    1, false, false, 112, 1,  1, 1,  0, 0}, // #662
  {DBGFIELD("VFTCI")              1, false, false, 112, 1, 168, 2,  0, 0}, // #663
  {DBGFIELD("VFTCIDB_WFTCIDB")    1, false, false, 112, 1, 168, 2,  0, 0}, // #664
  {DBGFIELD("VFTCISB_WFTCISB")    1, false, false, 112, 1, 168, 2,  0, 0}, // #665
  {DBGFIELD("WFTCIXB")            1, false, false, 112, 1,  1, 2,  0, 0}, // #666
  {DBGFIELD("VFA_VFS")            1, false, false, 109, 1, 58, 1,  0, 0}, // #667
  {DBGFIELD("VFADB_VFSDB")        1, false, false, 112, 1, 30, 1,  0, 0}, // #668
  {DBGFIELD("WFADB_WFSDB")        1, false, false, 112, 1, 30, 1,  0, 0}, // #669
  {DBGFIELD("VFASB_VFSSB")        1, false, false, 109, 1, 58, 1,  0, 0}, // #670
  {DBGFIELD("WFASB_WFSSB")        1, false, false, 112, 1, 30, 1,  0, 0}, // #671
  {DBGFIELD("WFAXB_WFSXB")        1, false, false, 109, 1, 249, 2,  0, 0}, // #672
  {DBGFIELD("VFM")                1, false, false, 109, 1, 58, 1,  0, 0}, // #673
  {DBGFIELD("VFMDB")              1, false, false, 112, 1, 30, 1,  0, 0}, // #674
  {DBGFIELD("WFMDB")              1, false, false, 112, 1, 30, 1,  0, 0}, // #675
  {DBGFIELD("VFMSB")              1, false, false, 109, 1, 58, 1,  0, 0}, // #676
  {DBGFIELD("WFMSB")              1, false, false, 112, 1, 30, 1,  0, 0}, // #677
  {DBGFIELD("WFMXB")              1, false, false, 109, 1, 288, 2,  0, 0}, // #678
  {DBGFIELD("VFMA_VFMS_VFNMA_VFNMS") 1, false, false, 109, 1, 58, 1,  0, 0}, // #679
  {DBGFIELD("VFMADB_VFMSDB_VFNMADB_VFNMSDB") 1, false, false, 112, 1, 30, 1,  0, 0}, // #680
  {DBGFIELD("WFMADB_WFMSDB_WFNMADB_WFNMSDB") 1, false, false, 112, 1, 30, 1,  0, 0}, // #681
  {DBGFIELD("VFMASB_VFMSSB_VFNMASB_VFNMSSB") 1, false, false, 109, 1, 58, 1,  0, 0}, // #682
  {DBGFIELD("WFMASB_WFMSSB_WFNMASB_WFNMSSB") 1, false, false, 112, 1, 30, 1,  0, 0}, // #683
  {DBGFIELD("WFMAXB_WFMSXB_WFNMAXB_WFNMSXB") 1, false, false, 109, 1, 288, 2,  0, 0}, // #684
  {DBGFIELD("VFD")                1, false, false, 136, 1, 33, 1,  0, 0}, // #685
  {DBGFIELD("VFDDB_WFDDB")        1, false, false, 136, 1, 33, 1,  0, 0}, // #686
  {DBGFIELD("VFDSB_WFDSB")        1, false, false, 136, 1, 33, 1,  0, 0}, // #687
  {DBGFIELD("WFDXB")              1, false, false, 136, 1, 33, 1,  0, 0}, // #688
  {DBGFIELD("VFSQ")               1, false, false, 136, 1, 33, 1,  0, 0}, // #689
  {DBGFIELD("VFSQDB_WFSQDB")      1, false, false, 136, 1, 33, 1,  0, 0}, // #690
  {DBGFIELD("VFSQSB_WFSQSB")      1, false, false, 136, 1, 33, 1,  0, 0}, // #691
  {DBGFIELD("WFSQXB")             1, false, false, 136, 1, 33, 1,  0, 0}, // #692
  {DBGFIELD("VFCE_VFCH_VFCHE")    1, false, false, 112, 1, 19, 1,  0, 0}, // #693
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB_VFKEDB_VFKHDB_VFKHEDB") 1, false, false, 112, 1, 19, 1,  0, 0}, // #694
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB_WFKEDB_WFKHDB_WFKHEDB") 1, false, false, 112, 1, 19, 1,  0, 0}, // #695
  {DBGFIELD("VFCESB_VFCHESB_VFCHSB_VFKESB_VFKHESB_VFKHSB") 1, false, false, 112, 1, 19, 1,  0, 0}, // #696
  {DBGFIELD("WFCESB_WFCHESB_WFCHSB_WFKESB_WFKHESB_WFKHSB") 1, false, false, 112, 1, 19, 1,  0, 0}, // #697
  {DBGFIELD("WFCEXB_WFCHEXB_WFCHXB_WFKEXB_WFKHEXB_WFKHXB") 1, false, false, 112, 1,  1, 1,  0, 0}, // #698
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS_VFKEDBS_VFKHDBS_VFKHEDBS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #699
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS_WFKEDBS_WFKHDBS_WFKHEDBS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #700
  {DBGFIELD("VFCESBS_VFCHESBS_VFCHSBS_VFKESBS_VFKHESBS_VFKHSBS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #701
  {DBGFIELD("WFCESBS_WFCHESBS_WFCHSBS_WFKESBS_WFKHESBS_WFKHSBS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #702
  {DBGFIELD("WFCEXBS_WFCHEXBS_WFCHXBS_WFKEXBS_WFKHEXBS_WFKHXBS") 1, false, false, 112, 1,  1, 2,  0, 0}, // #703
  {DBGFIELD("WFC_WFK")            1, false, false, 112, 1, 168, 2,  0, 0}, // #704
  {DBGFIELD("WFCDB_WFKDB")        1, false, false, 112, 1, 168, 2,  0, 0}, // #705
  {DBGFIELD("WFCSB_WFKSB")        1, false, false, 112, 1, 168, 2,  0, 0}, // #706
  {DBGFIELD("WFCXB_WFKXB")        1, false, false, 112, 1,  1, 2,  0, 0}, // #707
  {DBGFIELD("LEFR")               1, false, false, 57, 1,  1, 1,  0, 0}, // #708
  {DBGFIELD("LFER")               1, false, false, 57, 1,  1, 2,  0, 0}, // #709
  {DBGFIELD("VFAE_VFAEB")         1, false, false, 112, 1,  2, 1,  0, 0}, // #710
  {DBGFIELD("VFAEBS")             1, false, false, 112, 1,  7, 2,  0, 0}, // #711
  {DBGFIELD("VFAEF_VFAEH")        1, false, false, 112, 1,  2, 1,  0, 0}, // #712
  {DBGFIELD("VFAEFS_VFAEHS")      1, false, false, 112, 1,  7, 2,  0, 0}, // #713
  {DBGFIELD("VFAEZB_VFAEZF_VFAEZH") 1, false, false, 112, 1,  2, 1,  0, 0}, // #714
  {DBGFIELD("VFAEZBS_VFAEZFS_VFAEZHS") 1, false, false, 112, 1,  7, 2,  0, 0}, // #715
  {DBGFIELD("VFEE_VFEEB_VFEEF_VFEEH_VFEEZB_VFEEZF_VFEEZH") 1, false, false, 112, 1,  2, 1,  0, 0}, // #716
  {DBGFIELD("VFEEBS_VFEEFS_VFEEHS_VFEEZBS_VFEEZFS_VFEEZHS") 1, false, false, 112, 1,  7, 2,  0, 0}, // #717
  {DBGFIELD("VFENE_VFENEB_VFENEF_VFENEH_VFENEZB_VFENEZF_VFENEZH") 1, false, false, 112, 1,  2, 1,  0, 0}, // #718
  {DBGFIELD("VFENEBS_VFENEFS_VFENEHS_VFENEZBS_VFENEZFS_VFENEZHS") 1, false, false, 112, 1,  7, 2,  0, 0}, // #719
  {DBGFIELD("VISTR_VISTRB_VISTRF_VISTRH") 1, false, false, 112, 1,  2, 1,  0, 0}, // #720
  {DBGFIELD("VISTRBS_VISTRFS_VISTRHS") 1, false, false, 112, 1,  7, 2,  0, 0}, // #721
  {DBGFIELD("VSTRC_VSTRCB_VSTRCF_VSTRCH") 1, false, false, 112, 1,  2, 1,  0, 0}, // #722
  {DBGFIELD("VSTRCBS_VSTRCFS_VSTRCHS") 1, false, false, 112, 1,  7, 2,  0, 0}, // #723
  {DBGFIELD("VSTRCZB_VSTRCZF_VSTRCZH") 1, false, false, 112, 1,  2, 1,  0, 0}, // #724
  {DBGFIELD("VSTRCZBS_VSTRCZFS_VSTRCZHS") 1, false, false, 112, 1,  7, 2,  0, 0}, // #725
  {DBGFIELD("VLIP")               2, false, false, 109, 1, 697, 3,  0, 0}, // #726
  {DBGFIELD("VPKZ")               2, true, true, 111, 2, 219, 3,  0, 0}, // #727
  {DBGFIELD("VUPKZ")              3, true, false, 110, 3, 645, 5,  0, 0}, // #728
  {DBGFIELD("VCVB_VCVBG")         3, true, true, 133, 2, 700, 5,  0, 0}, // #729
  {DBGFIELD("VCVD_VCVDG")         3, true, true, 133, 2, 700, 5,  0, 0}, // #730
  {DBGFIELD("VAP_VSP")            1, false, false, 112, 1,  1, 1,  0, 0}, // #731
  {DBGFIELD("VMP_VMSP")           2, true, true, 109, 1, 596, 4,  0, 0}, // #732
  {DBGFIELD("VDP_VRP")            2, true, true, 109, 1, 596, 4,  0, 0}, // #733
  {DBGFIELD("VSDP")               1, true, true, 112, 1, 92, 3,  0, 0}, // #734
  {DBGFIELD("VSRP")               2, false, false, 109, 1, 627, 3,  0, 0}, // #735
  {DBGFIELD("VPSOP")              1, false, false, 112, 1,  1, 1,  0, 0}, // #736
  {DBGFIELD("VCP_VTP")            1, false, false, 112, 1,  1, 1,  0, 0}, // #737
  {DBGFIELD("EPSW")               1, false, false, 57, 1, 92, 2,  0, 0}, // #738
  {DBGFIELD("LPSW_LPSWE")         2, false, false, 63, 2, 31, 3,  0, 0}, // #739
  {DBGFIELD("IPK")                1, true, true, 36, 1, 18, 3,  0, 0}, // #740
  {DBGFIELD("SPKA")               1, false, true,  1, 1,  3, 2,  0, 0}, // #741
  {DBGFIELD("SSM")                1, false, true,  1, 1,  3, 2,  0, 0}, // #742
  {DBGFIELD("STNSM_STOSM")        2, true, true, 63, 2, 219, 3,  0, 0}, // #743
  {DBGFIELD("IAC")                1, false, false, 36, 1, 18, 2,  0, 0}, // #744
  {DBGFIELD("SAC_SACF")           1, false, true,  1, 1,  3, 2,  0, 0}, // #745
  {DBGFIELD("LCTL_LCTLG")         2, false, false, 63, 2, 31, 3,  0, 0}, // #746
  {DBGFIELD("STCTG_STCTL")        1, false, false,  1, 1, 32, 2,  0, 0}, // #747
  {DBGFIELD("EPAIR_EPAR_ESAIR_ESAR") 1, false, false,  1, 1,  2, 1,  0, 0}, // #748
  {DBGFIELD("SSAIR_SSAR")         1, false, false, 57, 1, 92, 2,  0, 0}, // #749
  {DBGFIELD("ESEA")               1, false, false, 57, 1, 92, 2,  0, 0}, // #750
  {DBGFIELD("SPX")                2, false, false, 63, 2, 31, 3,  0, 0}, // #751
  {DBGFIELD("STPX")               2, false, false, 63, 2, 31, 3,  0, 0}, // #752
  {DBGFIELD("ISKE")               1, false, false, 57, 1, 92, 2,  0, 0}, // #753
  {DBGFIELD("IVSK")               1, false, false, 57, 1, 92, 2,  0, 0}, // #754
  {DBGFIELD("SSKE_SSKEOpt")       1, false, false, 57, 1, 92, 2,  0, 0}, // #755
  {DBGFIELD("RRBE_RRBM")          1, false, false, 57, 1, 92, 2,  0, 0}, // #756
  {DBGFIELD("IRBM")               1, false, false, 57, 1, 92, 2,  0, 0}, // #757
  {DBGFIELD("PFMF")               1, false, false, 57, 1, 92, 2,  0, 0}, // #758
  {DBGFIELD("TB")                 1, false, false, 57, 1, 92, 2,  0, 0}, // #759
  {DBGFIELD("PGIN")               2, false, false, 63, 2, 31, 3,  0, 0}, // #760
  {DBGFIELD("PGOUT")              2, false, false, 63, 2, 31, 3,  0, 0}, // #761
  {DBGFIELD("IPTE_IPTEOpt_IPTEOptOpt") 2, false, false, 63, 2, 31, 3,  0, 0}, // #762
  {DBGFIELD("IDTE_IDTEOpt")       1, false, false, 57, 1, 92, 2,  0, 0}, // #763
  {DBGFIELD("CRDTE_CRDTEOpt")     1, false, false, 57, 1, 92, 2,  0, 0}, // #764
  {DBGFIELD("PTLB")               1, false, false, 57, 1, 92, 2,  0, 0}, // #765
  {DBGFIELD("CSP_CSPG")           2, false, false, 63, 2, 31, 3,  0, 0}, // #766
  {DBGFIELD("LPTEA")              2, false, false, 63, 2, 31, 3,  0, 0}, // #767
  {DBGFIELD("LRA_LRAG_LRAY")      2, false, false, 63, 2, 31, 3,  0, 0}, // #768
  {DBGFIELD("STRAG")              2, false, false, 63, 2, 31, 3,  0, 0}, // #769
  {DBGFIELD("LURA_LURAG")         2, false, false, 63, 2, 31, 3,  0, 0}, // #770
  {DBGFIELD("STURA_STURG")        2, false, false, 63, 2, 31, 3,  0, 0}, // #771
  {DBGFIELD("TPROT")              2, false, false, 63, 2, 31, 3,  0, 0}, // #772
  {DBGFIELD("MVCK_MVCP_MVCS")     4, true, true, 147, 3, 121, 6,  0, 0}, // #773
  {DBGFIELD("MVCDK_MVCSK")        2, true, true, 36, 2, 22, 4,  0, 0}, // #774
  {DBGFIELD("MVCOS")              2, false, false, 63, 2, 31, 3,  0, 0}, // #775
  {DBGFIELD("MVPG")               1, true, true,  1, 1, 32, 3,  0, 0}, // #776
  {DBGFIELD("LASP")               2, false, false, 63, 2, 31, 3,  0, 0}, // #777
  {DBGFIELD("PALB")               1, true, true,  1, 1,  3, 2,  0, 0}, // #778
  {DBGFIELD("PC")                 2, false, false, 63, 2, 31, 3,  0, 0}, // #779
  {DBGFIELD("PR")                 1, false, false, 57, 1, 92, 2,  0, 0}, // #780
  {DBGFIELD("PT_PTI")             1, false, false, 57, 1, 92, 2,  0, 0}, // #781
  {DBGFIELD("RP")                 2, false, false, 63, 2, 31, 3,  0, 0}, // #782
  {DBGFIELD("BSA_BSG")            1, false, false, 57, 1, 92, 2,  0, 0}, // #783
  {DBGFIELD("TAR")                1, false, false, 57, 1, 433, 2,  0, 0}, // #784
  {DBGFIELD("BAKR")               1, false, true, 57, 1, 92, 3,  0, 0}, // #785
  {DBGFIELD("EREG_EREGG")         1, false, false, 57, 1, 92, 2,  0, 0}, // #786
  {DBGFIELD("ESTA_MSTA")          1, false, false, 57, 1, 92, 2,  0, 0}, // #787
  {DBGFIELD("PTFF")               1, false, false, 57, 1, 92, 2,  0, 0}, // #788
  {DBGFIELD("SCK")                2, false, false, 63, 2, 435, 3,  0, 0}, // #789
  {DBGFIELD("SCKPF")              1, false, false, 57, 1, 92, 2,  0, 0}, // #790
  {DBGFIELD("SCKC")               2, false, false, 63, 2, 435, 3,  0, 0}, // #791
  {DBGFIELD("SPT")                2, true, true,  8, 1,  2, 3,  0, 0}, // #792
  {DBGFIELD("STCK_STCKF")         6, true, true, 150, 3, 653, 8,  0, 0}, // #793
  {DBGFIELD("STCKE")              8, true, true, 153, 3, 661, 10,  0, 0}, // #794
  {DBGFIELD("STCKC")              2, false, false, 63, 2, 79, 3,  0, 0}, // #795
  {DBGFIELD("STPT")               3, true, false, 94, 2, 671, 5,  0, 0}, // #796
  {DBGFIELD("STAP")               2, false, false, 63, 2, 31, 3,  0, 0}, // #797
  {DBGFIELD("STIDP")              2, false, false, 63, 2, 31, 3,  0, 0}, // #798
  {DBGFIELD("STSI")               2, false, false, 63, 2, 31, 3,  0, 0}, // #799
  {DBGFIELD("STFL_STFLE")         2, false, false, 63, 2, 31, 3,  0, 0}, // #800
  {DBGFIELD("ECAG")               2, false, false, 63, 2, 31, 3,  0, 0}, // #801
  {DBGFIELD("ECTG")               2, false, false, 36, 2, 31, 3,  0, 0}, // #802
  {DBGFIELD("PTF")                1, false, false, 57, 1, 92, 2,  0, 0}, // #803
  {DBGFIELD("PCKMO")              1, false, false, 57, 1, 92, 2,  0, 0}, // #804
  {DBGFIELD("SVC")                1, false, false, 57, 1, 92, 2,  0, 0}, // #805
  {DBGFIELD("MC")                 1, true, true, 57, 1,  4, 2,  0, 0}, // #806
  {DBGFIELD("DIAG")               1, false, false, 57, 1, 92, 2,  0, 0}, // #807
  {DBGFIELD("TRACE_TRACG")        1, false, false, 57, 1,  1, 1,  0, 0}, // #808
  {DBGFIELD("TRAP2_TRAP4")        1, false, false, 57, 1, 92, 2,  0, 0}, // #809
  {DBGFIELD("SIGP")               1, false, false, 57, 1, 92, 2,  0, 0}, // #810
  {DBGFIELD("SIGA")               2, false, false, 63, 2, 31, 3,  0, 0}, // #811
  {DBGFIELD("SIE")                2, false, false, 63, 2, 31, 3,  0, 0}, // #812
  {DBGFIELD("LPP")                1, false, false, 57, 1,  1, 1,  0, 0}, // #813
  {DBGFIELD("ECPGA")              1, false, false, 57, 1, 92, 2,  0, 0}, // #814
  {DBGFIELD("ECCTR_EPCTR")        1, false, false, 57, 1, 92, 2,  0, 0}, // #815
  {DBGFIELD("LCCTL")              1, false, false, 57, 1, 92, 2,  0, 0}, // #816
  {DBGFIELD("LPCTL_LSCTL")        2, false, false, 63, 2, 31, 3,  0, 0}, // #817
  {DBGFIELD("QCTRI_QSI")          2, false, false, 63, 2, 31, 3,  0, 0}, // #818
  {DBGFIELD("SCCTR_SPCTR")        1, false, false, 57, 1, 92, 2,  0, 0}, // #819
  {DBGFIELD("CSCH_HSCH_RSCH_XSCH") 1, false, false, 57, 1, 92, 2,  0, 0}, // #820
  {DBGFIELD("MSCH_SSCH_STSCH_TSCH") 2, false, false, 63, 2, 31, 3,  0, 0}, // #821
  {DBGFIELD("RCHP")               1, false, false, 57, 1, 92, 2,  0, 0}, // #822
  {DBGFIELD("SCHM")               1, false, false, 57, 1, 92, 2,  0, 0}, // #823
  {DBGFIELD("STCPS_STCRW")        2, false, false, 63, 2, 31, 3,  0, 0}, // #824
  {DBGFIELD("TPI")                2, false, false, 63, 2, 31, 3,  0, 0}, // #825
  {DBGFIELD("SAL")                1, false, false, 57, 1, 92, 2,  0, 0}, // #826
  {DBGFIELD("AGF")                2, false, false, 36, 2, 22, 3,  0, 0}, // #827
  {DBGFIELD("SGF")                2, false, false, 36, 2, 22, 3,  0, 0}, // #828
  {DBGFIELD("KM_KMC_KMCTR_KMF_KMO") 1, false, false, 36, 1, 92, 2,  0, 0}, // #829
  {DBGFIELD("PCC_PPNO")           1, false, false, 36, 1, 92, 2,  0, 0}, // #830
  {DBGFIELD("SelectF128_SelectF32_SelectF64") 1, false, false, 36, 1,  1, 1,  0, 0}, // #831
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH") 1, false, false,  1, 1,  2, 1,  0, 0}, // #832
  {DBGFIELD("VN_VNC_VNO")         1, false, false, 112, 1, 19, 1,  0, 0}, // #833
  {DBGFIELD("VO")                 1, false, false, 112, 1, 19, 1,  0, 0}, // #834
  {DBGFIELD("VPOPCT")             1, false, false, 112, 1, 19, 1,  0, 0}, // #835
  {DBGFIELD("VFMA_VFMS")          1, false, false, 109, 1, 58, 1,  0, 0}, // #836
  {DBGFIELD("VFMADB_VFMSDB")      1, false, false, 112, 1, 30, 1,  0, 0}, // #837
  {DBGFIELD("WFMADB_WFMSDB")      1, false, false, 112, 1, 30, 1,  0, 0}, // #838
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB") 1, false, false, 112, 1, 19, 1,  0, 0}, // #839
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB") 1, false, false, 112, 1, 19, 1,  0, 0}, // #840
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #841
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS") 1, false, false, 112, 1, 168, 2,  0, 0}, // #842
  {DBGFIELD("L_LFH_LMux_LRL_LY")  1, false, false,  1, 1,  2, 1,  0, 0}, // #843
  {DBGFIELD("LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false, 36, 1, 49, 2,  0, 0}, // #844
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 2, false, false, 36, 2, 22, 3,  0, 0}, // #845
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 2, false, false, 63, 2,  6, 3,  0, 0}, // #846
  {DBGFIELD("ALSI_ASI")           2, false, false, 63, 2,  6, 3,  0, 0}, // #847
  {DBGFIELD("ALGF")               2, false, false, 36, 2,  6, 3,  0, 0}, // #848
  {DBGFIELD("PCC")                1, false, false, 36, 1, 92, 2,  0, 0}, // #849
  {DBGFIELD("CDFTR")              2, true, false, 129, 2, 586, 4,  0, 0}, // #850
  {DBGFIELD("CXFTR")              3, true, true, 131, 2, 590, 5,  0, 0}, // #851
  {DBGFIELD("CXLFTR")             3, true, true, 131, 2, 590, 5,  0, 0}, // #852
  {DBGFIELD("CFDTR")              2, true, false, 129, 2, 586, 4,  0, 0}, // #853
  {DBGFIELD("CFXTR")              3, true, false, 133, 2, 595, 5,  0, 0}, // #854
  {DBGFIELD("MVCSK")              2, true, true, 36, 2, 22, 4,  0, 0}, // #855
  {DBGFIELD("RISBG_RISBG32")      1, false, false, 36, 1,  1, 1,  0, 0}, // #856
  {DBGFIELD("STCK")               6, true, true, 150, 3, 653, 8,  0, 0}, // #857
}; // Z14ModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc Z196ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("ADJDYNALLOC")        1, false, false,  1, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("BRC_BRCAsm_BRCL_BRCLAsm_CallBRCL") 1, false, true,  3, 1,  3, 2,  0, 0}, // #2
  {DBGFIELD("CallJG_J_JAsmE_JAsmH_JAsmHE_JAsmL_JAsmLE_JAsmLH_JAsmM_JAsmNE_JAsmNH_JAsmNHE_JAsmNL_JAsmNLE_JAsmNLH_JAsmNM_JAsmNO_JAsmNP_JAsmNZ_JAsmO_JAsmP_JAsmZ_JG_JGAsmE_JGAsmH_JGAsmHE_JGAsmL_JGAsmLE_JGAsmLH_JGAsmM_JGAsmNE_JGAsmNH_JGAsmNHE_JGAsmNL_JGAsmNLE_JGAsmNLH_JGAsmNM_JGAsmNO_JGAsmNP_JGAsmNZ_JGAsmO_JGAsmP_JGAsmZ") 1, false, true,  3, 1,  3, 2,  0, 0}, // #3
  {DBGFIELD("BC_BCAsm_BCR_BCRAsm_CallBCR") 1, false, true,  3, 1,  3, 2,  0, 0}, // #4
  {DBGFIELD("B_BAsmE_BAsmH_BAsmHE_BAsmL_BAsmLE_BAsmLH_BAsmM_BAsmNE_BAsmNH_BAsmNHE_BAsmNL_BAsmNLE_BAsmNLH_BAsmNM_BAsmNO_BAsmNP_BAsmNZ_BAsmO_BAsmP_BAsmZ_BR_BRAsmE_BRAsmH_BRAsmHE_BRAsmL_BRAsmLE_BRAsmLH_BRAsmM_BRAsmNE_BRAsmNH_BRAsmNHE_BRAsmNL_BRAsmNLE_BRAsmNLH_BRAsmNM_BRAsmNO_BRAsmNP_BRAsmNZ_BRAsmO_BRAsmP_BRAsmZ_CallBR") 1, false, true,  3, 1,  3, 2,  0, 0}, // #5
  {DBGFIELD("BI_BIAsmE_BIAsmH_BIAsmHE_BIAsmL_BIAsmLE_BIAsmLH_BIAsmM_BIAsmNE_BIAsmNH_BIAsmNHE_BIAsmNL_BIAsmNLE_BIAsmNLH_BIAsmNM_BIAsmNO_BIAsmNP_BIAsmNZ_BIAsmO_BIAsmP_BIAsmZ_BIC_BICAsm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #6
  {DBGFIELD("BRCT_BRCTG")         2, true, true,  4, 2,  6, 4,  0, 0}, // #7
  {DBGFIELD("BRCTH")              2, true, true,  4, 2,  6, 4,  0, 0}, // #8
  {DBGFIELD("BCT_BCTG_BCTGR_BCTR") 2, true, true,  4, 2,  6, 4,  0, 0}, // #9
  {DBGFIELD("BRXH_BRXHG_BRXLE_BRXLG_BXH_BXHG_BXLE_BXLEG") 4, true, true,  6, 2, 10, 6,  0, 0}, // #10
  {DBGFIELD("CGIJ_CGIJAsm_CGIJAsmE_CGIJAsmH_CGIJAsmHE_CGIJAsmL_CGIJAsmLE_CGIJAsmLH_CGIJAsmNE_CGIJAsmNH_CGIJAsmNHE_CGIJAsmNL_CGIJAsmNLE_CGIJAsmNLH_CGRJ_CGRJAsm_CGRJAsmE_CGRJAsmH_CGRJAsmHE_CGRJAsmL_CGRJAsmLE_CGRJAsmLH_CGRJAsmNE_CGRJAsmNH_CGRJAsmNHE_CGRJAsmNL_CGRJAsmNLE_CGRJAsmNLH_CIJ_CIJAsm_CIJAsmE_CIJAsmH_CIJAsmHE_CIJAsmL_CIJAsmLE_CIJAsmLH_CIJAsmNE_CIJAsmNH_CIJAsmNHE_CIJAsmNL_CIJAsmNLE_CIJAsmNLH_CLGIJ_CLGIJAsm_CLGIJAsmE_CLGIJAsmH_CLGIJAsmHE_CLGIJAsmL_CLGIJAsmLE_CLGIJAsmLH_CLGIJAsmNE_CLGIJAsmNH_CLGIJAsmNHE_CLGIJAsmNL_CLGIJAsmNLE_CLGIJAsmNLH_CLGRJ_CLGRJAsm_CLGRJAsmE_CLGRJAsmH_CLGRJAsmHE_CLGRJAsmL_CLGRJAsmLE_CLGRJAsmLH_CLGRJAsmNE_CLGRJAsmNH_CLGRJAsmNHE_CLGRJAsmNL_CLGRJAsmNLE_CLGRJAsmNLH_CLIJ_CLIJAsm_CLIJAsmE_CLIJAsmH_CLIJAsmHE_CLIJAsmL_CLIJAsmLE_CLIJAsmLH_CLIJAsmNE_CLIJAsmNH_CLIJAsmNHE_CLIJAsmNL_CLIJAsmNLE_CLIJAsmNLH_CLRJ_CLRJAsm_CLRJAsmE_CLRJAsmH_CLRJAsmHE_CLRJAsmL_CLRJAsmLE_CLRJAsmLH_CLRJAsmNE_CLRJAsmNH_CLRJAsmNHE_CLRJAsmNL_CLRJAsmNLE_CLRJAsmNLH_CRJ_CRJAsm_CRJAsmE_CRJAsmH_CRJAsmHE_CRJAsmL_CRJAsmLE_CRJAsmLH_CRJAsmNE_CRJAsmNH_CRJAsmNHE_CRJAsmNL_CRJAsmNLE_CRJAsmNLH") 2, true, true,  4, 2,  6, 4,  0, 0}, // #11
  {DBGFIELD("CGIB_CGIBAsm_CGIBAsmE_CGIBAsmH_CGIBAsmHE_CGIBAsmL_CGIBAsmLE_CGIBAsmLH_CGIBAsmNE_CGIBAsmNH_CGIBAsmNHE_CGIBAsmNL_CGIBAsmNLE_CGIBAsmNLH_CGIBCall_CGIBReturn_CGRB_CGRBAsm_CGRBAsmE_CGRBAsmH_CGRBAsmHE_CGRBAsmL_CGRBAsmLE_CGRBAsmLH_CGRBAsmNE_CGRBAsmNH_CGRBAsmNHE_CGRBAsmNL_CGRBAsmNLE_CGRBAsmNLH_CGRBCall_CGRBReturn_CIB_CIBAsm_CIBAsmE_CIBAsmH_CIBAsmHE_CIBAsmL_CIBAsmLE_CIBAsmLH_CIBAsmNE_CIBAsmNH_CIBAsmNHE_CIBAsmNL_CIBAsmNLE_CIBAsmNLH_CIBCall_CIBReturn_CLGIB_CLGIBAsm_CLGIBAsmE_CLGIBAsmH_CLGIBAsmHE_CLGIBAsmL_CLGIBAsmLE_CLGIBAsmLH_CLGIBAsmNE_CLGIBAsmNH_CLGIBAsmNHE_CLGIBAsmNL_CLGIBAsmNLE_CLGIBAsmNLH_CLGIBCall_CLGIBReturn_CLGRB_CLGRBAsm_CLGRBAsmE_CLGRBAsmH_CLGRBAsmHE_CLGRBAsmL_CLGRBAsmLE_CLGRBAsmLH_CLGRBAsmNE_CLGRBAsmNH_CLGRBAsmNHE_CLGRBAsmNL_CLGRBAsmNLE_CLGRBAsmNLH_CLGRBCall_CLGRBReturn_CLIB_CLIBAsm_CLIBAsmE_CLIBAsmH_CLIBAsmHE_CLIBAsmL_CLIBAsmLE_CLIBAsmLH_CLIBAsmNE_CLIBAsmNH_CLIBAsmNHE_CLIBAsmNL_CLIBAsmNLE_CLIBAsmNLH_CLIBCall_CLIBReturn_CLRB_CLRBAsm_CLRBAsmE_CLRBAsmH_CLRBAsmHE_CLRBAsmL_CLRBAsmLE_CLRBAsmLH_CLRBAsmNE_CLRBAsmNH_CLRBAsmNHE_CLRBAsmNL_CLRBAsmNLE_CLRBAsmNLH_CLRBCall_CLRBReturn_CRB_CRBAsm_CRBAsmE_CRBAsmH_CRBAsmHE_CRBAsmL_CRBAsmLE_CRBAsmLH_CRBAsmNE_CRBAsmNH_CRBAsmNHE_CRBAsmNL_CRBAsmNLE_CRBAsmNLH_CRBCall_CRBReturn") 2, true, true,  4, 2,  6, 4,  0, 0}, // #12
  {DBGFIELD("CondTrap_Trap")      1, false, true,  3, 1,  3, 2,  0, 0}, // #13
  {DBGFIELD("CGIT_CGITAsm_CGITAsmE_CGITAsmH_CGITAsmHE_CGITAsmL_CGITAsmLE_CGITAsmLH_CGITAsmNE_CGITAsmNH_CGITAsmNHE_CGITAsmNL_CGITAsmNLE_CGITAsmNLH_CGRT_CGRTAsm_CGRTAsmE_CGRTAsmH_CGRTAsmHE_CGRTAsmL_CGRTAsmLE_CGRTAsmLH_CGRTAsmNE_CGRTAsmNH_CGRTAsmNHE_CGRTAsmNL_CGRTAsmNLE_CGRTAsmNLH_CIT_CITAsm_CITAsmE_CITAsmH_CITAsmHE_CITAsmL_CITAsmLE_CITAsmLH_CITAsmNE_CITAsmNH_CITAsmNHE_CITAsmNL_CITAsmNLE_CITAsmNLH_CRT_CRTAsm_CRTAsmE_CRTAsmH_CRTAsmHE_CRTAsmL_CRTAsmLE_CRTAsmLH_CRTAsmNE_CRTAsmNH_CRTAsmNHE_CRTAsmNL_CRTAsmNLE_CRTAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #14
  {DBGFIELD("CLGRT_CLGRTAsm_CLGRTAsmE_CLGRTAsmH_CLGRTAsmHE_CLGRTAsmL_CLGRTAsmLE_CLGRTAsmLH_CLGRTAsmNE_CLGRTAsmNH_CLGRTAsmNHE_CLGRTAsmNL_CLGRTAsmNLE_CLGRTAsmNLH_CLRT_CLRTAsm_CLRTAsmE_CLRTAsmH_CLRTAsmHE_CLRTAsmL_CLRTAsmLE_CLRTAsmLH_CLRTAsmNE_CLRTAsmNH_CLRTAsmNHE_CLRTAsmNL_CLRTAsmNLE_CLRTAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #15
  {DBGFIELD("CLFIT_CLFITAsm_CLFITAsmE_CLFITAsmH_CLFITAsmHE_CLFITAsmL_CLFITAsmLE_CLFITAsmLH_CLFITAsmNE_CLFITAsmNH_CLFITAsmNHE_CLFITAsmNL_CLFITAsmNLE_CLFITAsmNLH_CLGIT_CLGITAsm_CLGITAsmE_CLGITAsmH_CLGITAsmHE_CLGITAsmL_CLGITAsmLE_CLGITAsmLH_CLGITAsmNE_CLGITAsmNH_CLGITAsmNHE_CLGITAsmNL_CLGITAsmNLE_CLGITAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #16
  {DBGFIELD("CLGT_CLGTAsm_CLGTAsmE_CLGTAsmH_CLGTAsmHE_CLGTAsmL_CLGTAsmLE_CLGTAsmLH_CLGTAsmNE_CLGTAsmNH_CLGTAsmNHE_CLGTAsmNL_CLGTAsmNLE_CLGTAsmNLH_CLT_CLTAsm_CLTAsmE_CLTAsmH_CLTAsmHE_CLTAsmL_CLTAsmLE_CLTAsmLH_CLTAsmNE_CLTAsmNH_CLTAsmNHE_CLTAsmNL_CLTAsmNLE_CLTAsmNLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #17
  {DBGFIELD("BRAS")               3, true, true, 10, 2, 705, 5,  0, 0}, // #18
  {DBGFIELD("BRASL_CallBRASL")    3, true, true, 10, 2, 705, 5,  0, 0}, // #19
  {DBGFIELD("BAS_BASR_CallBASR")  3, true, true, 10, 2, 21, 5,  0, 0}, // #20
  {DBGFIELD("TLS_GDCALL_TLS_LDCALL") 3, true, true, 10, 2, 705, 5,  0, 0}, // #21
  {DBGFIELD("Return")             1, false, true,  3, 1,  4, 2,  0, 0}, // #22
  {DBGFIELD("CondReturn")         1, false, true,  3, 1,  4, 2,  0, 0}, // #23
  {DBGFIELD("Select32_Select32Mux_Select64") 1, false, false,  1, 1,  1, 1,  0, 0}, // #24
  {DBGFIELD("CondStore16_CondStore16Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #25
  {DBGFIELD("CondStore16Mux_CondStore16MuxInv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #26
  {DBGFIELD("CondStore32_CondStore32Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #27
  {DBGFIELD("CondStore32Mux_CondStore32MuxInv") 0, false, false,  0, 0,  0, 0,  0, 0}, // #28
  {DBGFIELD("CondStore64_CondStore64Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #29
  {DBGFIELD("CondStore8_CondStore8Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #30
  {DBGFIELD("CondStore8Mux_CondStore8MuxInv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #31
  {DBGFIELD("MVGHI_MVHHI_MVHI")   2, false, false,  4, 2,  6, 3,  0, 0}, // #32
  {DBGFIELD("MVI_MVIY")           2, false, false,  4, 2,  6, 3,  0, 0}, // #33
  {DBGFIELD("MVC")                4, true, true, 12, 2, 26, 6,  0, 0}, // #34
  {DBGFIELD("MVCL_MVCLE_MVCLU")   1, true, true,  3, 1, 32, 3,  0, 0}, // #35
  {DBGFIELD("COPY_TO_REGCLASS_COPY") 1, false, false,  1, 1,  1, 1,  0, 0}, // #36
  {DBGFIELD("EXTRACT_SUBREG")     1, false, false,  1, 1,  1, 1,  0, 0}, // #37
  {DBGFIELD("INSERT_SUBREG")      1, false, false,  1, 1,  1, 1,  0, 0}, // #38
  {DBGFIELD("REG_SEQUENCE")       1, false, false,  1, 1,  1, 1,  0, 0}, // #39
  {DBGFIELD("SUBREG_TO_REG")      1, false, false,  1, 1,  1, 1,  0, 0}, // #40
  {DBGFIELD("L_LCBB_LFH_LMux_LRL_LY") 0, false, false,  0, 0,  0, 0,  0, 0}, // #41
  {DBGFIELD("LG_LGRL")            1, false, false,  3, 1,  2, 1,  0, 0}, // #42
  {DBGFIELD("L128")               1, false, false,  3, 1,  2, 1,  0, 0}, // #43
  {DBGFIELD("LLIHF_LLIHH_LLIHL")  1, false, false,  1, 1,  1, 1,  0, 0}, // #44
  {DBGFIELD("LLILF_LLILH_LLILL")  1, false, false,  1, 1,  1, 1,  0, 0}, // #45
  {DBGFIELD("LGFI_LGHI")          1, false, false,  1, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("LHI_LHIMux")         1, false, false,  1, 1,  1, 1,  0, 0}, // #47
  {DBGFIELD("LR_LRMux")           1, false, false,  1, 1,  1, 1,  0, 0}, // #48
  {DBGFIELD("LZRF_LZRG")          0, false, false,  0, 0,  0, 0,  0, 0}, // #49
  {DBGFIELD("LAT_LFHAT_LGAT")     0, false, false,  0, 0,  0, 0,  0, 0}, // #50
  {DBGFIELD("LT_LTG")             2, false, false,  4, 2,  6, 3,  0, 0}, // #51
  {DBGFIELD("LTGR_LTR")           1, false, false,  1, 1,  1, 1,  0, 0}, // #52
  {DBGFIELD("STG_STGRL")          2, false, false,  4, 2,  6, 3,  0, 0}, // #53
  {DBGFIELD("ST128")              2, false, false,  4, 2,  6, 3,  0, 0}, // #54
  {DBGFIELD("ST_STFH_STMux_STRL_STY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #55
  {DBGFIELD("MVST")               1, true, true,  3, 1, 32, 3,  0, 0}, // #56
  {DBGFIELD("LOCRMux")            0, false, false,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("LOCFHR_LOCFHRAsm_LOCFHRAsmE_LOCFHRAsmH_LOCFHRAsmHE_LOCFHRAsmL_LOCFHRAsmLE_LOCFHRAsmLH_LOCFHRAsmM_LOCFHRAsmNE_LOCFHRAsmNH_LOCFHRAsmNHE_LOCFHRAsmNL_LOCFHRAsmNLE_LOCFHRAsmNLH_LOCFHRAsmNM_LOCFHRAsmNO_LOCFHRAsmNP_LOCFHRAsmNZ_LOCFHRAsmO_LOCFHRAsmP_LOCFHRAsmZ_LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #58
  {DBGFIELD("LOCGHI_LOCGHIAsm_LOCGHIAsmE_LOCGHIAsmH_LOCGHIAsmHE_LOCGHIAsmL_LOCGHIAsmLE_LOCGHIAsmLH_LOCGHIAsmM_LOCGHIAsmNE_LOCGHIAsmNH_LOCGHIAsmNHE_LOCGHIAsmNL_LOCGHIAsmNLE_LOCGHIAsmNLH_LOCGHIAsmNM_LOCGHIAsmNO_LOCGHIAsmNP_LOCGHIAsmNZ_LOCGHIAsmO_LOCGHIAsmP_LOCGHIAsmZ_LOCHHI_LOCHHIAsm_LOCHHIAsmE_LOCHHIAsmH_LOCHHIAsmHE_LOCHHIAsmL_LOCHHIAsmLE_LOCHHIAsmLH_LOCHHIAsmM_LOCHHIAsmNE_LOCHHIAsmNH_LOCHHIAsmNHE_LOCHHIAsmNL_LOCHHIAsmNLE_LOCHHIAsmNLH_LOCHHIAsmNM_LOCHHIAsmNO_LOCHHIAsmNP_LOCHHIAsmNZ_LOCHHIAsmO_LOCHHIAsmP_LOCHHIAsmZ_LOCHI_LOCHIAsm_LOCHIAsmE_LOCHIAsmH_LOCHIAsmHE_LOCHIAsmL_LOCHIAsmLE_LOCHIAsmLH_LOCHIAsmM_LOCHIAsmNE_LOCHIAsmNH_LOCHIAsmNHE_LOCHIAsmNL_LOCHIAsmNLE_LOCHIAsmNLH_LOCHIAsmNM_LOCHIAsmNO_LOCHIAsmNP_LOCHIAsmNZ_LOCHIAsmO_LOCHIAsmP_LOCHIAsmZ_LOCHIMux") 0, false, false,  0, 0,  0, 0,  0, 0}, // #59
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCFH_LOCFHAsm_LOCFHAsmE_LOCFHAsmH_LOCFHAsmHE_LOCFHAsmL_LOCFHAsmLE_LOCFHAsmLH_LOCFHAsmM_LOCFHAsmNE_LOCFHAsmNH_LOCFHAsmNHE_LOCFHAsmNL_LOCFHAsmNLE_LOCFHAsmNLH_LOCFHAsmNM_LOCFHAsmNO_LOCFHAsmNP_LOCFHAsmNZ_LOCFHAsmO_LOCFHAsmP_LOCFHAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ_LOCMux") 0, false, false,  0, 0,  0, 0,  0, 0}, // #60
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCFH_STOCFHAsm_STOCFHAsmE_STOCFHAsmH_STOCFHAsmHE_STOCFHAsmL_STOCFHAsmLE_STOCFHAsmLH_STOCFHAsmM_STOCFHAsmNE_STOCFHAsmNH_STOCFHAsmNHE_STOCFHAsmNL_STOCFHAsmNLE_STOCFHAsmNLH_STOCFHAsmNM_STOCFHAsmNO_STOCFHAsmNP_STOCFHAsmNZ_STOCFHAsmO_STOCFHAsmP_STOCFHAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ_STOCMux") 0, false, false,  0, 0,  0, 0,  0, 0}, // #61
  {DBGFIELD("LBR_LGR_LHR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #62
  {DBGFIELD("LGBR_LGFR_LGHR")     1, false, false,  1, 1,  1, 1,  0, 0}, // #63
  {DBGFIELD("LTGF")               2, false, false,  4, 2,  6, 3,  0, 0}, // #64
  {DBGFIELD("LTGFR")              1, false, false,  1, 1,  1, 1,  0, 0}, // #65
  {DBGFIELD("LB_LBH_LBMux")       2, false, false,  4, 2,  6, 3,  0, 0}, // #66
  {DBGFIELD("LH_LHY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #67
  {DBGFIELD("LHH_LHMux_LHRL")     2, false, false,  4, 2,  6, 3,  0, 0}, // #68
  {DBGFIELD("LGB_LGF_LGH")        2, false, false,  4, 2,  6, 3,  0, 0}, // #69
  {DBGFIELD("LGFRL_LGHRL")        2, false, false,  4, 2,  6, 3,  0, 0}, // #70
  {DBGFIELD("LLCR_LLCRMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #71
  {DBGFIELD("LLHR_LLHRMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #72
  {DBGFIELD("LLGCR_LLGFR_LLGHR_LLGTR") 1, false, false,  1, 1,  1, 1,  0, 0}, // #73
  {DBGFIELD("LLC_LLCMux")         1, false, false,  3, 1,  2, 1,  0, 0}, // #74
  {DBGFIELD("LLH_LLHMux")         1, false, false,  3, 1,  2, 1,  0, 0}, // #75
  {DBGFIELD("LLCH_LLHH")          2, false, false,  4, 2,  6, 3,  0, 0}, // #76
  {DBGFIELD("LLHRL")              1, false, false,  3, 1,  2, 1,  0, 0}, // #77
  {DBGFIELD("LLGC_LLGF_LLGFRL_LLGH_LLGHRL_LLGT") 1, false, false,  3, 1,  2, 1,  0, 0}, // #78
  {DBGFIELD("LLZRGF")             0, false, false,  0, 0,  0, 0,  0, 0}, // #79
  {DBGFIELD("LLGFAT_LLGTAT")      0, false, false,  0, 0,  0, 0,  0, 0}, // #80
  {DBGFIELD("STC_STCH_STCMux_STCY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #81
  {DBGFIELD("STH_STHH_STHMux_STHRL_STHY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #82
  {DBGFIELD("STCM_STCMH_STCMY")   2, false, false,  4, 2,  6, 3,  0, 0}, // #83
  {DBGFIELD("LM_LMG_LMH_LMY")     5, true, true, 14, 1, 35, 7,  0, 0}, // #84
  {DBGFIELD("LMD")                1, true, true,  3, 1, 32, 3,  0, 0}, // #85
  {DBGFIELD("STM_STMG_STMH_STMY") 5, true, true, 15, 2, 42, 7,  0, 0}, // #86
  {DBGFIELD("LRVGR_LRVR")         1, false, false,  1, 1,  1, 1,  0, 0}, // #87
  {DBGFIELD("LRV_LRVG_LRVH")      2, false, false,  4, 2,  6, 3,  0, 0}, // #88
  {DBGFIELD("STRV_STRVG_STRVH")   2, false, false,  4, 2,  6, 3,  0, 0}, // #89
  {DBGFIELD("MVCIN")              1, true, true,  3, 1, 32, 3,  0, 0}, // #90
  {DBGFIELD("LA_LARL_LAY")        1, false, false,  1, 1,  1, 1,  0, 0}, // #91
  {DBGFIELD("GOT")                1, false, false,  1, 1,  1, 1,  0, 0}, // #92
  {DBGFIELD("LPGR_LPR")           1, false, false,  1, 1, 49, 2,  0, 0}, // #93
  {DBGFIELD("LNGFR_LPGFR")        2, true, true,  8, 1, 17, 4,  0, 0}, // #94
  {DBGFIELD("LNGR_LNR")           1, false, false,  1, 1, 49, 2,  0, 0}, // #95
  {DBGFIELD("LCGR_LCR")           1, false, false,  1, 1,  1, 1,  0, 0}, // #96
  {DBGFIELD("LCGFR")              2, true, true,  8, 1, 48, 4,  0, 0}, // #97
  {DBGFIELD("IC_ICY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #98
  {DBGFIELD("IC32_IC32Y")         2, false, false,  4, 2,  6, 3,  0, 0}, // #99
  {DBGFIELD("ICM_ICMH_ICMY")      2, false, false,  4, 2,  6, 3,  0, 0}, // #100
  {DBGFIELD("IIFMux_IIHMux_IILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #101
  {DBGFIELD("IIHF_IIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #102
  {DBGFIELD("IIHH_IIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #103
  {DBGFIELD("IIHL_IIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #104
  {DBGFIELD("IILF_IILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #105
  {DBGFIELD("IILH_IILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #106
  {DBGFIELD("IILL_IILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #107
  {DBGFIELD("A_AY")               2, false, false,  4, 2,  6, 3,  0, 0}, // #108
  {DBGFIELD("AH_AHY")             3, true, true, 10, 2, 21, 5,  0, 0}, // #109
  {DBGFIELD("AIH")                1, false, false,  1, 1,  1, 1,  0, 0}, // #110
  {DBGFIELD("AFI_AFIMux")         1, false, false,  1, 1,  1, 1,  0, 0}, // #111
  {DBGFIELD("AG")                 2, false, false,  4, 2,  6, 3,  0, 0}, // #112
  {DBGFIELD("AGFI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #113
  {DBGFIELD("AGHI_AGHIK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #114
  {DBGFIELD("AGR_AGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #115
  {DBGFIELD("AHI_AHIK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #116
  {DBGFIELD("AHIMux_AHIMuxK")     1, false, false,  1, 1,  1, 1,  0, 0}, // #117
  {DBGFIELD("AL_ALY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #118
  {DBGFIELD("ALFI_ALHSIK")        1, false, false,  1, 1,  1, 1,  0, 0}, // #119
  {DBGFIELD("ALG_ALGF")           2, false, false,  4, 2,  6, 3,  0, 0}, // #120
  {DBGFIELD("ALGHSIK")            1, false, false,  1, 1,  1, 1,  0, 0}, // #121
  {DBGFIELD("ALGFI_ALGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #122
  {DBGFIELD("ALGR_ALGRK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #123
  {DBGFIELD("ALR_ALRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #124
  {DBGFIELD("AR_ARK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #125
  {DBGFIELD("AHHHR_ALHHHR")       1, false, false,  1, 1,  1, 1,  0, 0}, // #126
  {DBGFIELD("AHHLR_ALHHLR")       2, true, true,  8, 1, 17, 4,  0, 0}, // #127
  {DBGFIELD("ALSIH_ALSIHN")       1, false, false,  1, 1,  1, 1,  0, 0}, // #128
  {DBGFIELD("AGSI_ALGSI_ALSI_ASI") 2, false, false,  4, 2,  6, 3,  0, 0}, // #129
  {DBGFIELD("ALC_ALCG")           2, true, true,  4, 2, 12, 4,  0, 0}, // #130
  {DBGFIELD("ALCGR_ALCR")         1, true, true,  1, 1, 18, 3,  0, 0}, // #131
  {DBGFIELD("AGF_AGH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #132
  {DBGFIELD("AGFR")               2, true, true,  8, 1, 48, 4,  0, 0}, // #133
  {DBGFIELD("S_SG_SY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #134
  {DBGFIELD("SH_SHY")             3, true, true, 10, 2, 21, 5,  0, 0}, // #135
  {DBGFIELD("SGR_SGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #136
  {DBGFIELD("SLFI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #137
  {DBGFIELD("SL_SLG_SLGF_SLY")    2, false, false,  4, 2,  6, 3,  0, 0}, // #138
  {DBGFIELD("SLGFI_SLGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #139
  {DBGFIELD("SLGR_SLGRK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #140
  {DBGFIELD("SLR_SLRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #141
  {DBGFIELD("SR_SRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #142
  {DBGFIELD("SHHHR_SLHHHR")       1, false, false,  1, 1,  1, 1,  0, 0}, // #143
  {DBGFIELD("SHHLR_SLHHLR")       2, true, true,  8, 1, 17, 4,  0, 0}, // #144
  {DBGFIELD("SLB_SLBG")           2, true, true,  4, 2, 12, 4,  0, 0}, // #145
  {DBGFIELD("SLBGR_SLBR")         1, true, true,  1, 1, 18, 3,  0, 0}, // #146
  {DBGFIELD("SGF_SGH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #147
  {DBGFIELD("SGFR")               2, true, true,  8, 1, 48, 4,  0, 0}, // #148
  {DBGFIELD("N_NG_NY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #149
  {DBGFIELD("NGR_NGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #150
  {DBGFIELD("NIFMux_NIHMux_NILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #151
  {DBGFIELD("NI_NIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #152
  {DBGFIELD("NIHF_NIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #153
  {DBGFIELD("NIHH_NIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #154
  {DBGFIELD("NIHL_NIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #155
  {DBGFIELD("NILF_NILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #156
  {DBGFIELD("NILH_NILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #157
  {DBGFIELD("NILL_NILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #158
  {DBGFIELD("NR_NRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #159
  {DBGFIELD("NC")                 3, true, true, 17, 2, 55, 5,  0, 0}, // #160
  {DBGFIELD("O_OG_OY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #161
  {DBGFIELD("OGR_OGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #162
  {DBGFIELD("OI_OIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #163
  {DBGFIELD("OIFMux_OIHMux_OILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #164
  {DBGFIELD("OIHF_OIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #165
  {DBGFIELD("OIHH_OIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #166
  {DBGFIELD("OIHL_OIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #167
  {DBGFIELD("OILF_OILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #168
  {DBGFIELD("OILH_OILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #169
  {DBGFIELD("OILL_OILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #170
  {DBGFIELD("OR_ORK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #171
  {DBGFIELD("OC")                 3, true, true, 17, 2, 55, 5,  0, 0}, // #172
  {DBGFIELD("X_XG_XY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #173
  {DBGFIELD("XI_XIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #174
  {DBGFIELD("XIFMux")             1, false, false,  1, 1,  1, 1,  0, 0}, // #175
  {DBGFIELD("XGR_XGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #176
  {DBGFIELD("XIHF_XIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #177
  {DBGFIELD("XILF_XILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #178
  {DBGFIELD("XR_XRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #179
  {DBGFIELD("XC")                 3, true, true, 17, 2, 55, 5,  0, 0}, // #180
  {DBGFIELD("MS_MSGF_MSY")        2, false, false,  4, 2, 60, 3,  0, 0}, // #181
  {DBGFIELD("MSFI_MSR")           1, false, false,  1, 1, 63, 2,  0, 0}, // #182
  {DBGFIELD("MSG")                2, false, false,  4, 2, 65, 3,  0, 0}, // #183
  {DBGFIELD("MSGR")               1, false, false,  1, 1, 29, 2,  0, 0}, // #184
  {DBGFIELD("MSGFI_MSGFR")        1, false, false,  1, 1, 63, 2,  0, 0}, // #185
  {DBGFIELD("MLG")                3, true, true, 10, 2, 68, 5,  0, 0}, // #186
  {DBGFIELD("MLGR")               2, true, true,  8, 1, 73, 4,  0, 0}, // #187
  {DBGFIELD("MGHI")               1, false, false,  1, 1, 77, 2,  0, 0}, // #188
  {DBGFIELD("MHI")                1, false, false,  1, 1, 77, 2,  0, 0}, // #189
  {DBGFIELD("MH_MHY")             2, false, false,  4, 2, 79, 3,  0, 0}, // #190
  {DBGFIELD("MLR_MR")             2, true, true,  8, 1, 82, 4,  0, 0}, // #191
  {DBGFIELD("M_MFY_ML")           3, true, true, 10, 2, 11, 5,  0, 0}, // #192
  {DBGFIELD("MGH")                0, false, false,  0, 0,  0, 0,  0, 0}, // #193
  {DBGFIELD("MG")                 0, false, false,  0, 0,  0, 0,  0, 0}, // #194
  {DBGFIELD("MGRK")               0, false, false,  0, 0,  0, 0,  0, 0}, // #195
  {DBGFIELD("MSC")                0, false, false,  0, 0,  0, 0,  0, 0}, // #196
  {DBGFIELD("MSGC")               0, false, false,  0, 0,  0, 0,  0, 0}, // #197
  {DBGFIELD("MSRKC")              0, false, false,  0, 0,  0, 0,  0, 0}, // #198
  {DBGFIELD("MSGRKC")             0, false, false,  0, 0,  0, 0,  0, 0}, // #199
  {DBGFIELD("DR")                 7, true, true, 19, 2, 86, 9,  0, 0}, // #200
  {DBGFIELD("D")                  7, true, true, 21, 3, 95, 9,  0, 0}, // #201
  {DBGFIELD("DSGFR_DSGR")         6, true, true, 21, 2, 104, 8,  0, 0}, // #202
  {DBGFIELD("DSG_DSGF")           6, true, true, 24, 3, 112, 8,  0, 0}, // #203
  {DBGFIELD("DLR")                7, true, true, 19, 2, 86, 9,  0, 0}, // #204
  {DBGFIELD("DLGR")               7, true, true, 19, 2, 86, 9,  0, 0}, // #205
  {DBGFIELD("DL_DLG")             7, true, true, 21, 3, 95, 9,  0, 0}, // #206
  {DBGFIELD("SLL_SLLG_SLLK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #207
  {DBGFIELD("SRL_SRLG_SRLK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #208
  {DBGFIELD("SRA_SRAG_SRAK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #209
  {DBGFIELD("SLA_SLAG_SLAK")      1, false, false,  1, 1, 49, 2,  0, 0}, // #210
  {DBGFIELD("SLDA_SLDL_SRDA_SRDL") 5, true, true, 22, 2, 120, 7,  0, 0}, // #211
  {DBGFIELD("RLL_RLLG")           2, false, false,  4, 2, 22, 3,  0, 0}, // #212
  {DBGFIELD("RISBG_RISBG32_RISBGN") 0, false, false,  0, 0,  0, 0,  0, 0}, // #213
  {DBGFIELD("RISBHG_RISBHH_RISBHL") 1, false, false,  1, 1,  1, 1,  0, 0}, // #214
  {DBGFIELD("RISBLG_RISBLH_RISBLL") 1, false, false,  1, 1,  1, 1,  0, 0}, // #215
  {DBGFIELD("RISBMux")            1, false, false,  1, 1,  1, 1,  0, 0}, // #216
  {DBGFIELD("RNSBG_ROSBG_RXSBG")  2, true, true,  8, 1, 17, 4,  0, 0}, // #217
  {DBGFIELD("C_CG_CMux_CRL_CY")   2, false, false,  4, 2,  6, 3,  0, 0}, // #218
  {DBGFIELD("CFI_CFIMux_CHI_CHIMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #219
  {DBGFIELD("CGFI_CGHI")          1, false, false,  1, 1,  1, 1,  0, 0}, // #220
  {DBGFIELD("CGHSI_CGRL")         2, false, false,  4, 2,  6, 3,  0, 0}, // #221
  {DBGFIELD("CGR_CR")             1, false, false,  1, 1,  1, 1,  0, 0}, // #222
  {DBGFIELD("CIH")                1, false, false,  1, 1,  1, 1,  0, 0}, // #223
  {DBGFIELD("CHF_CHSI")           2, false, false,  4, 2,  6, 3,  0, 0}, // #224
  {DBGFIELD("CL_CLFHSI_CLMux_CLY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #225
  {DBGFIELD("CLFI_CLFIMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #226
  {DBGFIELD("CLG_CLGHRL_CLGHSI")  2, false, false,  4, 2,  6, 3,  0, 0}, // #227
  {DBGFIELD("CLGF_CLGFRL")        2, false, false,  4, 2,  6, 3,  0, 0}, // #228
  {DBGFIELD("CLGFI_CLGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #229
  {DBGFIELD("CLGR")               1, false, false,  1, 1,  1, 1,  0, 0}, // #230
  {DBGFIELD("CLGRL")              2, false, false,  4, 2,  6, 3,  0, 0}, // #231
  {DBGFIELD("CLHF_CLHHSI_CLHRL")  2, false, false,  4, 2,  6, 3,  0, 0}, // #232
  {DBGFIELD("CLIH")               1, false, false,  1, 1,  1, 1,  0, 0}, // #233
  {DBGFIELD("CLI_CLIY")           2, false, false,  4, 2,  6, 3,  0, 0}, // #234
  {DBGFIELD("CLR")                1, false, false,  1, 1,  1, 1,  0, 0}, // #235
  {DBGFIELD("CLRL")               2, false, false,  4, 2,  6, 3,  0, 0}, // #236
  {DBGFIELD("CHHR_CLHHR")         1, false, false,  1, 1,  1, 1,  0, 0}, // #237
  {DBGFIELD("CHLR_CLHLR")         2, true, true,  8, 1, 17, 4,  0, 0}, // #238
  {DBGFIELD("CH_CHRL_CHY")        3, true, true, 10, 2, 710, 5,  0, 0}, // #239
  {DBGFIELD("CGH_CGHRL")          3, true, true, 10, 2, 710, 5,  0, 0}, // #240
  {DBGFIELD("CHHSI")              3, true, true, 10, 2, 710, 5,  0, 0}, // #241
  {DBGFIELD("CGF_CGFRL")          3, true, true, 10, 2, 715, 6,  0, 0}, // #242
  {DBGFIELD("CGFR")               2, true, true,  8, 1, 48, 4,  0, 0}, // #243
  {DBGFIELD("CLC")                3, true, true, 17, 2, 55, 5,  0, 0}, // #244
  {DBGFIELD("CLCL_CLCLE_CLCLU")   1, true, true,  3, 1, 32, 3,  0, 0}, // #245
  {DBGFIELD("CLST")               1, true, true,  3, 1, 32, 3,  0, 0}, // #246
  {DBGFIELD("TM_TMY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #247
  {DBGFIELD("TMHMux_TMLMux")      1, false, false,  1, 1,  1, 1,  0, 0}, // #248
  {DBGFIELD("TMHH_TMHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #249
  {DBGFIELD("TMHL_TMHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #250
  {DBGFIELD("TMLH_TMLH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #251
  {DBGFIELD("TMLL_TMLL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #252
  {DBGFIELD("CLM_CLMH_CLMY")      3, true, true, 10, 2,  5, 5,  0, 0}, // #253
  {DBGFIELD("PFD_PFDRL")          1, true, true,  3, 1,  3, 2,  0, 0}, // #254
  {DBGFIELD("BPP")                0, false, false,  0, 0,  0, 0,  0, 0}, // #255
  {DBGFIELD("BPRP")               0, false, false,  0, 0,  0, 0,  0, 0}, // #256
  {DBGFIELD("NIAI")               0, false, false,  0, 0,  0, 0,  0, 0}, // #257
  {DBGFIELD("Serialize")          1, false, true,  3, 1,  3, 2,  0, 0}, // #258
  {DBGFIELD("LAA_LAAG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #259
  {DBGFIELD("LAAL_LAALG")         2, false, false,  4, 2,  6, 3,  0, 0}, // #260
  {DBGFIELD("LAN_LANG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #261
  {DBGFIELD("LAO_LAOG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #262
  {DBGFIELD("LAX_LAXG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #263
  {DBGFIELD("TS")                 2, false, true,  4, 2,  6, 4,  0, 0}, // #264
  {DBGFIELD("CS_CSG_CSY")         3, true, true, 10, 2, 710, 5,  0, 0}, // #265
  {DBGFIELD("CDS_CDSY")           6, true, true, 27, 2, 132, 8,  0, 0}, // #266
  {DBGFIELD("CDSG")               8, true, true, 29, 2, 140, 10,  0, 0}, // #267
  {DBGFIELD("CSST")               2, false, false,  4, 2, 31, 3,  0, 0}, // #268
  {DBGFIELD("PLO")                1, true, true,  3, 1, 32, 3,  0, 0}, // #269
  {DBGFIELD("LPQ")                2, true, true, 16, 1, 150, 4,  0, 0}, // #270
  {DBGFIELD("STPQ")               4, true, true, 31, 2, 154, 6,  0, 0}, // #271
  {DBGFIELD("LPD_LPDG")           2, true, true, 16, 1, 150, 4,  0, 0}, // #272
  {DBGFIELD("TR")                 1, true, true,  3, 1, 32, 3,  0, 0}, // #273
  {DBGFIELD("TRT")                1, true, true,  3, 1, 32, 3,  0, 0}, // #274
  {DBGFIELD("TRTR")               2, false, false,  4, 2, 31, 3,  0, 0}, // #275
  {DBGFIELD("TRE_TRTE_TRTEOpt_TRTRE_TRTREOpt") 1, false, false,  1, 1, 92, 2,  0, 0}, // #276
  {DBGFIELD("TROO_TROOOpt_TROT_TROTOpt_TRTO_TRTOOpt_TRTT_TRTTOpt") 1, false, false,  3, 1, 32, 2,  0, 0}, // #277
  {DBGFIELD("CU12_CU12Opt_CU14_CU14Opt_CU21_CU21Opt_CU24_CU24Opt_CU41_CU42") 1, false, false,  1, 1, 92, 2,  0, 0}, // #278
  {DBGFIELD("CUTFU_CUTFUOpt_CUUTF_CUUTFOpt") 1, false, false,  1, 1, 92, 2,  0, 0}, // #279
  {DBGFIELD("KM_KMA_KMC_KMCTR_KMF_KMO") 0, false, false,  0, 0,  0, 0,  0, 0}, // #280
  {DBGFIELD("KIMD_KLMD_KMAC")     1, false, false,  1, 1, 92, 2,  0, 0}, // #281
  {DBGFIELD("PCC_PPNO_PRNO")      0, false, false,  0, 0,  0, 0,  0, 0}, // #282
  {DBGFIELD("LGG")                0, false, false,  0, 0,  0, 0,  0, 0}, // #283
  {DBGFIELD("LLGFSG")             0, false, false,  0, 0,  0, 0,  0, 0}, // #284
  {DBGFIELD("LGSC_STGSC")         0, false, false,  0, 0,  0, 0,  0, 0}, // #285
  {DBGFIELD("CVBG")               4, true, true, 33, 3, 167, 6,  0, 0}, // #286
  {DBGFIELD("CVB_CVBY")           3, true, true, 36, 3, 173, 5,  0, 0}, // #287
  {DBGFIELD("CVDG")               6, true, true, 39, 3, 178, 8,  0, 0}, // #288
  {DBGFIELD("CVD_CVDY")           4, true, true, 42, 3, 172, 6,  0, 0}, // #289
  {DBGFIELD("MVO")                1, true, true,  3, 1, 39, 3,  0, 0}, // #290
  {DBGFIELD("MVN_MVZ")            1, true, true,  3, 1, 32, 3,  0, 0}, // #291
  {DBGFIELD("PACK_PKA_PKU")       1, true, true,  3, 1, 32, 3,  0, 0}, // #292
  {DBGFIELD("UNPKA_UNPKU")        1, true, true,  3, 1, 66, 3,  0, 0}, // #293
  {DBGFIELD("UNPK")               1, true, true,  3, 1, 32, 3,  0, 0}, // #294
  {DBGFIELD("AP_SP_ZAP")          5, true, true, 45, 3, 186, 7,  0, 0}, // #295
  {DBGFIELD("DP_MP")              5, true, true, 45, 3, 193, 7,  0, 0}, // #296
  {DBGFIELD("SRP")                7, true, true, 48, 3, 200, 9,  0, 0}, // #297
  {DBGFIELD("CP")                 4, true, true, 51, 2, 209, 6,  0, 0}, // #298
  {DBGFIELD("TP")                 3, true, true, 53, 2, 721, 4,  0, 0}, // #299
  {DBGFIELD("ED_EDMK")            1, true, true,  3, 1, 32, 3,  0, 0}, // #300
  {DBGFIELD("CPYA_EAR_SAR")       1, false, false,  3, 1,  2, 1,  0, 0}, // #301
  {DBGFIELD("LAE_LAEY")           2, true, true,  4, 2, 220, 4,  0, 0}, // #302
  {DBGFIELD("LAM_LAMY_STAM_STAMY") 1, true, true,  3, 1, 32, 3,  0, 0}, // #303
  {DBGFIELD("IPM")                1, false, true,  1, 1, 18, 3,  0, 0}, // #304
  {DBGFIELD("SPM")                1, false, true,  3, 1,  3, 2,  0, 0}, // #305
  {DBGFIELD("BAL_BALR")           3, true, true, 10, 2, 122, 5,  0, 0}, // #306
  {DBGFIELD("TAM")                1, false, false,  1, 1,  1, 1,  0, 0}, // #307
  {DBGFIELD("SAM24_SAM31_SAM64")  1, false, true,  3, 1,  3, 2,  0, 0}, // #308
  {DBGFIELD("BSM")                2, true, true,  4, 2,  6, 4,  0, 0}, // #309
  {DBGFIELD("BASSM")              3, true, true, 10, 2, 21, 5,  0, 0}, // #310
  {DBGFIELD("TBEGIN_TBEGINC_TBEGIN_nofloat") 0, false, false,  0, 0,  0, 0,  0, 0}, // #311
  {DBGFIELD("TEND")               0, false, false,  0, 0,  0, 0,  0, 0}, // #312
  {DBGFIELD("TABORT")             0, false, false,  0, 0,  0, 0,  0, 0}, // #313
  {DBGFIELD("ETND")               0, false, false,  0, 0,  0, 0,  0, 0}, // #314
  {DBGFIELD("NTSTG")              0, false, false,  0, 0,  0, 0,  0, 0}, // #315
  {DBGFIELD("PPA")                0, false, false,  0, 0,  0, 0,  0, 0}, // #316
  {DBGFIELD("FLOGR")              2, true, true,  8, 1, 82, 4,  0, 0}, // #317
  {DBGFIELD("POPCNT")             1, false, false,  1, 1, 18, 2,  0, 0}, // #318
  {DBGFIELD("AEXT128")            1, false, false,  1, 1,  1, 1,  0, 0}, // #319
  {DBGFIELD("ZEXT128")            1, false, false,  1, 1,  1, 1,  0, 0}, // #320
  {DBGFIELD("SRST")               2, false, false,  4, 2, 31, 3,  0, 0}, // #321
  {DBGFIELD("SRSTU")              1, false, false,  1, 1, 92, 2,  0, 0}, // #322
  {DBGFIELD("CUSE")               1, true, true,  3, 1, 32, 3,  0, 0}, // #323
  {DBGFIELD("CFC")                1, false, false,  3, 1, 32, 2,  0, 0}, // #324
  {DBGFIELD("UPT")                2, false, false,  4, 2, 31, 3,  0, 0}, // #325
  {DBGFIELD("CKSM")               1, false, false,  3, 1, 32, 2,  0, 0}, // #326
  {DBGFIELD("CMPSC")              1, false, false,  1, 1, 92, 2,  0, 0}, // #327
  {DBGFIELD("EX_EXRL")            1, true, true,  3, 1,  3, 2,  0, 0}, // #328
  {DBGFIELD("InsnE_InsnRI_InsnRIE_InsnRIL_InsnRILU_InsnRIS_InsnRR_InsnRRE_InsnRRF_InsnRRS_InsnRS_InsnRSE_InsnRSI_InsnRSY_InsnRX_InsnRXE_InsnRXF_InsnRXY_InsnS_InsnSI_InsnSIL_InsnSIY_InsnSS_InsnSSE_InsnSSF") 0, false, false,  0, 0,  0, 0,  0, 0}, // #329
  {DBGFIELD("SelectF128_SelectF32_SelectF64_SelectVR128") 0, false, false,  0, 0,  0, 0,  0, 0}, // #330
  {DBGFIELD("CondStoreF32_CondStoreF32Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #331
  {DBGFIELD("CondStoreF64_CondStoreF64Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #332
  {DBGFIELD("LZDR_LZER")          1, false, false,  1, 1,  1, 1,  0, 0}, // #333
  {DBGFIELD("LZXR")               2, true, true,  8, 1, 48, 4,  0, 0}, // #334
  {DBGFIELD("LER")                1, false, false,  1, 1,  1, 1,  0, 0}, // #335
  {DBGFIELD("LDGR_LDR_LDR32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #336
  {DBGFIELD("LGDR")               1, false, false,  1, 1, 18, 2,  0, 0}, // #337
  {DBGFIELD("LXR")                2, true, true,  8, 1, 48, 4,  0, 0}, // #338
  {DBGFIELD("LTDBR_LTEBR")        1, false, false, 57, 1, 30, 1,  0, 0}, // #339
  {DBGFIELD("LTEBRCompare_LTEBRCompare_VecPseudo") 1, false, false, 57, 1, 30, 1,  0, 0}, // #340
  {DBGFIELD("LTDBRCompare_LTDBRCompare_VecPseudo") 1, false, false, 57, 1, 30, 1,  0, 0}, // #341
  {DBGFIELD("LTXBR")              2, true, true, 19, 1, 233, 4,  0, 0}, // #342
  {DBGFIELD("LTXBRCompare_LTXBRCompare_VecPseudo") 2, true, true, 19, 1, 233, 4,  0, 0}, // #343
  {DBGFIELD("CPSDRdd_CPSDRds")    2, true, true,  8, 1, 76, 4,  0, 0}, // #344
  {DBGFIELD("CPSDRsd_CPSDRss")    2, true, true,  8, 1, 76, 4,  0, 0}, // #345
  {DBGFIELD("LE_LEY")             1, false, false,  3, 1,  2, 1,  0, 0}, // #346
  {DBGFIELD("LD_LDE32_LDY")       1, false, false,  3, 1,  2, 1,  0, 0}, // #347
  {DBGFIELD("LX")                 1, false, false,  3, 1,  2, 1,  0, 0}, // #348
  {DBGFIELD("STD_STDY")           2, false, false,  4, 2, 12, 3,  0, 0}, // #349
  {DBGFIELD("STE_STEY")           2, false, false,  4, 2, 12, 3,  0, 0}, // #350
  {DBGFIELD("STX")                2, false, false,  4, 2,  6, 3,  0, 0}, // #351
  {DBGFIELD("LEDBR_LEDBRA")       1, false, false, 57, 1, 30, 1,  0, 0}, // #352
  {DBGFIELD("LEXBR_LEXBRA")       2, false, false, 58, 1, 237, 3,  0, 0}, // #353
  {DBGFIELD("LDXBR_LDXBRA")       2, false, false, 58, 1, 237, 3,  0, 0}, // #354
  {DBGFIELD("LDEB")               2, false, false, 59, 2, 240, 3,  0, 0}, // #355
  {DBGFIELD("LDEBR")              1, false, false, 57, 1, 30, 1,  0, 0}, // #356
  {DBGFIELD("LXDB_LXEB")          3, true, true, 61, 2, 243, 5,  0, 0}, // #357
  {DBGFIELD("LXDBR_LXEBR")        2, true, true, 19, 1, 248, 4,  0, 0}, // #358
  {DBGFIELD("CEFBR_CEFBRA_CEGBR_CEGBRA") 2, true, true, 63, 2, 252, 4,  0, 0}, // #359
  {DBGFIELD("CDFBR_CDFBRA_CDGBR_CDGBRA") 2, true, true, 63, 2, 252, 4,  0, 0}, // #360
  {DBGFIELD("CXFBR_CXFBRA_CXGBR_CXGBRA") 3, true, true, 65, 2, 256, 5,  0, 0}, // #361
  {DBGFIELD("CELFBR_CELGBR")      2, true, true, 63, 2, 252, 4,  0, 0}, // #362
  {DBGFIELD("CDLFBR_CDLGBR")      2, true, true, 63, 2, 252, 4,  0, 0}, // #363
  {DBGFIELD("CXLFBR_CXLGBR")      3, true, true, 65, 2, 256, 5,  0, 0}, // #364
  {DBGFIELD("CFDBR_CFDBRA_CFEBR_CFEBRA") 2, true, true, 63, 2, 261, 4,  0, 0}, // #365
  {DBGFIELD("CGDBR_CGDBRA_CGEBR_CGEBRA") 2, true, true, 63, 2, 261, 4,  0, 0}, // #366
  {DBGFIELD("CFXBR_CFXBRA_CGXBR_CGXBRA") 3, true, true, 67, 2, 265, 5,  0, 0}, // #367
  {DBGFIELD("CLFEBR")             2, true, true, 63, 2, 270, 4,  0, 0}, // #368
  {DBGFIELD("CLFDBR")             2, true, true, 63, 2, 270, 4,  0, 0}, // #369
  {DBGFIELD("CLGDBR_CLGEBR")      2, true, true, 63, 2, 270, 4,  0, 0}, // #370
  {DBGFIELD("CLFXBR_CLGXBR")      3, true, true, 67, 2, 265, 5,  0, 0}, // #371
  {DBGFIELD("LCDBR_LNDBR_LPDBR")  1, false, false, 57, 1, 30, 1,  0, 0}, // #372
  {DBGFIELD("LCEBR_LNEBR_LPEBR")  1, false, false, 57, 1, 30, 1,  0, 0}, // #373
  {DBGFIELD("LCDFR_LCDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #374
  {DBGFIELD("LNDFR_LNDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #375
  {DBGFIELD("LPDFR_LPDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #376
  {DBGFIELD("LCXBR_LNXBR_LPXBR")  2, true, true, 19, 1, 233, 4,  0, 0}, // #377
  {DBGFIELD("SQDB_SQEB")          2, false, false, 59, 2, 274, 3,  0, 0}, // #378
  {DBGFIELD("SQDBR_SQEBR")        1, false, false, 57, 1, 277, 2,  0, 0}, // #379
  {DBGFIELD("SQXBR")              2, true, true, 19, 1, 279, 4,  0, 0}, // #380
  {DBGFIELD("FIEBR_FIEBRA")       1, false, false, 57, 1, 30, 1,  0, 0}, // #381
  {DBGFIELD("FIDBR_FIDBRA")       1, false, false, 57, 1, 30, 1,  0, 0}, // #382
  {DBGFIELD("FIXBR_FIXBRA")       2, true, true, 19, 1, 283, 4,  0, 0}, // #383
  {DBGFIELD("ADB_AEB")            2, false, false, 59, 2, 240, 3,  0, 0}, // #384
  {DBGFIELD("ADBR_AEBR")          1, false, false, 57, 1, 30, 1,  0, 0}, // #385
  {DBGFIELD("AXBR")               2, true, true, 19, 1, 287, 4,  0, 0}, // #386
  {DBGFIELD("SDB_SEB")            2, false, false, 59, 2, 240, 3,  0, 0}, // #387
  {DBGFIELD("SDBR_SEBR")          1, false, false, 57, 1, 30, 1,  0, 0}, // #388
  {DBGFIELD("SXBR")               2, true, true, 19, 1, 287, 4,  0, 0}, // #389
  {DBGFIELD("MDB_MDEB_MEEB")      2, false, false, 59, 2, 240, 3,  0, 0}, // #390
  {DBGFIELD("MDBR_MDEBR_MEEBR")   1, false, false, 57, 1, 30, 1,  0, 0}, // #391
  {DBGFIELD("MXDB")               3, true, true, 61, 2, 243, 5,  0, 0}, // #392
  {DBGFIELD("MXDBR")              2, true, true, 19, 1, 248, 4,  0, 0}, // #393
  {DBGFIELD("MXBR")               2, true, true, 19, 1, 279, 4,  0, 0}, // #394
  {DBGFIELD("MAEB_MSEB")          3, true, true, 69, 2, 291, 5,  0, 0}, // #395
  {DBGFIELD("MAEBR_MSEBR")        1, true, true, 57, 1, 30, 2,  0, 0}, // #396
  {DBGFIELD("MADB_MSDB")          3, true, true, 69, 2, 291, 5,  0, 0}, // #397
  {DBGFIELD("MADBR_MSDBR")        1, true, true, 57, 1, 30, 2,  0, 0}, // #398
  {DBGFIELD("DDB_DEB")            2, false, false, 59, 2, 274, 3,  0, 0}, // #399
  {DBGFIELD("DDBR_DEBR")          1, false, false, 57, 1, 277, 2,  0, 0}, // #400
  {DBGFIELD("DXBR")               2, true, true, 19, 1, 279, 4,  0, 0}, // #401
  {DBGFIELD("DIDBR_DIEBR")        1, false, false, 57, 1, 277, 2,  0, 0}, // #402
  {DBGFIELD("CDB_CEB_KDB_KEB")    2, false, false, 59, 2, 240, 3,  0, 0}, // #403
  {DBGFIELD("CDBR_CEBR_KDBR_KEBR") 1, false, false, 57, 1, 30, 1,  0, 0}, // #404
  {DBGFIELD("CXBR_KXBR")          2, false, false, 58, 1, 296, 3,  0, 0}, // #405
  {DBGFIELD("TCDB_TCEB")          2, false, false, 59, 2, 299, 3,  0, 0}, // #406
  {DBGFIELD("TCXB")               3, true, true, 61, 2, 243, 5,  0, 0}, // #407
  {DBGFIELD("EFPC")               2, true, true,  4, 2,  1, 4,  0, 0}, // #408
  {DBGFIELD("STFPC")              2, true, true,  4, 2, 302, 4,  0, 0}, // #409
  {DBGFIELD("SFPC")               1, true, true,  3, 1, 303, 3,  0, 0}, // #410
  {DBGFIELD("LFPC")               2, true, true, 16, 1, 156, 4,  0, 0}, // #411
  {DBGFIELD("SFASR")              1, false, false,  1, 1, 92, 2,  0, 0}, // #412
  {DBGFIELD("LFAS")               2, false, false,  4, 2, 31, 3,  0, 0}, // #413
  {DBGFIELD("SRNM_SRNMB_SRNMT")   1, true, true,  1, 1, 49, 3,  0, 0}, // #414
  {DBGFIELD("LTDR_LTER")          1, false, false, 57, 1, 30, 1,  0, 0}, // #415
  {DBGFIELD("LTXR")               2, true, true, 19, 1, 233, 4,  0, 0}, // #416
  {DBGFIELD("LEDR_LRER")          1, false, false, 57, 1, 30, 1,  0, 0}, // #417
  {DBGFIELD("LEXR")               1, false, false, 57, 1, 30, 1,  0, 0}, // #418
  {DBGFIELD("LDXR_LRDR")          1, false, false, 57, 1, 30, 1,  0, 0}, // #419
  {DBGFIELD("LDE")                1, false, false,  3, 1,  2, 1,  0, 0}, // #420
  {DBGFIELD("LDER")               1, false, false,  1, 1,  1, 1,  0, 0}, // #421
  {DBGFIELD("LXD_LXE")            3, true, true, 61, 2, 243, 5,  0, 0}, // #422
  {DBGFIELD("LXDR_LXER")          2, true, true, 19, 1, 248, 4,  0, 0}, // #423
  {DBGFIELD("CEFR_CEGR")          2, true, true, 63, 2, 252, 4,  0, 0}, // #424
  {DBGFIELD("CDFR_CDGR")          2, true, true, 63, 2, 252, 4,  0, 0}, // #425
  {DBGFIELD("CXFR_CXGR")          3, true, true, 65, 2, 256, 5,  0, 0}, // #426
  {DBGFIELD("CFDR_CFER")          2, true, true, 63, 2, 261, 4,  0, 0}, // #427
  {DBGFIELD("CGDR_CGER")          2, true, true, 63, 2, 261, 4,  0, 0}, // #428
  {DBGFIELD("CFXR_CGXR")          3, true, true, 67, 2, 265, 5,  0, 0}, // #429
  {DBGFIELD("THDER_THDR")         1, false, false, 57, 1, 30, 1,  0, 0}, // #430
  {DBGFIELD("TBDR_TBEDR")         1, false, false, 57, 1, 30, 1,  0, 0}, // #431
  {DBGFIELD("LCDR_LNDR_LPDR")     1, false, false, 57, 1, 30, 1,  0, 0}, // #432
  {DBGFIELD("LCER_LNER_LPER")     1, false, false, 57, 1, 30, 1,  0, 0}, // #433
  {DBGFIELD("LCXR_LNXR_LPXR")     2, true, true, 19, 1, 233, 4,  0, 0}, // #434
  {DBGFIELD("HDR_HER")            1, false, false, 57, 1, 30, 1,  0, 0}, // #435
  {DBGFIELD("SQD_SQE")            2, false, false, 59, 2, 274, 3,  0, 0}, // #436
  {DBGFIELD("SQDR_SQER")          1, false, false, 57, 1, 277, 2,  0, 0}, // #437
  {DBGFIELD("SQXR")               2, true, true, 19, 1, 279, 4,  0, 0}, // #438
  {DBGFIELD("FIER")               1, false, false, 57, 1, 30, 1,  0, 0}, // #439
  {DBGFIELD("FIDR")               1, false, false, 57, 1, 30, 1,  0, 0}, // #440
  {DBGFIELD("FIXR")               2, true, true, 19, 1, 283, 4,  0, 0}, // #441
  {DBGFIELD("AD_AE_AU_AW")        2, false, false, 59, 2, 240, 3,  0, 0}, // #442
  {DBGFIELD("ADR_AER_AUR_AWR")    1, false, false, 57, 1, 30, 1,  0, 0}, // #443
  {DBGFIELD("AXR")                2, true, true, 19, 1, 287, 4,  0, 0}, // #444
  {DBGFIELD("SD_SE_SU_SW")        2, false, false, 59, 2, 240, 3,  0, 0}, // #445
  {DBGFIELD("SDR_SER_SUR_SWR")    1, false, false, 57, 1, 30, 1,  0, 0}, // #446
  {DBGFIELD("SXR")                2, true, true, 19, 1, 287, 4,  0, 0}, // #447
  {DBGFIELD("MD_MDE_ME_MEE")      2, false, false, 59, 2, 240, 3,  0, 0}, // #448
  {DBGFIELD("MDER_MDR_MEER_MER")  1, false, false, 57, 1, 30, 1,  0, 0}, // #449
  {DBGFIELD("MXD")                3, true, true, 61, 2, 243, 5,  0, 0}, // #450
  {DBGFIELD("MXDR")               2, true, true, 19, 1, 248, 4,  0, 0}, // #451
  {DBGFIELD("MXR")                2, true, true, 19, 1, 279, 4,  0, 0}, // #452
  {DBGFIELD("MY")                 3, true, true, 61, 2, 243, 5,  0, 0}, // #453
  {DBGFIELD("MYH_MYL")            3, true, true, 69, 2, 306, 5,  0, 0}, // #454
  {DBGFIELD("MYR")                2, true, true, 19, 1, 248, 4,  0, 0}, // #455
  {DBGFIELD("MYHR_MYLR")          1, true, true, 57, 1, 311, 3,  0, 0}, // #456
  {DBGFIELD("MAE_MSE")            3, true, true, 69, 2, 291, 5,  0, 0}, // #457
  {DBGFIELD("MAER_MSER")          1, true, true, 57, 1, 30, 2,  0, 0}, // #458
  {DBGFIELD("MAD_MSD")            3, true, true, 69, 2, 291, 5,  0, 0}, // #459
  {DBGFIELD("MADR_MSDR")          1, true, true, 57, 1, 30, 2,  0, 0}, // #460
  {DBGFIELD("MAYH_MAYL")          3, true, true, 69, 2, 291, 5,  0, 0}, // #461
  {DBGFIELD("MAY")                3, true, true, 61, 2, 95, 4,  0, 0}, // #462
  {DBGFIELD("MAYHR_MAYLR")        1, true, true, 57, 1, 30, 2,  0, 0}, // #463
  {DBGFIELD("MAYR")               2, true, true, 19, 1, 86, 3,  0, 0}, // #464
  {DBGFIELD("DD_DE")              2, false, false, 59, 2, 274, 3,  0, 0}, // #465
  {DBGFIELD("DDR_DER")            1, false, false, 57, 1, 277, 2,  0, 0}, // #466
  {DBGFIELD("DXR")                2, true, true, 19, 1, 279, 4,  0, 0}, // #467
  {DBGFIELD("CD_CE")              2, false, false, 59, 2, 240, 3,  0, 0}, // #468
  {DBGFIELD("CDR_CER")            1, false, false, 57, 1, 30, 1,  0, 0}, // #469
  {DBGFIELD("CXR")                2, false, false, 58, 1, 314, 3,  0, 0}, // #470
  {DBGFIELD("LTDTR")              1, false, false, 36, 1, 317, 2,  0, 0}, // #471
  {DBGFIELD("LTXTR")              2, true, true, 39, 1, 319, 4,  0, 0}, // #472
  {DBGFIELD("LEDTR")              1, false, false, 36, 1, 323, 2,  0, 0}, // #473
  {DBGFIELD("LDXTR")              2, false, false, 33, 1, 325, 3,  0, 0}, // #474
  {DBGFIELD("LDETR")              1, false, false, 36, 1, 317, 2,  0, 0}, // #475
  {DBGFIELD("LXDTR")              2, true, true, 39, 1, 319, 4,  0, 0}, // #476
  {DBGFIELD("CDFTR_CDGTR_CDGTRA") 2, true, true, 36, 2, 328, 4,  0, 0}, // #477
  {DBGFIELD("CXFTR_CXGTR_CXGTRA") 3, true, true, 45, 2, 332, 5,  0, 0}, // #478
  {DBGFIELD("CDLFTR_CDLGTR")      2, true, true, 36, 2, 337, 4,  0, 0}, // #479
  {DBGFIELD("CXLFTR_CXLGTR")      3, true, true, 45, 2, 341, 5,  0, 0}, // #480
  {DBGFIELD("CFDTR_CGDTR_CGDTRA") 2, true, true, 36, 2, 328, 4,  0, 0}, // #481
  {DBGFIELD("CFXTR_CGXTR_CGXTRA") 3, true, true, 33, 2, 346, 5,  0, 0}, // #482
  {DBGFIELD("CLFDTR_CLGDTR")      2, true, true, 36, 2, 337, 4,  0, 0}, // #483
  {DBGFIELD("CLFXTR_CLGXTR")      3, true, true, 33, 2, 351, 5,  0, 0}, // #484
  {DBGFIELD("CDSTR_CDUTR")        2, true, true, 36, 2, 356, 4,  0, 0}, // #485
  {DBGFIELD("CXSTR_CXUTR")        4, true, true, 48, 2, 360, 6,  0, 0}, // #486
  {DBGFIELD("CSDTR_CUDTR")        2, true, true, 36, 2, 356, 4,  0, 0}, // #487
  {DBGFIELD("CSXTR_CUXTR")        4, true, true, 48, 2, 360, 6,  0, 0}, // #488
  {DBGFIELD("CDZT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #489
  {DBGFIELD("CXZT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #490
  {DBGFIELD("CZDT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #491
  {DBGFIELD("CZXT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #492
  {DBGFIELD("CDPT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #493
  {DBGFIELD("CXPT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #494
  {DBGFIELD("CPDT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #495
  {DBGFIELD("CPXT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #496
  {DBGFIELD("PFPO")               1, false, false,  1, 1, 92, 2,  0, 0}, // #497
  {DBGFIELD("FIDTR")              1, false, false, 36, 1, 317, 2,  0, 0}, // #498
  {DBGFIELD("FIXTR")              2, true, true, 39, 1, 319, 4,  0, 0}, // #499
  {DBGFIELD("EEDTR")              2, true, true, 36, 2, 388, 4,  0, 0}, // #500
  {DBGFIELD("EEXTR")              2, true, true, 33, 2, 392, 4,  0, 0}, // #501
  {DBGFIELD("ESDTR")              2, true, true, 36, 2, 388, 4,  0, 0}, // #502
  {DBGFIELD("ESXTR")              3, true, true, 33, 2, 396, 5,  0, 0}, // #503
  {DBGFIELD("ADTR_ADTRA")         1, false, false, 36, 1, 323, 2,  0, 0}, // #504
  {DBGFIELD("AXTR_AXTRA")         2, true, true, 39, 1, 333, 4,  0, 0}, // #505
  {DBGFIELD("SDTR_SDTRA")         1, false, false, 36, 1, 323, 2,  0, 0}, // #506
  {DBGFIELD("SXTR_SXTRA")         2, true, true, 39, 1, 333, 4,  0, 0}, // #507
  {DBGFIELD("MDTR_MDTRA")         1, false, false, 36, 1, 323, 2,  0, 0}, // #508
  {DBGFIELD("MXTR_MXTRA")         2, true, true, 39, 1, 333, 4,  0, 0}, // #509
  {DBGFIELD("DDTR_DDTRA")         1, false, false, 36, 1, 323, 2,  0, 0}, // #510
  {DBGFIELD("DXTR_DXTRA")         2, true, true, 39, 1, 333, 4,  0, 0}, // #511
  {DBGFIELD("QADTR")              1, false, false, 36, 1, 323, 2,  0, 0}, // #512
  {DBGFIELD("QAXTR")              2, true, true, 39, 1, 333, 4,  0, 0}, // #513
  {DBGFIELD("RRDTR")              2, true, true, 36, 2, 328, 4,  0, 0}, // #514
  {DBGFIELD("RRXTR")              3, true, true, 45, 2, 332, 5,  0, 0}, // #515
  {DBGFIELD("SLDT_SRDT")          2, true, true, 76, 2, 401, 4,  0, 0}, // #516
  {DBGFIELD("SLXT_SRXT")          3, true, true, 78, 2, 405, 5,  0, 0}, // #517
  {DBGFIELD("IEDTR")              2, true, true, 36, 2, 337, 4,  0, 0}, // #518
  {DBGFIELD("IEXTR")              3, true, true, 45, 2, 410, 5,  0, 0}, // #519
  {DBGFIELD("CDTR_KDTR")          1, false, false, 36, 1, 338, 2,  0, 0}, // #520
  {DBGFIELD("CXTR_KXTR")          2, false, false, 33, 1, 384, 3,  0, 0}, // #521
  {DBGFIELD("CEDTR")              1, false, false, 36, 1, 415, 2,  0, 0}, // #522
  {DBGFIELD("CEXTR")              1, false, false, 33, 1, 579, 2,  0, 0}, // #523
  {DBGFIELD("TDCDT_TDCET_TDGDT_TDGET") 2, false, false, 76, 2, 420, 3,  0, 0}, // #524
  {DBGFIELD("TDCXT_TDGXT")        2, false, false, 71, 2, 423, 3,  0, 0}, // #525
  {DBGFIELD("VLR_VLR32_VLR64")    0, false, false,  0, 0,  0, 0,  0, 0}, // #526
  {DBGFIELD("VLGV_VLGVB_VLGVF_VLGVG_VLGVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #527
  {DBGFIELD("VLVG_VLVGB_VLVGF_VLVGG_VLVGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #528
  {DBGFIELD("VLVGP_VLVGP32")      0, false, false,  0, 0,  0, 0,  0, 0}, // #529
  {DBGFIELD("VZERO")              0, false, false,  0, 0,  0, 0,  0, 0}, // #530
  {DBGFIELD("VONE")               0, false, false,  0, 0,  0, 0,  0, 0}, // #531
  {DBGFIELD("VGBM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #532
  {DBGFIELD("VGM_VGMB_VGMF_VGMG_VGMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #533
  {DBGFIELD("VREPI_VREPIB_VREPIF_VREPIG_VREPIH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #534
  {DBGFIELD("VLEIB_VLEIF_VLEIG_VLEIH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #535
  {DBGFIELD("VL_VLBB_VLL")        0, false, false,  0, 0,  0, 0,  0, 0}, // #536
  {DBGFIELD("VL32_VL64")          0, false, false,  0, 0,  0, 0,  0, 0}, // #537
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH_VLLEZLF") 0, false, false,  0, 0,  0, 0,  0, 0}, // #538
  {DBGFIELD("VLREP_VLREPB_VLREPF_VLREPG_VLREPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #539
  {DBGFIELD("VLEB_VLEF_VLEG_VLEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #540
  {DBGFIELD("VGEF_VGEG")          0, false, false,  0, 0,  0, 0,  0, 0}, // #541
  {DBGFIELD("VLM")                0, false, false,  0, 0,  0, 0,  0, 0}, // #542
  {DBGFIELD("VLRL_VLRLR")         0, false, false,  0, 0,  0, 0,  0, 0}, // #543
  {DBGFIELD("VST_VST32_VST64_VSTL") 0, false, false,  0, 0,  0, 0,  0, 0}, // #544
  {DBGFIELD("VSTEF_VSTEG")        0, false, false,  0, 0,  0, 0,  0, 0}, // #545
  {DBGFIELD("VSTEB_VSTEH")        0, false, false,  0, 0,  0, 0,  0, 0}, // #546
  {DBGFIELD("VSTM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #547
  {DBGFIELD("VSCEF_VSCEG")        0, false, false,  0, 0,  0, 0,  0, 0}, // #548
  {DBGFIELD("VSTRL_VSTRLR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #549
  {DBGFIELD("VMRH_VMRHB_VMRHF_VMRHG_VMRHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #550
  {DBGFIELD("VMRL_VMRLB_VMRLF_VMRLG_VMRLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #551
  {DBGFIELD("VPERM")              0, false, false,  0, 0,  0, 0,  0, 0}, // #552
  {DBGFIELD("VPDI")               0, false, false,  0, 0,  0, 0,  0, 0}, // #553
  {DBGFIELD("VBPERM")             0, false, false,  0, 0,  0, 0,  0, 0}, // #554
  {DBGFIELD("VREP_VREPB_VREPF_VREPG_VREPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #555
  {DBGFIELD("VSEL")               0, false, false,  0, 0,  0, 0,  0, 0}, // #556
  {DBGFIELD("VPK_VPKF_VPKG_VPKH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #557
  {DBGFIELD("VPKS_VPKSF_VPKSG_VPKSH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #558
  {DBGFIELD("VPKSFS_VPKSGS_VPKSHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #559
  {DBGFIELD("VPKLS_VPKLSF_VPKLSG_VPKLSH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #560
  {DBGFIELD("VPKLSFS_VPKLSGS_VPKLSHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #561
  {DBGFIELD("VSEG_VSEGB_VSEGF_VSEGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #562
  {DBGFIELD("VUPH_VUPHB_VUPHF_VUPHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #563
  {DBGFIELD("VUPL_VUPLB_VUPLF")   0, false, false,  0, 0,  0, 0,  0, 0}, // #564
  {DBGFIELD("VUPLH_VUPLHB_VUPLHF_VUPLHH_VUPLHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #565
  {DBGFIELD("VUPLL_VUPLLB_VUPLLF_VUPLLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #566
  {DBGFIELD("VA_VAB_VAC_VACQ_VAF_VAG_VAH_VAQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #567
  {DBGFIELD("VACC_VACCB_VACCC_VACCCQ_VACCF_VACCG_VACCH_VACCQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #568
  {DBGFIELD("VAVG_VAVGB_VAVGF_VAVGG_VAVGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #569
  {DBGFIELD("VAVGL_VAVGLB_VAVGLF_VAVGLG_VAVGLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #570
  {DBGFIELD("VN_VNC_VNN_VNO_VNX") 0, false, false,  0, 0,  0, 0,  0, 0}, // #571
  {DBGFIELD("VO_VOC")             0, false, false,  0, 0,  0, 0,  0, 0}, // #572
  {DBGFIELD("VCKSM")              0, false, false,  0, 0,  0, 0,  0, 0}, // #573
  {DBGFIELD("VCLZ_VCLZB_VCLZF_VCLZG_VCLZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #574
  {DBGFIELD("VCTZ_VCTZB_VCTZF_VCTZG_VCTZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #575
  {DBGFIELD("VX")                 0, false, false,  0, 0,  0, 0,  0, 0}, // #576
  {DBGFIELD("VGFM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #577
  {DBGFIELD("VGFMA_VGFMAB_VGFMAF_VGFMAG_VGFMAH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #578
  {DBGFIELD("VGFMB_VGFMF_VGFMG_VGFMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #579
  {DBGFIELD("VLC_VLCB_VLCF_VLCG_VLCH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #580
  {DBGFIELD("VLP_VLPB_VLPF_VLPG_VLPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #581
  {DBGFIELD("VMX_VMXB_VMXF_VMXG_VMXH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #582
  {DBGFIELD("VMXL_VMXLB_VMXLF_VMXLG_VMXLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #583
  {DBGFIELD("VMN_VMNB_VMNF_VMNG_VMNH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #584
  {DBGFIELD("VMNL_VMNLB_VMNLF_VMNLG_VMNLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #585
  {DBGFIELD("VMAL_VMALB_VMALF")   0, false, false,  0, 0,  0, 0,  0, 0}, // #586
  {DBGFIELD("VMALE_VMALEB_VMALEF_VMALEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #587
  {DBGFIELD("VMALH_VMALHB_VMALHF_VMALHH_VMALHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #588
  {DBGFIELD("VMALO_VMALOB_VMALOF_VMALOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #589
  {DBGFIELD("VMAO_VMAOB_VMAOF_VMAOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #590
  {DBGFIELD("VMAE_VMAEB_VMAEF_VMAEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #591
  {DBGFIELD("VMAH_VMAHB_VMAHF_VMAHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #592
  {DBGFIELD("VME_VMEB_VMEF_VMEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #593
  {DBGFIELD("VMH_VMHB_VMHF_VMHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #594
  {DBGFIELD("VML_VMLB_VMLF")      0, false, false,  0, 0,  0, 0,  0, 0}, // #595
  {DBGFIELD("VMLE_VMLEB_VMLEF_VMLEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #596
  {DBGFIELD("VMLH_VMLHB_VMLHF_VMLHH_VMLHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #597
  {DBGFIELD("VMLO_VMLOB_VMLOF_VMLOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #598
  {DBGFIELD("VMO_VMOB_VMOF_VMOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #599
  {DBGFIELD("VMSL_VMSLG")         0, false, false,  0, 0,  0, 0,  0, 0}, // #600
  {DBGFIELD("VPOPCT_VPOPCTB_VPOPCTF_VPOPCTG_VPOPCTH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #601
  {DBGFIELD("VERLL_VERLLB_VERLLF_VERLLG_VERLLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #602
  {DBGFIELD("VERLLV_VERLLVB_VERLLVF_VERLLVG_VERLLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #603
  {DBGFIELD("VERIM_VERIMB_VERIMF_VERIMG_VERIMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #604
  {DBGFIELD("VESL_VESLB_VESLF_VESLG_VESLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #605
  {DBGFIELD("VESLV_VESLVB_VESLVF_VESLVG_VESLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #606
  {DBGFIELD("VESRA_VESRAB_VESRAF_VESRAG_VESRAH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #607
  {DBGFIELD("VESRAV_VESRAVB_VESRAVF_VESRAVG_VESRAVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #608
  {DBGFIELD("VESRL_VESRLB_VESRLF_VESRLG_VESRLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #609
  {DBGFIELD("VESRLV_VESRLVB_VESRLVF_VESRLVG_VESRLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #610
  {DBGFIELD("VSL_VSLDB")          0, false, false,  0, 0,  0, 0,  0, 0}, // #611
  {DBGFIELD("VSLB")               0, false, false,  0, 0,  0, 0,  0, 0}, // #612
  {DBGFIELD("VSRA_VSRL")          0, false, false,  0, 0,  0, 0,  0, 0}, // #613
  {DBGFIELD("VSRAB_VSRLB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #614
  {DBGFIELD("VSB_VSBCBI_VSBCBIQ_VSBI_VSBIQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #615
  {DBGFIELD("VSCBI_VSCBIB_VSCBIF_VSCBIG_VSCBIH_VSCBIQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #616
  {DBGFIELD("VS_VSF_VSG_VSH_VSQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #617
  {DBGFIELD("VSUM_VSUMB_VSUMH")   0, false, false,  0, 0,  0, 0,  0, 0}, // #618
  {DBGFIELD("VSUMG_VSUMGF_VSUMGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #619
  {DBGFIELD("VSUMQ_VSUMQF_VSUMQG") 0, false, false,  0, 0,  0, 0,  0, 0}, // #620
  {DBGFIELD("VEC_VECB_VECF_VECG_VECH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #621
  {DBGFIELD("VECL_VECLB_VECLF_VECLG_VECLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #622
  {DBGFIELD("VCEQ_VCEQB_VCEQF_VCEQG_VCEQH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #623
  {DBGFIELD("VCEQBS_VCEQFS_VCEQGS_VCEQHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #624
  {DBGFIELD("VCH_VCHB_VCHF_VCHG_VCHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #625
  {DBGFIELD("VCHBS_VCHFS_VCHGS_VCHHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #626
  {DBGFIELD("VCHL_VCHLB_VCHLF_VCHLG_VCHLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #627
  {DBGFIELD("VCHLBS_VCHLFS_VCHLGS_VCHLHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #628
  {DBGFIELD("VTM")                0, false, false,  0, 0,  0, 0,  0, 0}, // #629
  {DBGFIELD("VCDG_VCDLG")         0, false, false,  0, 0,  0, 0,  0, 0}, // #630
  {DBGFIELD("VCDGB_VCDLGB")       0, false, false,  0, 0,  0, 0,  0, 0}, // #631
  {DBGFIELD("WCDGB_WCDLGB")       0, false, false,  0, 0,  0, 0,  0, 0}, // #632
  {DBGFIELD("VCGD_VCLGD")         0, false, false,  0, 0,  0, 0,  0, 0}, // #633
  {DBGFIELD("VCGDB_VCLGDB")       0, false, false,  0, 0,  0, 0,  0, 0}, // #634
  {DBGFIELD("WCGDB_WCLGDB")       0, false, false,  0, 0,  0, 0,  0, 0}, // #635
  {DBGFIELD("VLDE_VLED")          0, false, false,  0, 0,  0, 0,  0, 0}, // #636
  {DBGFIELD("VLDEB_VLEDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #637
  {DBGFIELD("WLDEB_WLEDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #638
  {DBGFIELD("VFLL_VFLR")          0, false, false,  0, 0,  0, 0,  0, 0}, // #639
  {DBGFIELD("VFLLS_VFLRD")        0, false, false,  0, 0,  0, 0,  0, 0}, // #640
  {DBGFIELD("WFLLS_WFLRD")        0, false, false,  0, 0,  0, 0,  0, 0}, // #641
  {DBGFIELD("WFLLD")              0, false, false,  0, 0,  0, 0,  0, 0}, // #642
  {DBGFIELD("WFLRX")              0, false, false,  0, 0,  0, 0,  0, 0}, // #643
  {DBGFIELD("VFI")                0, false, false,  0, 0,  0, 0,  0, 0}, // #644
  {DBGFIELD("VFIDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #645
  {DBGFIELD("WFIDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #646
  {DBGFIELD("VFISB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #647
  {DBGFIELD("WFISB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #648
  {DBGFIELD("WFIXB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #649
  {DBGFIELD("VFPSO")              0, false, false,  0, 0,  0, 0,  0, 0}, // #650
  {DBGFIELD("VFPSODB_WFPSODB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #651
  {DBGFIELD("VFPSOSB_WFPSOSB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #652
  {DBGFIELD("WFPSOXB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #653
  {DBGFIELD("VFLCDB_VFLNDB_VFLPDB_WFLCDB_WFLNDB_WFLPDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #654
  {DBGFIELD("VFLCSB_VFLNSB_VFLPSB_WFLCSB_WFLNSB_WFLPSB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #655
  {DBGFIELD("WFLCXB_WFLNXB_WFLPXB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #656
  {DBGFIELD("VFMAX_VFMIN")        0, false, false,  0, 0,  0, 0,  0, 0}, // #657
  {DBGFIELD("VFMAXDB_VFMINDB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #658
  {DBGFIELD("WFMAXDB_WFMINDB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #659
  {DBGFIELD("VFMAXSB_VFMINSB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #660
  {DBGFIELD("WFMAXSB_WFMINSB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #661
  {DBGFIELD("WFMAXXB_WFMINXB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #662
  {DBGFIELD("VFTCI")              0, false, false,  0, 0,  0, 0,  0, 0}, // #663
  {DBGFIELD("VFTCIDB_WFTCIDB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #664
  {DBGFIELD("VFTCISB_WFTCISB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #665
  {DBGFIELD("WFTCIXB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #666
  {DBGFIELD("VFA_VFS")            0, false, false,  0, 0,  0, 0,  0, 0}, // #667
  {DBGFIELD("VFADB_VFSDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #668
  {DBGFIELD("WFADB_WFSDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #669
  {DBGFIELD("VFASB_VFSSB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #670
  {DBGFIELD("WFASB_WFSSB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #671
  {DBGFIELD("WFAXB_WFSXB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #672
  {DBGFIELD("VFM")                0, false, false,  0, 0,  0, 0,  0, 0}, // #673
  {DBGFIELD("VFMDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #674
  {DBGFIELD("WFMDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #675
  {DBGFIELD("VFMSB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #676
  {DBGFIELD("WFMSB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #677
  {DBGFIELD("WFMXB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #678
  {DBGFIELD("VFMA_VFMS_VFNMA_VFNMS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #679
  {DBGFIELD("VFMADB_VFMSDB_VFNMADB_VFNMSDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #680
  {DBGFIELD("WFMADB_WFMSDB_WFNMADB_WFNMSDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #681
  {DBGFIELD("VFMASB_VFMSSB_VFNMASB_VFNMSSB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #682
  {DBGFIELD("WFMASB_WFMSSB_WFNMASB_WFNMSSB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #683
  {DBGFIELD("WFMAXB_WFMSXB_WFNMAXB_WFNMSXB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #684
  {DBGFIELD("VFD")                0, false, false,  0, 0,  0, 0,  0, 0}, // #685
  {DBGFIELD("VFDDB_WFDDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #686
  {DBGFIELD("VFDSB_WFDSB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #687
  {DBGFIELD("WFDXB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #688
  {DBGFIELD("VFSQ")               0, false, false,  0, 0,  0, 0,  0, 0}, // #689
  {DBGFIELD("VFSQDB_WFSQDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #690
  {DBGFIELD("VFSQSB_WFSQSB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #691
  {DBGFIELD("WFSQXB")             0, false, false,  0, 0,  0, 0,  0, 0}, // #692
  {DBGFIELD("VFCE_VFCH_VFCHE")    0, false, false,  0, 0,  0, 0,  0, 0}, // #693
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB_VFKEDB_VFKHDB_VFKHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #694
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB_WFKEDB_WFKHDB_WFKHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #695
  {DBGFIELD("VFCESB_VFCHESB_VFCHSB_VFKESB_VFKHESB_VFKHSB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #696
  {DBGFIELD("WFCESB_WFCHESB_WFCHSB_WFKESB_WFKHESB_WFKHSB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #697
  {DBGFIELD("WFCEXB_WFCHEXB_WFCHXB_WFKEXB_WFKHEXB_WFKHXB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #698
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS_VFKEDBS_VFKHDBS_VFKHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #699
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS_WFKEDBS_WFKHDBS_WFKHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #700
  {DBGFIELD("VFCESBS_VFCHESBS_VFCHSBS_VFKESBS_VFKHESBS_VFKHSBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #701
  {DBGFIELD("WFCESBS_WFCHESBS_WFCHSBS_WFKESBS_WFKHESBS_WFKHSBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #702
  {DBGFIELD("WFCEXBS_WFCHEXBS_WFCHXBS_WFKEXBS_WFKHEXBS_WFKHXBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #703
  {DBGFIELD("WFC_WFK")            0, false, false,  0, 0,  0, 0,  0, 0}, // #704
  {DBGFIELD("WFCDB_WFKDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #705
  {DBGFIELD("WFCSB_WFKSB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #706
  {DBGFIELD("WFCXB_WFKXB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #707
  {DBGFIELD("LEFR")               0, false, false,  0, 0,  0, 0,  0, 0}, // #708
  {DBGFIELD("LFER")               0, false, false,  0, 0,  0, 0,  0, 0}, // #709
  {DBGFIELD("VFAE_VFAEB")         0, false, false,  0, 0,  0, 0,  0, 0}, // #710
  {DBGFIELD("VFAEBS")             0, false, false,  0, 0,  0, 0,  0, 0}, // #711
  {DBGFIELD("VFAEF_VFAEH")        0, false, false,  0, 0,  0, 0,  0, 0}, // #712
  {DBGFIELD("VFAEFS_VFAEHS")      0, false, false,  0, 0,  0, 0,  0, 0}, // #713
  {DBGFIELD("VFAEZB_VFAEZF_VFAEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #714
  {DBGFIELD("VFAEZBS_VFAEZFS_VFAEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #715
  {DBGFIELD("VFEE_VFEEB_VFEEF_VFEEH_VFEEZB_VFEEZF_VFEEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #716
  {DBGFIELD("VFEEBS_VFEEFS_VFEEHS_VFEEZBS_VFEEZFS_VFEEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #717
  {DBGFIELD("VFENE_VFENEB_VFENEF_VFENEH_VFENEZB_VFENEZF_VFENEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #718
  {DBGFIELD("VFENEBS_VFENEFS_VFENEHS_VFENEZBS_VFENEZFS_VFENEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #719
  {DBGFIELD("VISTR_VISTRB_VISTRF_VISTRH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #720
  {DBGFIELD("VISTRBS_VISTRFS_VISTRHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #721
  {DBGFIELD("VSTRC_VSTRCB_VSTRCF_VSTRCH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #722
  {DBGFIELD("VSTRCBS_VSTRCFS_VSTRCHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #723
  {DBGFIELD("VSTRCZB_VSTRCZF_VSTRCZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #724
  {DBGFIELD("VSTRCZBS_VSTRCZFS_VSTRCZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #725
  {DBGFIELD("VLIP")               0, false, false,  0, 0,  0, 0,  0, 0}, // #726
  {DBGFIELD("VPKZ")               0, false, false,  0, 0,  0, 0,  0, 0}, // #727
  {DBGFIELD("VUPKZ")              0, false, false,  0, 0,  0, 0,  0, 0}, // #728
  {DBGFIELD("VCVB_VCVBG")         0, false, false,  0, 0,  0, 0,  0, 0}, // #729
  {DBGFIELD("VCVD_VCVDG")         0, false, false,  0, 0,  0, 0,  0, 0}, // #730
  {DBGFIELD("VAP_VSP")            0, false, false,  0, 0,  0, 0,  0, 0}, // #731
  {DBGFIELD("VMP_VMSP")           0, false, false,  0, 0,  0, 0,  0, 0}, // #732
  {DBGFIELD("VDP_VRP")            0, false, false,  0, 0,  0, 0,  0, 0}, // #733
  {DBGFIELD("VSDP")               0, false, false,  0, 0,  0, 0,  0, 0}, // #734
  {DBGFIELD("VSRP")               0, false, false,  0, 0,  0, 0,  0, 0}, // #735
  {DBGFIELD("VPSOP")              0, false, false,  0, 0,  0, 0,  0, 0}, // #736
  {DBGFIELD("VCP_VTP")            0, false, false,  0, 0,  0, 0,  0, 0}, // #737
  {DBGFIELD("EPSW")               1, false, false,  1, 1, 92, 2,  0, 0}, // #738
  {DBGFIELD("LPSW_LPSWE")         2, false, false,  4, 2, 31, 3,  0, 0}, // #739
  {DBGFIELD("IPK")                1, true, true,  1, 1, 18, 3,  0, 0}, // #740
  {DBGFIELD("SPKA")               1, false, true,  3, 1,  3, 2,  0, 0}, // #741
  {DBGFIELD("SSM")                1, false, true,  3, 1,  3, 2,  0, 0}, // #742
  {DBGFIELD("STNSM_STOSM")        2, true, true,  4, 2, 219, 3,  0, 0}, // #743
  {DBGFIELD("IAC")                1, false, false,  1, 1, 18, 2,  0, 0}, // #744
  {DBGFIELD("SAC_SACF")           1, false, true,  3, 1,  3, 2,  0, 0}, // #745
  {DBGFIELD("LCTL_LCTLG")         2, false, false,  4, 2, 31, 3,  0, 0}, // #746
  {DBGFIELD("STCTG_STCTL")        5, true, true, 80, 2, 725, 7,  0, 0}, // #747
  {DBGFIELD("EPAIR_EPAR_ESAIR_ESAR") 1, false, false,  3, 1,  2, 1,  0, 0}, // #748
  {DBGFIELD("SSAIR_SSAR")         1, false, false,  1, 1, 92, 2,  0, 0}, // #749
  {DBGFIELD("ESEA")               1, false, false,  1, 1, 92, 2,  0, 0}, // #750
  {DBGFIELD("SPX")                2, false, false,  4, 2, 31, 3,  0, 0}, // #751
  {DBGFIELD("STPX")               2, false, false,  4, 2, 31, 3,  0, 0}, // #752
  {DBGFIELD("ISKE")               1, false, false,  1, 1, 92, 2,  0, 0}, // #753
  {DBGFIELD("IVSK")               1, false, false,  1, 1, 92, 2,  0, 0}, // #754
  {DBGFIELD("SSKE_SSKEOpt")       1, false, false,  1, 1, 92, 2,  0, 0}, // #755
  {DBGFIELD("RRBE_RRBM")          1, false, false,  1, 1, 92, 2,  0, 0}, // #756
  {DBGFIELD("IRBM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #757
  {DBGFIELD("PFMF")               1, false, false,  1, 1, 92, 2,  0, 0}, // #758
  {DBGFIELD("TB")                 1, false, false,  1, 1, 92, 2,  0, 0}, // #759
  {DBGFIELD("PGIN")               2, false, false,  4, 2, 31, 3,  0, 0}, // #760
  {DBGFIELD("PGOUT")              2, false, false,  4, 2, 31, 3,  0, 0}, // #761
  {DBGFIELD("IPTE_IPTEOpt_IPTEOptOpt") 2, false, false,  4, 2, 31, 3,  0, 0}, // #762
  {DBGFIELD("IDTE_IDTEOpt")       1, false, false,  1, 1, 92, 2,  0, 0}, // #763
  {DBGFIELD("CRDTE_CRDTEOpt")     0, false, false,  0, 0,  0, 0,  0, 0}, // #764
  {DBGFIELD("PTLB")               1, false, false,  1, 1, 92, 2,  0, 0}, // #765
  {DBGFIELD("CSP_CSPG")           2, false, false,  4, 2, 31, 3,  0, 0}, // #766
  {DBGFIELD("LPTEA")              2, false, false,  4, 2, 31, 3,  0, 0}, // #767
  {DBGFIELD("LRA_LRAG_LRAY")      2, false, false,  4, 2, 31, 3,  0, 0}, // #768
  {DBGFIELD("STRAG")              2, false, false,  4, 2, 31, 3,  0, 0}, // #769
  {DBGFIELD("LURA_LURAG")         2, false, false,  4, 2, 31, 3,  0, 0}, // #770
  {DBGFIELD("STURA_STURG")        2, false, false,  4, 2, 31, 3,  0, 0}, // #771
  {DBGFIELD("TPROT")              2, false, false,  4, 2, 31, 3,  0, 0}, // #772
  {DBGFIELD("MVCK_MVCP_MVCS")     1, true, true,  3, 1, 124, 3,  0, 0}, // #773
  {DBGFIELD("MVCDK_MVCSK")        1, true, true,  3, 1, 23, 3,  0, 0}, // #774
  {DBGFIELD("MVCOS")              2, false, false,  4, 2, 31, 3,  0, 0}, // #775
  {DBGFIELD("MVPG")               1, true, true,  3, 1, 32, 3,  0, 0}, // #776
  {DBGFIELD("LASP")               2, false, false,  4, 2, 31, 3,  0, 0}, // #777
  {DBGFIELD("PALB")               1, true, true,  3, 1,  3, 2,  0, 0}, // #778
  {DBGFIELD("PC")                 2, false, false,  4, 2, 31, 3,  0, 0}, // #779
  {DBGFIELD("PR")                 1, false, false,  1, 1, 92, 2,  0, 0}, // #780
  {DBGFIELD("PT_PTI")             1, false, false,  1, 1, 92, 2,  0, 0}, // #781
  {DBGFIELD("RP")                 2, false, false,  4, 2, 31, 3,  0, 0}, // #782
  {DBGFIELD("BSA_BSG")            1, false, false,  1, 1, 92, 2,  0, 0}, // #783
  {DBGFIELD("TAR")                1, false, false,  1, 1, 433, 2,  0, 0}, // #784
  {DBGFIELD("BAKR")               2, false, true,  4, 2, 31, 4,  0, 0}, // #785
  {DBGFIELD("EREG_EREGG")         1, false, false,  1, 1, 92, 2,  0, 0}, // #786
  {DBGFIELD("ESTA_MSTA")          1, false, false,  1, 1, 92, 2,  0, 0}, // #787
  {DBGFIELD("PTFF")               1, false, false,  1, 1, 92, 2,  0, 0}, // #788
  {DBGFIELD("SCK")                2, false, false,  4, 2, 435, 3,  0, 0}, // #789
  {DBGFIELD("SCKPF")              1, false, false,  1, 1, 92, 2,  0, 0}, // #790
  {DBGFIELD("SCKC")               2, false, false,  4, 2, 435, 3,  0, 0}, // #791
  {DBGFIELD("SPT")                2, false, false,  4, 2, 435, 3,  0, 0}, // #792
  {DBGFIELD("STCK_STCKF")         2, false, false,  4, 2, 65, 3,  0, 0}, // #793
  {DBGFIELD("STCKE")              2, false, false,  4, 2, 31, 3,  0, 0}, // #794
  {DBGFIELD("STCKC")              2, false, false,  4, 2, 79, 3,  0, 0}, // #795
  {DBGFIELD("STPT")               2, false, false,  4, 2, 123, 3,  0, 0}, // #796
  {DBGFIELD("STAP")               2, false, false,  4, 2, 31, 3,  0, 0}, // #797
  {DBGFIELD("STIDP")              2, false, false,  4, 2, 31, 3,  0, 0}, // #798
  {DBGFIELD("STSI")               2, false, false,  4, 2, 31, 3,  0, 0}, // #799
  {DBGFIELD("STFL_STFLE")         2, false, false,  4, 2, 31, 3,  0, 0}, // #800
  {DBGFIELD("ECAG")               2, false, false,  4, 2, 31, 3,  0, 0}, // #801
  {DBGFIELD("ECTG")               2, false, false,  4, 2, 31, 3,  0, 0}, // #802
  {DBGFIELD("PTF")                1, false, false,  1, 1, 92, 2,  0, 0}, // #803
  {DBGFIELD("PCKMO")              1, false, false,  1, 1, 92, 2,  0, 0}, // #804
  {DBGFIELD("SVC")                1, false, false,  1, 1, 92, 2,  0, 0}, // #805
  {DBGFIELD("MC")                 1, true, true,  1, 1,  4, 2,  0, 0}, // #806
  {DBGFIELD("DIAG")               1, false, false,  1, 1, 92, 2,  0, 0}, // #807
  {DBGFIELD("TRACE_TRACG")        2, false, false,  4, 2, 31, 3,  0, 0}, // #808
  {DBGFIELD("TRAP2_TRAP4")        1, false, false,  1, 1, 92, 2,  0, 0}, // #809
  {DBGFIELD("SIGP")               1, false, false,  1, 1, 92, 2,  0, 0}, // #810
  {DBGFIELD("SIGA")               2, false, false,  4, 2, 31, 3,  0, 0}, // #811
  {DBGFIELD("SIE")                2, false, false,  4, 2, 31, 3,  0, 0}, // #812
  {DBGFIELD("LPP")                1, false, false,  1, 1,  1, 1,  0, 0}, // #813
  {DBGFIELD("ECPGA")              1, false, false,  1, 1, 92, 2,  0, 0}, // #814
  {DBGFIELD("ECCTR_EPCTR")        1, false, false,  1, 1, 92, 2,  0, 0}, // #815
  {DBGFIELD("LCCTL")              1, false, false,  1, 1, 92, 2,  0, 0}, // #816
  {DBGFIELD("LPCTL_LSCTL")        2, false, false,  4, 2, 31, 3,  0, 0}, // #817
  {DBGFIELD("QCTRI_QSI")          2, false, false,  4, 2, 31, 3,  0, 0}, // #818
  {DBGFIELD("SCCTR_SPCTR")        1, false, false,  1, 1, 92, 2,  0, 0}, // #819
  {DBGFIELD("CSCH_HSCH_RSCH_XSCH") 1, false, false,  1, 1, 92, 2,  0, 0}, // #820
  {DBGFIELD("MSCH_SSCH_STSCH_TSCH") 2, false, false,  4, 2, 31, 3,  0, 0}, // #821
  {DBGFIELD("RCHP")               1, false, false,  1, 1, 92, 2,  0, 0}, // #822
  {DBGFIELD("SCHM")               1, false, false,  1, 1, 92, 2,  0, 0}, // #823
  {DBGFIELD("STCPS_STCRW")        2, false, false,  4, 2, 31, 3,  0, 0}, // #824
  {DBGFIELD("TPI")                2, false, false,  4, 2, 31, 3,  0, 0}, // #825
  {DBGFIELD("SAL")                1, false, false,  1, 1, 92, 2,  0, 0}, // #826
  {DBGFIELD("AGF")                3, true, true, 10, 2, 21, 5,  0, 0}, // #827
  {DBGFIELD("SGF")                3, true, true, 10, 2, 21, 5,  0, 0}, // #828
  {DBGFIELD("KM_KMC_KMCTR_KMF_KMO") 1, false, false,  1, 1, 92, 2,  0, 0}, // #829
  {DBGFIELD("PCC_PPNO")           0, false, false,  0, 0,  0, 0,  0, 0}, // #830
  {DBGFIELD("SelectF128_SelectF32_SelectF64") 1, false, false,  1, 1,  1, 1,  0, 0}, // #831
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #832
  {DBGFIELD("VN_VNC_VNO")         0, false, false,  0, 0,  0, 0,  0, 0}, // #833
  {DBGFIELD("VO")                 0, false, false,  0, 0,  0, 0,  0, 0}, // #834
  {DBGFIELD("VPOPCT")             0, false, false,  0, 0,  0, 0,  0, 0}, // #835
  {DBGFIELD("VFMA_VFMS")          0, false, false,  0, 0,  0, 0,  0, 0}, // #836
  {DBGFIELD("VFMADB_VFMSDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #837
  {DBGFIELD("WFMADB_WFMSDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #838
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #839
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #840
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #841
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #842
  {DBGFIELD("L_LFH_LMux_LRL_LY")  1, false, false,  3, 1,  2, 1,  0, 0}, // #843
  {DBGFIELD("LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, true,  1, 1, 49, 3,  0, 0}, // #844
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 2, false, true,  4, 2, 22, 4,  0, 0}, // #845
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 2, false, true,  4, 2,  6, 4,  0, 0}, // #846
  {DBGFIELD("ALSI_ASI")           2, false, false,  4, 2,  6, 3,  0, 0}, // #847
  {DBGFIELD("ALGF")               2, false, false,  4, 2,  6, 3,  0, 0}, // #848
  {DBGFIELD("PCC")                1, false, false,  1, 1, 92, 2,  0, 0}, // #849
  {DBGFIELD("CDFTR")              2, true, true, 36, 2, 446, 4,  0, 0}, // #850
  {DBGFIELD("CXFTR")              3, true, true, 45, 2, 450, 4,  0, 0}, // #851
  {DBGFIELD("CXLFTR")             3, true, true, 45, 2, 454, 5,  0, 0}, // #852
  {DBGFIELD("CFDTR")              2, true, true, 36, 2, 337, 4,  0, 0}, // #853
  {DBGFIELD("CFXTR")              3, true, true, 33, 2, 351, 5,  0, 0}, // #854
  {DBGFIELD("MVCSK")              1, true, true,  3, 1, 32, 3,  0, 0}, // #855
  {DBGFIELD("RISBG_RISBG32")      1, false, false,  1, 1,  1, 1,  0, 0}, // #856
  {DBGFIELD("STCK")               2, false, false,  4, 2, 69, 3,  0, 0}, // #857
}; // Z196ModelSchedClasses

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  0, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr // No Itinerary
};

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc ZEC12ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("ZEC12_DFUnit")    1, 0, -1}, // #1
  {DBGFIELD("ZEC12_FPUnit")    1, 0, -1}, // #2
  {DBGFIELD("ZEC12_FXUnit")    2, 0, -1}, // #3
  {DBGFIELD("ZEC12_LSUnit")    2, 0, -1}, // #4
  {DBGFIELD("ZEC12_VBUnit")    1, 0, -1}, // #5
};

static const llvm::MCSchedModel ZEC12Model = {
  5, // IssueWidth
  40, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  1, // Processor ID
  ZEC12ModelProcResources,
  ZEC12ModelSchedClasses,
  6,
  858,
  nullptr // No Itinerary
};

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc Z13ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("Z13_FXaUnit")     2, 0, -1}, // #1
  {DBGFIELD("Z13_FXbUnit")     2, 0, -1}, // #2
  {DBGFIELD("Z13_LSUnit")      2, 0, -1}, // #3
  {DBGFIELD("Z13_VBUnit")      2, 0, -1}, // #4
  {DBGFIELD("Z13_VecFPdUnit")  2, 0, 1}, // #5
  {DBGFIELD("Z13_VecUnit")     2, 0, -1}, // #6
};

static const llvm::MCSchedModel Z13Model = {
  8, // IssueWidth
  60, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  20, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  2, // Processor ID
  Z13ModelProcResources,
  Z13ModelSchedClasses,
  7,
  858,
  nullptr // No Itinerary
};

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc Z14ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("Z14_FXaUnit")     2, 0, -1}, // #1
  {DBGFIELD("Z14_FXbUnit")     2, 0, -1}, // #2
  {DBGFIELD("Z14_LSUnit")      2, 0, -1}, // #3
  {DBGFIELD("Z14_VBUnit")      2, 0, -1}, // #4
  {DBGFIELD("Z14_VecFPdUnit")  2, 0, 1}, // #5
  {DBGFIELD("Z14_VecUnit")     2, 0, -1}, // #6
};

static const llvm::MCSchedModel Z14Model = {
  8, // IssueWidth
  60, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  20, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  3, // Processor ID
  Z14ModelProcResources,
  Z14ModelSchedClasses,
  7,
  858,
  nullptr // No Itinerary
};

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc Z196ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("Z196_DFUnit")     1, 0, -1}, // #1
  {DBGFIELD("Z196_FPUnit")     1, 0, -1}, // #2
  {DBGFIELD("Z196_FXUnit")     2, 0, -1}, // #3
  {DBGFIELD("Z196_LSUnit")     2, 0, -1}, // #4
};

static const llvm::MCSchedModel Z196Model = {
  5, // IssueWidth
  40, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  4, // Processor ID
  Z196ModelProcResources,
  Z196ModelSchedClasses,
  5,
  858,
  nullptr // No Itinerary
};

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV SystemZProcSchedKV[] = {
  { "arch10", (const void *)&ZEC12Model },
  { "arch11", (const void *)&Z13Model },
  { "arch12", (const void *)&Z14Model },
  { "arch8", (const void *)&NoSchedModel },
  { "arch9", (const void *)&Z196Model },
  { "generic", (const void *)&NoSchedModel },
  { "z10", (const void *)&NoSchedModel },
  { "z13", (const void *)&Z13Model },
  { "z14", (const void *)&Z14Model },
  { "z196", (const void *)&Z196Model },
  { "zEC12", (const void *)&ZEC12Model },
};

#undef DBGFIELD

static inline MCSubtargetInfo *createSystemZMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, FS, SystemZFeatureKV, SystemZSubTypeKV, 
                      SystemZProcSchedKV, SystemZWriteProcResTable, SystemZWriteLatencyTable, SystemZReadAdvanceTable, 
                      nullptr, nullptr, nullptr);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::SystemZSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[SystemZ::FeatureDFPPackedConversion]) HasDFPPackedConversion = true;
  if (Bits[SystemZ::FeatureDFPZonedConversion]) HasDFPZonedConversion = true;
  if (Bits[SystemZ::FeatureDistinctOps]) HasDistinctOps = true;
  if (Bits[SystemZ::FeatureEnhancedDAT2]) HasEnhancedDAT2 = true;
  if (Bits[SystemZ::FeatureExecutionHint]) HasExecutionHint = true;
  if (Bits[SystemZ::FeatureFPExtension]) HasFPExtension = true;
  if (Bits[SystemZ::FeatureFastSerialization]) HasFastSerialization = true;
  if (Bits[SystemZ::FeatureGuardedStorage]) HasGuardedStorage = true;
  if (Bits[SystemZ::FeatureHighWord]) HasHighWord = true;
  if (Bits[SystemZ::FeatureInsertReferenceBitsMultiple]) HasInsertReferenceBitsMultiple = true;
  if (Bits[SystemZ::FeatureInterlockedAccess1]) HasInterlockedAccess1 = true;
  if (Bits[SystemZ::FeatureLoadAndTrap]) HasLoadAndTrap = true;
  if (Bits[SystemZ::FeatureLoadAndZeroRightmostByte]) HasLoadAndZeroRightmostByte = true;
  if (Bits[SystemZ::FeatureLoadStoreOnCond]) HasLoadStoreOnCond = true;
  if (Bits[SystemZ::FeatureLoadStoreOnCond2]) HasLoadStoreOnCond2 = true;
  if (Bits[SystemZ::FeatureMessageSecurityAssist3]) HasMessageSecurityAssist3 = true;
  if (Bits[SystemZ::FeatureMessageSecurityAssist4]) HasMessageSecurityAssist4 = true;
  if (Bits[SystemZ::FeatureMessageSecurityAssist5]) HasMessageSecurityAssist5 = true;
  if (Bits[SystemZ::FeatureMessageSecurityAssist7]) HasMessageSecurityAssist7 = true;
  if (Bits[SystemZ::FeatureMessageSecurityAssist8]) HasMessageSecurityAssist8 = true;
  if (Bits[SystemZ::FeatureMiscellaneousExtensions]) HasMiscellaneousExtensions = true;
  if (Bits[SystemZ::FeatureMiscellaneousExtensions2]) HasMiscellaneousExtensions2 = true;
  if (Bits[SystemZ::FeaturePopulationCount]) HasPopulationCount = true;
  if (Bits[SystemZ::FeatureProcessorAssist]) HasProcessorAssist = true;
  if (Bits[SystemZ::FeatureResetReferenceBitsMultiple]) HasResetReferenceBitsMultiple = true;
  if (Bits[SystemZ::FeatureTransactionalExecution]) HasTransactionalExecution = true;
  if (Bits[SystemZ::FeatureVector]) HasVector = true;
  if (Bits[SystemZ::FeatureVectorEnhancements1]) HasVectorEnhancements1 = true;
  if (Bits[SystemZ::FeatureVectorPackedDecimal]) HasVectorPackedDecimal = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
struct SystemZGenSubtargetInfo : public TargetSubtargetInfo {
  explicit SystemZGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV SystemZFeatureKV[];
extern const llvm::SubtargetFeatureKV SystemZSubTypeKV[];
extern const llvm::SubtargetInfoKV SystemZProcSchedKV[];
extern const llvm::MCWriteProcResEntry SystemZWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry SystemZWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry SystemZReadAdvanceTable[];
SystemZGenSubtargetInfo::SystemZGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(SystemZFeatureKV, 29), makeArrayRef(SystemZSubTypeKV, 11), 
                        SystemZProcSchedKV, SystemZWriteProcResTable, SystemZWriteLatencyTable, SystemZReadAdvanceTable, 
                        nullptr, nullptr, nullptr) {}

unsigned SystemZGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // SystemZGenSubtargetInfo::resolveSchedClass
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR

