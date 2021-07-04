// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelMissionParser
#include "GlobalNamespace/LevelMissionParser.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LevelMissionParser/ParserFunction
  class LevelMissionParser::ParserFunction : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ParserFunction
    ParserFunction() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11FD130
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelMissionParser::ParserFunction* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelMissionParser::ParserFunction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelMissionParser::ParserFunction*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Single[] functionParams, System.Int32 paramCount)
    // Offset: 0x11FCD18
    bool Invoke(::Array<float>* functionParams, int paramCount);
    // public System.IAsyncResult BeginInvoke(System.Single[] functionParams, System.Int32 paramCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11FD140
    System::IAsyncResult* BeginInvoke(::Array<float>* functionParams, int paramCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x11FD1DC
    bool EndInvoke(System::IAsyncResult* result);
  }; // LevelMissionParser/ParserFunction
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelMissionParser::ParserFunction*, "", "LevelMissionParser/ParserFunction");
// Writing includes for template specializations
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::ParserFunction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::ParserFunction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LevelMissionParser::ParserFunction::*)(::Array<float>*, int)>(&GlobalNamespace::LevelMissionParser::ParserFunction::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelMissionParser::ParserFunction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<float>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::ParserFunction::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::LevelMissionParser::ParserFunction::*)(::Array<float>*, int, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::LevelMissionParser::ParserFunction::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelMissionParser::ParserFunction*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<float>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::ParserFunction::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LevelMissionParser::ParserFunction::*)(System::IAsyncResult*)>(&GlobalNamespace::LevelMissionParser::ParserFunction::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelMissionParser::ParserFunction*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
