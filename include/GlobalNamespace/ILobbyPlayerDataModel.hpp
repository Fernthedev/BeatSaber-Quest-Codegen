// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: ILevelGameplaySetupData
#include "GlobalNamespace/ILevelGameplaySetupData.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel/*, public GlobalNamespace::ILevelGameplaySetupData*/ {
    public:
    // Creating value type constructor for type: ILobbyPlayerDataModel
    ILobbyPlayerDataModel() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::ILevelGameplaySetupData
    operator GlobalNamespace::ILevelGameplaySetupData() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILevelGameplaySetupData*>(this);
    }
    // public System.Boolean get_isActive()
    // Offset: 0xFFFFFFFF
    bool get_isActive();
    // public System.Void set_isActive(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_isActive(bool value);
    // public System.Boolean get_isReady()
    // Offset: 0xFFFFFFFF
    bool get_isReady();
    // public System.Void set_isReady(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_isReady(bool value);
    // public System.Boolean get_isInLobby()
    // Offset: 0xFFFFFFFF
    bool get_isInLobby();
    // public System.Void set_isInLobby(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_isInLobby(bool value);
  }; // ILobbyPlayerDataModel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ILobbyPlayerDataModel*, "", "ILobbyPlayerDataModel");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayerDataModel::get_isActive
// Il2CppName: get_isActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ILobbyPlayerDataModel::*)()>(&GlobalNamespace::ILobbyPlayerDataModel::get_isActive)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayerDataModel*), "get_isActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayerDataModel::set_isActive
// Il2CppName: set_isActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayerDataModel::*)(bool)>(&GlobalNamespace::ILobbyPlayerDataModel::set_isActive)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayerDataModel*), "set_isActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayerDataModel::get_isReady
// Il2CppName: get_isReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ILobbyPlayerDataModel::*)()>(&GlobalNamespace::ILobbyPlayerDataModel::get_isReady)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayerDataModel*), "get_isReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayerDataModel::set_isReady
// Il2CppName: set_isReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayerDataModel::*)(bool)>(&GlobalNamespace::ILobbyPlayerDataModel::set_isReady)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayerDataModel*), "set_isReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayerDataModel::get_isInLobby
// Il2CppName: get_isInLobby
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ILobbyPlayerDataModel::*)()>(&GlobalNamespace::ILobbyPlayerDataModel::get_isInLobby)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayerDataModel*), "get_isInLobby", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayerDataModel::set_isInLobby
// Il2CppName: set_isInLobby
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayerDataModel::*)(bool)>(&GlobalNamespace::ILobbyPlayerDataModel::set_isInLobby)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayerDataModel*), "set_isInLobby", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
