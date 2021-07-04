// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
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
// Type namespace: System
namespace System {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.SystemException
  // [ComVisibleAttribute] Offset: D7AD64
  class SystemException : public System::Exception {
    public:
    // Creating value type constructor for type: SystemException
    SystemException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1B50704
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SystemException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::SystemException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SystemException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1B507F0
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SystemException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::SystemException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SystemException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x1B508D4
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SystemException* New_ctor(::Il2CppString* message, System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::SystemException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SystemException*, creationType>(message, innerException)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B5096C
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SystemException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::SystemException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SystemException*, creationType>(info, context)));
    }
  }; // System.SystemException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::SystemException*, "System", "SystemException");
// Writing includes for template specializations
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Writing MetadataGetter for method: System::SystemException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::SystemException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::SystemException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::SystemException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
