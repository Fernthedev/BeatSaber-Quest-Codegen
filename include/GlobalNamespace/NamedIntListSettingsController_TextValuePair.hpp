// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NamedIntListSettingsController
#include "GlobalNamespace/NamedIntListSettingsController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: NamedIntListSettingsController/TextValuePair
  class NamedIntListSettingsController::TextValuePair : public ::Il2CppObject {
    public:
    // public System.String text
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 value
    // Size: 0x4
    // Offset: 0x18
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TextValuePair
    TextValuePair(::Il2CppString* text_ = {}, int value_ = {}) noexcept : text{text_}, value{value_} {}
    // public System.String get_localizedText()
    // Offset: 0x10157A8
    ::Il2CppString* get_localizedText();
    // public System.Void .ctor()
    // Offset: 0x10157BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamedIntListSettingsController::TextValuePair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NamedIntListSettingsController::TextValuePair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamedIntListSettingsController::TextValuePair*, creationType>()));
    }
  }; // NamedIntListSettingsController/TextValuePair
  #pragma pack(pop)
  static check_size<sizeof(NamedIntListSettingsController::TextValuePair), 24 + sizeof(int)> __GlobalNamespace_NamedIntListSettingsController_TextValuePairSizeCheck;
  static_assert(sizeof(NamedIntListSettingsController::TextValuePair) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedIntListSettingsController::TextValuePair*, "", "NamedIntListSettingsController/TextValuePair");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListSettingsController::TextValuePair::get_localizedText
// Il2CppName: get_localizedText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::NamedIntListSettingsController::TextValuePair::*)()>(&GlobalNamespace::NamedIntListSettingsController::TextValuePair::get_localizedText)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedIntListSettingsController::TextValuePair*), "get_localizedText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListSettingsController::TextValuePair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
