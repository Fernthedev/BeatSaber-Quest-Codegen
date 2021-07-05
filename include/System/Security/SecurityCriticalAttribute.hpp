// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.SecurityCriticalAttribute
  // [AttributeUsageAttribute] Offset: D7D4A0
  class SecurityCriticalAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: SecurityCriticalAttribute
    SecurityCriticalAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1AF4158
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityCriticalAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::SecurityCriticalAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityCriticalAttribute*, creationType>()));
    }
  }; // System.Security.SecurityCriticalAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecurityCriticalAttribute*, "System.Security", "SecurityCriticalAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::SecurityCriticalAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
