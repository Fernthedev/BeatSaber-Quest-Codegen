// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TransientProvider
#include "Zenject/TransientProvider.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.TransientProvider/<>c__DisplayClass11_0
  // [CompilerGeneratedAttribute] Offset: DDE5AC
  class TransientProvider::$$c__DisplayClass11_0 : public ::Il2CppObject {
    public:
    // public Zenject.TransientProvider <>4__this
    // Size: 0x8
    // Offset: 0x10
    Zenject::TransientProvider* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::TransientProvider*) == 0x8);
    // public System.Object instance
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* instance;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Type instanceType
    // Size: 0x8
    // Offset: 0x20
    System::Type* instanceType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> extraArgs
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArgs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*) == 0x8);
    // public Zenject.InjectContext context
    // Size: 0x8
    // Offset: 0x30
    Zenject::InjectContext* context;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass11_0
    $$c__DisplayClass11_0(Zenject::TransientProvider* $$4__this_ = {}, ::Il2CppObject* instance_ = {}, System::Type* instanceType_ = {}, System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArgs_ = {}, Zenject::InjectContext* context_ = {}) noexcept : $$4__this{$$4__this_}, instance{instance_}, instanceType{instanceType_}, extraArgs{extraArgs_}, context{context_} {}
    // System.Void <GetAllInstancesWithInjectSplit>b__0()
    // Offset: 0x23BA228
    void $GetAllInstancesWithInjectSplit$b__0();
    // public System.Void .ctor()
    // Offset: 0x23BA220
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransientProvider::$$c__DisplayClass11_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TransientProvider::$$c__DisplayClass11_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransientProvider::$$c__DisplayClass11_0*, creationType>()));
    }
  }; // Zenject.TransientProvider/<>c__DisplayClass11_0
  #pragma pack(pop)
  static check_size<sizeof(TransientProvider::$$c__DisplayClass11_0), 48 + sizeof(Zenject::InjectContext*)> __Zenject_TransientProvider_$$c__DisplayClass11_0SizeCheck;
  static_assert(sizeof(TransientProvider::$$c__DisplayClass11_0) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::TransientProvider::$$c__DisplayClass11_0*, "Zenject", "TransientProvider/<>c__DisplayClass11_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::TransientProvider::$$c__DisplayClass11_0::$GetAllInstancesWithInjectSplit$b__0
// Il2CppName: <GetAllInstancesWithInjectSplit>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TransientProvider::$$c__DisplayClass11_0::*)()>(&Zenject::TransientProvider::$$c__DisplayClass11_0::$GetAllInstancesWithInjectSplit$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TransientProvider::$$c__DisplayClass11_0*), "<GetAllInstancesWithInjectSplit>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::TransientProvider::$$c__DisplayClass11_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
