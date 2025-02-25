// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: ListDictionary
  class ListDictionary;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.HybridDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DAD418
  class HybridDictionary : public ::Il2CppObject/*, public System::Collections::IDictionary*/ {
    public:
    // private System.Collections.Specialized.ListDictionary list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Specialized::ListDictionary* list;
    // Field size check
    static_assert(sizeof(System::Collections::Specialized::ListDictionary*) == 0x8);
    // private System.Collections.Hashtable hashtable
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Hashtable* hashtable;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.Boolean caseInsensitive
    // Size: 0x1
    // Offset: 0x20
    bool caseInsensitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HybridDictionary
    HybridDictionary(System::Collections::Specialized::ListDictionary* list_ = {}, System::Collections::Hashtable* hashtable_ = {}, bool caseInsensitive_ = {}) noexcept : list{list_}, hashtable{hashtable_}, caseInsensitive{caseInsensitive_} {}
    // Creating interface conversion operator: operator System::Collections::IDictionary
    operator System::Collections::IDictionary() noexcept {
      return *reinterpret_cast<System::Collections::IDictionary*>(this);
    }
    // Get instance field reference: private System.Collections.Specialized.ListDictionary list
    System::Collections::Specialized::ListDictionary*& dyn_list();
    // Get instance field reference: private System.Collections.Hashtable hashtable
    System::Collections::Hashtable*& dyn_hashtable();
    // Get instance field reference: private System.Boolean caseInsensitive
    bool& dyn_caseInsensitive();
    // public System.Object get_Item(System.Object key)
    // Offset: 0x18B0C24
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x18B0E80
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // private System.Collections.Specialized.ListDictionary get_List()
    // Offset: 0x18B145C
    System::Collections::Specialized::ListDictionary* get_List();
    // public System.Int32 get_Count()
    // Offset: 0x18B15AC
    int get_Count();
    // public System.Collections.ICollection get_Keys()
    // Offset: 0x18B15E0
    System::Collections::ICollection* get_Keys();
    // public System.Collections.ICollection get_Values()
    // Offset: 0x18B168C
    System::Collections::ICollection* get_Values();
    // private System.Void ChangeOver()
    // Offset: 0x18B0FE0
    void ChangeOver();
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0x18B1734
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x18B1A88
    bool Contains(::Il2CppObject* key);
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x18B1CD0
    void CopyTo(System::Array* array, int index);
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x18B1EC0
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x18B1FDC
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void .ctor()
    // Offset: 0x18B0C1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HybridDictionary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Specialized::HybridDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HybridDictionary*, creationType>()));
    }
  }; // System.Collections.Specialized.HybridDictionary
  #pragma pack(pop)
  static check_size<sizeof(HybridDictionary), 32 + sizeof(bool)> __System_Collections_Specialized_HybridDictionarySizeCheck;
  static_assert(sizeof(HybridDictionary) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::HybridDictionary*, "System.Collections.Specialized", "HybridDictionary");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::HybridDictionary::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::HybridDictionary::*)(::Il2CppObject*)>(&System::Collections::Specialized::HybridDictionary::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::HybridDictionary*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::HybridDictionary::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::HybridDictionary::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::Specialized::HybridDictionary::set_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::HybridDictionary*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::HybridDictionary::get_List
// Il2CppName: get_List
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Specialized::ListDictionary* (System::Collections::Specialized::HybridDictionary::*)()>(&System::Collections::Specialized::HybridDictionary::get_List)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::HybridDictionary*), "get_List", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::HybridDictionary::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Specialized::HybridDictionary::*)()>(&System::Collections::Specialized::HybridDictionary::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::HybridDictionary*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::HybridDictionary::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection* (System::Collections::Specialized::HybridDictionary::*)()>(&System::Collections::Specialized::HybridDictionary::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::HybridDictionary*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::HybridDictionary::get_Values
// Il2CppName: get_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection* (System::Collections::Specialized::HybridDictionary::*)()>(&System::Collections::Specialized::HybridDictionary::get_Values)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::HybridDictionary*), "get_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::HybridDictionary::ChangeOver
// Il2CppName: ChangeOver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::HybridDictionary::*)()>(&System::Collections::Specialized::HybridDictionary::ChangeOver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::HybridDictionary*), "ChangeOver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::HybridDictionary::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::HybridDictionary::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::Specialized::HybridDictionary::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::HybridDictionary*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::HybridDictionary::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::HybridDictionary::*)(::Il2CppObject*)>(&System::Collections::Specialized::HybridDictionary::Contains)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::HybridDictionary*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::HybridDictionary::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::HybridDictionary::*)(System::Array*, int)>(&System::Collections::Specialized::HybridDictionary::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::HybridDictionary*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::HybridDictionary::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionaryEnumerator* (System::Collections::Specialized::HybridDictionary::*)()>(&System::Collections::Specialized::HybridDictionary::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::HybridDictionary*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::HybridDictionary::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Collections::Specialized::HybridDictionary::*)()>(&System::Collections::Specialized::HybridDictionary::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::HybridDictionary*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::HybridDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
