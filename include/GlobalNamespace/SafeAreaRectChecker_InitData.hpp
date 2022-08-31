// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SafeAreaRectChecker
#include "GlobalNamespace/SafeAreaRectChecker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SafeAreaRectChecker::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SafeAreaRectChecker::InitData*, "", "SafeAreaRectChecker/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: SafeAreaRectChecker/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class SafeAreaRectChecker::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Boolean checkingEnabled
    // Size: 0x1
    // Offset: 0x10
    bool checkingEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return checkingEnabled;
    }
    // Get instance field reference: public readonly System.Boolean checkingEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_checkingEnabled();
    // public System.Void .ctor(System.Boolean checkingEnabled)
    // Offset: 0x14B23FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SafeAreaRectChecker::InitData* New_ctor(bool checkingEnabled) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SafeAreaRectChecker::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SafeAreaRectChecker::InitData*, creationType>(checkingEnabled)));
    }
  }; // SafeAreaRectChecker/InitData
  #pragma pack(pop)
  static check_size<sizeof(SafeAreaRectChecker::InitData), 16 + sizeof(bool)> __GlobalNamespace_SafeAreaRectChecker_InitDataSizeCheck;
  static_assert(sizeof(SafeAreaRectChecker::InitData) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SafeAreaRectChecker::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
