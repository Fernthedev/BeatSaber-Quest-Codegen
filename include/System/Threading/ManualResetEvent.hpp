// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.EventWaitHandle
#include "System/Threading/EventWaitHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ManualResetEvent
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA2130
  class ManualResetEvent : public System::Threading::EventWaitHandle {
    public:
    // Creating value type constructor for type: ManualResetEvent
    ManualResetEvent() noexcept {}
    // public System.Void .ctor(System.Boolean initialState)
    // Offset: 0x18FE5C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManualResetEvent* New_ctor(bool initialState) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ManualResetEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManualResetEvent*, creationType>(initialState)));
    }
  }; // System.Threading.ManualResetEvent
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ManualResetEvent*, "System.Threading", "ManualResetEvent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::ManualResetEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
