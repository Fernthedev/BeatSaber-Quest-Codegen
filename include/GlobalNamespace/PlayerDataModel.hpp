// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerDataFileManagerSO
  class PlayerDataFileManagerSO;
  // Forward declaring type: PlayerData
  class PlayerData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerDataModel
  class PlayerDataModel : public UnityEngine::MonoBehaviour {
    public:
    // private PlayerDataFileManagerSO _playerDataFileManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlayerDataFileManagerSO* playerDataFileManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataFileManagerSO*) == 0x8);
    // private PlayerData _playerData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayerData* playerData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerData*) == 0x8);
    // Creating value type constructor for type: PlayerDataModel
    PlayerDataModel(GlobalNamespace::PlayerDataFileManagerSO* playerDataFileManager_ = {}, GlobalNamespace::PlayerData* playerData_ = {}) noexcept : playerDataFileManager{playerDataFileManager_}, playerData{playerData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public PlayerData get_playerData()
    // Offset: 0x10576B4
    GlobalNamespace::PlayerData* get_playerData();
    // protected System.Void OnEnable()
    // Offset: 0x10576BC
    void OnEnable();
    // protected System.Void OnApplicationPause(System.Boolean pauseStatus)
    // Offset: 0x10576F0
    void OnApplicationPause(bool pauseStatus);
    // protected System.Void OnDisable()
    // Offset: 0x10576FC
    void OnDisable();
    // public System.Void ResetData()
    // Offset: 0x1057700
    void ResetData();
    // public System.Void Save()
    // Offset: 0x104AAA0
    void Save();
    // public System.Void Load()
    // Offset: 0x10576C0
    void Load();
    // public System.Void .ctor()
    // Offset: 0x1057730
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerDataModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerDataModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerDataModel*, creationType>()));
    }
  }; // PlayerDataModel
  #pragma pack(pop)
  static check_size<sizeof(PlayerDataModel), 32 + sizeof(GlobalNamespace::PlayerData*)> __GlobalNamespace_PlayerDataModelSizeCheck;
  static_assert(sizeof(PlayerDataModel) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerDataModel*, "", "PlayerDataModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::get_playerData
// Il2CppName: get_playerData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerData* (GlobalNamespace::PlayerDataModel::*)()>(&GlobalNamespace::PlayerDataModel::get_playerData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModel*), "get_playerData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerDataModel::*)()>(&GlobalNamespace::PlayerDataModel::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModel*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::OnApplicationPause
// Il2CppName: OnApplicationPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerDataModel::*)(bool)>(&GlobalNamespace::PlayerDataModel::OnApplicationPause)> {
  const MethodInfo* get() {
    static auto* pauseStatus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModel*), "OnApplicationPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pauseStatus});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerDataModel::*)()>(&GlobalNamespace::PlayerDataModel::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModel*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::ResetData
// Il2CppName: ResetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerDataModel::*)()>(&GlobalNamespace::PlayerDataModel::ResetData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModel*), "ResetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerDataModel::*)()>(&GlobalNamespace::PlayerDataModel::Save)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModel*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerDataModel::*)()>(&GlobalNamespace::PlayerDataModel::Load)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModel*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
