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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.PreserveSigAttribute
  // [ComVisibleAttribute] Offset: D7EFE0
  // [AttributeUsageAttribute] Offset: D7EFE0
  class PreserveSigAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: PreserveSigAttribute
    PreserveSigAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x141F33C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreserveSigAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::PreserveSigAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreserveSigAttribute*, creationType>()));
    }
  }; // System.Runtime.InteropServices.PreserveSigAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::PreserveSigAttribute*, "System.Runtime.InteropServices", "PreserveSigAttribute");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Runtime::InteropServices::PreserveSigAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
