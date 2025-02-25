// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.TickableManager
#include "Zenject/TickableManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ITickable
  class ITickable;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
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
  // Autogenerated type: Zenject.TickableManager/Zenject.<>c__DisplayClass18_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TickableManager::$$c__DisplayClass18_0 : public ::Il2CppObject {
    public:
    // public Zenject.ITickable tickable
    // Size: 0x8
    // Offset: 0x10
    Zenject::ITickable* tickable;
    // Field size check
    static_assert(sizeof(Zenject::ITickable*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass18_0
    $$c__DisplayClass18_0(Zenject::ITickable* tickable_ = {}) noexcept : tickable{tickable_} {}
    // Creating conversion operator: operator Zenject::ITickable*
    constexpr operator Zenject::ITickable*() const noexcept {
      return tickable;
    }
    // Get instance field reference: public Zenject.ITickable tickable
    Zenject::ITickable*& dyn_tickable();
    // System.Boolean <InitTickables>b__1(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x172A614
    bool $InitTickables$b__1(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // public System.Void .ctor()
    // Offset: 0x172A16C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TickableManager::$$c__DisplayClass18_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TickableManager::$$c__DisplayClass18_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TickableManager::$$c__DisplayClass18_0*, creationType>()));
    }
  }; // Zenject.TickableManager/Zenject.<>c__DisplayClass18_0
  #pragma pack(pop)
  static check_size<sizeof(TickableManager::$$c__DisplayClass18_0), 16 + sizeof(Zenject::ITickable*)> __Zenject_TickableManager_$$c__DisplayClass18_0SizeCheck;
  static_assert(sizeof(TickableManager::$$c__DisplayClass18_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::TickableManager::$$c__DisplayClass18_0*, "Zenject", "TickableManager/<>c__DisplayClass18_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::TickableManager::$$c__DisplayClass18_0::$InitTickables$b__1
// Il2CppName: <InitTickables>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::TickableManager::$$c__DisplayClass18_0::*)(ModestTree::Util::ValuePair_2<System::Type*, int>*)>(&Zenject::TickableManager::$$c__DisplayClass18_0::$InitTickables$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("ModestTree.Util", "ValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager::$$c__DisplayClass18_0*), "<InitTickables>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::$$c__DisplayClass18_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
