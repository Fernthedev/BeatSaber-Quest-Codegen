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
  // Forward declaring type: PurchaseList
  class PurchaseList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithPurchaseList
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithPurchaseList : public Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList*> {
    public:
    // Creating value type constructor for type: MessageWithPurchaseList
    MessageWithPurchaseList() noexcept {}
    // protected Oculus.Platform.Models.PurchaseList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x1533FBC
    Oculus::Platform::Models::PurchaseList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x152AE34
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithPurchaseList* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithPurchaseList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithPurchaseList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.PurchaseList GetPurchaseList()
    // Offset: 0x1533F78
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.PurchaseList Message::GetPurchaseList()
    Oculus::Platform::Models::PurchaseList* GetPurchaseList();
  }; // Oculus.Platform.MessageWithPurchaseList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithPurchaseList*, "Oculus.Platform", "MessageWithPurchaseList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPurchaseList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::PurchaseList* (Oculus::Platform::MessageWithPurchaseList::*)(System::IntPtr)>(&Oculus::Platform::MessageWithPurchaseList::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithPurchaseList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPurchaseList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPurchaseList::GetPurchaseList
// Il2CppName: GetPurchaseList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::PurchaseList* (Oculus::Platform::MessageWithPurchaseList::*)()>(&Oculus::Platform::MessageWithPurchaseList::GetPurchaseList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithPurchaseList*), "GetPurchaseList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
