// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: EdgeLookup
  struct EdgeLookup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EdgeLookup, "UnityEngine.ProBuilder", "EdgeLookup");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.EdgeLookup
  // [TokenAttribute] Offset: FFFFFFFF
  struct EdgeLookup/*, public System::ValueType, public System::IEquatable_1<UnityEngine::ProBuilder::EdgeLookup>*/ {
    public:
    // Nested type: UnityEngine::ProBuilder::EdgeLookup::$$c__DisplayClass16_0
    class $$c__DisplayClass16_0;
    public:
    // private UnityEngine.ProBuilder.Edge m_Local
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::ProBuilder::Edge m_Local;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Edge) == 0x8);
    // private UnityEngine.ProBuilder.Edge m_Common
    // Size: 0x8
    // Offset: 0x8
    UnityEngine::ProBuilder::Edge m_Common;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Edge) == 0x8);
    public:
    // Creating value type constructor for type: EdgeLookup
    constexpr EdgeLookup(UnityEngine::ProBuilder::Edge m_Local_ = {}, UnityEngine::ProBuilder::Edge m_Common_ = {}) noexcept : m_Local{m_Local_}, m_Common{m_Common_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ProBuilder::EdgeLookup>
    operator System::IEquatable_1<UnityEngine::ProBuilder::EdgeLookup>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ProBuilder::EdgeLookup>*>(this);
    }
    // Get instance field reference: private UnityEngine.ProBuilder.Edge m_Local
    UnityEngine::ProBuilder::Edge& dyn_m_Local();
    // Get instance field reference: private UnityEngine.ProBuilder.Edge m_Common
    UnityEngine::ProBuilder::Edge& dyn_m_Common();
    // public UnityEngine.ProBuilder.Edge get_local()
    // Offset: 0x1F3810C
    UnityEngine::ProBuilder::Edge get_local();
    // public System.Void set_local(UnityEngine.ProBuilder.Edge value)
    // Offset: 0x1F38114
    void set_local(UnityEngine::ProBuilder::Edge value);
    // public UnityEngine.ProBuilder.Edge get_common()
    // Offset: 0x1F3811C
    UnityEngine::ProBuilder::Edge get_common();
    // public System.Void set_common(UnityEngine.ProBuilder.Edge value)
    // Offset: 0x1F38124
    void set_common(UnityEngine::ProBuilder::Edge value);
    // public System.Void .ctor(UnityEngine.ProBuilder.Edge common, UnityEngine.ProBuilder.Edge local)
    // Offset: 0x1F3812C
    // ABORTED: conflicts with another method.  EdgeLookup(UnityEngine::ProBuilder::Edge common, UnityEngine::ProBuilder::Edge local);
    // public System.Void .ctor(System.Int32 cx, System.Int32 cy, System.Int32 x, System.Int32 y)
    // Offset: 0x1F38134
    EdgeLookup(int cx, int cy, int x, int y);
    // public System.Boolean Equals(UnityEngine.ProBuilder.EdgeLookup other)
    // Offset: 0x1F3819C
    bool Equals(UnityEngine::ProBuilder::EdgeLookup other);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.EdgeLookup> GetEdgeLookup(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x1F38588
    static System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::EdgeLookup>* GetEdgeLookup(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // static public System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.EdgeLookup> GetEdgeLookupHashSet(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x1F3864C
    static System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup>* GetEdgeLookupHashSet(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1F381CC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1F3826C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1F383E4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.ProBuilder.EdgeLookup
  #pragma pack(pop)
  static check_size<sizeof(EdgeLookup), 8 + sizeof(UnityEngine::ProBuilder::Edge)> __UnityEngine_ProBuilder_EdgeLookupSizeCheck;
  static_assert(sizeof(EdgeLookup) == 0x10);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.EdgeLookup a, UnityEngine.ProBuilder.EdgeLookup b)
  // Offset: 0x1F38298
  bool operator ==(const UnityEngine::ProBuilder::EdgeLookup& a, const UnityEngine::ProBuilder::EdgeLookup& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.EdgeLookup a, UnityEngine.ProBuilder.EdgeLookup b)
  // Offset: 0x1F3833C
  bool operator !=(const UnityEngine::ProBuilder::EdgeLookup& a, const UnityEngine::ProBuilder::EdgeLookup& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::get_local
// Il2CppName: get_local
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::EdgeLookup::*)()>(&UnityEngine::ProBuilder::EdgeLookup::get_local)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeLookup), "get_local", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::set_local
// Il2CppName: set_local
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::EdgeLookup::*)(UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::EdgeLookup::set_local)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeLookup), "set_local", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::get_common
// Il2CppName: get_common
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::EdgeLookup::*)()>(&UnityEngine::ProBuilder::EdgeLookup::get_common)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeLookup), "get_common", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::set_common
// Il2CppName: set_common
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::EdgeLookup::*)(UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::EdgeLookup::set_common)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeLookup), "set_common", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::EdgeLookup
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::EdgeLookup
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::EdgeLookup::*)(UnityEngine::ProBuilder::EdgeLookup)>(&UnityEngine::ProBuilder::EdgeLookup::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "EdgeLookup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeLookup), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::GetEdgeLookup
// Il2CppName: GetEdgeLookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::EdgeLookup>* (*)(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*, System::Collections::Generic::Dictionary_2<int, int>*)>(&UnityEngine::ProBuilder::EdgeLookup::GetEdgeLookup)> {
  static const MethodInfo* get() {
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    static auto* lookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeLookup), "GetEdgeLookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edges, lookup});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::GetEdgeLookupHashSet
// Il2CppName: GetEdgeLookupHashSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup>* (*)(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*, System::Collections::Generic::Dictionary_2<int, int>*)>(&UnityEngine::ProBuilder::EdgeLookup::GetEdgeLookupHashSet)> {
  static const MethodInfo* get() {
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    static auto* lookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeLookup), "GetEdgeLookupHashSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edges, lookup});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::EdgeLookup::*)(::Il2CppObject*)>(&UnityEngine::ProBuilder::EdgeLookup::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeLookup), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::EdgeLookup::*)()>(&UnityEngine::ProBuilder::EdgeLookup::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeLookup), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::EdgeLookup::*)()>(&UnityEngine::ProBuilder::EdgeLookup::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeLookup), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
