// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.OSSpecificSynchronizationContext
#include "System/Threading/OSSpecificSynchronizationContext.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
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
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.OSSpecificSynchronizationContext/System.Threading.MonoPInvokeCallbackAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DA21CC
  class OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: MonoPInvokeCallbackAttribute
    MonoPInvokeCallbackAttribute() noexcept {}
    // public System.Void .ctor(System.Type t)
    // Offset: 0x1900964
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute* New_ctor(System::Type* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute*, creationType>(t)));
    }
  }; // System.Threading.OSSpecificSynchronizationContext/System.Threading.MonoPInvokeCallbackAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute*, "System.Threading", "OSSpecificSynchronizationContext/MonoPInvokeCallbackAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
