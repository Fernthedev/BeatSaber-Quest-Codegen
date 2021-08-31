// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: MetricIdentifier
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct MetricIdentifier/*, public System::ValueType, public System::IComparable_1<GlobalNamespace::MetricIdentifier>, public System::IEquatable_1<GlobalNamespace::MetricIdentifier>*/ {
    public:
    // Nested type: GlobalNamespace::MetricIdentifier::$GetTags$d__13
    class $GetTags$d__13;
    // public readonly System.String metricName
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* metricName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [TupleElementNamesAttribute] Offset: 0xE0F9F8
    // private readonly System.ValueTuple`2<System.String,System.String> _tag0
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> tag0;
    // [TupleElementNamesAttribute] Offset: 0xE0FA80
    // private readonly System.ValueTuple`2<System.String,System.String> _tag1
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> tag1;
    // [TupleElementNamesAttribute] Offset: 0xE0FB08
    // private readonly System.ValueTuple`2<System.String,System.String> _tag2
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> tag2;
    // [TupleElementNamesAttribute] Offset: 0xE0FB90
    // private readonly System.ValueTuple`2<System.String,System.String> _tag3
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> tag3;
    // Creating value type constructor for type: MetricIdentifier
    constexpr MetricIdentifier(::Il2CppString* metricName_ = {}, System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> tag0_ = {}, System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> tag1_ = {}, System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> tag2_ = {}, System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> tag3_ = {}) noexcept : metricName{metricName_}, tag0{tag0_}, tag1{tag1_}, tag2{tag2_}, tag3{tag3_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable_1<GlobalNamespace::MetricIdentifier>
    operator System::IComparable_1<GlobalNamespace::MetricIdentifier>() noexcept {
      return *reinterpret_cast<System::IComparable_1<GlobalNamespace::MetricIdentifier>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::MetricIdentifier>
    operator System::IEquatable_1<GlobalNamespace::MetricIdentifier>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::MetricIdentifier>*>(this);
    }
    // Get instance field: public readonly System.String metricName
    ::Il2CppString* _get_metricName();
    // Set instance field: public readonly System.String metricName
    void _set_metricName(::Il2CppString* value);
    // Get instance field: private readonly System.ValueTuple`2<System.String,System.String> _tag0
    System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> _get__tag0();
    // Set instance field: private readonly System.ValueTuple`2<System.String,System.String> _tag0
    void _set__tag0(System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> value);
    // Get instance field: private readonly System.ValueTuple`2<System.String,System.String> _tag1
    System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> _get__tag1();
    // Set instance field: private readonly System.ValueTuple`2<System.String,System.String> _tag1
    void _set__tag1(System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> value);
    // Get instance field: private readonly System.ValueTuple`2<System.String,System.String> _tag2
    System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> _get__tag2();
    // Set instance field: private readonly System.ValueTuple`2<System.String,System.String> _tag2
    void _set__tag2(System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> value);
    // Get instance field: private readonly System.ValueTuple`2<System.String,System.String> _tag3
    System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> _get__tag3();
    // Set instance field: private readonly System.ValueTuple`2<System.String,System.String> _tag3
    void _set__tag3(System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> value);
    // public System.Int32 get_tagCount()
    // Offset: 0x16EB014
    int get_tagCount();
    // public System.Void .ctor(System.String metricName, System.ValueTuple`2<System.String,System.String> tag0, System.ValueTuple`2<System.String,System.String> tag1, System.ValueTuple`2<System.String,System.String> tag2, System.ValueTuple`2<System.String,System.String> tag3)
    // Offset: 0x16EA144
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  MetricIdentifier(::Il2CppString* metricName, System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> tag0, System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> tag1, System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> tag2, System::ValueTuple_2<::Il2CppString*, ::Il2CppString*> tag3)
    // public System.Int32 CompareTo(MetricIdentifier other)
    // Offset: 0x16EB058
    int CompareTo(GlobalNamespace::MetricIdentifier other);
    // public System.Boolean Equals(MetricIdentifier other)
    // Offset: 0x16EB0F4
    bool Equals(GlobalNamespace::MetricIdentifier other);
    // public System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.String,System.String>> GetTags()
    // Offset: 0x16EB66C
    System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<::Il2CppString*, ::Il2CppString*>>* GetTags();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x16EB138
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x16EB1DC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x16EB2BC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // MetricIdentifier
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MetricIdentifier, "", "MetricIdentifier");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::get_tagCount
// Il2CppName: get_tagCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MetricIdentifier::*)()>(&GlobalNamespace::MetricIdentifier::get_tagCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetricIdentifier), "get_tagCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::MetricIdentifier
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MetricIdentifier::*)(GlobalNamespace::MetricIdentifier)>(&GlobalNamespace::MetricIdentifier::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "MetricIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetricIdentifier), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MetricIdentifier::*)(GlobalNamespace::MetricIdentifier)>(&GlobalNamespace::MetricIdentifier::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "MetricIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetricIdentifier), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::GetTags
// Il2CppName: GetTags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<::Il2CppString*, ::Il2CppString*>>* (GlobalNamespace::MetricIdentifier::*)()>(&GlobalNamespace::MetricIdentifier::GetTags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetricIdentifier), "GetTags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MetricIdentifier::*)(::Il2CppObject*)>(&GlobalNamespace::MetricIdentifier::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetricIdentifier), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MetricIdentifier::*)()>(&GlobalNamespace::MetricIdentifier::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetricIdentifier), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MetricIdentifier::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::MetricIdentifier::*)()>(&GlobalNamespace::MetricIdentifier::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetricIdentifier), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
