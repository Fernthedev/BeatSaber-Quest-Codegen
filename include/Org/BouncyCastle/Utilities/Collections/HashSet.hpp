// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Utilities.Collections.ISet
#include "Org/BouncyCastle/Utilities/Collections/ISet.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities.Collections
namespace Org::BouncyCastle::Utilities::Collections {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Collections.HashSet
  // [TokenAttribute] Offset: FFFFFFFF
  class HashSet : public ::Il2CppObject/*, public Org::BouncyCastle::Utilities::Collections::ISet*/ {
    public:
    // private readonly System.Collections.IDictionary impl
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IDictionary* impl;
    // Field size check
    static_assert(sizeof(System::Collections::IDictionary*) == 0x8);
    // Creating value type constructor for type: HashSet
    HashSet(System::Collections::IDictionary* impl_ = {}) noexcept : impl{impl_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Utilities::Collections::ISet
    operator Org::BouncyCastle::Utilities::Collections::ISet() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Utilities::Collections::ISet*>(this);
    }
    // Creating conversion operator: operator System::Collections::IDictionary*
    constexpr operator System::Collections::IDictionary*() const noexcept {
      return impl;
    }
    // Get instance field: private readonly System.Collections.IDictionary impl
    System::Collections::IDictionary* _get_impl();
    // Set instance field: private readonly System.Collections.IDictionary impl
    void _set_impl(System::Collections::IDictionary* value);
    // public System.Int32 get_Count()
    // Offset: 0x1FEB574
    int get_Count();
    // public System.Void Add(System.Object o)
    // Offset: 0x1FEB370
    void Add(::Il2CppObject* o);
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1FEB438
    void CopyTo(System::Array* array, int index);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1FEB628
    System::Collections::IEnumerator* GetEnumerator();
    // public System.Void .ctor()
    // Offset: 0x1FEB2A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HashSet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Utilities::Collections::HashSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HashSet*, creationType>()));
    }
  }; // Org.BouncyCastle.Utilities.Collections.HashSet
  #pragma pack(pop)
  static check_size<sizeof(HashSet), 16 + sizeof(System::Collections::IDictionary*)> __Org_BouncyCastle_Utilities_Collections_HashSetSizeCheck;
  static_assert(sizeof(HashSet) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::HashSet*, "Org.BouncyCastle.Utilities.Collections", "HashSet");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::HashSet::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Utilities::Collections::HashSet::*)()>(&Org::BouncyCastle::Utilities::Collections::HashSet::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::HashSet*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::HashSet::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Utilities::Collections::HashSet::*)(::Il2CppObject*)>(&Org::BouncyCastle::Utilities::Collections::HashSet::Add)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::HashSet*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::HashSet::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Utilities::Collections::HashSet::*)(System::Array*, int)>(&Org::BouncyCastle::Utilities::Collections::HashSet::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::HashSet*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::HashSet::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (Org::BouncyCastle::Utilities::Collections::HashSet::*)()>(&Org::BouncyCastle::Utilities::Collections::HashSet::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::HashSet*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::HashSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
