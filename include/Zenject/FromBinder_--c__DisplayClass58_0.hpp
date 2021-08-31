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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/Zenject.<>c__DisplayClass58_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FromBinder::$$c__DisplayClass58_0 : public ::Il2CppObject {
    public:
    // public System.String resourcePath
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* resourcePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass58_0
    $$c__DisplayClass58_0(::Il2CppString* resourcePath_ = {}) noexcept : resourcePath{resourcePath_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return resourcePath;
    }
    // Get instance field reference: public System.String resourcePath
    ::Il2CppString*& dyn_resourcePath();
    // Zenject.IProvider <FromResources>b__0(Zenject.DiContainer _, System.Type type)
    // Offset: 0x165C850
    Zenject::IProvider* $FromResources$b__0(Zenject::DiContainer* _, System::Type* type);
    // public System.Void .ctor()
    // Offset: 0x165AF1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass58_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass58_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass58_0*, creationType>()));
    }
  }; // Zenject.FromBinder/Zenject.<>c__DisplayClass58_0
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass58_0), 16 + sizeof(::Il2CppString*)> __Zenject_FromBinder_$$c__DisplayClass58_0SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass58_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass58_0*, "Zenject", "FromBinder/<>c__DisplayClass58_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass58_0::$FromResources$b__0
// Il2CppName: <FromResources>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (Zenject::FromBinder::$$c__DisplayClass58_0::*)(Zenject::DiContainer*, System::Type*)>(&Zenject::FromBinder::$$c__DisplayClass58_0::$FromResources$b__0)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass58_0*), "<FromResources>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_, type});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass58_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
