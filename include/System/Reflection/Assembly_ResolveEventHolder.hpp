// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.Assembly
#include "System/Reflection/Assembly.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Assembly/System.Reflection.ResolveEventHolder
  // [TokenAttribute] Offset: FFFFFFFF
  class Assembly::ResolveEventHolder : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ResolveEventHolder
    ResolveEventHolder() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1D1422C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Assembly::ResolveEventHolder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::Assembly::ResolveEventHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Assembly::ResolveEventHolder*, creationType>()));
    }
  }; // System.Reflection.Assembly/System.Reflection.ResolveEventHolder
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Assembly::ResolveEventHolder*, "System.Reflection", "Assembly/ResolveEventHolder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::Assembly::ResolveEventHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
