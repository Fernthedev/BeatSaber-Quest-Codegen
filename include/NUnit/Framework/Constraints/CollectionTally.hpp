// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: NUnitEqualityComparer
  class NUnitEqualityComparer;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: CollectionTally
  class CollectionTally;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Constraints::CollectionTally);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Constraints::CollectionTally*, "NUnit.Framework.Constraints", "CollectionTally");
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.CollectionTally
  // [TokenAttribute] Offset: FFFFFFFF
  class CollectionTally : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Collections.Generic.List`1<System.Object> list
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Il2CppObject*>* list;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    // private readonly NUnit.Framework.Constraints.NUnitEqualityComparer comparer
    // Size: 0x8
    // Offset: 0x18
    ::NUnit::Framework::Constraints::NUnitEqualityComparer* comparer;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Constraints::NUnitEqualityComparer*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.Object> list
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Il2CppObject*>*& dyn_list();
    // Get instance field reference: private readonly NUnit.Framework.Constraints.NUnitEqualityComparer comparer
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Constraints::NUnitEqualityComparer*& dyn_comparer();
    // public System.Int32 get_Count()
    // Offset: 0x1C87088
    int get_Count();
    // public System.Void .ctor(NUnit.Framework.Constraints.NUnitEqualityComparer comparer, System.Collections.IEnumerable c)
    // Offset: 0x1C86DD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CollectionTally* New_ctor(::NUnit::Framework::Constraints::NUnitEqualityComparer* comparer, ::System::Collections::IEnumerable* c) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Constraints::CollectionTally::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CollectionTally*, creationType>(comparer, c)));
    }
    // private System.Boolean ItemsEqual(System.Object expected, System.Object actual)
    // Offset: 0x1C870D8
    bool ItemsEqual(::Il2CppObject* expected, ::Il2CppObject* actual);
    // public System.Boolean TryRemove(System.Object o)
    // Offset: 0x1C87DE4
    bool TryRemove(::Il2CppObject* o);
    // public System.Boolean TryRemove(System.Collections.IEnumerable c)
    // Offset: 0x1C87EB0
    bool TryRemove(::System::Collections::IEnumerable* c);
  }; // NUnit.Framework.Constraints.CollectionTally
  #pragma pack(pop)
  static check_size<sizeof(CollectionTally), 24 + sizeof(::NUnit::Framework::Constraints::NUnitEqualityComparer*)> __NUnit_Framework_Constraints_CollectionTallySizeCheck;
  static_assert(sizeof(CollectionTally) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::CollectionTally::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Constraints::CollectionTally::*)()>(&NUnit::Framework::Constraints::CollectionTally::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::CollectionTally*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::CollectionTally::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::CollectionTally::ItemsEqual
// Il2CppName: ItemsEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::CollectionTally::*)(::Il2CppObject*, ::Il2CppObject*)>(&NUnit::Framework::Constraints::CollectionTally::ItemsEqual)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::CollectionTally*), "ItemsEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::CollectionTally::TryRemove
// Il2CppName: TryRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::CollectionTally::*)(::Il2CppObject*)>(&NUnit::Framework::Constraints::CollectionTally::TryRemove)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::CollectionTally*), "TryRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::CollectionTally::TryRemove
// Il2CppName: TryRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::CollectionTally::*)(::System::Collections::IEnumerable*)>(&NUnit::Framework::Constraints::CollectionTally::TryRemove)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::CollectionTally*), "TryRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
