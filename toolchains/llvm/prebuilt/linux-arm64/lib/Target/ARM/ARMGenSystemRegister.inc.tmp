#ifdef GET_BANKEDREG_DECL
#undef GET_BANKEDREG_DECL
enum BankedRegValues {
  r8_usr,
  r9_usr,
  r10_usr,
  r11_usr,
  r12_usr,
  sp_usr,
  lr_usr,
  r8_fiq,
  r9_fiq,
  r10_fiq,
  r11_fiq,
  r12_fiq,
  sp_fiq,
  lr_fiq,
  lr_irq,
  sp_irq,
  lr_svc,
  sp_svc,
  lr_abt,
  sp_abt,
  lr_und,
  sp_und,
  lr_mon,
  sp_mon,
  elr_hyp,
  sp_hyp,
  spsr_fiq,
  spsr_irq,
  spsr_svc,
  spsr_abt,
  spsr_und,
  spsr_mon,
  spsr_hyp,
};

const BankedReg *lookupBankedRegByName(StringRef Name);

const BankedReg *lookupBankedRegByEncoding(uint8_t Encoding);

#endif

#ifdef GET_BANKEDREG_IMPL
#undef GET_BANKEDREG_IMPL
const BankedReg BankedRegsList[] = {
  { "r8_usr", 0x0},
  { "r9_usr", 0x1},
  { "r10_usr", 0x2},
  { "r11_usr", 0x3},
  { "r12_usr", 0x4},
  { "sp_usr", 0x5},
  { "lr_usr", 0x6},
  { "r8_fiq", 0x8},
  { "r9_fiq", 0x9},
  { "r10_fiq", 0xA},
  { "r11_fiq", 0xB},
  { "r12_fiq", 0xC},
  { "sp_fiq", 0xD},
  { "lr_fiq", 0xE},
  { "lr_irq", 0x10},
  { "sp_irq", 0x11},
  { "lr_svc", 0x12},
  { "sp_svc", 0x13},
  { "lr_abt", 0x14},
  { "sp_abt", 0x15},
  { "lr_und", 0x16},
  { "sp_und", 0x17},
  { "lr_mon", 0x1C},
  { "sp_mon", 0x1D},
  { "elr_hyp", 0x1E},
  { "sp_hyp", 0x1F},
  { "spsr_fiq", 0x2E},
  { "spsr_irq", 0x30},
  { "spsr_svc", 0x32},
  { "spsr_abt", 0x34},
  { "spsr_und", 0x36},
  { "spsr_mon", 0x3C},
  { "spsr_hyp", 0x3E},
};

const std::pair<const char *, int> BankedRegsByName[] = {
  { "ELR_HYP", 24 },
  { "LR_ABT", 18 },
  { "LR_FIQ", 13 },
  { "LR_IRQ", 14 },
  { "LR_MON", 22 },
  { "LR_SVC", 16 },
  { "LR_UND", 20 },
  { "LR_USR", 6 },
  { "R10_FIQ", 9 },
  { "R10_USR", 2 },
  { "R11_FIQ", 10 },
  { "R11_USR", 3 },
  { "R12_FIQ", 11 },
  { "R12_USR", 4 },
  { "R8_FIQ", 7 },
  { "R8_USR", 0 },
  { "R9_FIQ", 8 },
  { "R9_USR", 1 },
  { "SPSR_ABT", 29 },
  { "SPSR_FIQ", 26 },
  { "SPSR_HYP", 32 },
  { "SPSR_IRQ", 27 },
  { "SPSR_MON", 31 },
  { "SPSR_SVC", 28 },
  { "SPSR_UND", 30 },
  { "SP_ABT", 19 },
  { "SP_FIQ", 12 },
  { "SP_HYP", 25 },
  { "SP_IRQ", 15 },
  { "SP_MON", 23 },
  { "SP_SVC", 17 },
  { "SP_UND", 21 },
  { "SP_USR", 5 },
};

const BankedReg *lookupBankedRegByName(StringRef Name) {
  std::string CanonicalVal = Name.upper();
  std::pair<const char *, int> Val = {CanonicalVal.c_str(), 0};
  ArrayRef<std::pair<const char *, int>> Table(BankedRegsByName);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Val,
                              [](const std::pair<const char *, int> &LHS, const std::pair<const char *, int> &RHS) {
    return std::strcmp(LHS.first, RHS.first) < 0;
  });

  if (Idx == Table.end() || CanonicalVal != Idx->first)
    return nullptr;
  return &BankedRegsList[Idx->second];
}

const std::pair<uint8_t, int> BankedRegsByEncoding[] = {
  { 0x0, 0 },
  { 0x1, 1 },
  { 0x2, 2 },
  { 0x3, 3 },
  { 0x4, 4 },
  { 0x5, 5 },
  { 0x6, 6 },
  { 0x8, 7 },
  { 0x9, 8 },
  { 0xA, 9 },
  { 0xB, 10 },
  { 0xC, 11 },
  { 0xD, 12 },
  { 0xE, 13 },
  { 0x10, 14 },
  { 0x11, 15 },
  { 0x12, 16 },
  { 0x13, 17 },
  { 0x14, 18 },
  { 0x15, 19 },
  { 0x16, 20 },
  { 0x17, 21 },
  { 0x1C, 22 },
  { 0x1D, 23 },
  { 0x1E, 24 },
  { 0x1F, 25 },
  { 0x2E, 26 },
  { 0x30, 27 },
  { 0x32, 28 },
  { 0x34, 29 },
  { 0x36, 30 },
  { 0x3C, 31 },
  { 0x3E, 32 },
};

const BankedReg *lookupBankedRegByEncoding(uint8_t Encoding) {
  auto CanonicalVal = Encoding;
 std::pair<uint8_t, int> Val = {CanonicalVal, 0};
  ArrayRef<std::pair<uint8_t, int>> Table(BankedRegsByEncoding);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Val);
  if (Idx == Table.end() || CanonicalVal != Idx->first)
    return nullptr;
  return &BankedRegsList[Idx->second];
}

#endif
#ifdef GET_MCLASSSYSREG_DECL
#undef GET_MCLASSSYSREG_DECL
enum MClassSysRegValues {
  apsr_g = 1024,
  apsr_nzcvqg = 3072,
  iapsr_g = 1025,
  iapsr_nzcvqg = 3073,
  eapsr_g = 1026,
  eapsr_nzcvqg = 3074,
  xpsr_g = 1027,
  xpsr_nzcvqg = 3075,
  apsr = 2048,
  apsr_nzcvq = 2048,
  iapsr = 2049,
  iapsr_nzcvq = 2049,
  eapsr = 2050,
  eapsr_nzcvq = 2050,
  xpsr = 2051,
  xpsr_nzcvq = 2051,
  ipsr = 2053,
  epsr = 2054,
  iepsr = 2055,
  msp = 2056,
  psp = 2057,
  msplim = 2058,
  psplim = 2059,
  primask = 2064,
  basepri = 2065,
  basepri_max = 2066,
  faultmask = 2067,
  control = 2068,
  msp_ns = 2184,
  psp_ns = 2185,
  msplim_ns = 2186,
  psplim_ns = 2187,
  primask_ns = 2192,
  basepri_ns = 2193,
  faultmask_ns = 2195,
  control_ns = 2196,
  sp_ns = 2200,
};

const MClassSysReg *lookupMClassSysRegByName(StringRef Name);

const MClassSysReg *lookupMClassSysRegByM1Encoding12(uint16_t M1Encoding12);

const MClassSysReg *lookupMClassSysRegByM2M3Encoding8(uint16_t M2M3Encoding8);

const MClassSysReg *lookupMClassSysRegByEncoding(uint16_t Encoding);

#endif

#ifdef GET_MCLASSSYSREG_IMPL
#undef GET_MCLASSSYSREG_IMPL
const MClassSysReg MClassSysRegsList[] = {
  { "apsr_g", 0x400, 0x0, 0x400,  {ARM::FeatureDSP} },
  { "apsr_nzcvqg", 0xC00, 0x300, 0xC00,  {ARM::FeatureDSP} },
  { "iapsr_g", 0x401, 0x1, 0x401,  {ARM::FeatureDSP} },
  { "iapsr_nzcvqg", 0xC01, 0x301, 0xC01,  {ARM::FeatureDSP} },
  { "eapsr_g", 0x402, 0x2, 0x402,  {ARM::FeatureDSP} },
  { "eapsr_nzcvqg", 0xC02, 0x302, 0xC02,  {ARM::FeatureDSP} },
  { "xpsr_g", 0x403, 0x3, 0x403,  {ARM::FeatureDSP} },
  { "xpsr_nzcvqg", 0xC03, 0x303, 0xC03,  {ARM::FeatureDSP} },
  { "apsr", 0x800, 0x100, 0x800,  {} },
  { "apsr_nzcvq", 0x1800, 0x200, 0x800,  {} },
  { "iapsr", 0x801, 0x101, 0x801,  {} },
  { "iapsr_nzcvq", 0x1801, 0x201, 0x801,  {} },
  { "eapsr", 0x802, 0x102, 0x802,  {} },
  { "eapsr_nzcvq", 0x1802, 0x202, 0x802,  {} },
  { "xpsr", 0x803, 0x103, 0x803,  {} },
  { "xpsr_nzcvq", 0x1803, 0x203, 0x803,  {} },
  { "ipsr", 0x805, 0x105, 0x805,  {} },
  { "epsr", 0x806, 0x106, 0x806,  {} },
  { "iepsr", 0x807, 0x107, 0x807,  {} },
  { "msp", 0x808, 0x108, 0x808,  {} },
  { "psp", 0x809, 0x109, 0x809,  {} },
  { "msplim", 0x80A, 0x10A, 0x80A,  {ARM::HasV8MBaselineOps} },
  { "psplim", 0x80B, 0x10B, 0x80B,  {ARM::HasV8MBaselineOps} },
  { "primask", 0x810, 0x110, 0x810,  {} },
  { "basepri", 0x811, 0x111, 0x811,  {ARM::HasV7Ops} },
  { "basepri_max", 0x812, 0x112, 0x812,  {ARM::HasV7Ops} },
  { "faultmask", 0x813, 0x113, 0x813,  {ARM::HasV7Ops} },
  { "control", 0x814, 0x114, 0x814,  {} },
  { "msp_ns", 0x888, 0x188, 0x888,  {ARM::Feature8MSecExt} },
  { "psp_ns", 0x889, 0x189, 0x889,  {ARM::Feature8MSecExt} },
  { "msplim_ns", 0x88A, 0x18A, 0x88A,  {ARM::Feature8MSecExt, ARM::HasV8MBaselineOps} },
  { "psplim_ns", 0x88B, 0x18B, 0x88B,  {ARM::Feature8MSecExt, ARM::HasV8MBaselineOps} },
  { "primask_ns", 0x890, 0x190, 0x890,  {} },
  { "basepri_ns", 0x891, 0x191, 0x891,  {ARM::Feature8MSecExt, ARM::HasV7Ops} },
  { "faultmask_ns", 0x893, 0x193, 0x893,  {ARM::Feature8MSecExt, ARM::HasV7Ops} },
  { "control_ns", 0x894, 0x194, 0x894,  {ARM::Feature8MSecExt} },
  { "sp_ns", 0x898, 0x198, 0x898,  {ARM::Feature8MSecExt} },
};

const std::pair<const char *, int> MClassSysRegsByName[] = {
  { "APSR", 8 },
  { "APSR_G", 0 },
  { "APSR_NZCVQ", 9 },
  { "APSR_NZCVQG", 1 },
  { "BASEPRI", 24 },
  { "BASEPRI_MAX", 25 },
  { "BASEPRI_NS", 33 },
  { "CONTROL", 27 },
  { "CONTROL_NS", 35 },
  { "EAPSR", 12 },
  { "EAPSR_G", 4 },
  { "EAPSR_NZCVQ", 13 },
  { "EAPSR_NZCVQG", 5 },
  { "EPSR", 17 },
  { "FAULTMASK", 26 },
  { "FAULTMASK_NS", 34 },
  { "IAPSR", 10 },
  { "IAPSR_G", 2 },
  { "IAPSR_NZCVQ", 11 },
  { "IAPSR_NZCVQG", 3 },
  { "IEPSR", 18 },
  { "IPSR", 16 },
  { "MSP", 19 },
  { "MSPLIM", 21 },
  { "MSPLIM_NS", 30 },
  { "MSP_NS", 28 },
  { "PRIMASK", 23 },
  { "PRIMASK_NS", 32 },
  { "PSP", 20 },
  { "PSPLIM", 22 },
  { "PSPLIM_NS", 31 },
  { "PSP_NS", 29 },
  { "SP_NS", 36 },
  { "XPSR", 14 },
  { "XPSR_G", 6 },
  { "XPSR_NZCVQ", 15 },
  { "XPSR_NZCVQG", 7 },
};

const MClassSysReg *lookupMClassSysRegByName(StringRef Name) {
  std::string CanonicalVal = Name.upper();
  std::pair<const char *, int> Val = {CanonicalVal.c_str(), 0};
  ArrayRef<std::pair<const char *, int>> Table(MClassSysRegsByName);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Val,
                              [](const std::pair<const char *, int> &LHS, const std::pair<const char *, int> &RHS) {
    return std::strcmp(LHS.first, RHS.first) < 0;
  });

  if (Idx == Table.end() || CanonicalVal != Idx->first)
    return nullptr;
  return &MClassSysRegsList[Idx->second];
}

const std::pair<uint16_t, int> MClassSysRegsByM1Encoding12[] = {
  { 0x400, 0 },
  { 0x401, 2 },
  { 0x402, 4 },
  { 0x403, 6 },
  { 0x800, 8 },
  { 0x801, 10 },
  { 0x802, 12 },
  { 0x803, 14 },
  { 0x805, 16 },
  { 0x806, 17 },
  { 0x807, 18 },
  { 0x808, 19 },
  { 0x809, 20 },
  { 0x80A, 21 },
  { 0x80B, 22 },
  { 0x810, 23 },
  { 0x811, 24 },
  { 0x812, 25 },
  { 0x813, 26 },
  { 0x814, 27 },
  { 0x888, 28 },
  { 0x889, 29 },
  { 0x88A, 30 },
  { 0x88B, 31 },
  { 0x890, 32 },
  { 0x891, 33 },
  { 0x893, 34 },
  { 0x894, 35 },
  { 0x898, 36 },
  { 0xC00, 1 },
  { 0xC01, 3 },
  { 0xC02, 5 },
  { 0xC03, 7 },
  { 0x1800, 9 },
  { 0x1801, 11 },
  { 0x1802, 13 },
  { 0x1803, 15 },
};

const MClassSysReg *lookupMClassSysRegByM1Encoding12(uint16_t M1Encoding12) {
  auto CanonicalVal = M1Encoding12;
 std::pair<uint16_t, int> Val = {CanonicalVal, 0};
  ArrayRef<std::pair<uint16_t, int>> Table(MClassSysRegsByM1Encoding12);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Val);
  if (Idx == Table.end() || CanonicalVal != Idx->first)
    return nullptr;
  return &MClassSysRegsList[Idx->second];
}

const std::pair<uint16_t, int> MClassSysRegsByM2M3Encoding8[] = {
  { 0x0, 0 },
  { 0x1, 2 },
  { 0x2, 4 },
  { 0x3, 6 },
  { 0x100, 8 },
  { 0x101, 10 },
  { 0x102, 12 },
  { 0x103, 14 },
  { 0x105, 16 },
  { 0x106, 17 },
  { 0x107, 18 },
  { 0x108, 19 },
  { 0x109, 20 },
  { 0x10A, 21 },
  { 0x10B, 22 },
  { 0x110, 23 },
  { 0x111, 24 },
  { 0x112, 25 },
  { 0x113, 26 },
  { 0x114, 27 },
  { 0x188, 28 },
  { 0x189, 29 },
  { 0x18A, 30 },
  { 0x18B, 31 },
  { 0x190, 32 },
  { 0x191, 33 },
  { 0x193, 34 },
  { 0x194, 35 },
  { 0x198, 36 },
  { 0x200, 9 },
  { 0x201, 11 },
  { 0x202, 13 },
  { 0x203, 15 },
  { 0x300, 1 },
  { 0x301, 3 },
  { 0x302, 5 },
  { 0x303, 7 },
};

const MClassSysReg *lookupMClassSysRegByM2M3Encoding8(uint16_t M2M3Encoding8) {
  auto CanonicalVal = M2M3Encoding8;
 std::pair<uint16_t, int> Val = {CanonicalVal, 0};
  ArrayRef<std::pair<uint16_t, int>> Table(MClassSysRegsByM2M3Encoding8);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Val);
  if (Idx == Table.end() || CanonicalVal != Idx->first)
    return nullptr;
  return &MClassSysRegsList[Idx->second];
}

const std::pair<uint16_t, int> MClassSysRegsByEncoding[] = {
  { 0x400, 0 },
  { 0x401, 2 },
  { 0x402, 4 },
  { 0x403, 6 },
  { 0x800, 8 },
  { 0x800, 9 },
  { 0x801, 10 },
  { 0x801, 11 },
  { 0x802, 12 },
  { 0x802, 13 },
  { 0x803, 14 },
  { 0x803, 15 },
  { 0x805, 16 },
  { 0x806, 17 },
  { 0x807, 18 },
  { 0x808, 19 },
  { 0x809, 20 },
  { 0x80A, 21 },
  { 0x80B, 22 },
  { 0x810, 23 },
  { 0x811, 24 },
  { 0x812, 25 },
  { 0x813, 26 },
  { 0x814, 27 },
  { 0x888, 28 },
  { 0x889, 29 },
  { 0x88A, 30 },
  { 0x88B, 31 },
  { 0x890, 32 },
  { 0x891, 33 },
  { 0x893, 34 },
  { 0x894, 35 },
  { 0x898, 36 },
  { 0xC00, 1 },
  { 0xC01, 3 },
  { 0xC02, 5 },
  { 0xC03, 7 },
};

const MClassSysReg *lookupMClassSysRegByEncoding(uint16_t Encoding) {
  auto CanonicalVal = Encoding;
 std::pair<uint16_t, int> Val = {CanonicalVal, 0};
  ArrayRef<std::pair<uint16_t, int>> Table(MClassSysRegsByEncoding);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Val);
  if (Idx == Table.end() || CanonicalVal != Idx->first)
    return nullptr;
  return &MClassSysRegsList[Idx->second];
}

#endif
