// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: FireworkItemController
#include "GlobalNamespace/FireworkItemController.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: FireworkItemController/Pool
  // [TokenAttribute] Offset: FFFFFFFF
  class FireworkItemController::Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::FireworkItemController*> {
    public:
    // Creating value type constructor for type: Pool
    Pool() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1058CE8
    // Implemented from: Zenject.MonoMemoryPool`1
    // Base method: System.Void MonoMemoryPool_1::.ctor()
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FireworkItemController::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FireworkItemController::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FireworkItemController::Pool*, creationType>()));
    }
  }; // FireworkItemController/Pool
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireworkItemController::Pool*, "", "FireworkItemController/Pool");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
