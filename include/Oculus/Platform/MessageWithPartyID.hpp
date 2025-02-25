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
  // Forward declaring type: PartyID
  class PartyID;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithPartyID
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithPartyID : public Oculus::Platform::Message_1<Oculus::Platform::Models::PartyID*> {
    public:
    // Creating value type constructor for type: MessageWithPartyID
    MessageWithPartyID() noexcept {}
    // protected Oculus.Platform.Models.PartyID GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x153317C
    Oculus::Platform::Models::PartyID* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x15330D8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithPartyID* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithPartyID::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithPartyID*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.PartyID GetPartyID()
    // Offset: 0x1533138
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.PartyID Message::GetPartyID()
    Oculus::Platform::Models::PartyID* GetPartyID();
  }; // Oculus.Platform.MessageWithPartyID
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithPartyID*, "Oculus.Platform", "MessageWithPartyID");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPartyID::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::PartyID* (Oculus::Platform::MessageWithPartyID::*)(System::IntPtr)>(&Oculus::Platform::MessageWithPartyID::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithPartyID*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPartyID::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPartyID::GetPartyID
// Il2CppName: GetPartyID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::PartyID* (Oculus::Platform::MessageWithPartyID::*)()>(&Oculus::Platform::MessageWithPartyID::GetPartyID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithPartyID*), "GetPartyID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
