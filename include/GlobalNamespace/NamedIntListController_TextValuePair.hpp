// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NamedIntListController
#include "GlobalNamespace/NamedIntListController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NamedIntListController::TextValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedIntListController::TextValuePair*, "", "NamedIntListController/TextValuePair");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: NamedIntListController/TextValuePair
  // [TokenAttribute] Offset: FFFFFFFF
  class NamedIntListController::TextValuePair : public ::Il2CppObject {
    public:
    public:
    // public System.String localizationKey
    // Size: 0x8
    // Offset: 0x10
    ::StringW localizationKey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 value
    // Size: 0x4
    // Offset: 0x18
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.String localizationKey
    [[deprecated("Use field access instead!")]] ::StringW& dyn_localizationKey();
    // Get instance field reference: public System.Int32 value
    [[deprecated("Use field access instead!")]] int& dyn_value();
    // public System.String get_localizedText()
    // Offset: 0x14E73C4
    ::StringW get_localizedText();
    // public System.Void .ctor()
    // Offset: 0x14E73D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamedIntListController::TextValuePair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NamedIntListController::TextValuePair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamedIntListController::TextValuePair*, creationType>()));
    }
  }; // NamedIntListController/TextValuePair
  #pragma pack(pop)
  static check_size<sizeof(NamedIntListController::TextValuePair), 24 + sizeof(int)> __GlobalNamespace_NamedIntListController_TextValuePairSizeCheck;
  static_assert(sizeof(NamedIntListController::TextValuePair) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListController::TextValuePair::get_localizedText
// Il2CppName: get_localizedText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::NamedIntListController::TextValuePair::*)()>(&GlobalNamespace::NamedIntListController::TextValuePair::get_localizedText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedIntListController::TextValuePair*), "get_localizedText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListController::TextValuePair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
