// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: NonRandomizedStringEqualityComparer
  class NonRandomizedStringEqualityComparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Generic::NonRandomizedStringEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::NonRandomizedStringEqualityComparer*, "System.Collections.Generic", "NonRandomizedStringEqualityComparer");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.NonRandomizedStringEqualityComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class NonRandomizedStringEqualityComparer : public ::System::Collections::Generic::EqualityComparer_1<::StringW> {
    public:
    // public System.Boolean Equals(System.String x, System.String y)
    // Offset: 0x1CF0DE4
    bool Equals(::StringW x, ::StringW y);
    // public System.Int32 GetHashCode(System.String obj)
    // Offset: 0x1CF0DF4
    int GetHashCode(::StringW obj);
    // public System.Void .ctor()
    // Offset: 0x1CF0E0C
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NonRandomizedStringEqualityComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::NonRandomizedStringEqualityComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NonRandomizedStringEqualityComparer*, creationType>()));
    }
  }; // System.Collections.Generic.NonRandomizedStringEqualityComparer
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Generic::NonRandomizedStringEqualityComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Generic::NonRandomizedStringEqualityComparer::*)(::StringW, ::StringW)>(&System::Collections::Generic::NonRandomizedStringEqualityComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::NonRandomizedStringEqualityComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::NonRandomizedStringEqualityComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Generic::NonRandomizedStringEqualityComparer::*)(::StringW)>(&System::Collections::Generic::NonRandomizedStringEqualityComparer::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::NonRandomizedStringEqualityComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::NonRandomizedStringEqualityComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
