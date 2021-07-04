// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.MethodBase
#include "System/Reflection/MethodBase.hpp"
// Including type: System.Runtime.InteropServices._ConstructorInfo
#include "System/Runtime/InteropServices/_ConstructorInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: MemberTypes
  struct MemberTypes;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.ConstructorInfo
  // [ComDefaultInterfaceAttribute] Offset: D7C1C0
  // [ClassInterfaceAttribute] Offset: D7C1C0
  // [ComVisibleAttribute] Offset: D7C1C0
  class ConstructorInfo : public System::Reflection::MethodBase/*, public System::Runtime::InteropServices::_ConstructorInfo*/ {
    public:
    // Creating value type constructor for type: ConstructorInfo
    ConstructorInfo() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::InteropServices::_ConstructorInfo
    operator System::Runtime::InteropServices::_ConstructorInfo() noexcept {
      return *reinterpret_cast<System::Runtime::InteropServices::_ConstructorInfo*>(this);
    }
    // [ComVisibleAttribute] Offset: 0xD813FC
    // Get static field: static public readonly System.String ConstructorName
    static ::Il2CppString* _get_ConstructorName();
    // Set static field: static public readonly System.String ConstructorName
    static void _set_ConstructorName(::Il2CppString* value);
    // [ComVisibleAttribute] Offset: 0xD81410
    // Get static field: static public readonly System.String TypeConstructorName
    static ::Il2CppString* _get_TypeConstructorName();
    // Set static field: static public readonly System.String TypeConstructorName
    static void _set_TypeConstructorName(::Il2CppString* value);
    // public System.Object Invoke(System.Object[] parameters)
    // Offset: 0x1C757DC
    ::Il2CppObject* Invoke(::Array<::Il2CppObject*>* parameters);
    // public System.Object Invoke(System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* Invoke(System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* parameters, System::Globalization::CultureInfo* culture);
    // static private System.Void .cctor()
    // Offset: 0x1C75944
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x1C757CC
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Void MethodBase::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstructorInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::ConstructorInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstructorInfo*, creationType>()));
    }
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0x1C757D4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    System::Reflection::MemberTypes get_MemberType();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1C75888
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1C75894
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Int32 MethodBase::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.ConstructorInfo
  #pragma pack(pop)
  // static public System.Boolean op_Equality(System.Reflection.ConstructorInfo left, System.Reflection.ConstructorInfo right)
  // Offset: 0x1C7589C
  bool operator ==(System::Reflection::ConstructorInfo* left, System::Reflection::ConstructorInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.ConstructorInfo left, System.Reflection.ConstructorInfo right)
  // Offset: 0x1C758E8
  bool operator !=(System::Reflection::ConstructorInfo* left, System::Reflection::ConstructorInfo& right);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::ConstructorInfo*, "System.Reflection", "ConstructorInfo");
// Writing includes for template specializations
#include "System/Reflection/BindingFlags.hpp"
#include "System/Reflection/Binder.hpp"
#include "System/Globalization/CultureInfo.hpp"
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::ConstructorInfo::*)(::Array<::Il2CppObject*>*)>(&System::Reflection::ConstructorInfo::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ConstructorInfo*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::ConstructorInfo::*)(System::Reflection::BindingFlags, System::Reflection::Binder*, ::Array<::Il2CppObject*>*, System::Globalization::CultureInfo*)>(&System::Reflection::ConstructorInfo::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ConstructorInfo*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Reflection::BindingFlags>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::Binder*>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppObject*>*>(), ::il2cpp_utils::ExtractIndependentType<System::Globalization::CultureInfo*>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Reflection::ConstructorInfo::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ConstructorInfo*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::get_MemberType
// Il2CppName: get_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MemberTypes (System::Reflection::ConstructorInfo::*)()>(&System::Reflection::ConstructorInfo::get_MemberType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ConstructorInfo*), "get_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::ConstructorInfo::*)(::Il2CppObject*)>(&System::Reflection::ConstructorInfo::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ConstructorInfo*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::ConstructorInfo::*)()>(&System::Reflection::ConstructorInfo::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ConstructorInfo*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::ConstructorInfo::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
