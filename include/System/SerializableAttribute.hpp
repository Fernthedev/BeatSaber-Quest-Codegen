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
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.SerializableAttribute
  // [AttributeUsageAttribute] Offset: D7AC54
  // [ComVisibleAttribute] Offset: D7AC54
  class SerializableAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: SerializableAttribute
    SerializableAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1B509FC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializableAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::SerializableAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializableAttribute*, creationType>()));
    }
  }; // System.SerializableAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::SerializableAttribute*, "System", "SerializableAttribute");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::SerializableAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
