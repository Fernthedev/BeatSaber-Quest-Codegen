// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.MissingManifestResourceException
  // [ComVisibleAttribute] Offset: D7B5A8
  class MissingManifestResourceException : public System::SystemException {
    public:
    // Creating value type constructor for type: MissingManifestResourceException
    MissingManifestResourceException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1414FAC
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingManifestResourceException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Resources::MissingManifestResourceException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingManifestResourceException*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1415020
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingManifestResourceException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Resources::MissingManifestResourceException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingManifestResourceException*, creationType>(info, context)));
    }
  }; // System.Resources.MissingManifestResourceException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::MissingManifestResourceException*, "System.Resources", "MissingManifestResourceException");
// Writing includes for template specializations
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Writing MetadataGetter for method: System::Resources::MissingManifestResourceException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Resources::MissingManifestResourceException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
