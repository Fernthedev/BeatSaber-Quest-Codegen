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
// Type namespace: Unity.Collections.LowLevel.Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.LowLevel.Unsafe.WriteAccessRequiredAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DB2DB0
  class WriteAccessRequiredAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: WriteAccessRequiredAttribute
    WriteAccessRequiredAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1C448CC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WriteAccessRequiredAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Unity::Collections::LowLevel::Unsafe::WriteAccessRequiredAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WriteAccessRequiredAttribute*, creationType>()));
    }
  }; // Unity.Collections.LowLevel.Unsafe.WriteAccessRequiredAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::WriteAccessRequiredAttribute*, "Unity.Collections.LowLevel.Unsafe", "WriteAccessRequiredAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::LowLevel::Unsafe::WriteAccessRequiredAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
