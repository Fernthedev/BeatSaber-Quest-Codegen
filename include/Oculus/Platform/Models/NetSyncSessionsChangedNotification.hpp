// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetSyncSessionList
  class NetSyncSessionList;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.NetSyncSessionsChangedNotification
  class NetSyncSessionsChangedNotification : public ::Il2CppObject {
    public:
    // public readonly System.Int64 ConnectionId
    // Size: 0x8
    // Offset: 0x10
    int64_t ConnectionId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly Oculus.Platform.Models.NetSyncSessionList Sessions
    // Size: 0x8
    // Offset: 0x18
    Oculus::Platform::Models::NetSyncSessionList* Sessions;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::NetSyncSessionList*) == 0x8);
    // Creating value type constructor for type: NetSyncSessionsChangedNotification
    NetSyncSessionsChangedNotification(int64_t ConnectionId_ = {}, Oculus::Platform::Models::NetSyncSessionList* Sessions_ = {}) noexcept : ConnectionId{ConnectionId_}, Sessions{Sessions_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14D23EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSyncSessionsChangedNotification* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::NetSyncSessionsChangedNotification::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSyncSessionsChangedNotification*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.NetSyncSessionsChangedNotification
  #pragma pack(pop)
  static check_size<sizeof(NetSyncSessionsChangedNotification), 24 + sizeof(Oculus::Platform::Models::NetSyncSessionList*)> __Oculus_Platform_Models_NetSyncSessionsChangedNotificationSizeCheck;
  static_assert(sizeof(NetSyncSessionsChangedNotification) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::NetSyncSessionsChangedNotification*, "Oculus.Platform.Models", "NetSyncSessionsChangedNotification");
// Writing includes for template specializations
// Writing MetadataGetter for method: Oculus::Platform::Models::NetSyncSessionsChangedNotification::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
