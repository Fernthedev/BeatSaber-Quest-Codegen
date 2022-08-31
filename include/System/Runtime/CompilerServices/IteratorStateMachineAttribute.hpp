// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.CompilerServices.StateMachineAttribute
#include "System/Runtime/CompilerServices/StateMachineAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: IteratorStateMachineAttribute
  class IteratorStateMachineAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::IteratorStateMachineAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IteratorStateMachineAttribute*, "System.Runtime.CompilerServices", "IteratorStateMachineAttribute");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.IteratorStateMachineAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10446EC
  class IteratorStateMachineAttribute : public ::System::Runtime::CompilerServices::StateMachineAttribute {
    public:
    // public System.Void .ctor(System.Type stateMachineType)
    // Offset: 0x1D7A2BC
    // Implemented from: System.Runtime.CompilerServices.StateMachineAttribute
    // Base method: System.Void StateMachineAttribute::.ctor(System.Type stateMachineType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IteratorStateMachineAttribute* New_ctor(::System::Type* stateMachineType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::IteratorStateMachineAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IteratorStateMachineAttribute*, creationType>(stateMachineType)));
    }
  }; // System.Runtime.CompilerServices.IteratorStateMachineAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::IteratorStateMachineAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
