// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventSource
  class EventSource : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: EventSource
    EventSource() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // [ThreadStaticAttribute] Offset: 0xD82228
    // Get static field: static private System.Byte m_EventSourceExceptionRecurenceCount
    static uint8_t _get_m_EventSourceExceptionRecurenceCount();
    // Set static field: static private System.Byte m_EventSourceExceptionRecurenceCount
    static void _set_m_EventSourceExceptionRecurenceCount(uint8_t value);
    // Get static field: static private readonly System.Byte[] namespaceBytes
    static ::Array<uint8_t>* _get_namespaceBytes();
    // Set static field: static private readonly System.Byte[] namespaceBytes
    static void _set_namespaceBytes(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Guid AspNetEventSourceGuid
    static System::Guid _get_AspNetEventSourceGuid();
    // Set static field: static private readonly System.Guid AspNetEventSourceGuid
    static void _set_AspNetEventSourceGuid(System::Guid value);
    // public System.Boolean IsEnabled()
    // Offset: 0x17A7584
    bool IsEnabled();
    // public System.Void Dispose()
    // Offset: 0x17A7600
    void Dispose();
    // static private System.Void .cctor()
    // Offset: 0x17A7608
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0x17A758C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // protected System.Void .ctor()
    // Offset: 0x17A75F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventSource* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::EventSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventSource*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x17A7604
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Diagnostics.Tracing.EventSource
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventSource*, "System.Diagnostics.Tracing", "EventSource");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::IsEnabled
// Il2CppName: IsEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::Tracing::EventSource::*)()>(&System::Diagnostics::Tracing::EventSource::IsEnabled)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "IsEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)()>(&System::Diagnostics::Tracing::EventSource::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::Tracing::EventSource::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Diagnostics::Tracing::EventSource::*)()>(&System::Diagnostics::Tracing::EventSource::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)()>(&System::Diagnostics::Tracing::EventSource::Finalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
