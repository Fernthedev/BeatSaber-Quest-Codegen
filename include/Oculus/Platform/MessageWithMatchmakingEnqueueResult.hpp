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
  // Forward declaring type: MatchmakingEnqueueResult
  class MatchmakingEnqueueResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithMatchmakingEnqueueResult
  class MessageWithMatchmakingEnqueueResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingEnqueueResult*> {
    public:
    // Creating value type constructor for type: MessageWithMatchmakingEnqueueResult
    MessageWithMatchmakingEnqueueResult() noexcept {}
    // protected Oculus.Platform.Models.MatchmakingEnqueueResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14D14AC
    Oculus::Platform::Models::MatchmakingEnqueueResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CABB8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithMatchmakingEnqueueResult* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithMatchmakingEnqueueResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithMatchmakingEnqueueResult*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.MatchmakingEnqueueResult GetMatchmakingEnqueueResult()
    // Offset: 0x14D1468
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.MatchmakingEnqueueResult Message::GetMatchmakingEnqueueResult()
    Oculus::Platform::Models::MatchmakingEnqueueResult* GetMatchmakingEnqueueResult();
  }; // Oculus.Platform.MessageWithMatchmakingEnqueueResult
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithMatchmakingEnqueueResult*, "Oculus.Platform", "MessageWithMatchmakingEnqueueResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingEnqueueResult::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::MatchmakingEnqueueResult* (Oculus::Platform::MessageWithMatchmakingEnqueueResult::*)(System::IntPtr)>(&Oculus::Platform::MessageWithMatchmakingEnqueueResult::GetDataFromMessage)> {
  const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithMatchmakingEnqueueResult*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingEnqueueResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingEnqueueResult::GetMatchmakingEnqueueResult
// Il2CppName: GetMatchmakingEnqueueResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::MatchmakingEnqueueResult* (Oculus::Platform::MessageWithMatchmakingEnqueueResult::*)()>(&Oculus::Platform::MessageWithMatchmakingEnqueueResult::GetMatchmakingEnqueueResult)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithMatchmakingEnqueueResult*), "GetMatchmakingEnqueueResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
