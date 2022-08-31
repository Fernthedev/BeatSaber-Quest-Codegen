// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ConditionCopyNonLazyBinder
#include "Zenject/ConditionCopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0*, "Zenject", "ConditionCopyNonLazyBinder/<>c__DisplayClass3_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConditionCopyNonLazyBinder/Zenject.<>c__DisplayClass3_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ConditionCopyNonLazyBinder::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Type[] targets
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Type*> targets;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::System::Type*>
    constexpr operator ::ArrayW<::System::Type*>() const noexcept {
      return targets;
    }
    // Get instance field reference: public System.Type[] targets
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn_targets();
    // public System.Void .ctor()
    // Offset: 0x177658C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionCopyNonLazyBinder::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionCopyNonLazyBinder::$$c__DisplayClass3_0*, creationType>()));
    }
    // System.Boolean <WhenInjectedInto>b__0(Zenject.InjectContext r)
    // Offset: 0x1776774
    bool $WhenInjectedInto$b__0(::Zenject::InjectContext* r);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x177684C
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x17768A8
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.ConditionCopyNonLazyBinder/Zenject.<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(ConditionCopyNonLazyBinder::$$c__DisplayClass3_0), 16 + sizeof(::ArrayW<::System::Type*>)> __Zenject_ConditionCopyNonLazyBinder_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(ConditionCopyNonLazyBinder::$$c__DisplayClass3_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0::$WhenInjectedInto$b__0
// Il2CppName: <WhenInjectedInto>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0::*)(::Zenject::InjectContext*)>(&Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0::$WhenInjectedInto$b__0)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0*), "<WhenInjectedInto>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
