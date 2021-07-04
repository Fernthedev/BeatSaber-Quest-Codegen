// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: NetSyncSetSessionPropertyResult
  class NetSyncSetSessionPropertyResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithNetSyncSetSessionPropertyResult
  class MessageWithNetSyncSetSessionPropertyResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncSetSessionPropertyResult*> {
    public:
    // Creating value type constructor for type: MessageWithNetSyncSetSessionPropertyResult
    MessageWithNetSyncSetSessionPropertyResult() noexcept {}
    // protected Oculus.Platform.Models.NetSyncSetSessionPropertyResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14D254C
    Oculus::Platform::Models::NetSyncSetSessionPropertyResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14D24A8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithNetSyncSetSessionPropertyResult* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithNetSyncSetSessionPropertyResult*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.NetSyncSetSessionPropertyResult GetNetSyncSetSessionPropertyResult()
    // Offset: 0x14D2508
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.NetSyncSetSessionPropertyResult Message::GetNetSyncSetSessionPropertyResult()
    Oculus::Platform::Models::NetSyncSetSessionPropertyResult* GetNetSyncSetSessionPropertyResult();
  }; // Oculus.Platform.MessageWithNetSyncSetSessionPropertyResult
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*, "Oculus.Platform", "MessageWithNetSyncSetSessionPropertyResult");
// Writing includes for template specializations
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::NetSyncSetSessionPropertyResult* (Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::*)(System::IntPtr)>(&Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetDataFromMessage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetNetSyncSetSessionPropertyResult
// Il2CppName: GetNetSyncSetSessionPropertyResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::NetSyncSetSessionPropertyResult* (Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::*)()>(&Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetNetSyncSetSessionPropertyResult)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*), "GetNetSyncSetSessionPropertyResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
