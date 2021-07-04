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
  // Forward declaring type: CloudStorageUpdateResponse
  class CloudStorageUpdateResponse;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithCloudStorageUpdateResponse
  class MessageWithCloudStorageUpdateResponse : public Oculus::Platform::Message_1<Oculus::Platform::Models::CloudStorageUpdateResponse*> {
    public:
    // Creating value type constructor for type: MessageWithCloudStorageUpdateResponse
    MessageWithCloudStorageUpdateResponse() noexcept {}
    // protected Oculus.Platform.Models.CloudStorageUpdateResponse GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14CE8F0
    Oculus::Platform::Models::CloudStorageUpdateResponse* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CA6D8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithCloudStorageUpdateResponse* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithCloudStorageUpdateResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithCloudStorageUpdateResponse*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.CloudStorageUpdateResponse GetCloudStorageUpdateResponse()
    // Offset: 0x14CE8AC
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.CloudStorageUpdateResponse Message::GetCloudStorageUpdateResponse()
    Oculus::Platform::Models::CloudStorageUpdateResponse* GetCloudStorageUpdateResponse();
  }; // Oculus.Platform.MessageWithCloudStorageUpdateResponse
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithCloudStorageUpdateResponse*, "Oculus.Platform", "MessageWithCloudStorageUpdateResponse");
// Writing includes for template specializations
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCloudStorageUpdateResponse::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CloudStorageUpdateResponse* (Oculus::Platform::MessageWithCloudStorageUpdateResponse::*)(System::IntPtr)>(&Oculus::Platform::MessageWithCloudStorageUpdateResponse::GetDataFromMessage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithCloudStorageUpdateResponse*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCloudStorageUpdateResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCloudStorageUpdateResponse::GetCloudStorageUpdateResponse
// Il2CppName: GetCloudStorageUpdateResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CloudStorageUpdateResponse* (Oculus::Platform::MessageWithCloudStorageUpdateResponse::*)()>(&Oculus::Platform::MessageWithCloudStorageUpdateResponse::GetCloudStorageUpdateResponse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithCloudStorageUpdateResponse*), "GetCloudStorageUpdateResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
