// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.LogType
#include "UnityEngine/LogType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogEvent
  class LogEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Logging
namespace UnityEngine::TestTools::Logging {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Logging.LogMatch
  class LogMatch : public ::Il2CppObject {
    public:
    // private System.Boolean m_UseRegex
    // Size: 0x1
    // Offset: 0x10
    bool m_UseRegex;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_UseRegex and: m_Message
    char __padding0[0x7] = {};
    // private System.String m_Message
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_Message;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_MessageRegex
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_MessageRegex;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_LogType
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* m_LogType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LogMatch
    LogMatch(bool m_UseRegex_ = {}, ::Il2CppString* m_Message_ = {}, ::Il2CppString* m_MessageRegex_ = {}, ::Il2CppString* m_LogType_ = {}) noexcept : m_UseRegex{m_UseRegex_}, m_Message{m_Message_}, m_MessageRegex{m_MessageRegex_}, m_LogType{m_LogType_} {}
    // public System.String get_Message()
    // Offset: 0x14B7D54
    ::Il2CppString* get_Message();
    // public System.Text.RegularExpressions.Regex get_MessageRegex()
    // Offset: 0x14B7D5C
    System::Text::RegularExpressions::Regex* get_MessageRegex();
    // public System.Nullable`1<UnityEngine.LogType> get_LogType()
    // Offset: 0x14B7DD4
    System::Nullable_1<UnityEngine::LogType> get_LogType();
    // public System.Boolean Matches(UnityEngine.TestTools.Logging.LogEvent log)
    // Offset: 0x14B7EF0
    bool Matches(UnityEngine::TestTools::Logging::LogEvent* log);
    // public override System.String ToString()
    // Offset: 0x14B7FC8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x14B8090
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LogMatch* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::Logging::LogMatch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LogMatch*, creationType>()));
    }
  }; // UnityEngine.TestTools.Logging.LogMatch
  #pragma pack(pop)
  static check_size<sizeof(LogMatch), 40 + sizeof(::Il2CppString*)> __UnityEngine_TestTools_Logging_LogMatchSizeCheck;
  static_assert(sizeof(LogMatch) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Logging::LogMatch*, "UnityEngine.TestTools.Logging", "LogMatch");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogMatch::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::TestTools::Logging::LogMatch::*)()>(&UnityEngine::TestTools::Logging::LogMatch::get_Message)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogMatch*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogMatch::get_MessageRegex
// Il2CppName: get_MessageRegex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::Regex* (UnityEngine::TestTools::Logging::LogMatch::*)()>(&UnityEngine::TestTools::Logging::LogMatch::get_MessageRegex)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogMatch*), "get_MessageRegex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogMatch::get_LogType
// Il2CppName: get_LogType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<UnityEngine::LogType> (UnityEngine::TestTools::Logging::LogMatch::*)()>(&UnityEngine::TestTools::Logging::LogMatch::get_LogType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogMatch*), "get_LogType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogMatch::Matches
// Il2CppName: Matches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::Logging::LogMatch::*)(UnityEngine::TestTools::Logging::LogEvent*)>(&UnityEngine::TestTools::Logging::LogMatch::Matches)> {
  const MethodInfo* get() {
    static auto* log = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools.Logging", "LogEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogMatch*), "Matches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{log});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogMatch::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::TestTools::Logging::LogMatch::*)()>(&UnityEngine::TestTools::Logging::LogMatch::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogMatch*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogMatch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
