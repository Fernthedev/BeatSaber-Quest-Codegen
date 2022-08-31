// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ConventionBindInfo
#include "Zenject/ConventionBindInfo.hpp"
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
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ConventionBindInfo::$$c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionBindInfo::$$c__DisplayClass7_0*, "Zenject", "ConventionBindInfo/<>c__DisplayClass7_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionBindInfo/Zenject.<>c__DisplayClass7_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ConventionBindInfo::$$c__DisplayClass7_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Type type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return type;
    }
    // Get instance field reference: public System.Type type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_type();
    // public System.Void .ctor()
    // Offset: 0x17795BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionBindInfo::$$c__DisplayClass7_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConventionBindInfo::$$c__DisplayClass7_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionBindInfo::$$c__DisplayClass7_0*, creationType>()));
    }
    // System.Boolean <ShouldIncludeType>b__0(System.Func`2<System.Type,System.Boolean> predicate)
    // Offset: 0x1779960
    bool $ShouldIncludeType$b__0(::System::Func_2<::System::Type*, bool>* predicate);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x17799C8
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1779A24
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.ConventionBindInfo/Zenject.<>c__DisplayClass7_0
  #pragma pack(pop)
  static check_size<sizeof(ConventionBindInfo::$$c__DisplayClass7_0), 16 + sizeof(::System::Type*)> __Zenject_ConventionBindInfo_$$c__DisplayClass7_0SizeCheck;
  static_assert(sizeof(ConventionBindInfo::$$c__DisplayClass7_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::$$c__DisplayClass7_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::$$c__DisplayClass7_0::$ShouldIncludeType$b__0
// Il2CppName: <ShouldIncludeType>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ConventionBindInfo::$$c__DisplayClass7_0::*)(::System::Func_2<::System::Type*, bool>*)>(&Zenject::ConventionBindInfo::$$c__DisplayClass7_0::$ShouldIncludeType$b__0)> {
  static const MethodInfo* get() {
    static auto* predicate = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionBindInfo::$$c__DisplayClass7_0*), "<ShouldIncludeType>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{predicate});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::$$c__DisplayClass7_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::ConventionBindInfo::$$c__DisplayClass7_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionBindInfo::$$c__DisplayClass7_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::$$c__DisplayClass7_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::ConventionBindInfo::$$c__DisplayClass7_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionBindInfo::$$c__DisplayClass7_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
