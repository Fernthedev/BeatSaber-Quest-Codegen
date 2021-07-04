// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InjectTypeInfo
#include "Zenject/InjectTypeInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenMemberSetterMethod
  class ZenMemberSetterMethod;
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InjectTypeInfo/InjectMemberInfo
  // [NoReflectionBakingAttribute] Offset: DCA8C0
  class InjectTypeInfo::InjectMemberInfo : public ::Il2CppObject {
    public:
    // public readonly Zenject.ZenMemberSetterMethod Setter
    // Size: 0x8
    // Offset: 0x10
    Zenject::ZenMemberSetterMethod* Setter;
    // Field size check
    static_assert(sizeof(Zenject::ZenMemberSetterMethod*) == 0x8);
    // public readonly Zenject.InjectableInfo Info
    // Size: 0x8
    // Offset: 0x18
    Zenject::InjectableInfo* Info;
    // Field size check
    static_assert(sizeof(Zenject::InjectableInfo*) == 0x8);
    // Creating value type constructor for type: InjectMemberInfo
    InjectMemberInfo(Zenject::ZenMemberSetterMethod* Setter_ = {}, Zenject::InjectableInfo* Info_ = {}) noexcept : Setter{Setter_}, Info{Info_} {}
    // public System.Void .ctor(Zenject.ZenMemberSetterMethod setter, Zenject.InjectableInfo info)
    // Offset: 0x23DBCD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectTypeInfo::InjectMemberInfo* New_ctor(Zenject::ZenMemberSetterMethod* setter, Zenject::InjectableInfo* info) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectTypeInfo::InjectMemberInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectTypeInfo::InjectMemberInfo*, creationType>(setter, info)));
    }
  }; // Zenject.InjectTypeInfo/InjectMemberInfo
  #pragma pack(pop)
  static check_size<sizeof(InjectTypeInfo::InjectMemberInfo), 24 + sizeof(Zenject::InjectableInfo*)> __Zenject_InjectTypeInfo_InjectMemberInfoSizeCheck;
  static_assert(sizeof(InjectTypeInfo::InjectMemberInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectTypeInfo::InjectMemberInfo*, "Zenject", "InjectTypeInfo/InjectMemberInfo");
// Writing includes for template specializations
#include "Zenject/ZenMemberSetterMethod.hpp"
#include "Zenject/InjectableInfo.hpp"
// Writing MetadataGetter for method: Zenject::InjectTypeInfo::InjectMemberInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
