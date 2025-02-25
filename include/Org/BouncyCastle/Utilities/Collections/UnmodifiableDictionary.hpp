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
// Type namespace: Org.BouncyCastle.Utilities.Collections
namespace Org::BouncyCastle::Utilities::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Collections.UnmodifiableDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: E0692C
  class UnmodifiableDictionary : public ::Il2CppObject/*, public System::Collections::IDictionary*/ {
    public:
    // Creating value type constructor for type: UnmodifiableDictionary
    UnmodifiableDictionary() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IDictionary
    operator System::Collections::IDictionary() noexcept {
      return *reinterpret_cast<System::Collections::IDictionary*>(this);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count();
    // public System.Collections.ICollection get_Keys()
    // Offset: 0xFFFFFFFF
    System::Collections::ICollection* get_Keys();
    // public System.Object get_Item(System.Object k)
    // Offset: 0x1FEA488
    ::Il2CppObject* get_Item(::Il2CppObject* k);
    // public System.Void set_Item(System.Object k, System.Object value)
    // Offset: 0x1FEA498
    void set_Item(::Il2CppObject* k, ::Il2CppObject* value);
    // public System.Void Add(System.Object k, System.Object v)
    // Offset: 0x1FEA418
    void Add(::Il2CppObject* k, ::Il2CppObject* v);
    // public System.Boolean Contains(System.Object k)
    // Offset: 0xFFFFFFFF
    bool Contains(::Il2CppObject* k);
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0xFFFFFFFF
    void CopyTo(System::Array* array, int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1FEA478
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // protected System.Object GetValue(System.Object k)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* GetValue(::Il2CppObject* k);
    // protected System.Void .ctor()
    // Offset: 0x1FEA410
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnmodifiableDictionary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnmodifiableDictionary*, creationType>()));
    }
  }; // Org.BouncyCastle.Utilities.Collections.UnmodifiableDictionary
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary*, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableDictionary");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::*)()>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection* (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::*)()>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::*)(::Il2CppObject*)>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::get_Item)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::*)(::Il2CppObject*, ::Il2CppObject*)>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::set_Item)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k, value});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::*)(::Il2CppObject*, ::Il2CppObject*)>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::Add)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k, v});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::*)(::Il2CppObject*)>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::Contains)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::*)(System::Array*, int)>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::*)()>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionaryEnumerator* (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::*)()>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::*)(::Il2CppObject*)>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::GetValue)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
