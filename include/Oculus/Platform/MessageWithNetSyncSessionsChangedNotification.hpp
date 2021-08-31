// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetSyncSessionsChangedNotification
  class NetSyncSessionsChangedNotification;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithNetSyncSessionsChangedNotification
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithNetSyncSessionsChangedNotification : public Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncSessionsChangedNotification*> {
    public:
    // Creating value type constructor for type: MessageWithNetSyncSessionsChangedNotification
    MessageWithNetSyncSessionsChangedNotification() noexcept {}
    // protected Oculus.Platform.Models.NetSyncSessionsChangedNotification GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14ED720
    Oculus::Platform::Models::NetSyncSessionsChangedNotification* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14E6108
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithNetSyncSessionsChangedNotification* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithNetSyncSessionsChangedNotification*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.NetSyncSessionsChangedNotification GetNetSyncSessionsChangedNotification()
    // Offset: 0x14ED6DC
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.NetSyncSessionsChangedNotification Message::GetNetSyncSessionsChangedNotification()
    Oculus::Platform::Models::NetSyncSessionsChangedNotification* GetNetSyncSessionsChangedNotification();
  }; // Oculus.Platform.MessageWithNetSyncSessionsChangedNotification
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*, "Oculus.Platform", "MessageWithNetSyncSessionsChangedNotification");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::NetSyncSessionsChangedNotification* (Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::*)(System::IntPtr)>(&Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetNetSyncSessionsChangedNotification
// Il2CppName: GetNetSyncSessionsChangedNotification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::NetSyncSessionsChangedNotification* (Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::*)()>(&Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetNetSyncSessionsChangedNotification)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*), "GetNetSyncSessionsChangedNotification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
