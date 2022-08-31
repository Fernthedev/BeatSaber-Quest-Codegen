// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: MessageDictionary
  class MessageDictionary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MessageDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MessageDictionary*, "System.Runtime.Remoting.Messaging", "MessageDictionary");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.MessageDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 10444C8
  class MessageDictionary : public ::Il2CppObject/*, public ::System::Collections::IDictionary*/ {
    public:
    // Nested type: ::System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator
    class DictionaryEnumerator;
    public:
    // private System.Collections.IDictionary _internalProperties
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::IDictionary* internalProperties;
    // Field size check
    static_assert(sizeof(::System::Collections::IDictionary*) == 0x8);
    // protected System.Runtime.Remoting.Messaging.IMethodMessage _message
    // Size: 0x8
    // Offset: 0x18
    ::System::Runtime::Remoting::Messaging::IMethodMessage* message;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::IMethodMessage*) == 0x8);
    // private System.String[] _methodKeys
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::StringW> methodKeys;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.Boolean _ownProperties
    // Size: 0x1
    // Offset: 0x28
    bool ownProperties;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IDictionary
    operator ::System::Collections::IDictionary() noexcept {
      return *reinterpret_cast<::System::Collections::IDictionary*>(this);
    }
    // Creating interface conversion operator: i_IDictionary
    inline ::System::Collections::IDictionary* i_IDictionary() noexcept {
      return reinterpret_cast<::System::Collections::IDictionary*>(this);
    }
    // Get instance field reference: private System.Collections.IDictionary _internalProperties
    [[deprecated("Use field access instead!")]] ::System::Collections::IDictionary*& dyn__internalProperties();
    // Get instance field reference: protected System.Runtime.Remoting.Messaging.IMethodMessage _message
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::IMethodMessage*& dyn__message();
    // Get instance field reference: private System.String[] _methodKeys
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__methodKeys();
    // Get instance field reference: private System.Boolean _ownProperties
    [[deprecated("Use field access instead!")]] bool& dyn__ownProperties();
    // System.Collections.IDictionary get_InternalDictionary()
    // Offset: 0x1C74E2C
    ::System::Collections::IDictionary* get_InternalDictionary();
    // public System.Void set_MethodKeys(System.String[] value)
    // Offset: 0x1C7B300
    void set_MethodKeys(::ArrayW<::StringW> value);
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x1C7B408
    bool get_IsReadOnly();
    // public System.Object get_Item(System.Object key)
    // Offset: 0x1C7B410
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x1C7B568
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Collections.ICollection get_Keys()
    // Offset: 0x1C7B6E0
    ::System::Collections::ICollection* get_Keys();
    // public System.Collections.ICollection get_Values()
    // Offset: 0x1C7BA8C
    ::System::Collections::ICollection* get_Values();
    // public System.Int32 get_Count()
    // Offset: 0x1C7C1B0
    int get_Count();
    // public System.Object get_SyncRoot()
    // Offset: 0x1C7C288
    ::Il2CppObject* get_SyncRoot();
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodMessage message)
    // Offset: 0x1C78388
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageDictionary* New_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::MessageDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageDictionary*, creationType>(message)));
    }
    // System.Boolean HasUserData()
    // Offset: 0x1C74D1C
    bool HasUserData();
    // protected System.Collections.IDictionary AllocInternalProperties()
    // Offset: 0x1C7B308
    ::System::Collections::IDictionary* AllocInternalProperties();
    // public System.Collections.IDictionary GetInternalProperties()
    // Offset: 0x1C776E4
    ::System::Collections::IDictionary* GetInternalProperties();
    // private System.Boolean IsOverridenKey(System.String key)
    // Offset: 0x1C7B370
    bool IsOverridenKey(::StringW key);
    // protected System.Object GetMethodProperty(System.String key)
    // Offset: 0x1C787A0
    ::Il2CppObject* GetMethodProperty(::StringW key);
    // protected System.Void SetMethodProperty(System.String key, System.Object value)
    // Offset: 0x1C78F8C
    void SetMethodProperty(::StringW key, ::Il2CppObject* value);
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0x1C7B56C
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Void Clear()
    // Offset: 0x1C7BE1C
    void Clear();
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x1C7BED8
    bool Contains(::Il2CppObject* key);
    // public System.Void Remove(System.Object key)
    // Offset: 0x1C7C02C
    void Remove(::Il2CppObject* key);
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1C7C28C
    void CopyTo(::System::Array* array, int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1C7C35C
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x1C7C4B8
    ::System::Collections::IDictionaryEnumerator* GetEnumerator();
  }; // System.Runtime.Remoting.Messaging.MessageDictionary
  #pragma pack(pop)
  static check_size<sizeof(MessageDictionary), 40 + sizeof(bool)> __System_Runtime_Remoting_Messaging_MessageDictionarySizeCheck;
  static_assert(sizeof(MessageDictionary) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::get_InternalDictionary
// Il2CppName: get_InternalDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::get_InternalDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "get_InternalDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::set_MethodKeys
// Il2CppName: set_MethodKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::ArrayW<::StringW>)>(&System::Runtime::Remoting::Messaging::MessageDictionary::set_MethodKeys)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "set_MethodKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::MessageDictionary::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::MessageDictionary::set_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::get_Values
// Il2CppName: get_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::get_Values)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "get_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::HasUserData
// Il2CppName: HasUserData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::HasUserData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "HasUserData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::AllocInternalProperties
// Il2CppName: AllocInternalProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::AllocInternalProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "AllocInternalProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::GetInternalProperties
// Il2CppName: GetInternalProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::GetInternalProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "GetInternalProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::IsOverridenKey
// Il2CppName: IsOverridenKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::StringW)>(&System::Runtime::Remoting::Messaging::MessageDictionary::IsOverridenKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "IsOverridenKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::GetMethodProperty
// Il2CppName: GetMethodProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::StringW)>(&System::Runtime::Remoting::Messaging::MessageDictionary::GetMethodProperty)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "GetMethodProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::SetMethodProperty
// Il2CppName: SetMethodProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::StringW, ::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::MessageDictionary::SetMethodProperty)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "SetMethodProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::MessageDictionary::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::MessageDictionary::Contains)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::MessageDictionary::Remove)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MessageDictionary::*)(::System::Array*, int)>(&System::Runtime::Remoting::Messaging::MessageDictionary::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MessageDictionary::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&System::Runtime::Remoting::Messaging::MessageDictionary::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MessageDictionary*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
