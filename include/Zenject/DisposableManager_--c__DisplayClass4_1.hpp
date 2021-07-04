// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.DisposableManager
#include "Zenject/DisposableManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ILateDisposable
  class ILateDisposable;
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
  // Autogenerated type: Zenject.DisposableManager/<>c__DisplayClass4_1
  // [CompilerGeneratedAttribute] Offset: DDE5CC
  class DisposableManager::$$c__DisplayClass4_1 : public ::Il2CppObject {
    public:
    // public Zenject.ILateDisposable lateDisposable
    // Size: 0x8
    // Offset: 0x10
    Zenject::ILateDisposable* lateDisposable;
    // Field size check
    static_assert(sizeof(Zenject::ILateDisposable*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass4_1
    $$c__DisplayClass4_1(Zenject::ILateDisposable* lateDisposable_ = {}) noexcept : lateDisposable{lateDisposable_} {}
    // Creating conversion operator: operator Zenject::ILateDisposable*
    constexpr operator Zenject::ILateDisposable*() const noexcept {
      return lateDisposable;
    }
    // System.Boolean <.ctor>b__2(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x163454C
    bool $_ctor$b__2(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // public System.Void .ctor()
    // Offset: 0x1633970
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisposableManager::$$c__DisplayClass4_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposableManager::$$c__DisplayClass4_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisposableManager::$$c__DisplayClass4_1*, creationType>()));
    }
  }; // Zenject.DisposableManager/<>c__DisplayClass4_1
  #pragma pack(pop)
  static check_size<sizeof(DisposableManager::$$c__DisplayClass4_1), 16 + sizeof(Zenject::ILateDisposable*)> __Zenject_DisposableManager_$$c__DisplayClass4_1SizeCheck;
  static_assert(sizeof(DisposableManager::$$c__DisplayClass4_1) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposableManager::$$c__DisplayClass4_1*, "Zenject", "DisposableManager/<>c__DisplayClass4_1");
// Writing includes for template specializations
#include "ModestTree/Util/ValuePair_2.hpp"
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c__DisplayClass4_1::$_ctor$b__2
// Il2CppName: <.ctor>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::DisposableManager::$$c__DisplayClass4_1::*)(ModestTree::Util::ValuePair_2<System::Type*, int>*)>(&Zenject::DisposableManager::$$c__DisplayClass4_1::$_ctor$b__2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager::$$c__DisplayClass4_1*), "<.ctor>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<ModestTree::Util::ValuePair_2<System::Type*, int>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c__DisplayClass4_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
