// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ScriptableObjectInstanceProvider
#include "Zenject/ScriptableObjectInstanceProvider.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ScriptableObjectInstanceProvider/<>c__DisplayClass13_0
  // [CompilerGeneratedAttribute] Offset: DDE47C
  class ScriptableObjectInstanceProvider::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.List`1<System.Object> buffer
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppObject*>* buffer;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    // public Zenject.ScriptableObjectInstanceProvider <>4__this
    // Size: 0x8
    // Offset: 0x18
    Zenject::ScriptableObjectInstanceProvider* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::ScriptableObjectInstanceProvider*) == 0x8);
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* args;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*) == 0x8);
    // public Zenject.InjectContext context
    // Size: 0x8
    // Offset: 0x28
    Zenject::InjectContext* context;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass13_0
    $$c__DisplayClass13_0(System::Collections::Generic::List_1<::Il2CppObject*>* buffer_ = {}, Zenject::ScriptableObjectInstanceProvider* $$4__this_ = {}, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args_ = {}, Zenject::InjectContext* context_ = {}) noexcept : buffer{buffer_}, $$4__this{$$4__this_}, args{args_}, context{context_} {}
    // System.Void <GetAllInstancesWithInjectSplit>b__0()
    // Offset: 0x16E6C74
    void $GetAllInstancesWithInjectSplit$b__0();
    // public System.Void .ctor()
    // Offset: 0x16E6C6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScriptableObjectInstanceProvider::$$c__DisplayClass13_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScriptableObjectInstanceProvider::$$c__DisplayClass13_0*, creationType>()));
    }
  }; // Zenject.ScriptableObjectInstanceProvider/<>c__DisplayClass13_0
  #pragma pack(pop)
  static check_size<sizeof(ScriptableObjectInstanceProvider::$$c__DisplayClass13_0), 40 + sizeof(Zenject::InjectContext*)> __Zenject_ScriptableObjectInstanceProvider_$$c__DisplayClass13_0SizeCheck;
  static_assert(sizeof(ScriptableObjectInstanceProvider::$$c__DisplayClass13_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0*, "Zenject", "ScriptableObjectInstanceProvider/<>c__DisplayClass13_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0::$GetAllInstancesWithInjectSplit$b__0
// Il2CppName: <GetAllInstancesWithInjectSplit>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0::*)()>(&Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0::$GetAllInstancesWithInjectSplit$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0*), "<GetAllInstancesWithInjectSplit>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
