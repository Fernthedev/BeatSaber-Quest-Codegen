// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PS4LevelProductsModelSO
  class PS4LevelProductsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::PS4LevelProductsModelSO::LevelProductData
    class LevelProductData;
    // Nested type: GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData
    class LevelPackProductData;
    // private PS4LevelProductsModelSO/LevelPackProductData[] _levelPackProductsData
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*>* levelPackProductsData;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,PS4LevelProductsModelSO/LevelProductData> _levelIdToProductData
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*>* levelIdToProductData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,PS4LevelProductsModelSO/LevelPackProductData> _levelPackIdToProductData
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*>* levelPackIdToProductData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*>*) == 0x8);
    // Creating value type constructor for type: PS4LevelProductsModelSO
    PS4LevelProductsModelSO(::Array<GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*>* levelPackProductsData_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*>* levelIdToProductData_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*>* levelPackIdToProductData_ = {}) noexcept : levelPackProductsData{levelPackProductsData_}, levelIdToProductData{levelIdToProductData_}, levelPackIdToProductData{levelPackIdToProductData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public PS4LevelProductsModelSO/LevelPackProductData[] get_levelPackProductsData()
    // Offset: 0x104A4B0
    ::Array<GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*>* get_levelPackProductsData();
    // public PS4LevelProductsModelSO/LevelProductData GetLevelProductData(System.String levelId)
    // Offset: 0x104A610
    GlobalNamespace::PS4LevelProductsModelSO::LevelProductData* GetLevelProductData(::Il2CppString* levelId);
    // public PS4LevelProductsModelSO/LevelPackProductData GetLevelPackProductData(System.String levelPackId)
    // Offset: 0x104A690
    GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData* GetLevelPackProductData(::Il2CppString* levelPackId);
    // protected override System.Void OnEnable()
    // Offset: 0x104A4B8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x104A710
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4LevelProductsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4LevelProductsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4LevelProductsModelSO*, creationType>()));
    }
  }; // PS4LevelProductsModelSO
  #pragma pack(pop)
  static check_size<sizeof(PS4LevelProductsModelSO), 40 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*>*)> __GlobalNamespace_PS4LevelProductsModelSOSizeCheck;
  static_assert(sizeof(PS4LevelProductsModelSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4LevelProductsModelSO*, "", "PS4LevelProductsModelSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::get_levelPackProductsData
// Il2CppName: get_levelPackProductsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*>* (GlobalNamespace::PS4LevelProductsModelSO::*)()>(&GlobalNamespace::PS4LevelProductsModelSO::get_levelPackProductsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LevelProductsModelSO*), "get_levelPackProductsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::GetLevelProductData
// Il2CppName: GetLevelProductData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PS4LevelProductsModelSO::LevelProductData* (GlobalNamespace::PS4LevelProductsModelSO::*)(::Il2CppString*)>(&GlobalNamespace::PS4LevelProductsModelSO::GetLevelProductData)> {
  const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LevelProductsModelSO*), "GetLevelProductData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::GetLevelPackProductData
// Il2CppName: GetLevelPackProductData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData* (GlobalNamespace::PS4LevelProductsModelSO::*)(::Il2CppString*)>(&GlobalNamespace::PS4LevelProductsModelSO::GetLevelPackProductData)> {
  const MethodInfo* get() {
    static auto* levelPackId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LevelProductsModelSO*), "GetLevelPackProductData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelPackId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4LevelProductsModelSO::*)()>(&GlobalNamespace::PS4LevelProductsModelSO::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LevelProductsModelSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
