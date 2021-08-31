// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.StringComparer
#include "System/StringComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.OrdinalComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class OrdinalComparer : public System::StringComparer {
    public:
    // private System.Boolean _ignoreCase
    // Size: 0x1
    // Offset: 0x10
    bool ignoreCase;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OrdinalComparer
    OrdinalComparer(bool ignoreCase_ = {}) noexcept : ignoreCase{ignoreCase_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return ignoreCase;
    }
    // Get instance field: private System.Boolean _ignoreCase
    bool _get__ignoreCase();
    // Set instance field: private System.Boolean _ignoreCase
    void _set__ignoreCase(bool value);
    // System.Void .ctor(System.Boolean ignoreCase)
    // Offset: 0x1D0EEC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OrdinalComparer* New_ctor(bool ignoreCase) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::OrdinalComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OrdinalComparer*, creationType>(ignoreCase)));
    }
    // public override System.Int32 Compare(System.String x, System.String y)
    // Offset: 0x1D0EF44
    // Implemented from: System.StringComparer
    // Base method: System.Int32 StringComparer::Compare(System.String x, System.String y)
    int Compare(::Il2CppString* x, ::Il2CppString* y);
    // public override System.Boolean Equals(System.String x, System.String y)
    // Offset: 0x1D0EF9C
    // Implemented from: System.StringComparer
    // Base method: System.Boolean StringComparer::Equals(System.String x, System.String y)
    bool Equals(::Il2CppString* x, ::Il2CppString* y);
    // public override System.Int32 GetHashCode(System.String obj)
    // Offset: 0x1D0F01C
    // Implemented from: System.StringComparer
    // Base method: System.Int32 StringComparer::GetHashCode(System.String obj)
    int GetHashCode(::Il2CppString* obj);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1D0F0D4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1D0F16C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.OrdinalComparer
  #pragma pack(pop)
  static check_size<sizeof(OrdinalComparer), 16 + sizeof(bool)> __System_OrdinalComparerSizeCheck;
  static_assert(sizeof(OrdinalComparer) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(System::OrdinalComparer*, "System", "OrdinalComparer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::OrdinalComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::OrdinalComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::OrdinalComparer::*)(::Il2CppString*, ::Il2CppString*)>(&System::OrdinalComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::OrdinalComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::OrdinalComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::OrdinalComparer::*)(::Il2CppString*, ::Il2CppString*)>(&System::OrdinalComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::OrdinalComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::OrdinalComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::OrdinalComparer::*)(::Il2CppString*)>(&System::OrdinalComparer::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::OrdinalComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::OrdinalComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::OrdinalComparer::*)(::Il2CppObject*)>(&System::OrdinalComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::OrdinalComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::OrdinalComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::OrdinalComparer::*)()>(&System::OrdinalComparer::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::OrdinalComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
