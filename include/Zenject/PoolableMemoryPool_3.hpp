// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MemoryPool`3
#include "Zenject/MemoryPool_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`2<TParam1, TParam2>
  template<typename TParam1, typename TParam2>
  class IPoolable_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PoolableMemoryPool`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TValue>
  class PoolableMemoryPool_3 : public Zenject::MemoryPool_3<TParam1, TParam2, TValue> {
    public:
    // Creating value type constructor for type: PoolableMemoryPool_3
    PoolableMemoryPool_3() noexcept {}
    // protected System.Void OnDespawned(TValue item)
    // Offset: 0xFFFFFFFF
    void OnDespawned(TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPool_3::OnDespawned");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDespawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, item);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPool`3
    // Base method: System.Void MemoryPool_3::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableMemoryPool_3<TParam1, TParam2, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPool_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableMemoryPool_3<TParam1, TParam2, TValue>*, creationType>()));
    }
    // protected override System.Void Reinitialize(TParam1 p1, TParam2 p2, TValue item)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPool`3
    // Base method: System.Void MemoryPool_3::Reinitialize(TParam1 p1, TParam2 p2, TValue item)
    void Reinitialize(TParam1 p1, TParam2 p2, TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPool_3::Reinitialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Reinitialize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(item)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, p1, p2, item);
    }
  }; // Zenject.PoolableMemoryPool`3
  // Could not write size check! Type: Zenject.PoolableMemoryPool`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPool_3, "Zenject", "PoolableMemoryPool`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
