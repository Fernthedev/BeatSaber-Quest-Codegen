// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkCredential
#include "System/Net/NetworkCredential.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.SystemNetworkCredential
  // [TokenAttribute] Offset: FFFFFFFF
  class SystemNetworkCredential : public System::Net::NetworkCredential {
    public:
    // Creating value type constructor for type: SystemNetworkCredential
    SystemNetworkCredential() noexcept {}
    // Get static field: static readonly System.Net.SystemNetworkCredential defaultCredential
    static System::Net::SystemNetworkCredential* _get_defaultCredential();
    // Set static field: static readonly System.Net.SystemNetworkCredential defaultCredential
    static void _set_defaultCredential(System::Net::SystemNetworkCredential* value);
    // static private System.Void .cctor()
    // Offset: 0x15D27EC
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x15D2788
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SystemNetworkCredential* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::SystemNetworkCredential::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SystemNetworkCredential*, creationType>()));
    }
  }; // System.Net.SystemNetworkCredential
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::SystemNetworkCredential*, "System.Net", "SystemNetworkCredential");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::SystemNetworkCredential::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::SystemNetworkCredential::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SystemNetworkCredential*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SystemNetworkCredential::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
