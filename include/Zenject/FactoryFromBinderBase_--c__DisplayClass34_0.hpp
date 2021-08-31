// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FactoryFromBinderBase/Zenject.<>c__DisplayClass34_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FactoryFromBinderBase::$$c__DisplayClass34_0 : public ::Il2CppObject {
    public:
    // public System.String resourcePath
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* resourcePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public Zenject.FactoryFromBinderBase <>4__this
    // Size: 0x8
    // Offset: 0x18
    Zenject::FactoryFromBinderBase* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::FactoryFromBinderBase*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass34_0
    $$c__DisplayClass34_0(::Il2CppString* resourcePath_ = {}, Zenject::FactoryFromBinderBase* $$4__this_ = {}) noexcept : resourcePath{resourcePath_}, $$4__this{$$4__this_} {}
    // Get instance field reference: public System.String resourcePath
    ::Il2CppString*& dyn_resourcePath();
    // Get instance field reference: public Zenject.FactoryFromBinderBase <>4__this
    Zenject::FactoryFromBinderBase*& dyn_$$4__this();
    // Zenject.IProvider <FromResource>b__0(Zenject.DiContainer container)
    // Offset: 0x1658A28
    Zenject::IProvider* $FromResource$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x1657BA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinderBase::$$c__DisplayClass34_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinderBase::$$c__DisplayClass34_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinderBase::$$c__DisplayClass34_0*, creationType>()));
    }
  }; // Zenject.FactoryFromBinderBase/Zenject.<>c__DisplayClass34_0
  #pragma pack(pop)
  static check_size<sizeof(FactoryFromBinderBase::$$c__DisplayClass34_0), 24 + sizeof(Zenject::FactoryFromBinderBase*)> __Zenject_FactoryFromBinderBase_$$c__DisplayClass34_0SizeCheck;
  static_assert(sizeof(FactoryFromBinderBase::$$c__DisplayClass34_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinderBase::$$c__DisplayClass34_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass34_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::$$c__DisplayClass34_0::$FromResource$b__0
// Il2CppName: <FromResource>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (Zenject::FactoryFromBinderBase::$$c__DisplayClass34_0::*)(Zenject::DiContainer*)>(&Zenject::FactoryFromBinderBase::$$c__DisplayClass34_0::$FromResource$b__0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase::$$c__DisplayClass34_0*), "<FromResource>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::$$c__DisplayClass34_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
