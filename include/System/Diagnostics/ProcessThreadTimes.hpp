// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.ProcessThreadTimes
  // [TokenAttribute] Offset: FFFFFFFF
  class ProcessThreadTimes : public ::Il2CppObject {
    public:
    // System.Int64 create
    // Size: 0x8
    // Offset: 0x10
    int64_t create;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int64 exit
    // Size: 0x8
    // Offset: 0x18
    int64_t exit;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int64 kernel
    // Size: 0x8
    // Offset: 0x20
    int64_t kernel;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int64 user
    // Size: 0x8
    // Offset: 0x28
    int64_t user;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: ProcessThreadTimes
    ProcessThreadTimes(int64_t create_ = {}, int64_t exit_ = {}, int64_t kernel_ = {}, int64_t user_ = {}) noexcept : create{create_}, exit{exit_}, kernel{kernel_}, user{user_} {}
    // Get instance field: System.Int64 create
    int64_t _get_create();
    // Set instance field: System.Int64 create
    void _set_create(int64_t value);
    // Get instance field: System.Int64 exit
    int64_t _get_exit();
    // Set instance field: System.Int64 exit
    void _set_exit(int64_t value);
    // Get instance field: System.Int64 kernel
    int64_t _get_kernel();
    // Set instance field: System.Int64 kernel
    void _set_kernel(int64_t value);
    // Get instance field: System.Int64 user
    int64_t _get_user();
    // Set instance field: System.Int64 user
    void _set_user(int64_t value);
    // public System.TimeSpan get_TotalProcessorTime()
    // Offset: 0x18B2C30
    System::TimeSpan get_TotalProcessorTime();
    // public System.Void .ctor()
    // Offset: 0x18B2A1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProcessThreadTimes* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::ProcessThreadTimes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProcessThreadTimes*, creationType>()));
    }
  }; // System.Diagnostics.ProcessThreadTimes
  #pragma pack(pop)
  static check_size<sizeof(ProcessThreadTimes), 40 + sizeof(int64_t)> __System_Diagnostics_ProcessThreadTimesSizeCheck;
  static_assert(sizeof(ProcessThreadTimes) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::ProcessThreadTimes*, "System.Diagnostics", "ProcessThreadTimes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::ProcessThreadTimes::get_TotalProcessorTime
// Il2CppName: get_TotalProcessorTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::Diagnostics::ProcessThreadTimes::*)()>(&System::Diagnostics::ProcessThreadTimes::get_TotalProcessorTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::ProcessThreadTimes*), "get_TotalProcessorTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::ProcessThreadTimes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
