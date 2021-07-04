// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusLevelProductsModelSO
#include "GlobalNamespace/OculusLevelProductsModelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusLevelProductsModelSO/LevelPackProductData
  class OculusLevelProductsModelSO::LevelPackProductData : public ::Il2CppObject {
    public:
    // private System.String _sku
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* sku;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _levelPackId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* levelPackId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private OculusLevelProductsModelSO/LevelProductData[] _levelProductsData
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>* levelProductsData;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>*) == 0x8);
    // Creating value type constructor for type: LevelPackProductData
    LevelPackProductData(::Il2CppString* sku_ = {}, ::Il2CppString* levelPackId_ = {}, ::Array<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>* levelProductsData_ = {}) noexcept : sku{sku_}, levelPackId{levelPackId_}, levelProductsData{levelProductsData_} {}
    // public System.String get_sku()
    // Offset: 0x11E632C
    ::Il2CppString* get_sku();
    // public System.String get_levelPackId()
    // Offset: 0x11E6334
    ::Il2CppString* get_levelPackId();
    // public OculusLevelProductsModelSO/LevelProductData[] get_levelProductsData()
    // Offset: 0x11E633C
    ::Array<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>* get_levelProductsData();
    // public System.Void .ctor()
    // Offset: 0x11E6344
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusLevelProductsModelSO::LevelPackProductData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusLevelProductsModelSO::LevelPackProductData*, creationType>()));
    }
  }; // OculusLevelProductsModelSO/LevelPackProductData
  #pragma pack(pop)
  static check_size<sizeof(OculusLevelProductsModelSO::LevelPackProductData), 32 + sizeof(::Array<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>*)> __GlobalNamespace_OculusLevelProductsModelSO_LevelPackProductDataSizeCheck;
  static_assert(sizeof(OculusLevelProductsModelSO::LevelPackProductData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*, "", "OculusLevelProductsModelSO/LevelPackProductData");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::get_sku
// Il2CppName: get_sku
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::*)()>(&GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::get_sku)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*), "get_sku", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::get_levelPackId
// Il2CppName: get_levelPackId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::*)()>(&GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::get_levelPackId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*), "get_levelPackId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::get_levelProductsData
// Il2CppName: get_levelProductsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>* (GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::*)()>(&GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::get_levelProductsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*), "get_levelProductsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
