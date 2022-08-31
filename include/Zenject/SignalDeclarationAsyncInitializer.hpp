// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IInitializable
#include "Zenject/IInitializable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: LazyInject`1<T>
  template<typename T>
  class LazyInject_1;
  // Forward declaring type: TickableManager
  class TickableManager;
  // Forward declaring type: SignalDeclaration
  class SignalDeclaration;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SignalDeclarationAsyncInitializer
  class SignalDeclarationAsyncInitializer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SignalDeclarationAsyncInitializer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalDeclarationAsyncInitializer*, "Zenject", "SignalDeclarationAsyncInitializer");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SignalDeclarationAsyncInitializer
  // [TokenAttribute] Offset: FFFFFFFF
  class SignalDeclarationAsyncInitializer : public ::Il2CppObject/*, public ::Zenject::IInitializable*/ {
    public:
    public:
    // private readonly Zenject.LazyInject`1<Zenject.TickableManager> _tickManager
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::LazyInject_1<::Zenject::TickableManager*>* tickManager;
    // Field size check
    static_assert(sizeof(::Zenject::LazyInject_1<::Zenject::TickableManager*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<Zenject.SignalDeclaration> _declarations
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* declarations;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::IInitializable
    operator ::Zenject::IInitializable() noexcept {
      return *reinterpret_cast<::Zenject::IInitializable*>(this);
    }
    // Creating interface conversion operator: i_IInitializable
    inline ::Zenject::IInitializable* i_IInitializable() noexcept {
      return reinterpret_cast<::Zenject::IInitializable*>(this);
    }
    // Get instance field reference: private readonly Zenject.LazyInject`1<Zenject.TickableManager> _tickManager
    [[deprecated("Use field access instead!")]] ::Zenject::LazyInject_1<::Zenject::TickableManager*>*& dyn__tickManager();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Zenject.SignalDeclaration> _declarations
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*& dyn__declarations();
    // public System.Void .ctor(System.Collections.Generic.List`1<Zenject.SignalDeclaration> declarations, Zenject.LazyInject`1<Zenject.TickableManager> tickManager)
    // Offset: 0x1D143AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalDeclarationAsyncInitializer* New_ctor(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* declarations, ::Zenject::LazyInject_1<::Zenject::TickableManager*>* tickManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SignalDeclarationAsyncInitializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalDeclarationAsyncInitializer*, creationType>(declarations, tickManager)));
    }
    // public System.Void Initialize()
    // Offset: 0x1D143E4
    void Initialize();
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1D14540
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1D14658
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.SignalDeclarationAsyncInitializer
  #pragma pack(pop)
  static check_size<sizeof(SignalDeclarationAsyncInitializer), 24 + sizeof(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*)> __Zenject_SignalDeclarationAsyncInitializerSizeCheck;
  static_assert(sizeof(SignalDeclarationAsyncInitializer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SignalDeclarationAsyncInitializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SignalDeclarationAsyncInitializer::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalDeclarationAsyncInitializer::*)()>(&Zenject::SignalDeclarationAsyncInitializer::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclarationAsyncInitializer*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclarationAsyncInitializer::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::SignalDeclarationAsyncInitializer::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclarationAsyncInitializer*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::SignalDeclarationAsyncInitializer::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SignalDeclarationAsyncInitializer::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalDeclarationAsyncInitializer*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
