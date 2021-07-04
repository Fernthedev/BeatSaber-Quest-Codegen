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
  // Forward declaring type: LivestreamingApplicationStatus
  class LivestreamingApplicationStatus;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithLivestreamingApplicationStatus
  class MessageWithLivestreamingApplicationStatus : public Oculus::Platform::Message_1<Oculus::Platform::Models::LivestreamingApplicationStatus*> {
    public:
    // Creating value type constructor for type: MessageWithLivestreamingApplicationStatus
    MessageWithLivestreamingApplicationStatus() noexcept {}
    // protected Oculus.Platform.Models.LivestreamingApplicationStatus GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14D0A20
    Oculus::Platform::Models::LivestreamingApplicationStatus* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14D097C
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithLivestreamingApplicationStatus* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithLivestreamingApplicationStatus::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithLivestreamingApplicationStatus*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.LivestreamingApplicationStatus GetLivestreamingApplicationStatus()
    // Offset: 0x14D09DC
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LivestreamingApplicationStatus Message::GetLivestreamingApplicationStatus()
    Oculus::Platform::Models::LivestreamingApplicationStatus* GetLivestreamingApplicationStatus();
  }; // Oculus.Platform.MessageWithLivestreamingApplicationStatus
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLivestreamingApplicationStatus*, "Oculus.Platform", "MessageWithLivestreamingApplicationStatus");
// Writing includes for template specializations
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLivestreamingApplicationStatus::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LivestreamingApplicationStatus* (Oculus::Platform::MessageWithLivestreamingApplicationStatus::*)(System::IntPtr)>(&Oculus::Platform::MessageWithLivestreamingApplicationStatus::GetDataFromMessage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLivestreamingApplicationStatus*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLivestreamingApplicationStatus::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLivestreamingApplicationStatus::GetLivestreamingApplicationStatus
// Il2CppName: GetLivestreamingApplicationStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LivestreamingApplicationStatus* (Oculus::Platform::MessageWithLivestreamingApplicationStatus::*)()>(&Oculus::Platform::MessageWithLivestreamingApplicationStatus::GetLivestreamingApplicationStatus)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLivestreamingApplicationStatus*), "GetLivestreamingApplicationStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
