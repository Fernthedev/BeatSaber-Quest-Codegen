// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.ResourceManagement.Diagnostics
namespace UnityEngine::ResourceManagement::Diagnostics {
  // Forward declaring type: DiagnosticEvent
  struct DiagnosticEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEvent");
// Type namespace: UnityEngine.ResourceManagement.Diagnostics
namespace UnityEngine::ResourceManagement::Diagnostics {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
  // [TokenAttribute] Offset: FFFFFFFF
  struct DiagnosticEvent/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.String m_Graph
    // Size: 0x8
    // Offset: 0x0
    ::StringW m_Graph;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32[] m_Dependencies
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<int> m_Dependencies;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32 m_ObjectId
    // Size: 0x4
    // Offset: 0x10
    int m_ObjectId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_ObjectId and: m_DisplayName
    char __padding2[0x4] = {};
    // private System.String m_DisplayName
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_DisplayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 m_Stream
    // Size: 0x4
    // Offset: 0x20
    int m_Stream;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Frame
    // Size: 0x4
    // Offset: 0x24
    int m_Frame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Value
    // Size: 0x4
    // Offset: 0x28
    int m_Value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DiagnosticEvent
    constexpr DiagnosticEvent(::StringW m_Graph_ = {}, ::ArrayW<int> m_Dependencies_ = ::ArrayW<int>(static_cast<void*>(nullptr)), int m_ObjectId_ = {}, ::StringW m_DisplayName_ = {}, int m_Stream_ = {}, int m_Frame_ = {}, int m_Value_ = {}) noexcept : m_Graph{m_Graph_}, m_Dependencies{m_Dependencies_}, m_ObjectId{m_ObjectId_}, m_DisplayName{m_DisplayName_}, m_Stream{m_Stream_}, m_Frame{m_Frame_}, m_Value{m_Value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.String m_Graph
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Graph();
    // Get instance field reference: private System.Int32[] m_Dependencies
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_m_Dependencies();
    // Get instance field reference: private System.Int32 m_ObjectId
    [[deprecated("Use field access instead!")]] int& dyn_m_ObjectId();
    // Get instance field reference: private System.String m_DisplayName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_DisplayName();
    // Get instance field reference: private System.Int32 m_Stream
    [[deprecated("Use field access instead!")]] int& dyn_m_Stream();
    // Get instance field reference: private System.Int32 m_Frame
    [[deprecated("Use field access instead!")]] int& dyn_m_Frame();
    // Get instance field reference: private System.Int32 m_Value
    [[deprecated("Use field access instead!")]] int& dyn_m_Value();
    // public System.String get_Graph()
    // Offset: 0x1F33974
    ::StringW get_Graph();
    // public System.Int32 get_ObjectId()
    // Offset: 0x1F3397C
    int get_ObjectId();
    // public System.String get_DisplayName()
    // Offset: 0x1F33984
    ::StringW get_DisplayName();
    // public System.Int32[] get_Dependencies()
    // Offset: 0x1F3398C
    ::ArrayW<int> get_Dependencies();
    // public System.Int32 get_Stream()
    // Offset: 0x1F33994
    int get_Stream();
    // public System.Int32 get_Frame()
    // Offset: 0x1F3399C
    int get_Frame();
    // public System.Int32 get_Value()
    // Offset: 0x1F339A4
    int get_Value();
    // public System.Void .ctor(System.String graph, System.String name, System.Int32 id, System.Int32 stream, System.Int32 frame, System.Int32 value, System.Int32[] deps)
    // Offset: 0x1F339AC
    DiagnosticEvent(::StringW graph, ::StringW name, int id, int stream, int frame, int value, ::ArrayW<int> deps);
    // System.Byte[] Serialize()
    // Offset: 0x1F339C4
    ::ArrayW<uint8_t> Serialize();
    // static public UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent Deserialize(System.Byte[] data)
    // Offset: 0x1F33A64
    static ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent Deserialize(::ArrayW<uint8_t> data);
  }; // UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
  #pragma pack(pop)
  static check_size<sizeof(DiagnosticEvent), 40 + sizeof(int)> __UnityEngine_ResourceManagement_Diagnostics_DiagnosticEventSizeCheck;
  static_assert(sizeof(DiagnosticEvent) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_Graph
// Il2CppName: get_Graph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::*)()>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_Graph)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent), "get_Graph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_ObjectId
// Il2CppName: get_ObjectId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::*)()>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_ObjectId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent), "get_ObjectId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::*)()>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_DisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_Dependencies
// Il2CppName: get_Dependencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::*)()>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_Dependencies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent), "get_Dependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_Stream
// Il2CppName: get_Stream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::*)()>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_Stream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent), "get_Stream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_Frame
// Il2CppName: get_Frame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::*)()>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_Frame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent), "get_Frame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::*)()>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::DiagnosticEvent
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::*)()>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::Serialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent (*)(::ArrayW<uint8_t>)>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::Deserialize)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
