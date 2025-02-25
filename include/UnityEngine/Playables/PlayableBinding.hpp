// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Playables.PlayableBinding
  // [TokenAttribute] Offset: FFFFFFFF
  struct PlayableBinding/*, public System::ValueType*/ {
    public:
    // Nested type: UnityEngine::Playables::PlayableBinding::CreateOutputMethod
    class CreateOutputMethod;
    // private System.String m_StreamName
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* m_StreamName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.Object m_SourceObject
    // Size: 0x8
    // Offset: 0x8
    UnityEngine::Object* m_SourceObject;
    // Field size check
    static_assert(sizeof(UnityEngine::Object*) == 0x8);
    // private System.Type m_SourceBindingType
    // Size: 0x8
    // Offset: 0x10
    System::Type* m_SourceBindingType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private UnityEngine.Playables.PlayableBinding/UnityEngine.Playables.CreateOutputMethod m_CreateOutputMethod
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Playables::PlayableBinding::CreateOutputMethod* m_CreateOutputMethod;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableBinding::CreateOutputMethod*) == 0x8);
    // Creating value type constructor for type: PlayableBinding
    constexpr PlayableBinding(::Il2CppString* m_StreamName_ = {}, UnityEngine::Object* m_SourceObject_ = {}, System::Type* m_SourceBindingType_ = {}, UnityEngine::Playables::PlayableBinding::CreateOutputMethod* m_CreateOutputMethod_ = {}) noexcept : m_StreamName{m_StreamName_}, m_SourceObject{m_SourceObject_}, m_SourceBindingType{m_SourceBindingType_}, m_CreateOutputMethod{m_CreateOutputMethod_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static public readonly UnityEngine.Playables.PlayableBinding[] None
    static ::Array<UnityEngine::Playables::PlayableBinding>* _get_None();
    // Set static field: static public readonly UnityEngine.Playables.PlayableBinding[] None
    static void _set_None(::Array<UnityEngine::Playables::PlayableBinding>* value);
    // Get static field: static public readonly System.Double DefaultDuration
    static double _get_DefaultDuration();
    // Set static field: static public readonly System.Double DefaultDuration
    static void _set_DefaultDuration(double value);
    // Get instance field reference: private System.String m_StreamName
    ::Il2CppString*& dyn_m_StreamName();
    // Get instance field reference: private UnityEngine.Object m_SourceObject
    UnityEngine::Object*& dyn_m_SourceObject();
    // Get instance field reference: private System.Type m_SourceBindingType
    System::Type*& dyn_m_SourceBindingType();
    // Get instance field reference: private UnityEngine.Playables.PlayableBinding/UnityEngine.Playables.CreateOutputMethod m_CreateOutputMethod
    UnityEngine::Playables::PlayableBinding::CreateOutputMethod*& dyn_m_CreateOutputMethod();
    // public System.String get_streamName()
    // Offset: 0x1D0BE90
    ::Il2CppString* get_streamName();
    // public UnityEngine.Object get_sourceObject()
    // Offset: 0x1D0BE98
    UnityEngine::Object* get_sourceObject();
    // static private System.Void .cctor()
    // Offset: 0x1D0C250
    static void _cctor();
    // UnityEngine.Playables.PlayableOutput CreateOutput(UnityEngine.Playables.PlayableGraph graph)
    // Offset: 0x1D0BEA0
    UnityEngine::Playables::PlayableOutput CreateOutput(UnityEngine::Playables::PlayableGraph graph);
    // static UnityEngine.Playables.PlayableBinding CreateInternal(System.String name, UnityEngine.Object sourceObject, System.Type sourceType, UnityEngine.Playables.PlayableBinding/UnityEngine.Playables.CreateOutputMethod createFunction)
    // Offset: 0x1D0C244
    static UnityEngine::Playables::PlayableBinding CreateInternal(::Il2CppString* name, UnityEngine::Object* sourceObject, System::Type* sourceType, UnityEngine::Playables::PlayableBinding::CreateOutputMethod* createFunction);
  }; // UnityEngine.Playables.PlayableBinding
  #pragma pack(pop)
  static check_size<sizeof(PlayableBinding), 24 + sizeof(UnityEngine::Playables::PlayableBinding::CreateOutputMethod*)> __UnityEngine_Playables_PlayableBindingSizeCheck;
  static_assert(sizeof(PlayableBinding) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableBinding, "UnityEngine.Playables", "PlayableBinding");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBinding::get_streamName
// Il2CppName: get_streamName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Playables::PlayableBinding::*)()>(&UnityEngine::Playables::PlayableBinding::get_streamName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBinding), "get_streamName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBinding::get_sourceObject
// Il2CppName: get_sourceObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (UnityEngine::Playables::PlayableBinding::*)()>(&UnityEngine::Playables::PlayableBinding::get_sourceObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBinding), "get_sourceObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBinding::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Playables::PlayableBinding::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBinding), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBinding::CreateOutput
// Il2CppName: CreateOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableOutput (UnityEngine::Playables::PlayableBinding::*)(UnityEngine::Playables::PlayableGraph)>(&UnityEngine::Playables::PlayableBinding::CreateOutput)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBinding), "CreateOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBinding::CreateInternal
// Il2CppName: CreateInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableBinding (*)(::Il2CppString*, UnityEngine::Object*, System::Type*, UnityEngine::Playables::PlayableBinding::CreateOutputMethod*)>(&UnityEngine::Playables::PlayableBinding::CreateInternal)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sourceObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* sourceType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* createFunction = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableBinding/CreateOutputMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBinding), "CreateInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, sourceObject, sourceType, createFunction});
  }
};
