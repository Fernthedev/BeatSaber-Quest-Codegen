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
  // Forward declaring type: User
  class User;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithUser
  class MessageWithUser : public Oculus::Platform::Message_1<Oculus::Platform::Models::User*> {
    public:
    // Creating value type constructor for type: MessageWithUser
    MessageWithUser() noexcept {}
    // protected Oculus.Platform.Models.User GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14D5390
    Oculus::Platform::Models::User* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CB3F8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithUser* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithUser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithUser*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.User GetUser()
    // Offset: 0x14D534C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.User Message::GetUser()
    Oculus::Platform::Models::User* GetUser();
  }; // Oculus.Platform.MessageWithUser
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithUser*, "Oculus.Platform", "MessageWithUser");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUser::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::User* (Oculus::Platform::MessageWithUser::*)(System::IntPtr)>(&Oculus::Platform::MessageWithUser::GetDataFromMessage)> {
  const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithUser*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUser::GetUser
// Il2CppName: GetUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::User* (Oculus::Platform::MessageWithUser::*)()>(&Oculus::Platform::MessageWithUser::GetUser)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithUser*), "GetUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
