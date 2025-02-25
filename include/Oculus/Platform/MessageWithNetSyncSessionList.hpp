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
  // Forward declaring type: NetSyncSessionList
  class NetSyncSessionList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithNetSyncSessionList
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithNetSyncSessionList : public Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncSessionList*> {
    public:
    // Creating value type constructor for type: MessageWithNetSyncSessionList
    MessageWithNetSyncSessionList() noexcept {}
    // protected Oculus.Platform.Models.NetSyncSessionList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x15321B4
    Oculus::Platform::Models::NetSyncSessionList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x1532110
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithNetSyncSessionList* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithNetSyncSessionList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithNetSyncSessionList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.NetSyncSessionList GetNetSyncSessionList()
    // Offset: 0x1532170
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.NetSyncSessionList Message::GetNetSyncSessionList()
    Oculus::Platform::Models::NetSyncSessionList* GetNetSyncSessionList();
  }; // Oculus.Platform.MessageWithNetSyncSessionList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithNetSyncSessionList*, "Oculus.Platform", "MessageWithNetSyncSessionList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetSyncSessionList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::NetSyncSessionList* (Oculus::Platform::MessageWithNetSyncSessionList::*)(System::IntPtr)>(&Oculus::Platform::MessageWithNetSyncSessionList::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithNetSyncSessionList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetSyncSessionList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetSyncSessionList::GetNetSyncSessionList
// Il2CppName: GetNetSyncSessionList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::NetSyncSessionList* (Oculus::Platform::MessageWithNetSyncSessionList::*)()>(&Oculus::Platform::MessageWithNetSyncSessionList::GetNetSyncSessionList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithNetSyncSessionList*), "GetNetSyncSessionList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
