// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TimeoutException
#include "System/TimeoutException.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexMatchTimeoutException
  // [TokenAttribute] Offset: FFFFFFFF
  class RegexMatchTimeoutException : public System::TimeoutException {
    public:
    // private System.String regexInput
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* regexInput;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String regexPattern
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppString* regexPattern;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.TimeSpan matchTimeout
    // Size: 0x8
    // Offset: 0x98
    System::TimeSpan matchTimeout;
    // Field size check
    static_assert(sizeof(System::TimeSpan) == 0x8);
    // Creating value type constructor for type: RegexMatchTimeoutException
    RegexMatchTimeoutException(::Il2CppString* regexInput_ = {}, ::Il2CppString* regexPattern_ = {}, System::TimeSpan matchTimeout_ = {}) noexcept : regexInput{regexInput_}, regexPattern{regexPattern_}, matchTimeout{matchTimeout_} {}
    // Get instance field reference: private System.String regexInput
    ::Il2CppString*& dyn_regexInput();
    // Get instance field reference: private System.String regexPattern
    ::Il2CppString*& dyn_regexPattern();
    // Get instance field reference: private System.TimeSpan matchTimeout
    System::TimeSpan& dyn_matchTimeout();
    // public System.Void .ctor(System.String regexInput, System.String regexPattern, System.TimeSpan matchTimeout)
    // Offset: 0x199F688
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexMatchTimeoutException* New_ctor(::Il2CppString* regexInput, ::Il2CppString* regexPattern, System::TimeSpan matchTimeout) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexMatchTimeoutException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexMatchTimeoutException*, creationType>(regexInput, regexPattern, matchTimeout)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x199F958
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* si, System::Runtime::Serialization::StreamingContext context);
    // private System.Void Init(System.String input, System.String pattern, System.TimeSpan timeout)
    // Offset: 0x199F740
    void Init(::Il2CppString* input, ::Il2CppString* pattern, System::TimeSpan timeout);
    // public System.Void .ctor()
    // Offset: 0x199F74C
    // Implemented from: System.TimeoutException
    // Base method: System.Void TimeoutException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexMatchTimeoutException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexMatchTimeoutException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexMatchTimeoutException*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x199F84C
    // Implemented from: System.TimeoutException
    // Base method: System.Void TimeoutException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexMatchTimeoutException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexMatchTimeoutException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexMatchTimeoutException*, creationType>(info, context)));
    }
    // private System.Void Init()
    // Offset: 0x199F7CC
    // Implemented from: System.Exception
    // Base method: System.Void Exception::Init()
    void Init();
  }; // System.Text.RegularExpressions.RegexMatchTimeoutException
  #pragma pack(pop)
  static check_size<sizeof(RegexMatchTimeoutException), 152 + sizeof(System::TimeSpan)> __System_Text_RegularExpressions_RegexMatchTimeoutExceptionSizeCheck;
  static_assert(sizeof(RegexMatchTimeoutException) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexMatchTimeoutException*, "System.Text.RegularExpressions", "RegexMatchTimeoutException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexMatchTimeoutException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexMatchTimeoutException::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexMatchTimeoutException::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Text::RegularExpressions::RegexMatchTimeoutException::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* si = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexMatchTimeoutException*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{si, context});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexMatchTimeoutException::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexMatchTimeoutException::*)(::Il2CppString*, ::Il2CppString*, System::TimeSpan)>(&System::Text::RegularExpressions::RegexMatchTimeoutException::Init)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexMatchTimeoutException*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, pattern, timeout});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexMatchTimeoutException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexMatchTimeoutException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexMatchTimeoutException::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexMatchTimeoutException::*)()>(&System::Text::RegularExpressions::RegexMatchTimeoutException::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexMatchTimeoutException*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
