// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.MessageDictionary
#include "System/Runtime/Remoting/Messaging/MessageDictionary.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator*, "System.Runtime.Remoting.Messaging", "MessageDictionary/DictionaryEnumerator");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.MessageDictionary/System.Runtime.Remoting.Messaging.DictionaryEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageDictionary::DictionaryEnumerator : public ::Il2CppObject/*, public ::System::Collections::IDictionaryEnumerator*/ {
    public:
    public:
    // private System.Runtime.Remoting.Messaging.MessageDictionary _methodDictionary
    // Size: 0x8
    // Offset: 0x10
    ::System::Runtime::Remoting::Messaging::MessageDictionary* methodDictionary;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::MessageDictionary*) == 0x8);
    // private System.Collections.IDictionaryEnumerator _hashtableEnum
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::IDictionaryEnumerator* hashtableEnum;
    // Field size check
    static_assert(sizeof(::System::Collections::IDictionaryEnumerator*) == 0x8);
    // private System.Int32 _posMethod
    // Size: 0x4
    // Offset: 0x20
    int posMethod;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IDictionaryEnumerator
    operator ::System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IDictionaryEnumerator*>(this);
    }
    // Creating interface conversion operator: i_IDictionaryEnumerator
    inline ::System::Collections::IDictionaryEnumerator* i_IDictionaryEnumerator() noexcept {
      return reinterpret_cast<::System::Collections::IDictionaryEnumerator*>(this);
    }
    // Get instance field reference: private System.Runtime.Remoting.Messaging.MessageDictionary _methodDictionary
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::MessageDictionary*& dyn__methodDictionary();
    // Get instance field reference: private System.Collections.IDictionaryEnumerator _hashtableEnum
    [[deprecated("Use field access instead!")]] ::System::Collections::IDictionaryEnumerator*& dyn__hashtableEnum();
    // Get instance field reference: private System.Int32 _posMethod
    [[deprecated("Use field access instead!")]] int& dyn__posMethod();
    // public System.Object get_Current()
    // Offset: 0x1C7C518
    ::Il2CppObject* get_Current();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x1C7C584
    ::System::Collections::DictionaryEntry get_Entry();
    // public System.Object get_Key()
    // Offset: 0x1C7C978
    ::Il2CppObject* get_Key();
    // public System.Object get_Value()
    // Offset: 0x1C7C97C
    ::Il2CppObject* get_Value();
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.MessageDictionary methodDictionary)
    // Offset: 0x1C7C3BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageDictionary::DictionaryEnumerator* New_ctor(::System::Runtime::Remoting::Messaging::MessageDictionary* methodDictionary) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageDictionary::DictionaryEnumerator*, creationType>(methodDictionary)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1C7C6F8
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1C7C8BC
    void Reset();
  }; // System.Runtime.Remoting.Messaging.MessageDictionary/System.Runtime.Remoting.Messaging.DictionaryEnumerator
  #pragma pack(pop)
  static check_size<sizeof(MessageDictionary::DictionaryEnumerator), 32 + sizeof(int)> __System_Runtime_Remoting_Messaging_MessageDictionary_DictionaryEnumeratorSizeCheck;
  static_assert(sizeof(MessageDictionary::DictionaryEnumerator) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::get_Entry
// Il2CppName: get_Entry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::DictionaryEntry (System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::get_Entry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator*), "get_Entry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
