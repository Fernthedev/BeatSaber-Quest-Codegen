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
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: EnvironmentTypeSO
  class EnvironmentTypeSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentsListSO
  class EnvironmentsListSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private EnvironmentInfoSO[] _environmentInfos
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::EnvironmentInfoSO*>* environmentInfos;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::EnvironmentInfoSO*>*) == 0x8);
    // Creating value type constructor for type: EnvironmentsListSO
    EnvironmentsListSO(::Array<GlobalNamespace::EnvironmentInfoSO*>* environmentInfos_ = {}) noexcept : environmentInfos{environmentInfos_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public EnvironmentInfoSO[] get_environmentInfos()
    // Offset: 0x103FB6C
    ::Array<GlobalNamespace::EnvironmentInfoSO*>* get_environmentInfos();
    // public EnvironmentInfoSO GetEnviromentInfoBySerializedName(System.String environmentSerializedName)
    // Offset: 0x103FB74
    GlobalNamespace::EnvironmentInfoSO* GetEnviromentInfoBySerializedName(::Il2CppString* environmentSerializedName);
    // public System.Collections.Generic.List`1<EnvironmentInfoSO> GetAllEnvironmentInfosWithType(EnvironmentTypeSO environmentType)
    // Offset: 0x103E590
    System::Collections::Generic::List_1<GlobalNamespace::EnvironmentInfoSO*>* GetAllEnvironmentInfosWithType(GlobalNamespace::EnvironmentTypeSO* environmentType);
    // public EnvironmentInfoSO GetFirstEnvironmentInfoWithType(EnvironmentTypeSO environmentType)
    // Offset: 0x103FC00
    GlobalNamespace::EnvironmentInfoSO* GetFirstEnvironmentInfoWithType(GlobalNamespace::EnvironmentTypeSO* environmentType);
    // public System.Void .ctor()
    // Offset: 0x103FC78
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentsListSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentsListSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentsListSO*, creationType>()));
    }
  }; // EnvironmentsListSO
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentsListSO), 24 + sizeof(::Array<GlobalNamespace::EnvironmentInfoSO*>*)> __GlobalNamespace_EnvironmentsListSOSizeCheck;
  static_assert(sizeof(EnvironmentsListSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentsListSO*, "", "EnvironmentsListSO");
// Writing includes for template specializations
#include "GlobalNamespace/EnvironmentTypeSO.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentsListSO::get_environmentInfos
// Il2CppName: get_environmentInfos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::EnvironmentInfoSO*>* (GlobalNamespace::EnvironmentsListSO::*)()>(&GlobalNamespace::EnvironmentsListSO::get_environmentInfos)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentsListSO*), "get_environmentInfos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentsListSO::GetEnviromentInfoBySerializedName
// Il2CppName: GetEnviromentInfoBySerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::EnvironmentsListSO::*)(::Il2CppString*)>(&GlobalNamespace::EnvironmentsListSO::GetEnviromentInfoBySerializedName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentsListSO*), "GetEnviromentInfoBySerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentsListSO::GetAllEnvironmentInfosWithType
// Il2CppName: GetAllEnvironmentInfosWithType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::EnvironmentInfoSO*>* (GlobalNamespace::EnvironmentsListSO::*)(GlobalNamespace::EnvironmentTypeSO*)>(&GlobalNamespace::EnvironmentsListSO::GetAllEnvironmentInfosWithType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentsListSO*), "GetAllEnvironmentInfosWithType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::EnvironmentTypeSO*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentsListSO::GetFirstEnvironmentInfoWithType
// Il2CppName: GetFirstEnvironmentInfoWithType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::EnvironmentsListSO::*)(GlobalNamespace::EnvironmentTypeSO*)>(&GlobalNamespace::EnvironmentsListSO::GetFirstEnvironmentInfoWithType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentsListSO*), "GetFirstEnvironmentInfoWithType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::EnvironmentTypeSO*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentsListSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
