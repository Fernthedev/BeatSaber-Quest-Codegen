// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.CollectionBase
  // [ComVisibleAttribute] Offset: D7FBF4
  class CollectionBase : public ::Il2CppObject/*, public System::Collections::IList*/ {
    public:
    // private System.Collections.ArrayList list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // Creating value type constructor for type: CollectionBase
    CollectionBase(System::Collections::ArrayList* list_ = {}) noexcept : list{list_} {}
    // Creating interface conversion operator: operator System::Collections::IList
    operator System::Collections::IList() noexcept {
      return *reinterpret_cast<System::Collections::IList*>(this);
    }
    // Creating conversion operator: operator System::Collections::ArrayList*
    constexpr operator System::Collections::ArrayList*() const noexcept {
      return list;
    }
    // protected System.Collections.ArrayList get_InnerList()
    // Offset: 0x1784808
    System::Collections::ArrayList* get_InnerList();
    // public System.Int32 get_Count()
    // Offset: 0x1784870
    int get_Count();
    // public System.Void Clear()
    // Offset: 0x178488C
    void Clear();
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x17848E8
    void RemoveAt(int index);
    // private System.Boolean System.Collections.IList.get_IsReadOnly()
    // Offset: 0x1784AFC
    bool System_Collections_IList_get_IsReadOnly();
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1784B24
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // private System.Object System.Collections.IList.get_Item(System.Int32 index)
    // Offset: 0x1784B64
    ::Il2CppObject* System_Collections_IList_get_Item(int index);
    // private System.Void System.Collections.IList.set_Item(System.Int32 index, System.Object value)
    // Offset: 0x1784C4C
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value);
    // private System.Boolean System.Collections.IList.Contains(System.Object value)
    // Offset: 0x1784E70
    bool System_Collections_IList_Contains(::Il2CppObject* value);
    // private System.Int32 System.Collections.IList.Add(System.Object value)
    // Offset: 0x1784EA8
    int System_Collections_IList_Add(::Il2CppObject* value);
    // private System.Void System.Collections.IList.Remove(System.Object value)
    // Offset: 0x1785034
    void System_Collections_IList_Remove(::Il2CppObject* value);
    // private System.Int32 System.Collections.IList.IndexOf(System.Object value)
    // Offset: 0x178521C
    int System_Collections_IList_IndexOf(::Il2CppObject* value);
    // private System.Void System.Collections.IList.Insert(System.Int32 index, System.Object value)
    // Offset: 0x1785254
    void System_Collections_IList_Insert(int index, ::Il2CppObject* value);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1785440
    System::Collections::IEnumerator* GetEnumerator();
    // protected System.Void OnSet(System.Int32 index, System.Object oldValue, System.Object newValue)
    // Offset: 0x1785468
    void OnSet(int index, ::Il2CppObject* oldValue, ::Il2CppObject* newValue);
    // protected System.Void OnInsert(System.Int32 index, System.Object value)
    // Offset: 0x178546C
    void OnInsert(int index, ::Il2CppObject* value);
    // protected System.Void OnClear()
    // Offset: 0x1785470
    void OnClear();
    // protected System.Void OnRemove(System.Int32 index, System.Object value)
    // Offset: 0x1785474
    void OnRemove(int index, ::Il2CppObject* value);
    // protected System.Void OnValidate(System.Object value)
    // Offset: 0x1785478
    void OnValidate(::Il2CppObject* value);
    // protected System.Void OnSetComplete(System.Int32 index, System.Object oldValue, System.Object newValue)
    // Offset: 0x17854F4
    void OnSetComplete(int index, ::Il2CppObject* oldValue, ::Il2CppObject* newValue);
    // protected System.Void OnInsertComplete(System.Int32 index, System.Object value)
    // Offset: 0x17854F8
    void OnInsertComplete(int index, ::Il2CppObject* value);
    // protected System.Void OnClearComplete()
    // Offset: 0x17854FC
    void OnClearComplete();
    // protected System.Void OnRemoveComplete(System.Int32 index, System.Object value)
    // Offset: 0x1785500
    void OnRemoveComplete(int index, ::Il2CppObject* value);
    // protected System.Void .ctor()
    // Offset: 0x17847A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CollectionBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::CollectionBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CollectionBase*, creationType>()));
    }
  }; // System.Collections.CollectionBase
  #pragma pack(pop)
  static check_size<sizeof(CollectionBase), 16 + sizeof(System::Collections::ArrayList*)> __System_Collections_CollectionBaseSizeCheck;
  static_assert(sizeof(CollectionBase) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::CollectionBase*, "System.Collections", "CollectionBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::CollectionBase::get_InnerList
// Il2CppName: get_InnerList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ArrayList* (System::Collections::CollectionBase::*)()>(&System::Collections::CollectionBase::get_InnerList)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "get_InnerList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::CollectionBase::*)()>(&System::Collections::CollectionBase::get_Count)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CollectionBase::*)()>(&System::Collections::CollectionBase::Clear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CollectionBase::*)(int)>(&System::Collections::CollectionBase::RemoveAt)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::System_Collections_IList_get_IsReadOnly
// Il2CppName: System.Collections.IList.get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::CollectionBase::*)()>(&System::Collections::CollectionBase::System_Collections_IList_get_IsReadOnly)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "System.Collections.IList.get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::System_Collections_ICollection_CopyTo
// Il2CppName: System.Collections.ICollection.CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CollectionBase::*)(System::Array*, int)>(&System::Collections::CollectionBase::System_Collections_ICollection_CopyTo)> {
  const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::System_Collections_IList_get_Item
// Il2CppName: System.Collections.IList.get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::CollectionBase::*)(int)>(&System::Collections::CollectionBase::System_Collections_IList_get_Item)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "System.Collections.IList.get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::System_Collections_IList_set_Item
// Il2CppName: System.Collections.IList.set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CollectionBase::*)(int, ::Il2CppObject*)>(&System::Collections::CollectionBase::System_Collections_IList_set_Item)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "System.Collections.IList.set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::System_Collections_IList_Contains
// Il2CppName: System.Collections.IList.Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::CollectionBase::*)(::Il2CppObject*)>(&System::Collections::CollectionBase::System_Collections_IList_Contains)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "System.Collections.IList.Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::System_Collections_IList_Add
// Il2CppName: System.Collections.IList.Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::CollectionBase::*)(::Il2CppObject*)>(&System::Collections::CollectionBase::System_Collections_IList_Add)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "System.Collections.IList.Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::System_Collections_IList_Remove
// Il2CppName: System.Collections.IList.Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CollectionBase::*)(::Il2CppObject*)>(&System::Collections::CollectionBase::System_Collections_IList_Remove)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "System.Collections.IList.Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::System_Collections_IList_IndexOf
// Il2CppName: System.Collections.IList.IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::CollectionBase::*)(::Il2CppObject*)>(&System::Collections::CollectionBase::System_Collections_IList_IndexOf)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "System.Collections.IList.IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::System_Collections_IList_Insert
// Il2CppName: System.Collections.IList.Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CollectionBase::*)(int, ::Il2CppObject*)>(&System::Collections::CollectionBase::System_Collections_IList_Insert)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "System.Collections.IList.Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Collections::CollectionBase::*)()>(&System::Collections::CollectionBase::GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::OnSet
// Il2CppName: OnSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CollectionBase::*)(int, ::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::CollectionBase::OnSet)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* oldValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* newValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "OnSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, oldValue, newValue});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::OnInsert
// Il2CppName: OnInsert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CollectionBase::*)(int, ::Il2CppObject*)>(&System::Collections::CollectionBase::OnInsert)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "OnInsert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::OnClear
// Il2CppName: OnClear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CollectionBase::*)()>(&System::Collections::CollectionBase::OnClear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "OnClear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::OnRemove
// Il2CppName: OnRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CollectionBase::*)(int, ::Il2CppObject*)>(&System::Collections::CollectionBase::OnRemove)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "OnRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CollectionBase::*)(::Il2CppObject*)>(&System::Collections::CollectionBase::OnValidate)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::OnSetComplete
// Il2CppName: OnSetComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CollectionBase::*)(int, ::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::CollectionBase::OnSetComplete)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* oldValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* newValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "OnSetComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, oldValue, newValue});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::OnInsertComplete
// Il2CppName: OnInsertComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CollectionBase::*)(int, ::Il2CppObject*)>(&System::Collections::CollectionBase::OnInsertComplete)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "OnInsertComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::OnClearComplete
// Il2CppName: OnClearComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CollectionBase::*)()>(&System::Collections::CollectionBase::OnClearComplete)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "OnClearComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::OnRemoveComplete
// Il2CppName: OnRemoveComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CollectionBase::*)(int, ::Il2CppObject*)>(&System::Collections::CollectionBase::OnRemoveComplete)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CollectionBase*), "OnRemoveComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::CollectionBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
