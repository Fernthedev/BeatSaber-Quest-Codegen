// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamLevelProductsModelSO
#include "GlobalNamespace/SteamLevelProductsModelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SteamLevelProductsModelSO/LevelProductData
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamLevelProductsModelSO::LevelProductData : public ::Il2CppObject {
    public:
    // private System.UInt32 _appId
    // Size: 0x4
    // Offset: 0x10
    uint appId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: appId and: levelId
    char __padding0[0x4] = {};
    // private System.String _levelId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* levelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LevelProductData
    LevelProductData(uint appId_ = {}, ::Il2CppString* levelId_ = {}) noexcept : appId{appId_}, levelId{levelId_} {}
    // Get instance field: private System.UInt32 _appId
    uint _get__appId();
    // Set instance field: private System.UInt32 _appId
    void _set__appId(uint value);
    // Get instance field: private System.String _levelId
    ::Il2CppString* _get__levelId();
    // Set instance field: private System.String _levelId
    void _set__levelId(::Il2CppString* value);
    // public System.UInt32 get_appId()
    // Offset: 0x108D670
    uint get_appId();
    // public System.String get_levelId()
    // Offset: 0x108D678
    ::Il2CppString* get_levelId();
    // public System.Void .ctor()
    // Offset: 0x108D680
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamLevelProductsModelSO::LevelProductData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamLevelProductsModelSO::LevelProductData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamLevelProductsModelSO::LevelProductData*, creationType>()));
    }
  }; // SteamLevelProductsModelSO/LevelProductData
  #pragma pack(pop)
  static check_size<sizeof(SteamLevelProductsModelSO::LevelProductData), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_SteamLevelProductsModelSO_LevelProductDataSizeCheck;
  static_assert(sizeof(SteamLevelProductsModelSO::LevelProductData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*, "", "SteamLevelProductsModelSO/LevelProductData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamLevelProductsModelSO::LevelProductData::get_appId
// Il2CppName: get_appId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::SteamLevelProductsModelSO::LevelProductData::*)()>(&GlobalNamespace::SteamLevelProductsModelSO::LevelProductData::get_appId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*), "get_appId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamLevelProductsModelSO::LevelProductData::get_levelId
// Il2CppName: get_levelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::SteamLevelProductsModelSO::LevelProductData::*)()>(&GlobalNamespace::SteamLevelProductsModelSO::LevelProductData::get_levelId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*), "get_levelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamLevelProductsModelSO::LevelProductData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
