// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.CompilerServices.StateMachineAttribute
#include "System/Runtime/CompilerServices/StateMachineAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.IteratorStateMachineAttribute
  // [AttributeUsageAttribute] Offset: D7E960
  class IteratorStateMachineAttribute : public System::Runtime::CompilerServices::StateMachineAttribute {
    public:
    // Creating value type constructor for type: IteratorStateMachineAttribute
    IteratorStateMachineAttribute() noexcept {}
    // public System.Void .ctor(System.Type stateMachineType)
    // Offset: 0x141CA00
    // Implemented from: System.Runtime.CompilerServices.StateMachineAttribute
    // Base method: System.Void StateMachineAttribute::.ctor(System.Type stateMachineType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IteratorStateMachineAttribute* New_ctor(System::Type* stateMachineType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::IteratorStateMachineAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IteratorStateMachineAttribute*, creationType>(stateMachineType)));
    }
  }; // System.Runtime.CompilerServices.IteratorStateMachineAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::IteratorStateMachineAttribute*, "System.Runtime.CompilerServices", "IteratorStateMachineAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::IteratorStateMachineAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
