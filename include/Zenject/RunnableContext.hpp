// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Context
#include "Zenject/Context.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: RunnableContext
  class RunnableContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::RunnableContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::RunnableContext*, "Zenject", "RunnableContext");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x42
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.RunnableContext
  // [TokenAttribute] Offset: FFFFFFFF
  class RunnableContext : public ::Zenject::Context {
    public:
    public:
    // [TooltipAttribute] Offset: 0x10B668C
    // private System.Boolean _autoRun
    // Size: 0x1
    // Offset: 0x40
    bool autoRun;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <Initialized>k__BackingField
    // Size: 0x1
    // Offset: 0x41
    bool Initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private System.Boolean _staticAutoRun
    static bool _get__staticAutoRun();
    // Set static field: static private System.Boolean _staticAutoRun
    static void _set__staticAutoRun(bool value);
    // Get instance field reference: private System.Boolean _autoRun
    [[deprecated("Use field access instead!")]] bool& dyn__autoRun();
    // Get instance field reference: private System.Boolean <Initialized>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Initialized$k__BackingField();
    // public System.Boolean get_Initialized()
    // Offset: 0x1C12354
    bool get_Initialized();
    // private System.Void set_Initialized(System.Boolean value)
    // Offset: 0x1C1235C
    void set_Initialized(bool value);
    // static private System.Void .cctor()
    // Offset: 0x1C1249C
    static void _cctor();
    // protected System.Void Initialize()
    // Offset: 0x1C12368
    void Initialize();
    // public System.Void Run()
    // Offset: 0x1C12414
    void Run();
    // protected System.Void RunInternal()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RunInternal();
    // static public T CreateComponent(UnityEngine.GameObject gameObject)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T CreateComponent(::UnityEngine::GameObject* gameObject) {
      static_assert(std::is_convertible_v<T, ::Zenject::RunnableContext*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::RunnableContext::CreateComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "RunnableContext", "CreateComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(gameObject)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, gameObject);
    }
    // protected System.Void .ctor()
    // Offset: 0x1C1248C
    // Implemented from: Zenject.Context
    // Base method: System.Void Context::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RunnableContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::RunnableContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RunnableContext*, creationType>()));
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1C124F0
    // Implemented from: Zenject.Context
    // Base method: Zenject.InjectTypeInfo Context::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.RunnableContext
  #pragma pack(pop)
  static check_size<sizeof(RunnableContext), 65 + sizeof(bool)> __Zenject_RunnableContextSizeCheck;
  static_assert(sizeof(RunnableContext) == 0x42);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::RunnableContext::get_Initialized
// Il2CppName: get_Initialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::RunnableContext::*)()>(&Zenject::RunnableContext::get_Initialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::RunnableContext*), "get_Initialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::RunnableContext::set_Initialized
// Il2CppName: set_Initialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::RunnableContext::*)(bool)>(&Zenject::RunnableContext::set_Initialized)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::RunnableContext*), "set_Initialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::RunnableContext::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::RunnableContext::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::RunnableContext*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::RunnableContext::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::RunnableContext::*)()>(&Zenject::RunnableContext::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::RunnableContext*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::RunnableContext::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::RunnableContext::*)()>(&Zenject::RunnableContext::Run)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::RunnableContext*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::RunnableContext::RunInternal
// Il2CppName: RunInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::RunnableContext::*)()>(&Zenject::RunnableContext::RunInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::RunnableContext*), "RunInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::RunnableContext::CreateComponent
// Il2CppName: CreateComponent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::RunnableContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::RunnableContext::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::RunnableContext::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::RunnableContext*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
