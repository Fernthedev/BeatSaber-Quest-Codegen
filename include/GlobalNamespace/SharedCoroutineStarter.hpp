// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentSingleton`1
#include "GlobalNamespace/PersistentSingleton_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SharedCoroutineStarter
  // [TokenAttribute] Offset: FFFFFFFF
  class SharedCoroutineStarter : public GlobalNamespace::PersistentSingleton_1<GlobalNamespace::SharedCoroutineStarter*> {
    public:
    // Creating value type constructor for type: SharedCoroutineStarter
    SharedCoroutineStarter() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x2393638
    // Implemented from: PersistentSingleton`1
    // Base method: System.Void PersistentSingleton_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SharedCoroutineStarter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SharedCoroutineStarter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SharedCoroutineStarter*, creationType>()));
    }
  }; // SharedCoroutineStarter
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SharedCoroutineStarter*, "", "SharedCoroutineStarter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SharedCoroutineStarter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
