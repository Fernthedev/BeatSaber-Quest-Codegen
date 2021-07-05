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
  // Forward declaring type: CloudStorageConflictMetadata
  class CloudStorageConflictMetadata;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithCloudStorageConflictMetadata
  class MessageWithCloudStorageConflictMetadata : public Oculus::Platform::Message_1<Oculus::Platform::Models::CloudStorageConflictMetadata*> {
    public:
    // Creating value type constructor for type: MessageWithCloudStorageConflictMetadata
    MessageWithCloudStorageConflictMetadata() noexcept {}
    // protected Oculus.Platform.Models.CloudStorageConflictMetadata GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14CE0E0
    Oculus::Platform::Models::CloudStorageConflictMetadata* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CA558
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithCloudStorageConflictMetadata* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithCloudStorageConflictMetadata::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithCloudStorageConflictMetadata*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.CloudStorageConflictMetadata GetCloudStorageConflictMetadata()
    // Offset: 0x14CE09C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.CloudStorageConflictMetadata Message::GetCloudStorageConflictMetadata()
    Oculus::Platform::Models::CloudStorageConflictMetadata* GetCloudStorageConflictMetadata();
  }; // Oculus.Platform.MessageWithCloudStorageConflictMetadata
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithCloudStorageConflictMetadata*, "Oculus.Platform", "MessageWithCloudStorageConflictMetadata");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCloudStorageConflictMetadata::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CloudStorageConflictMetadata* (Oculus::Platform::MessageWithCloudStorageConflictMetadata::*)(System::IntPtr)>(&Oculus::Platform::MessageWithCloudStorageConflictMetadata::GetDataFromMessage)> {
  const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithCloudStorageConflictMetadata*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCloudStorageConflictMetadata::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCloudStorageConflictMetadata::GetCloudStorageConflictMetadata
// Il2CppName: GetCloudStorageConflictMetadata
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CloudStorageConflictMetadata* (Oculus::Platform::MessageWithCloudStorageConflictMetadata::*)()>(&Oculus::Platform::MessageWithCloudStorageConflictMetadata::GetCloudStorageConflictMetadata)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithCloudStorageConflictMetadata*), "GetCloudStorageConflictMetadata", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
