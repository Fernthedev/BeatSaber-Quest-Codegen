// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Hashtable/System.Collections.KeyCollection
  // [TokenAttribute] Offset: FFFFFFFF
  class Hashtable::KeyCollection : public ::Il2CppObject/*, public System::Collections::ICollection*/ {
    public:
    // private System.Collections.Hashtable _hashtable
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Hashtable* hashtable;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // Creating value type constructor for type: KeyCollection
    KeyCollection(System::Collections::Hashtable* hashtable_ = {}) noexcept : hashtable{hashtable_} {}
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // Creating conversion operator: operator System::Collections::Hashtable*
    constexpr operator System::Collections::Hashtable*() const noexcept {
      return hashtable;
    }
    // Get instance field reference: private System.Collections.Hashtable _hashtable
    System::Collections::Hashtable*& dyn__hashtable();
    // public System.Int32 get_Count()
    // Offset: 0x19B18C4
    int get_Count();
    // System.Void .ctor(System.Collections.Hashtable hashtable)
    // Offset: 0x19B16A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hashtable::KeyCollection* New_ctor(System::Collections::Hashtable* hashtable) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Hashtable::KeyCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hashtable::KeyCollection*, creationType>(hashtable)));
    }
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x19B16D4
    void CopyTo(System::Array* array, int arrayIndex);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x19B185C
    System::Collections::IEnumerator* GetEnumerator();
  }; // System.Collections.Hashtable/System.Collections.KeyCollection
  #pragma pack(pop)
  static check_size<sizeof(Hashtable::KeyCollection), 16 + sizeof(System::Collections::Hashtable*)> __System_Collections_Hashtable_KeyCollectionSizeCheck;
  static_assert(sizeof(Hashtable::KeyCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Hashtable::KeyCollection*, "System.Collections", "Hashtable/KeyCollection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Hashtable::KeyCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Hashtable::KeyCollection::*)()>(&System::Collections::Hashtable::KeyCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::KeyCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::KeyCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Hashtable::KeyCollection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::KeyCollection::*)(System::Array*, int)>(&System::Collections::Hashtable::KeyCollection::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::KeyCollection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, arrayIndex});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::KeyCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Collections::Hashtable::KeyCollection::*)()>(&System::Collections::Hashtable::KeyCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::KeyCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
