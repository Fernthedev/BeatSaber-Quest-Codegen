// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Assertions
namespace UnityEngine::Assertions {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Assertions.AssertionException
  // [TokenAttribute] Offset: FFFFFFFF
  class AssertionException : public System::Exception {
    public:
    // private System.String m_UserMessage
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* m_UserMessage;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AssertionException
    AssertionException(::Il2CppString* m_UserMessage_ = {}) noexcept : m_UserMessage{m_UserMessage_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_UserMessage;
    }
    // Get instance field: private System.String m_UserMessage
    ::Il2CppString* _get_m_UserMessage();
    // Set instance field: private System.String m_UserMessage
    void _set_m_UserMessage(::Il2CppString* value);
    // public System.Void .ctor(System.String message, System.String userMessage)
    // Offset: 0x1C1C21C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssertionException* New_ctor(::Il2CppString* message, ::Il2CppString* userMessage) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Assertions::AssertionException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssertionException*, creationType>(message, userMessage)));
    }
    // public override System.String get_Message()
    // Offset: 0x1C1C628
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
  }; // UnityEngine.Assertions.AssertionException
  #pragma pack(pop)
  static check_size<sizeof(AssertionException), 136 + sizeof(::Il2CppString*)> __UnityEngine_Assertions_AssertionExceptionSizeCheck;
  static_assert(sizeof(AssertionException) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Assertions::AssertionException*, "UnityEngine.Assertions", "AssertionException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Assertions::AssertionException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Assertions::AssertionException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Assertions::AssertionException::*)()>(&UnityEngine::Assertions::AssertionException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Assertions::AssertionException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
