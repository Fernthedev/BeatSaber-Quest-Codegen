// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IAvatarPart
  class IAvatarPart {
    public:
    // Creating value type constructor for type: IAvatarPart
    IAvatarPart() noexcept {}
    // public System.String get_id()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_id();
    // public System.String get_localizedName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_localizedName();
  }; // IAvatarPart
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IAvatarPart*, "", "IAvatarPart");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IAvatarPart::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::IAvatarPart::*)()>(&GlobalNamespace::IAvatarPart::get_id)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IAvatarPart*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IAvatarPart::get_localizedName
// Il2CppName: get_localizedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::IAvatarPart::*)()>(&GlobalNamespace::IAvatarPart::get_localizedName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IAvatarPart*), "get_localizedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
