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
  // Autogenerated type: System.ParamArrayAttribute
  // [ComVisibleAttribute] Offset: D7AB18
  // [AttributeUsageAttribute] Offset: D7AB18
  class ParamArrayAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: ParamArrayAttribute
    ParamArrayAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1C70620
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParamArrayAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ParamArrayAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParamArrayAttribute*, creationType>()));
    }
  }; // System.ParamArrayAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::ParamArrayAttribute*, "System", "ParamArrayAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ParamArrayAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
