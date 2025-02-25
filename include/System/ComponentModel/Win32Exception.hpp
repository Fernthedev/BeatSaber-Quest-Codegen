// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.InteropServices.ExternalException
#include "System/Runtime/InteropServices/ExternalException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.Win32Exception
  // [TokenAttribute] Offset: FFFFFFFF
  class Win32Exception : public System::Runtime::InteropServices::ExternalException {
    public:
    // private readonly System.Int32 nativeErrorCode
    // Size: 0x4
    // Offset: 0x88
    int nativeErrorCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Win32Exception
    Win32Exception(int nativeErrorCode_ = {}) noexcept : nativeErrorCode{nativeErrorCode_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return nativeErrorCode;
    }
    // Get static field: static private System.Boolean s_ErrorMessagesInitialized
    static bool _get_s_ErrorMessagesInitialized();
    // Set static field: static private System.Boolean s_ErrorMessagesInitialized
    static void _set_s_ErrorMessagesInitialized(bool value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Int32,System.String> s_ErrorMessage
    static System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* _get_s_ErrorMessage();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Int32,System.String> s_ErrorMessage
    static void _set_s_ErrorMessage(System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* value);
    // Get instance field reference: private readonly System.Int32 nativeErrorCode
    int& dyn_nativeErrorCode();
    // public System.Int32 get_NativeErrorCode()
    // Offset: 0x18B74C4
    int get_NativeErrorCode();
    // public System.Void .ctor(System.Int32 error)
    // Offset: 0x18B725C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Win32Exception* New_ctor(int error) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::Win32Exception::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Win32Exception*, creationType>(error)));
    }
    // public System.Void .ctor(System.Int32 error, System.String message)
    // Offset: 0x18B73FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Win32Exception* New_ctor(int error, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::Win32Exception::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Win32Exception*, creationType>(error, message)));
    }
    // static System.String GetErrorMessage(System.Int32 error)
    // Offset: 0x18B72E4
    static ::Il2CppString* GetErrorMessage(int error);
    // static private System.Void InitializeErrorMessages()
    // Offset: 0x18B7598
    static void InitializeErrorMessages();
    // public System.Void .ctor()
    // Offset: 0x18B71EC
    // Implemented from: System.Runtime.InteropServices.ExternalException
    // Base method: System.Void ExternalException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Win32Exception* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::Win32Exception::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Win32Exception*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x18B742C
    // Implemented from: System.Runtime.InteropServices.ExternalException
    // Base method: System.Void ExternalException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Win32Exception* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::Win32Exception::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Win32Exception*, creationType>(info, context)));
    }
    // static private System.Void .cctor()
    // Offset: 0x18B8698
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.cctor()
    static void _cctor();
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x18B74CC
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.ComponentModel.Win32Exception
  #pragma pack(pop)
  static check_size<sizeof(Win32Exception), 136 + sizeof(int)> __System_ComponentModel_Win32ExceptionSizeCheck;
  static_assert(sizeof(Win32Exception) == 0x8C);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Win32Exception*, "System.ComponentModel", "Win32Exception");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::Win32Exception::get_NativeErrorCode
// Il2CppName: get_NativeErrorCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::Win32Exception::*)()>(&System::ComponentModel::Win32Exception::get_NativeErrorCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Win32Exception*), "get_NativeErrorCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Win32Exception::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::Win32Exception::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::Win32Exception::GetErrorMessage
// Il2CppName: GetErrorMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(int)>(&System::ComponentModel::Win32Exception::GetErrorMessage)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Win32Exception*), "GetErrorMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Win32Exception::InitializeErrorMessages
// Il2CppName: InitializeErrorMessages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::Win32Exception::InitializeErrorMessages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Win32Exception*), "InitializeErrorMessages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Win32Exception::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::Win32Exception::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::Win32Exception::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::Win32Exception::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Win32Exception*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Win32Exception::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::Win32Exception::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::ComponentModel::Win32Exception::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Win32Exception*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
