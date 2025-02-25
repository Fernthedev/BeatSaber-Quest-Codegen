// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.InitializableManager
#include "Zenject/InitializableManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IInitializable
  class IInitializable;
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
  // Autogenerated type: Zenject.InitializableManager/Zenject.<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class InitializableManager::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    // public Zenject.IInitializable initializable
    // Size: 0x8
    // Offset: 0x10
    Zenject::IInitializable* initializable;
    // Field size check
    static_assert(sizeof(Zenject::IInitializable*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass2_0
    $$c__DisplayClass2_0(Zenject::IInitializable* initializable_ = {}) noexcept : initializable{initializable_} {}
    // Creating conversion operator: operator Zenject::IInitializable*
    constexpr operator Zenject::IInitializable*() const noexcept {
      return initializable;
    }
    // Get instance field reference: public Zenject.IInitializable initializable
    Zenject::IInitializable*& dyn_initializable();
    // System.Boolean <.ctor>b__0(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x1668DD8
    bool $_ctor$b__0(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // public System.Void .ctor()
    // Offset: 0x166888C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializableManager::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InitializableManager::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializableManager::$$c__DisplayClass2_0*, creationType>()));
    }
  }; // Zenject.InitializableManager/Zenject.<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(InitializableManager::$$c__DisplayClass2_0), 16 + sizeof(Zenject::IInitializable*)> __Zenject_InitializableManager_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(InitializableManager::$$c__DisplayClass2_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InitializableManager::$$c__DisplayClass2_0*, "Zenject", "InitializableManager/<>c__DisplayClass2_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InitializableManager::$$c__DisplayClass2_0::$_ctor$b__0
// Il2CppName: <.ctor>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::InitializableManager::$$c__DisplayClass2_0::*)(ModestTree::Util::ValuePair_2<System::Type*, int>*)>(&Zenject::InitializableManager::$$c__DisplayClass2_0::$_ctor$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("ModestTree.Util", "ValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InitializableManager::$$c__DisplayClass2_0*), "<.ctor>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::InitializableManager::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
