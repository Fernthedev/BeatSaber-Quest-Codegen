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
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.ExtensionAttribute
  // [AttributeUsageAttribute] Offset: D7EBD4
  class ExtensionAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: ExtensionAttribute
    ExtensionAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x141C94C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExtensionAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ExtensionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExtensionAttribute*, creationType>()));
    }
  }; // System.Runtime.CompilerServices.ExtensionAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::ExtensionAttribute*, "System.Runtime.CompilerServices", "ExtensionAttribute");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Runtime::CompilerServices::ExtensionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
