// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.RuntimeFieldInfo
#include "System/Reflection/RuntimeFieldInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TypedReference
  struct TypedReference;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: RtFieldInfo
  class RtFieldInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::RtFieldInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RtFieldInfo*, "System.Reflection", "RtFieldInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.RtFieldInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class RtFieldInfo : public ::System::Reflection::RuntimeFieldInfo {
    public:
    // System.Object UnsafeGetValue(System.Object obj)
    // Offset: 0x1D6FB54
    ::Il2CppObject* UnsafeGetValue(::Il2CppObject* obj);
    // System.Void CheckConsistency(System.Object target)
    // Offset: 0x1D6FB58
    void CheckConsistency(::Il2CppObject* target);
    // System.Void UnsafeSetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    // Offset: 0x1D6FD10
    void UnsafeSetValue(::Il2CppObject* obj, ::Il2CppObject* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture);
    // protected System.Void .ctor()
    // Offset: 0x1D6BC28
    // Implemented from: System.Reflection.RuntimeFieldInfo
    // Base method: System.Void RuntimeFieldInfo::.ctor()
    // Base method: System.Void FieldInfo::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RtFieldInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::RtFieldInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RtFieldInfo*, creationType>()));
    }
    // public override System.Void SetValueDirect(System.TypedReference obj, System.Object value)
    // Offset: 0x1D6FD78
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Void FieldInfo::SetValueDirect(System.TypedReference obj, System.Object value)
    void SetValueDirect(::System::TypedReference obj, ::Il2CppObject* value);
  }; // System.Reflection.RtFieldInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::RtFieldInfo::UnsafeGetValue
// Il2CppName: UnsafeGetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::RtFieldInfo::*)(::Il2CppObject*)>(&System::Reflection::RtFieldInfo::UnsafeGetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RtFieldInfo*), "UnsafeGetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Reflection::RtFieldInfo::CheckConsistency
// Il2CppName: CheckConsistency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RtFieldInfo::*)(::Il2CppObject*)>(&System::Reflection::RtFieldInfo::CheckConsistency)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RtFieldInfo*), "CheckConsistency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::Reflection::RtFieldInfo::UnsafeSetValue
// Il2CppName: UnsafeSetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RtFieldInfo::*)(::Il2CppObject*, ::Il2CppObject*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*)>(&System::Reflection::RtFieldInfo::UnsafeSetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RtFieldInfo*), "UnsafeSetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, value, invokeAttr, binder, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::RtFieldInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::RtFieldInfo::SetValueDirect
// Il2CppName: SetValueDirect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RtFieldInfo::*)(::System::TypedReference, ::Il2CppObject*)>(&System::Reflection::RtFieldInfo::SetValueDirect)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "TypedReference")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RtFieldInfo*), "SetValueDirect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, value});
  }
};
