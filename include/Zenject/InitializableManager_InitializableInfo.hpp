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
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InitializableManager/Zenject.InitializableInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class InitializableManager::InitializableInfo : public ::Il2CppObject {
    public:
    // public Zenject.IInitializable Initializable
    // Size: 0x8
    // Offset: 0x10
    Zenject::IInitializable* Initializable;
    // Field size check
    static_assert(sizeof(Zenject::IInitializable*) == 0x8);
    // public System.Int32 Priority
    // Size: 0x4
    // Offset: 0x18
    int Priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: InitializableInfo
    InitializableInfo(Zenject::IInitializable* Initializable_ = {}, int Priority_ = {}) noexcept : Initializable{Initializable_}, Priority{Priority_} {}
    // Get instance field reference: public Zenject.IInitializable Initializable
    Zenject::IInitializable*& dyn_Initializable();
    // Get instance field reference: public System.Int32 Priority
    int& dyn_Priority();
    // public System.Void .ctor(Zenject.IInitializable initializable, System.Int32 priority)
    // Offset: 0x1668894
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializableManager::InitializableInfo* New_ctor(Zenject::IInitializable* initializable, int priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InitializableManager::InitializableInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializableManager::InitializableInfo*, creationType>(initializable, priority)));
    }
  }; // Zenject.InitializableManager/Zenject.InitializableInfo
  #pragma pack(pop)
  static check_size<sizeof(InitializableManager::InitializableInfo), 24 + sizeof(int)> __Zenject_InitializableManager_InitializableInfoSizeCheck;
  static_assert(sizeof(InitializableManager::InitializableInfo) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InitializableManager::InitializableInfo*, "Zenject", "InitializableManager/InitializableInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InitializableManager::InitializableInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
