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
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ThreadAbortException
  // [ComVisibleAttribute] Offset: D7D0A0
  class ThreadAbortException : public System::SystemException {
    public:
    // Creating value type constructor for type: ThreadAbortException
    ThreadAbortException() noexcept {}
    // private System.Void .ctor()
    // Offset: 0x18925A4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadAbortException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadAbortException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadAbortException*, creationType>()));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1892630
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadAbortException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadAbortException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadAbortException*, creationType>(info, context)));
    }
  }; // System.Threading.ThreadAbortException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadAbortException*, "System.Threading", "ThreadAbortException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::ThreadAbortException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::ThreadAbortException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
