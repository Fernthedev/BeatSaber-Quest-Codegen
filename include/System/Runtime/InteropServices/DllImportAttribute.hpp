// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.InteropServices.CharSet
#include "System/Runtime/InteropServices/CharSet.hpp"
// Including type: System.Runtime.InteropServices.CallingConvention
#include "System/Runtime/InteropServices/CallingConvention.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: RuntimeMethodInfo
  class RuntimeMethodInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x2E
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.DllImportAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9E3E4
  // [AttributeUsageAttribute] Offset: D9E3E4
  class DllImportAttribute : public System::Attribute {
    public:
    // System.String _val
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* val;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String EntryPoint
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* EntryPoint;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Runtime.InteropServices.CharSet CharSet
    // Size: 0x4
    // Offset: 0x20
    System::Runtime::InteropServices::CharSet CharSet;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::CharSet) == 0x4);
    // public System.Boolean SetLastError
    // Size: 0x1
    // Offset: 0x24
    bool SetLastError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean ExactSpelling
    // Size: 0x1
    // Offset: 0x25
    bool ExactSpelling;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean PreserveSig
    // Size: 0x1
    // Offset: 0x26
    bool PreserveSig;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: PreserveSig and: CallingConvention
    char __padding5[0x1] = {};
    // public System.Runtime.InteropServices.CallingConvention CallingConvention
    // Size: 0x4
    // Offset: 0x28
    System::Runtime::InteropServices::CallingConvention CallingConvention;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::CallingConvention) == 0x4);
    // public System.Boolean BestFitMapping
    // Size: 0x1
    // Offset: 0x2C
    bool BestFitMapping;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean ThrowOnUnmappableChar
    // Size: 0x1
    // Offset: 0x2D
    bool ThrowOnUnmappableChar;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DllImportAttribute
    DllImportAttribute(::Il2CppString* val_ = {}, ::Il2CppString* EntryPoint_ = {}, System::Runtime::InteropServices::CharSet CharSet_ = {}, bool SetLastError_ = {}, bool ExactSpelling_ = {}, bool PreserveSig_ = {}, System::Runtime::InteropServices::CallingConvention CallingConvention_ = {}, bool BestFitMapping_ = {}, bool ThrowOnUnmappableChar_ = {}) noexcept : val{val_}, EntryPoint{EntryPoint_}, CharSet{CharSet_}, SetLastError{SetLastError_}, ExactSpelling{ExactSpelling_}, PreserveSig{PreserveSig_}, CallingConvention{CallingConvention_}, BestFitMapping{BestFitMapping_}, ThrowOnUnmappableChar{ThrowOnUnmappableChar_} {}
    // Get instance field: System.String _val
    ::Il2CppString* _get__val();
    // Set instance field: System.String _val
    void _set__val(::Il2CppString* value);
    // Get instance field: public System.String EntryPoint
    ::Il2CppString* _get_EntryPoint();
    // Set instance field: public System.String EntryPoint
    void _set_EntryPoint(::Il2CppString* value);
    // Get instance field: public System.Runtime.InteropServices.CharSet CharSet
    System::Runtime::InteropServices::CharSet _get_CharSet();
    // Set instance field: public System.Runtime.InteropServices.CharSet CharSet
    void _set_CharSet(System::Runtime::InteropServices::CharSet value);
    // Get instance field: public System.Boolean SetLastError
    bool _get_SetLastError();
    // Set instance field: public System.Boolean SetLastError
    void _set_SetLastError(bool value);
    // Get instance field: public System.Boolean ExactSpelling
    bool _get_ExactSpelling();
    // Set instance field: public System.Boolean ExactSpelling
    void _set_ExactSpelling(bool value);
    // Get instance field: public System.Boolean PreserveSig
    bool _get_PreserveSig();
    // Set instance field: public System.Boolean PreserveSig
    void _set_PreserveSig(bool value);
    // Get instance field: public System.Runtime.InteropServices.CallingConvention CallingConvention
    System::Runtime::InteropServices::CallingConvention _get_CallingConvention();
    // Set instance field: public System.Runtime.InteropServices.CallingConvention CallingConvention
    void _set_CallingConvention(System::Runtime::InteropServices::CallingConvention value);
    // Get instance field: public System.Boolean BestFitMapping
    bool _get_BestFitMapping();
    // Set instance field: public System.Boolean BestFitMapping
    void _set_BestFitMapping(bool value);
    // Get instance field: public System.Boolean ThrowOnUnmappableChar
    bool _get_ThrowOnUnmappableChar();
    // Set instance field: public System.Boolean ThrowOnUnmappableChar
    void _set_ThrowOnUnmappableChar(bool value);
    // public System.String get_Value()
    // Offset: 0x1488344
    ::Il2CppString* get_Value();
    // System.Void .ctor(System.String dllName, System.String entryPoint, System.Runtime.InteropServices.CharSet charSet, System.Boolean exactSpelling, System.Boolean setLastError, System.Boolean preserveSig, System.Runtime.InteropServices.CallingConvention callingConvention, System.Boolean bestFitMapping, System.Boolean throwOnUnmappableChar)
    // Offset: 0x1488250
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DllImportAttribute* New_ctor(::Il2CppString* dllName, ::Il2CppString* entryPoint, System::Runtime::InteropServices::CharSet charSet, bool exactSpelling, bool setLastError, bool preserveSig, System::Runtime::InteropServices::CallingConvention callingConvention, bool bestFitMapping, bool throwOnUnmappableChar) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::DllImportAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DllImportAttribute*, creationType>(dllName, entryPoint, charSet, exactSpelling, setLastError, preserveSig, callingConvention, bestFitMapping, throwOnUnmappableChar)));
    }
    // public System.Void .ctor(System.String dllName)
    // Offset: 0x1488318
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DllImportAttribute* New_ctor(::Il2CppString* dllName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::DllImportAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DllImportAttribute*, creationType>(dllName)));
    }
    // static System.Attribute GetCustomAttribute(System.Reflection.RuntimeMethodInfo method)
    // Offset: 0x1488054
    static System::Attribute* GetCustomAttribute(System::Reflection::RuntimeMethodInfo* method);
    // static System.Boolean IsDefined(System.Reflection.RuntimeMethodInfo method)
    // Offset: 0x14882EC
    static bool IsDefined(System::Reflection::RuntimeMethodInfo* method);
  }; // System.Runtime.InteropServices.DllImportAttribute
  #pragma pack(pop)
  static check_size<sizeof(DllImportAttribute), 45 + sizeof(bool)> __System_Runtime_InteropServices_DllImportAttributeSizeCheck;
  static_assert(sizeof(DllImportAttribute) == 0x2E);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::DllImportAttribute*, "System.Runtime.InteropServices", "DllImportAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::DllImportAttribute::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::InteropServices::DllImportAttribute::*)()>(&System::Runtime::InteropServices::DllImportAttribute::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::DllImportAttribute*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::DllImportAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::DllImportAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::DllImportAttribute::GetCustomAttribute
// Il2CppName: GetCustomAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Attribute* (*)(System::Reflection::RuntimeMethodInfo*)>(&System::Runtime::InteropServices::DllImportAttribute::GetCustomAttribute)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "RuntimeMethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::DllImportAttribute*), "GetCustomAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::DllImportAttribute::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::RuntimeMethodInfo*)>(&System::Runtime::InteropServices::DllImportAttribute::IsDefined)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "RuntimeMethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::DllImportAttribute*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
