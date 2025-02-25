// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Mutex
  class Mutex;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.AbandonedMutexException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA20BC
  class AbandonedMutexException : public System::SystemException {
    public:
    // private System.Int32 m_MutexIndex
    // Size: 0x4
    // Offset: 0x88
    int m_MutexIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_MutexIndex and: m_Mutex
    char __padding0[0x4] = {};
    // private System.Threading.Mutex m_Mutex
    // Size: 0x8
    // Offset: 0x90
    System::Threading::Mutex* m_Mutex;
    // Field size check
    static_assert(sizeof(System::Threading::Mutex*) == 0x8);
    // Creating value type constructor for type: AbandonedMutexException
    AbandonedMutexException(int m_MutexIndex_ = {}, System::Threading::Mutex* m_Mutex_ = {}) noexcept : m_MutexIndex{m_MutexIndex_}, m_Mutex{m_Mutex_} {}
    // Get instance field reference: private System.Int32 m_MutexIndex
    int& dyn_m_MutexIndex();
    // Get instance field reference: private System.Threading.Mutex m_Mutex
    System::Threading::Mutex*& dyn_m_Mutex();
    // public System.Void .ctor(System.Int32 location, System.Threading.WaitHandle handle)
    // Offset: 0x18F9C8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbandonedMutexException* New_ctor(int location, System::Threading::WaitHandle* handle) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::AbandonedMutexException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbandonedMutexException*, creationType>(location, handle)));
    }
    // private System.Void SetupException(System.Int32 location, System.Threading.WaitHandle handle)
    // Offset: 0x18F9D64
    void SetupException(int location, System::Threading::WaitHandle* handle);
    // public System.Void .ctor()
    // Offset: 0x18F9C10
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbandonedMutexException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::AbandonedMutexException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbandonedMutexException*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x18F9DD8
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbandonedMutexException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::AbandonedMutexException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbandonedMutexException*, creationType>(info, context)));
    }
  }; // System.Threading.AbandonedMutexException
  #pragma pack(pop)
  static check_size<sizeof(AbandonedMutexException), 144 + sizeof(System::Threading::Mutex*)> __System_Threading_AbandonedMutexExceptionSizeCheck;
  static_assert(sizeof(AbandonedMutexException) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::AbandonedMutexException*, "System.Threading", "AbandonedMutexException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::AbandonedMutexException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::AbandonedMutexException::SetupException
// Il2CppName: SetupException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::AbandonedMutexException::*)(int, System::Threading::WaitHandle*)>(&System::Threading::AbandonedMutexException::SetupException)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("System.Threading", "WaitHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::AbandonedMutexException*), "SetupException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, handle});
  }
};
// Writing MetadataGetter for method: System::Threading::AbandonedMutexException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::AbandonedMutexException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
