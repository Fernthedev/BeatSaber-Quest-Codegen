// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SubContainerPrefabBindingFinalizer
#include "Zenject/SubContainerPrefabBindingFinalizer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SubContainerCreatorCached
  class SubContainerCreatorCached;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1*, "Zenject", "SubContainerPrefabBindingFinalizer/<>c__DisplayClass6_1");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerPrefabBindingFinalizer/Zenject.<>c__DisplayClass6_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1 : public ::Il2CppObject {
    public:
    public:
    // public Zenject.SubContainerCreatorCached containerCreator
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::SubContainerCreatorCached* containerCreator;
    // Field size check
    static_assert(sizeof(::Zenject::SubContainerCreatorCached*) == 0x8);
    // public Zenject.SubContainerPrefabBindingFinalizer/Zenject.<>c__DisplayClass6_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0*) == 0x8);
    public:
    // Get instance field reference: public Zenject.SubContainerCreatorCached containerCreator
    [[deprecated("Use field access instead!")]] ::Zenject::SubContainerCreatorCached*& dyn_containerCreator();
    // Get instance field reference: public Zenject.SubContainerPrefabBindingFinalizer/Zenject.<>c__DisplayClass6_0 CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0*& dyn_CS$$$8__locals1();
    // public System.Void .ctor()
    // Offset: 0x1D1B970
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1*, creationType>()));
    }
    // Zenject.IProvider <FinalizeBindingSelf>b__1(Zenject.DiContainer _, System.Type contractType)
    // Offset: 0x1D1C0C4
    ::Zenject::IProvider* $FinalizeBindingSelf$b__1(::Zenject::DiContainer* _, ::System::Type* contractType);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1D1C164
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1D1C1C0
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.SubContainerPrefabBindingFinalizer/Zenject.<>c__DisplayClass6_1
  #pragma pack(pop)
  static check_size<sizeof(SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1), 24 + sizeof(::Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0*)> __Zenject_SubContainerPrefabBindingFinalizer_$$c__DisplayClass6_1SizeCheck;
  static_assert(sizeof(SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1::$FinalizeBindingSelf$b__1
// Il2CppName: <FinalizeBindingSelf>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IProvider* (Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1::*)(::Zenject::DiContainer*, ::System::Type*)>(&Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1::$FinalizeBindingSelf$b__1)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* contractType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1*), "<FinalizeBindingSelf>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_, contractType});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
