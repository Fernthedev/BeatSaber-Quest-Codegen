// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMethodMessage
  class IMethodMessage;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.MessageDictionary
  // [DefaultMemberAttribute] Offset: D7E73C
  class MessageDictionary : public ::Il2CppObject/*, public System::Collections::IDictionary*/ {
    public:
    // Nested type: System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator
    class DictionaryEnumerator;
    // private System.Collections.IDictionary _internalProperties
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IDictionary* internalProperties;
    // Field size check
    static_assert(sizeof(System::Collections::IDictionary*) == 0x8);
    // protected System.Runtime.Remoting.Messaging.IMethodMessage _message
    // Size: 0x8
    // Offset: 0x18
    System::Runtime::Remoting::Messaging::IMethodMessage* message;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IMethodMessage*) == 0x8);
    // private System.String[] _methodKeys
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppString*>* methodKeys;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Boolean _ownProperties
    // Size: 0x1
    // Offset: 0x28
    bool ownProperties;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MessageDictionary
    MessageDictionary(System::Collections::IDictionary* internalProperties_ = {}, System::Runtime::Remoting::Messaging::IMethodMessage* message_ = {}, ::Array<::Il2CppString*>* methodKeys_ = {}, bool ownProperties_ = {}) noexcept : internalProperties{internalProperties_}, message{message_}, methodKeys{methodKeys_}, ownProperties{ownProperties_} {}
    // Creating interface conversion operator: operator System::Collections::IDictionary
    operator System::Collections::IDictionary() noexcept {
      return *reinterpret_cast<System::Collections::IDictionary*>(this);
    }
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodMessage message)
    // Offset: 0x1A3BC10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageDictionary* New_ctor(System::Runtime::Remoting::Messaging::IMethodMessage* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MessageDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageDictionary*, creationType>(message)));
    }
    // System.Boolean HasUserData()
    // Offset: 0x1A383E0
    bool HasUserData();
    // System.Collections.IDictionary get_InternalDictionary()
    // Offset: 0x1A384F0
    System::Collections::IDictionary* get_InternalDictionary();
    // public System.Void set_MethodKeys(System.String[] value)
    // Offset: 0x1A3ECF4
    void set_MethodKeys(::Array<::Il2CppString*>* value);
    // protected System.Collections.IDictionary AllocInternalProperties()
    // Offset: 0x1A3ECFC
    System::Collections::IDictionary* AllocInternalProperties();
    // public System.Collections.IDictionary GetInternalProperties()
    // Offset: 0x1A3AF6C
    System::Collections::IDictionary* GetInternalProperties();
    // private System.Boolean IsOverridenKey(System.String key)
    // Offset: 0x1A3ED64
    bool IsOverridenKey(::Il2CppString* key);
    // public System.Object get_Item(System.Object key)
    // Offset: 0x1A3EDFC
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x1A3EF54
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // protected System.Object GetMethodProperty(System.String key)
    // Offset: 0x1A3C028
    ::Il2CppObject* GetMethodProperty(::Il2CppString* key);
    // protected System.Void SetMethodProperty(System.String key, System.Object value)
    // Offset: 0x1A3C814
    void SetMethodProperty(::Il2CppString* key, ::Il2CppObject* value);
    // public System.Collections.ICollection get_Keys()
    // Offset: 0x1A3F0CC
    System::Collections::ICollection* get_Keys();
    // public System.Collections.ICollection get_Values()
    // Offset: 0x1A3F478
    System::Collections::ICollection* get_Values();
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0x1A3EF58
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x1A3F808
    bool Contains(::Il2CppObject* key);
    // public System.Int32 get_Count()
    // Offset: 0x1A3F95C
    int get_Count();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1A3FA34
    void CopyTo(System::Array* array, int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1A3FB04
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x1A3FC60
    System::Collections::IDictionaryEnumerator* GetEnumerator();
  }; // System.Runtime.Remoting.Messaging.MessageDictionary
  #pragma pack(pop)
  static check_size<sizeof(MessageDictionary), 40 + sizeof(bool)> __System_Runtime_Remoting_Messaging_MessageDictionarySizeCheck;
  static_assert(sizeof(MessageDictionary) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MessageDictionary*, "System.Runtime.Remoting.Messaging", "MessageDictionary");
// Writing includes for template specializations
#include "System/Runtime/Remoting/Messaging/IMethodMessage.hpp"
#include "System/Array.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::HasUserData
// Il2CppName: HasUserData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::HasUserData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "HasUserData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::get_InternalDictionary
// Il2CppName: get_InternalDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary* (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::get_InternalDictionary)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "get_InternalDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::set_MethodKeys
// Il2CppName: set_MethodKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::Array<::Il2CppString*>*)>(&System::Runtime::Remoting::Messaging::MessageDictionary::set_MethodKeys)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "set_MethodKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppString*>*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::AllocInternalProperties
// Il2CppName: AllocInternalProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary* (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::AllocInternalProperties)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "AllocInternalProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::GetInternalProperties
// Il2CppName: GetInternalProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary* (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::GetInternalProperties)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "GetInternalProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::IsOverridenKey
// Il2CppName: IsOverridenKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::Il2CppString*)>(&System::Runtime::Remoting::Messaging::MessageDictionary::IsOverridenKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "IsOverridenKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::MessageDictionary::get_Item)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::MessageDictionary::set_Item)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::GetMethodProperty
// Il2CppName: GetMethodProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::Il2CppString*)>(&System::Runtime::Remoting::Messaging::MessageDictionary::GetMethodProperty)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "GetMethodProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::SetMethodProperty
// Il2CppName: SetMethodProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::Il2CppString*, ::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::MessageDictionary::SetMethodProperty)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "SetMethodProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection* (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::get_Keys)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::get_Values
// Il2CppName: get_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection* (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::get_Values)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "get_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::MessageDictionary::Add)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::MessageDictionary::Contains)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::get_Count)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MessageDictionary::*)(System::Array*, int)>(&System::Runtime::Remoting::Messaging::MessageDictionary::CopyTo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Array*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::System_Collections_IEnumerable_GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionaryEnumerator* (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
