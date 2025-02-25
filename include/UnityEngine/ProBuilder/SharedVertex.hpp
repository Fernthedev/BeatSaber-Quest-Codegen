// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IEnumerable`1 because it is already included!
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SharedVertex
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: E5B6E4
  class SharedVertex : public ::Il2CppObject/*, public System::Collections::Generic::ICollection_1<int>*/ {
    public:
    // Nested type: UnityEngine::ProBuilder::SharedVertex::$$c
    class $$c;
    // [FormerlySerializedAsAttribute] Offset: 0xE5DB0C
    // [FormerlySerializedAsAttribute] Offset: 0xE5DB0C
    // private System.Int32[] m_Vertices
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* m_Vertices;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: SharedVertex
    SharedVertex(::Array<int>* m_Vertices_ = {}) noexcept : m_Vertices{m_Vertices_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::ICollection_1<int>
    operator System::Collections::Generic::ICollection_1<int>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::ICollection_1<int>*>(this);
    }
    // Creating conversion operator: operator ::Array<int>*
    constexpr operator ::Array<int>*() const noexcept {
      return m_Vertices;
    }
    // Get instance field reference: private System.Int32[] m_Vertices
    ::Array<int>*& dyn_m_Vertices();
    // System.Int32[] get_arrayInternal()
    // Offset: 0x22C2174
    ::Array<int>* get_arrayInternal();
    // public System.Int32 get_Item(System.Int32 i)
    // Offset: 0x22C2318
    int get_Item(int i);
    // public System.Void set_Item(System.Int32 i, System.Int32 value)
    // Offset: 0x22C2354
    void set_Item(int i, int value);
    // public System.Int32 get_Count()
    // Offset: 0x22C22FC
    int get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x22C2678
    bool get_IsReadOnly();
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.Int32> indexes)
    // Offset: 0x22C217C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SharedVertex* New_ctor(System::Collections::Generic::IEnumerable_1<int>* indexes) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SharedVertex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SharedVertex*, creationType>(indexes)));
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.SharedVertex sharedVertex)
    // Offset: 0x22C222C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SharedVertex* New_ctor(UnityEngine::ProBuilder::SharedVertex* sharedVertex) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SharedVertex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SharedVertex*, creationType>(sharedVertex)));
    }
    // public System.Collections.Generic.IEnumerator`1<System.Int32> GetEnumerator()
    // Offset: 0x22C2390
    System::Collections::Generic::IEnumerator_1<int>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x22C249C
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void Add(System.Int32 item)
    // Offset: 0x22C24A0
    void Add(int item);
    // public System.Void Clear()
    // Offset: 0x22C2508
    void Clear();
    // public System.Boolean Contains(System.Int32 item)
    // Offset: 0x22C2560
    bool Contains(int item);
    // public System.Void CopyTo(System.Int32[] array, System.Int32 arrayIndex)
    // Offset: 0x22C25CC
    void CopyTo(::Array<int>* array, int arrayIndex);
    // public System.Boolean Remove(System.Int32 item)
    // Offset: 0x22C25E8
    bool Remove(int item);
    // static public System.Void GetSharedVertexLookup(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.SharedVertex> sharedVertices, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x22C2694
    static void GetSharedVertexLookup(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex*>* sharedVertices, System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // System.Void ShiftIndexes(System.Int32 offset)
    // Offset: 0x22C2A10
    void ShiftIndexes(int offset);
    // static UnityEngine.ProBuilder.SharedVertex[] ToSharedVertices(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>> lookup)
    // Offset: 0x22C2A7C
    static ::Array<UnityEngine::ProBuilder::SharedVertex*>* ToSharedVertices(System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<int, int>>* lookup);
    // static private UnityEngine.ProBuilder.SharedVertex[] ToSharedVertices(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>> list)
    // Offset: 0x22C2ED0
    static ::Array<UnityEngine::ProBuilder::SharedVertex*>* ToSharedVertices(System::Collections::Generic::List_1<System::Collections::Generic::List_1<int>*>* list);
    // static public UnityEngine.ProBuilder.SharedVertex[] GetSharedVerticesWithPositions(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions)
    // Offset: 0x22C302C
    static ::Array<UnityEngine::ProBuilder::SharedVertex*>* GetSharedVerticesWithPositions(System::Collections::Generic::IList_1<UnityEngine::Vector3>* positions);
    // static UnityEngine.ProBuilder.SharedVertex[] RemoveAndShift(System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup, System.Collections.Generic.IEnumerable`1<System.Int32> remove)
    // Offset: 0x22C3484
    static ::Array<UnityEngine::ProBuilder::SharedVertex*>* RemoveAndShift(System::Collections::Generic::Dictionary_2<int, int>* lookup, System::Collections::Generic::IEnumerable_1<int>* remove);
    // static UnityEngine.ProBuilder.SharedVertex[] SortedRemoveAndShift(System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup, System.Collections.Generic.List`1<System.Int32> remove)
    // Offset: 0x22C351C
    static ::Array<UnityEngine::ProBuilder::SharedVertex*>* SortedRemoveAndShift(System::Collections::Generic::Dictionary_2<int, int>* lookup, System::Collections::Generic::List_1<int>* remove);
    // static System.Void SetCoincident(ref System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup, System.Collections.Generic.IEnumerable`1<System.Int32> vertices)
    // Offset: 0x22C3804
    static void SetCoincident(ByRef<System::Collections::Generic::Dictionary_2<int, int>*> lookup, System::Collections::Generic::IEnumerable_1<int>* vertices);
    // public override System.String ToString()
    // Offset: 0x22C2440
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.SharedVertex
  #pragma pack(pop)
  static check_size<sizeof(SharedVertex), 16 + sizeof(::Array<int>*)> __UnityEngine_ProBuilder_SharedVertexSizeCheck;
  static_assert(sizeof(SharedVertex) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SharedVertex*, "UnityEngine.ProBuilder", "SharedVertex");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::get_arrayInternal
// Il2CppName: get_arrayInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (UnityEngine::ProBuilder::SharedVertex::*)()>(&UnityEngine::ProBuilder::SharedVertex::get_arrayInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "get_arrayInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::SharedVertex::*)(int)>(&UnityEngine::ProBuilder::SharedVertex::get_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::SharedVertex::*)(int, int)>(&UnityEngine::ProBuilder::SharedVertex::set_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::SharedVertex::*)()>(&UnityEngine::ProBuilder::SharedVertex::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::SharedVertex::*)()>(&UnityEngine::ProBuilder::SharedVertex::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<int>* (UnityEngine::ProBuilder::SharedVertex::*)()>(&UnityEngine::ProBuilder::SharedVertex::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::ProBuilder::SharedVertex::*)()>(&UnityEngine::ProBuilder::SharedVertex::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::SharedVertex::*)(int)>(&UnityEngine::ProBuilder::SharedVertex::Add)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::SharedVertex::*)()>(&UnityEngine::ProBuilder::SharedVertex::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::SharedVertex::*)(int)>(&UnityEngine::ProBuilder::SharedVertex::Contains)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::SharedVertex::*)(::Array<int>*, int)>(&UnityEngine::ProBuilder::SharedVertex::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, arrayIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::SharedVertex::*)(int)>(&UnityEngine::ProBuilder::SharedVertex::Remove)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::GetSharedVertexLookup
// Il2CppName: GetSharedVertexLookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex*>*, System::Collections::Generic::Dictionary_2<int, int>*)>(&UnityEngine::ProBuilder::SharedVertex::GetSharedVertexLookup)> {
  static const MethodInfo* get() {
    static auto* sharedVertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "SharedVertex")})->byval_arg;
    static auto* lookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "GetSharedVertexLookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sharedVertices, lookup});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::ShiftIndexes
// Il2CppName: ShiftIndexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::SharedVertex::*)(int)>(&UnityEngine::ProBuilder::SharedVertex::ShiftIndexes)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "ShiftIndexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::ToSharedVertices
// Il2CppName: ToSharedVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::ProBuilder::SharedVertex*>* (*)(System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<int, int>>*)>(&UnityEngine::ProBuilder::SharedVertex::ToSharedVertices)> {
  static const MethodInfo* get() {
    static auto* lookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "ToSharedVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lookup});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::ToSharedVertices
// Il2CppName: ToSharedVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::ProBuilder::SharedVertex*>* (*)(System::Collections::Generic::List_1<System::Collections::Generic::List_1<int>*>*)>(&UnityEngine::ProBuilder::SharedVertex::ToSharedVertices)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "ToSharedVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::GetSharedVerticesWithPositions
// Il2CppName: GetSharedVerticesWithPositions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::ProBuilder::SharedVertex*>* (*)(System::Collections::Generic::IList_1<UnityEngine::Vector3>*)>(&UnityEngine::ProBuilder::SharedVertex::GetSharedVerticesWithPositions)> {
  static const MethodInfo* get() {
    static auto* positions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "GetSharedVerticesWithPositions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::RemoveAndShift
// Il2CppName: RemoveAndShift
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::ProBuilder::SharedVertex*>* (*)(System::Collections::Generic::Dictionary_2<int, int>*, System::Collections::Generic::IEnumerable_1<int>*)>(&UnityEngine::ProBuilder::SharedVertex::RemoveAndShift)> {
  static const MethodInfo* get() {
    static auto* lookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* remove = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "RemoveAndShift", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lookup, remove});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::SortedRemoveAndShift
// Il2CppName: SortedRemoveAndShift
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::ProBuilder::SharedVertex*>* (*)(System::Collections::Generic::Dictionary_2<int, int>*, System::Collections::Generic::List_1<int>*)>(&UnityEngine::ProBuilder::SharedVertex::SortedRemoveAndShift)> {
  static const MethodInfo* get() {
    static auto* lookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* remove = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "SortedRemoveAndShift", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lookup, remove});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::SetCoincident
// Il2CppName: SetCoincident
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Collections::Generic::Dictionary_2<int, int>*>, System::Collections::Generic::IEnumerable_1<int>*)>(&UnityEngine::ProBuilder::SharedVertex::SetCoincident)> {
  static const MethodInfo* get() {
    static auto* lookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "SetCoincident", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lookup, vertices});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::SharedVertex::*)()>(&UnityEngine::ProBuilder::SharedVertex::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
