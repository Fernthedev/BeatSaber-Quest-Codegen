// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: EulaViewController
#include "GlobalNamespace/EulaViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: EulaViewController/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class EulaViewController::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean showDoNotAgreeButton
    // Size: 0x1
    // Offset: 0x10
    bool showDoNotAgreeButton;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InitData
    InitData(bool showDoNotAgreeButton_ = {}) noexcept : showDoNotAgreeButton{showDoNotAgreeButton_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return showDoNotAgreeButton;
    }
    // Get instance field reference: public readonly System.Boolean showDoNotAgreeButton
    bool& dyn_showDoNotAgreeButton();
    // public System.Void .ctor(System.Boolean showDoNotAgreeButton)
    // Offset: 0x1059E00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EulaViewController::InitData* New_ctor(bool showDoNotAgreeButton) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EulaViewController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EulaViewController::InitData*, creationType>(showDoNotAgreeButton)));
    }
  }; // EulaViewController/InitData
  #pragma pack(pop)
  static check_size<sizeof(EulaViewController::InitData), 16 + sizeof(bool)> __GlobalNamespace_EulaViewController_InitDataSizeCheck;
  static_assert(sizeof(EulaViewController::InitData) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EulaViewController::InitData*, "", "EulaViewController/InitData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EulaViewController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
