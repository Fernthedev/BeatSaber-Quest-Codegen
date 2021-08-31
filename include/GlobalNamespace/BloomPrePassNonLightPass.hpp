// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: ExecutionTimeType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassNonLightPass
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class BloomPrePassNonLightPass : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType
    struct ExecutionTimeType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BloomPrePassNonLightPass/ExecutionTimeType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ExecutionTimeType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ExecutionTimeType
      constexpr ExecutionTimeType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BloomPrePassNonLightPass/ExecutionTimeType None
      static constexpr const int None = 0;
      // Get static field: static public BloomPrePassNonLightPass/ExecutionTimeType None
      static GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType _get_None();
      // Set static field: static public BloomPrePassNonLightPass/ExecutionTimeType None
      static void _set_None(GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType value);
      // static field const value: static public BloomPrePassNonLightPass/ExecutionTimeType BeforeBlur
      static constexpr const int BeforeBlur = 1;
      // Get static field: static public BloomPrePassNonLightPass/ExecutionTimeType BeforeBlur
      static GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType _get_BeforeBlur();
      // Set static field: static public BloomPrePassNonLightPass/ExecutionTimeType BeforeBlur
      static void _set_BeforeBlur(GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType value);
      // static field const value: static public BloomPrePassNonLightPass/ExecutionTimeType AfterBlur
      static constexpr const int AfterBlur = 2;
      // Get static field: static public BloomPrePassNonLightPass/ExecutionTimeType AfterBlur
      static GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType _get_AfterBlur();
      // Set static field: static public BloomPrePassNonLightPass/ExecutionTimeType AfterBlur
      static void _set_AfterBlur(GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // BloomPrePassNonLightPass/ExecutionTimeType
    #pragma pack(pop)
    static check_size<sizeof(BloomPrePassNonLightPass::ExecutionTimeType), 0 + sizeof(int)> __GlobalNamespace_BloomPrePassNonLightPass_ExecutionTimeTypeSizeCheck;
    static_assert(sizeof(BloomPrePassNonLightPass::ExecutionTimeType) == 0x4);
    // private BloomPrePassNonLightPass/ExecutionTimeType _executionTimeType
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType executionTimeType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType) == 0x4);
    // private BloomPrePassNonLightPass/ExecutionTimeType _registeredExecutionTimeType
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType registeredExecutionTimeType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType) == 0x4);
    // Creating value type constructor for type: BloomPrePassNonLightPass
    BloomPrePassNonLightPass(GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType executionTimeType_ = {}, GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType registeredExecutionTimeType_ = {}) noexcept : executionTimeType{executionTimeType_}, registeredExecutionTimeType{registeredExecutionTimeType_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Collections.Generic.List`1<BloomPrePassNonLightPass> _bloomPrePassAfterBlurList
    static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass*>* _get__bloomPrePassAfterBlurList();
    // Set static field: static private System.Collections.Generic.List`1<BloomPrePassNonLightPass> _bloomPrePassAfterBlurList
    static void _set__bloomPrePassAfterBlurList(System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass*>* value);
    // Get static field: static private System.Collections.Generic.List`1<BloomPrePassNonLightPass> _bloomPrePassBeforeBlurList
    static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass*>* _get__bloomPrePassBeforeBlurList();
    // Set static field: static private System.Collections.Generic.List`1<BloomPrePassNonLightPass> _bloomPrePassBeforeBlurList
    static void _set__bloomPrePassBeforeBlurList(System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass*>* value);
    // Get instance field: private BloomPrePassNonLightPass/ExecutionTimeType _executionTimeType
    GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType _get__executionTimeType();
    // Set instance field: private BloomPrePassNonLightPass/ExecutionTimeType _executionTimeType
    void _set__executionTimeType(GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType value);
    // Get instance field: private BloomPrePassNonLightPass/ExecutionTimeType _registeredExecutionTimeType
    GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType _get__registeredExecutionTimeType();
    // Set instance field: private BloomPrePassNonLightPass/ExecutionTimeType _registeredExecutionTimeType
    void _set__registeredExecutionTimeType(GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType value);
    // public BloomPrePassNonLightPass/ExecutionTimeType get_executionTimeType()
    // Offset: 0x1E14884
    GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType get_executionTimeType();
    // static public System.Collections.Generic.List`1<BloomPrePassNonLightPass> get_bloomPrePassAfterBlurList()
    // Offset: 0x1E1488C
    static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass*>* get_bloomPrePassAfterBlurList();
    // static public System.Collections.Generic.List`1<BloomPrePassNonLightPass> get_bloomPrePassBeforeBlurList()
    // Offset: 0x1E148F4
    static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass*>* get_bloomPrePassBeforeBlurList();
    // protected System.Void OnEnable()
    // Offset: 0x1E1495C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1E14A4C
    void OnDisable();
    // private System.Void Register()
    // Offset: 0x1E14960
    void Register();
    // private System.Void Unregister()
    // Offset: 0x1E14A50
    void Unregister();
    // protected System.Void OnValidate()
    // Offset: 0x1E13DC4
    void OnValidate();
    // public System.Void Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    // Offset: 0xFFFFFFFF
    void Render(UnityEngine::RenderTexture* dest, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix);
    // protected System.Void .ctor()
    // Offset: 0x1E1304C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassNonLightPass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassNonLightPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassNonLightPass*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1E14B20
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BloomPrePassNonLightPass
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassNonLightPass), 28 + sizeof(GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType)> __GlobalNamespace_BloomPrePassNonLightPassSizeCheck;
  static_assert(sizeof(BloomPrePassNonLightPass) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassNonLightPass*, "", "BloomPrePassNonLightPass");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType, "", "BloomPrePassNonLightPass/ExecutionTimeType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::get_executionTimeType
// Il2CppName: get_executionTimeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BloomPrePassNonLightPass::ExecutionTimeType (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::get_executionTimeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "get_executionTimeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassAfterBlurList
// Il2CppName: get_bloomPrePassAfterBlurList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass*>* (*)()>(&GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassAfterBlurList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "get_bloomPrePassAfterBlurList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassBeforeBlurList
// Il2CppName: get_bloomPrePassBeforeBlurList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass*>* (*)()>(&GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassBeforeBlurList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "get_bloomPrePassBeforeBlurList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::Register)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::Unregister)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)()>(&GlobalNamespace::BloomPrePassNonLightPass::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassNonLightPass::*)(UnityEngine::RenderTexture*, UnityEngine::Matrix4x4, UnityEngine::Matrix4x4)>(&GlobalNamespace::BloomPrePassNonLightPass::Render)> {
  static const MethodInfo* get() {
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* projectionMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, viewMatrix, projectionMatrix});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassNonLightPass::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BloomPrePassNonLightPass::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassNonLightPass*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
