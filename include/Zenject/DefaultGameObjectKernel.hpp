// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoKernel
#include "Zenject/MonoKernel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DefaultGameObjectKernel
  class DefaultGameObjectKernel : public Zenject::MonoKernel {
    public:
    // Creating value type constructor for type: DefaultGameObjectKernel
    DefaultGameObjectKernel() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x13907F8
    // Implemented from: Zenject.MonoKernel
    // Base method: System.Void MonoKernel::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultGameObjectKernel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DefaultGameObjectKernel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultGameObjectKernel*, creationType>()));
    }
  }; // Zenject.DefaultGameObjectKernel
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DefaultGameObjectKernel*, "Zenject", "DefaultGameObjectKernel");
// Writing includes for template specializations
// Writing MetadataGetter for method: Zenject::DefaultGameObjectKernel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
