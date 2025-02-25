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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithString
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithString : public Oculus::Platform::Message_1<::Il2CppString*> {
    public:
    // Creating value type constructor for type: MessageWithString
    MessageWithString() noexcept {}
    // protected System.String GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x15350AC
    ::Il2CppString* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x152B194
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithString* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithString*, creationType>(c_message)));
    }
    // public override System.String GetString()
    // Offset: 0x1535068
    // Implemented from: Oculus.Platform.Message
    // Base method: System.String Message::GetString()
    ::Il2CppString* GetString();
  }; // Oculus.Platform.MessageWithString
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithString*, "Oculus.Platform", "MessageWithString");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithString::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Oculus::Platform::MessageWithString::*)(System::IntPtr)>(&Oculus::Platform::MessageWithString::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithString*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithString::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Oculus::Platform::MessageWithString::*)()>(&Oculus::Platform::MessageWithString::GetString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithString*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
