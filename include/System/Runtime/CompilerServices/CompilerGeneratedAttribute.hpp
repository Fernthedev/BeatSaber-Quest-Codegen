// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Autogenerated type: System.Runtime.CompilerServices.CompilerGeneratedAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DA3CB4
  class CompilerGeneratedAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: CompilerGeneratedAttribute
    CompilerGeneratedAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x148EAB8
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompilerGeneratedAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::CompilerGeneratedAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompilerGeneratedAttribute*, creationType>()));
    }
  }; // System.Runtime.CompilerServices.CompilerGeneratedAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::CompilerGeneratedAttribute*, "System.Runtime.CompilerServices", "CompilerGeneratedAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CompilerGeneratedAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
