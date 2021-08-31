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
  // Forward declaring type: CloudStorageMetadataList
  class CloudStorageMetadataList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithCloudStorageMetadataList
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithCloudStorageMetadataList : public Oculus::Platform::Message_1<Oculus::Platform::Models::CloudStorageMetadataList*> {
    public:
    // Creating value type constructor for type: MessageWithCloudStorageMetadataList
    MessageWithCloudStorageMetadataList() noexcept {}
    // protected Oculus.Platform.Models.CloudStorageMetadataList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14E9808
    Oculus::Platform::Models::CloudStorageMetadataList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14E5A48
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithCloudStorageMetadataList* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithCloudStorageMetadataList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithCloudStorageMetadataList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.CloudStorageMetadataList GetCloudStorageMetadataList()
    // Offset: 0x14E97C4
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.CloudStorageMetadataList Message::GetCloudStorageMetadataList()
    Oculus::Platform::Models::CloudStorageMetadataList* GetCloudStorageMetadataList();
  }; // Oculus.Platform.MessageWithCloudStorageMetadataList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithCloudStorageMetadataList*, "Oculus.Platform", "MessageWithCloudStorageMetadataList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCloudStorageMetadataList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CloudStorageMetadataList* (Oculus::Platform::MessageWithCloudStorageMetadataList::*)(System::IntPtr)>(&Oculus::Platform::MessageWithCloudStorageMetadataList::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithCloudStorageMetadataList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCloudStorageMetadataList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCloudStorageMetadataList::GetCloudStorageMetadataList
// Il2CppName: GetCloudStorageMetadataList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CloudStorageMetadataList* (Oculus::Platform::MessageWithCloudStorageMetadataList::*)()>(&Oculus::Platform::MessageWithCloudStorageMetadataList::GetCloudStorageMetadataList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithCloudStorageMetadataList*), "GetCloudStorageMetadataList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
