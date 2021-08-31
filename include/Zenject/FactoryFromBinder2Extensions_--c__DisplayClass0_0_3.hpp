// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactoryFromBinder2Extensions
#include "Zenject/FactoryFromBinder2Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
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
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder2Extensions/Zenject.<>c__DisplayClass0_0`3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TContract>
  class FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3 : public ::Il2CppObject {
    public:
    // public System.Guid factoryId
    // Size: 0x10
    // Offset: 0x0
    System::Guid factoryId;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // Creating value type constructor for type: $$c__DisplayClass0_0_3
    $$c__DisplayClass0_0_3(System::Guid factoryId_ = {}) noexcept : factoryId{factoryId_} {}
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const noexcept {
      return factoryId;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Guid factoryId
    System::Guid& dyn_factoryId() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3::dyn_factoryId");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "factoryId"))->offset;
      return *reinterpret_cast<System::Guid*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Zenject.IProvider <FromIFactory>b__0(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromIFactory$b__0(Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3::<FromIFactory>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromIFactory>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(___instance_arg, ___internal__method, container);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3<TParam1, TParam2, TContract>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3<TParam1, TParam2, TContract>*, creationType>()));
    }
  }; // Zenject.FactoryFromBinder2Extensions/Zenject.<>c__DisplayClass0_0`3
  // Could not write size check! Type: Zenject.FactoryFromBinder2Extensions/Zenject.<>c__DisplayClass0_0`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3, "Zenject", "FactoryFromBinder2Extensions/<>c__DisplayClass0_0`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
