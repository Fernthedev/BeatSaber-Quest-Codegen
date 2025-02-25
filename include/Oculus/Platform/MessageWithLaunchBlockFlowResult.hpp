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
  // Forward declaring type: LaunchBlockFlowResult
  class LaunchBlockFlowResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithLaunchBlockFlowResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithLaunchBlockFlowResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::LaunchBlockFlowResult*> {
    public:
    // Creating value type constructor for type: MessageWithLaunchBlockFlowResult
    MessageWithLaunchBlockFlowResult() noexcept {}
    // protected Oculus.Platform.Models.LaunchBlockFlowResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x152F768
    Oculus::Platform::Models::LaunchBlockFlowResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x152F6C4
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithLaunchBlockFlowResult* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithLaunchBlockFlowResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithLaunchBlockFlowResult*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.LaunchBlockFlowResult GetLaunchBlockFlowResult()
    // Offset: 0x152F724
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LaunchBlockFlowResult Message::GetLaunchBlockFlowResult()
    Oculus::Platform::Models::LaunchBlockFlowResult* GetLaunchBlockFlowResult();
  }; // Oculus.Platform.MessageWithLaunchBlockFlowResult
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLaunchBlockFlowResult*, "Oculus.Platform", "MessageWithLaunchBlockFlowResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLaunchBlockFlowResult::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LaunchBlockFlowResult* (Oculus::Platform::MessageWithLaunchBlockFlowResult::*)(System::IntPtr)>(&Oculus::Platform::MessageWithLaunchBlockFlowResult::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLaunchBlockFlowResult*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLaunchBlockFlowResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLaunchBlockFlowResult::GetLaunchBlockFlowResult
// Il2CppName: GetLaunchBlockFlowResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LaunchBlockFlowResult* (Oculus::Platform::MessageWithLaunchBlockFlowResult::*)()>(&Oculus::Platform::MessageWithLaunchBlockFlowResult::GetLaunchBlockFlowResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLaunchBlockFlowResult*), "GetLaunchBlockFlowResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
