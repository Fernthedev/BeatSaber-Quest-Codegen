// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Events/Action
  class SteamVR_Events::Action : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Action
    Action() noexcept {}
    // public System.Void Enable(System.Boolean enabled)
    // Offset: 0xFFFFFFFF
    void Enable(bool enabled);
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x13CD1EC
    void set_enabled(bool value);
    // protected System.Void .ctor()
    // Offset: 0x13CEA7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Events::Action* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Events::Action::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Events::Action*, creationType>()));
    }
  }; // SteamVR_Events/Action
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Events::Action*, "", "SteamVR_Events/Action");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Events::Action::Enable
// Il2CppName: Enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Events::Action::*)(bool)>(&GlobalNamespace::SteamVR_Events::Action::Enable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Events::Action*), "Enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Events::Action::set_enabled
// Il2CppName: set_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Events::Action::*)(bool)>(&GlobalNamespace::SteamVR_Events::Action::set_enabled)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Events::Action*), "set_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Events::Action::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
