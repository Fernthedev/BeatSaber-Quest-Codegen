// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ChainElement
  class X509ChainElement;
  // Forward declaring type: X509ChainElementEnumerator
  class X509ChainElementEnumerator;
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainElementCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DA7060
  class X509ChainElementCollection : public ::Il2CppObject/*, public System::Collections::ICollection*/ {
    public:
    // private System.Collections.ArrayList _list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // Creating value type constructor for type: X509ChainElementCollection
    X509ChainElementCollection(System::Collections::ArrayList* list_ = {}) noexcept : list{list_} {}
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // Creating conversion operator: operator System::Collections::ArrayList*
    constexpr operator System::Collections::ArrayList*() const noexcept {
      return list;
    }
    // Get instance field reference: private System.Collections.ArrayList _list
    System::Collections::ArrayList*& dyn__list();
    // public System.Int32 get_Count()
    // Offset: 0x1860B7C
    int get_Count();
    // public System.Security.Cryptography.X509Certificates.X509ChainElement get_Item(System.Int32 index)
    // Offset: 0x1860BA0
    System::Security::Cryptography::X509Certificates::X509ChainElement* get_Item(int index);
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1860C48
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // public System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator GetEnumerator()
    // Offset: 0x1860C6C
    System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1860D9C
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // System.Void Add(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x1860E00
    void Add(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // System.Void Clear()
    // Offset: 0x1860E88
    void Clear();
    // System.Boolean Contains(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x1860EAC
    bool Contains(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // System.Void .ctor()
    // Offset: 0x1860B10
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ChainElementCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509ChainElementCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ChainElementCollection*, creationType>()));
    }
  }; // System.Security.Cryptography.X509Certificates.X509ChainElementCollection
  #pragma pack(pop)
  static check_size<sizeof(X509ChainElementCollection), 16 + sizeof(System::Collections::ArrayList*)> __System_Security_Cryptography_X509Certificates_X509ChainElementCollectionSizeCheck;
  static_assert(sizeof(X509ChainElementCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainElementCollection*, "System.Security.Cryptography.X509Certificates", "X509ChainElementCollection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElementCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::X509Certificates::X509ChainElementCollection::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainElementCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElementCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElementCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ChainElement* (System::Security::Cryptography::X509Certificates::X509ChainElementCollection::*)(int)>(&System::Security::Cryptography::X509Certificates::X509ChainElementCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElementCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElementCollection::System_Collections_ICollection_CopyTo
// Il2CppName: System.Collections.ICollection.CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainElementCollection::*)(System::Array*, int)>(&System::Security::Cryptography::X509Certificates::X509ChainElementCollection::System_Collections_ICollection_CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElementCollection*), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElementCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator* (System::Security::Cryptography::X509Certificates::X509ChainElementCollection::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainElementCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElementCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElementCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Security::Cryptography::X509Certificates::X509ChainElementCollection::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainElementCollection::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElementCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElementCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainElementCollection::*)(System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&System::Security::Cryptography::X509Certificates::X509ChainElementCollection::Add)> {
  static const MethodInfo* get() {
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElementCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificate});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElementCollection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainElementCollection::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainElementCollection::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElementCollection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElementCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509ChainElementCollection::*)(System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&System::Security::Cryptography::X509Certificates::X509ChainElementCollection::Contains)> {
  static const MethodInfo* get() {
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElementCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificate});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElementCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
