// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
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
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/Zenject.<>c__DisplayClass61_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FromBinder::$$c__DisplayClass61_1 : public ::Il2CppObject {
    public:
    // public System.Type concreteType
    // Size: 0x8
    // Offset: 0x10
    System::Type* concreteType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public Zenject.FromBinder/Zenject.<>c__DisplayClass61_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    Zenject::FromBinder::$$c__DisplayClass61_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(Zenject::FromBinder::$$c__DisplayClass61_0*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass61_1
    $$c__DisplayClass61_1(System::Type* concreteType_ = {}, Zenject::FromBinder::$$c__DisplayClass61_0* CS$$$8__locals1_ = {}) noexcept : concreteType{concreteType_}, CS$$$8__locals1{CS$$$8__locals1_} {}
    // Get instance field: public System.Type concreteType
    System::Type* _get_concreteType();
    // Set instance field: public System.Type concreteType
    void _set_concreteType(System::Type* value);
    // Get instance field: public Zenject.FromBinder/Zenject.<>c__DisplayClass61_0 CS$<>8__locals1
    Zenject::FromBinder::$$c__DisplayClass61_0* _get_CS$$$8__locals1();
    // Set instance field: public Zenject.FromBinder/Zenject.<>c__DisplayClass61_0 CS$<>8__locals1
    void _set_CS$$$8__locals1(Zenject::FromBinder::$$c__DisplayClass61_0* value);
    // System.Collections.Generic.IEnumerable`1<System.Object> <FromComponentInParents>b__1(Zenject.InjectContext ctx)
    // Offset: 0x165D0B0
    System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* $FromComponentInParents$b__1(Zenject::InjectContext* ctx);
    // public System.Void .ctor()
    // Offset: 0x165D0A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass61_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass61_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass61_1*, creationType>()));
    }
  }; // Zenject.FromBinder/Zenject.<>c__DisplayClass61_1
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass61_1), 24 + sizeof(Zenject::FromBinder::$$c__DisplayClass61_0*)> __Zenject_FromBinder_$$c__DisplayClass61_1SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass61_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass61_1*, "Zenject", "FromBinder/<>c__DisplayClass61_1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass61_1::$FromComponentInParents$b__1
// Il2CppName: <FromComponentInParents>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* (Zenject::FromBinder::$$c__DisplayClass61_1::*)(Zenject::InjectContext*)>(&Zenject::FromBinder::$$c__DisplayClass61_1::$FromComponentInParents$b__1)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass61_1*), "<FromComponentInParents>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass61_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
