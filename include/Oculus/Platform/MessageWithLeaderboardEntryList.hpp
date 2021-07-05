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
  // Forward declaring type: LeaderboardEntryList
  class LeaderboardEntryList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithLeaderboardEntryList
  class MessageWithLeaderboardEntryList : public Oculus::Platform::Message_1<Oculus::Platform::Models::LeaderboardEntryList*> {
    public:
    // Creating value type constructor for type: MessageWithLeaderboardEntryList
    MessageWithLeaderboardEntryList() noexcept {}
    // protected Oculus.Platform.Models.LeaderboardEntryList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14D00D0
    Oculus::Platform::Models::LeaderboardEntryList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CA9D8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithLeaderboardEntryList* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithLeaderboardEntryList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithLeaderboardEntryList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.LeaderboardEntryList GetLeaderboardEntryList()
    // Offset: 0x14D008C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LeaderboardEntryList Message::GetLeaderboardEntryList()
    Oculus::Platform::Models::LeaderboardEntryList* GetLeaderboardEntryList();
  }; // Oculus.Platform.MessageWithLeaderboardEntryList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLeaderboardEntryList*, "Oculus.Platform", "MessageWithLeaderboardEntryList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLeaderboardEntryList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LeaderboardEntryList* (Oculus::Platform::MessageWithLeaderboardEntryList::*)(System::IntPtr)>(&Oculus::Platform::MessageWithLeaderboardEntryList::GetDataFromMessage)> {
  const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLeaderboardEntryList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLeaderboardEntryList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLeaderboardEntryList::GetLeaderboardEntryList
// Il2CppName: GetLeaderboardEntryList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LeaderboardEntryList* (Oculus::Platform::MessageWithLeaderboardEntryList::*)()>(&Oculus::Platform::MessageWithLeaderboardEntryList::GetLeaderboardEntryList)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLeaderboardEntryList*), "GetLeaderboardEntryList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
