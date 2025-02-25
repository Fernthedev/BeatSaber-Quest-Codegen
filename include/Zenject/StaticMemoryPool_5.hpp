// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.StaticMemoryPoolBase`1
#include "Zenject/StaticMemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`5
#include "Zenject/IMemoryPool_5.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`5<T1, T2, T3, T4, T5>
  template<typename T1, typename T2, typename T3, typename T4, typename T5>
  class Action_5;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.StaticMemoryPool`5
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
  class StaticMemoryPool_5 : public Zenject::StaticMemoryPoolBase_1<TValue>/*, public Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*/ {
    public:
    // private System.Action`5<TParam1,TParam2,TParam3,TParam4,TValue> _onSpawnMethod
    // Size: 0x8
    // Offset: 0x0
    System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* onSpawnMethod;
    // Field size check
    static_assert(sizeof(System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>*) == 0x8);
    // Creating value type constructor for type: StaticMemoryPool_5
    StaticMemoryPool_5(System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* onSpawnMethod_ = {}) noexcept : onSpawnMethod{onSpawnMethod_} {}
    // Creating interface conversion operator: operator Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>
    operator Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>() noexcept {
      return *reinterpret_cast<Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*>(this);
    }
    // Creating conversion operator: operator System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>*
    constexpr operator System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>*() const noexcept {
      return onSpawnMethod;
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Action`5<TParam1,TParam2,TParam3,TParam4,TValue> _onSpawnMethod
    System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>*& dyn__onSpawnMethod() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPool_5::dyn__onSpawnMethod");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_onSpawnMethod"))->offset;
      return *reinterpret_cast<System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void set_OnSpawnMethod(System.Action`5<TParam1,TParam2,TParam3,TParam4,TValue> value)
    // Offset: 0xFFFFFFFF
    void set_OnSpawnMethod(System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPool_5::set_OnSpawnMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_OnSpawnMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, value);
    }
    // public System.Void .ctor(System.Action`5<TParam1,TParam2,TParam3,TParam4,TValue> onSpawnMethod, System.Action`1<TValue> onDespawnedMethod)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>* New_ctor(System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* onSpawnMethod, System::Action_1<TValue>* onDespawnedMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPool_5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*, creationType>(onSpawnMethod, onDespawnedMethod)));
    }
    // public TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    // Offset: 0xFFFFFFFF
    TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPool_5::Spawn");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3), ::il2cpp_utils::ExtractType(p4)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(___instance_arg, ___internal__method, p1, p2, p3, p4);
    }
  }; // Zenject.StaticMemoryPool`5
  // Could not write size check! Type: Zenject.StaticMemoryPool`5 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::StaticMemoryPool_5, "Zenject", "StaticMemoryPool`5");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
