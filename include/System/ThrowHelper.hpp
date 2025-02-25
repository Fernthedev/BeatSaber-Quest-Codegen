// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ExceptionArgument
#include "System/ExceptionArgument.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: ExceptionResource
  struct ExceptionResource;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ThrowHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class ThrowHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ThrowHelper
    ThrowHelper() noexcept {}
    // static System.Void ThrowArgumentNullException(System.ExceptionArgument argument)
    // Offset: 0x1885E60
    static void ThrowArgumentNullException(System::ExceptionArgument argument);
    // static private System.Exception CreateArgumentNullException(System.ExceptionArgument argument)
    // Offset: 0x1885EAC
    static System::Exception* CreateArgumentNullException(System::ExceptionArgument argument);
    // static System.Void ThrowArgumentOutOfRangeException()
    // Offset: 0x1885F58
    static void ThrowArgumentOutOfRangeException();
    // static System.Void ThrowWrongValueTypeArgumentException(System.Object value, System.Type targetType)
    // Offset: 0x1886040
    static void ThrowWrongValueTypeArgumentException(::Il2CppObject* value, System::Type* targetType);
    // static System.Void ThrowArgumentException(System.ExceptionResource resource)
    // Offset: 0x1886138
    static void ThrowArgumentException(System::ExceptionResource resource);
    // static System.Void ThrowArgumentOutOfRangeException(System.ExceptionArgument argument, System.ExceptionResource resource)
    // Offset: 0x1885F6C
    static void ThrowArgumentOutOfRangeException(System::ExceptionArgument argument, System::ExceptionResource resource);
    // static System.Void ThrowInvalidOperationException(System.ExceptionResource resource)
    // Offset: 0x1886290
    static void ThrowInvalidOperationException(System::ExceptionResource resource);
    // static System.Void ThrowNotSupportedException(System.ExceptionResource resource)
    // Offset: 0x1886310
    static void ThrowNotSupportedException(System::ExceptionResource resource);
    // static System.Void IfNullAndNullsAreIllegalThenThrow(System.Object value, System.ExceptionArgument argName)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void IfNullAndNullsAreIllegalThenThrow(::Il2CppObject* value, System::ExceptionArgument argName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ThrowHelper::IfNullAndNullsAreIllegalThenThrow");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System", "ThrowHelper", "IfNullAndNullsAreIllegalThenThrow", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(argName)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, value, argName);
    }
    // static System.String GetArgumentName(System.ExceptionArgument argument)
    // Offset: 0x1886224
    static ::Il2CppString* GetArgumentName(System::ExceptionArgument argument);
    // static System.String GetResourceName(System.ExceptionResource resource)
    // Offset: 0x18861B8
    static ::Il2CppString* GetResourceName(System::ExceptionResource resource);
  }; // System.ThrowHelper
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::ThrowHelper*, "System", "ThrowHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ThrowHelper::ThrowArgumentNullException
// Il2CppName: ThrowArgumentNullException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::ExceptionArgument)>(&System::ThrowHelper::ThrowArgumentNullException)> {
  static const MethodInfo* get() {
    static auto* argument = &::il2cpp_utils::GetClassFromName("System", "ExceptionArgument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowArgumentNullException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argument});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::CreateArgumentNullException
// Il2CppName: CreateArgumentNullException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)(System::ExceptionArgument)>(&System::ThrowHelper::CreateArgumentNullException)> {
  static const MethodInfo* get() {
    static auto* argument = &::il2cpp_utils::GetClassFromName("System", "ExceptionArgument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "CreateArgumentNullException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argument});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::ThrowArgumentOutOfRangeException
// Il2CppName: ThrowArgumentOutOfRangeException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ThrowHelper::ThrowArgumentOutOfRangeException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowArgumentOutOfRangeException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::ThrowWrongValueTypeArgumentException
// Il2CppName: ThrowWrongValueTypeArgumentException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, System::Type*)>(&System::ThrowHelper::ThrowWrongValueTypeArgumentException)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* targetType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowWrongValueTypeArgumentException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, targetType});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::ThrowArgumentException
// Il2CppName: ThrowArgumentException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::ExceptionResource)>(&System::ThrowHelper::ThrowArgumentException)> {
  static const MethodInfo* get() {
    static auto* resource = &::il2cpp_utils::GetClassFromName("System", "ExceptionResource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowArgumentException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resource});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::ThrowArgumentOutOfRangeException
// Il2CppName: ThrowArgumentOutOfRangeException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::ExceptionArgument, System::ExceptionResource)>(&System::ThrowHelper::ThrowArgumentOutOfRangeException)> {
  static const MethodInfo* get() {
    static auto* argument = &::il2cpp_utils::GetClassFromName("System", "ExceptionArgument")->byval_arg;
    static auto* resource = &::il2cpp_utils::GetClassFromName("System", "ExceptionResource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowArgumentOutOfRangeException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argument, resource});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::ThrowInvalidOperationException
// Il2CppName: ThrowInvalidOperationException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::ExceptionResource)>(&System::ThrowHelper::ThrowInvalidOperationException)> {
  static const MethodInfo* get() {
    static auto* resource = &::il2cpp_utils::GetClassFromName("System", "ExceptionResource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowInvalidOperationException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resource});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::ThrowNotSupportedException
// Il2CppName: ThrowNotSupportedException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::ExceptionResource)>(&System::ThrowHelper::ThrowNotSupportedException)> {
  static const MethodInfo* get() {
    static auto* resource = &::il2cpp_utils::GetClassFromName("System", "ExceptionResource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowNotSupportedException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resource});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::IfNullAndNullsAreIllegalThenThrow
// Il2CppName: IfNullAndNullsAreIllegalThenThrow
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::ThrowHelper::GetArgumentName
// Il2CppName: GetArgumentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::ExceptionArgument)>(&System::ThrowHelper::GetArgumentName)> {
  static const MethodInfo* get() {
    static auto* argument = &::il2cpp_utils::GetClassFromName("System", "ExceptionArgument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "GetArgumentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argument});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::GetResourceName
// Il2CppName: GetResourceName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::ExceptionResource)>(&System::ThrowHelper::GetResourceName)> {
  static const MethodInfo* get() {
    static auto* resource = &::il2cpp_utils::GetClassFromName("System", "ExceptionResource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "GetResourceName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resource});
  }
};
