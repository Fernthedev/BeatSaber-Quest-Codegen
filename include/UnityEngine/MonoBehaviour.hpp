// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.MonoBehaviour
  // [ExtensionOfNativeClassAttribute] Offset: D903CC
  // [NativeHeaderAttribute] Offset: D903CC
  // [NativeHeaderAttribute] Offset: D903CC
  // [RequiredByNativeCodeAttribute] Offset: D903CC
  class MonoBehaviour : public UnityEngine::Behaviour {
    public:
    // Creating value type constructor for type: MonoBehaviour
    MonoBehaviour() noexcept {}
    // public System.Boolean IsInvoking()
    // Offset: 0x1C1A144
    bool IsInvoking();
    // public System.Void CancelInvoke()
    // Offset: 0x1C1A1C4
    void CancelInvoke();
    // public System.Void Invoke(System.String methodName, System.Single time)
    // Offset: 0x1C1A244
    void Invoke(::Il2CppString* methodName, float time);
    // public System.Void InvokeRepeating(System.String methodName, System.Single time, System.Single repeatRate)
    // Offset: 0x1C1A310
    void InvokeRepeating(::Il2CppString* methodName, float time, float repeatRate);
    // public System.Void CancelInvoke(System.String methodName)
    // Offset: 0x1C1A3F0
    void CancelInvoke(::Il2CppString* methodName);
    // public System.Boolean IsInvoking(System.String methodName)
    // Offset: 0x1C1A490
    bool IsInvoking(::Il2CppString* methodName);
    // public UnityEngine.Coroutine StartCoroutine(System.String methodName)
    // Offset: 0x1C1A530
    UnityEngine::Coroutine* StartCoroutine(::Il2CppString* methodName);
    // public UnityEngine.Coroutine StartCoroutine(System.String methodName, System.Object value)
    // Offset: 0x1C1A538
    UnityEngine::Coroutine* StartCoroutine(::Il2CppString* methodName, ::Il2CppObject* value);
    // public UnityEngine.Coroutine StartCoroutine(System.Collections.IEnumerator routine)
    // Offset: 0x1C1A6F0
    UnityEngine::Coroutine* StartCoroutine(System::Collections::IEnumerator* routine);
    // public UnityEngine.Coroutine StartCoroutine_Auto(System.Collections.IEnumerator routine)
    // Offset: 0x1C1A84C
    UnityEngine::Coroutine* StartCoroutine_Auto(System::Collections::IEnumerator* routine);
    // public System.Void StopCoroutine(System.Collections.IEnumerator routine)
    // Offset: 0x1C1A850
    void StopCoroutine(System::Collections::IEnumerator* routine);
    // public System.Void StopCoroutine(UnityEngine.Coroutine routine)
    // Offset: 0x1C1A9AC
    void StopCoroutine(UnityEngine::Coroutine* routine);
    // public System.Void StopCoroutine(System.String methodName)
    // Offset: 0x1C1AB08
    void StopCoroutine(::Il2CppString* methodName);
    // public System.Void StopAllCoroutines()
    // Offset: 0x1C1AB58
    void StopAllCoroutines();
    // public System.Boolean get_useGUILayout()
    // Offset: 0x1C1AB98
    bool get_useGUILayout();
    // public System.Void set_useGUILayout(System.Boolean value)
    // Offset: 0x1C1ABD8
    void set_useGUILayout(bool value);
    // static public System.Void print(System.Object message)
    // Offset: 0x1C1AC28
    static void print(::Il2CppObject* message);
    // static private System.Void Internal_CancelInvokeAll(UnityEngine.MonoBehaviour self)
    // Offset: 0x1C1A204
    static void Internal_CancelInvokeAll(UnityEngine::MonoBehaviour* self);
    // static private System.Boolean Internal_IsInvokingAll(UnityEngine.MonoBehaviour self)
    // Offset: 0x1C1A184
    static bool Internal_IsInvokingAll(UnityEngine::MonoBehaviour* self);
    // static private System.Void InvokeDelayed(UnityEngine.MonoBehaviour self, System.String methodName, System.Single time, System.Single repeatRate)
    // Offset: 0x1C1A2A8
    static void InvokeDelayed(UnityEngine::MonoBehaviour* self, ::Il2CppString* methodName, float time, float repeatRate);
    // static private System.Void CancelInvoke(UnityEngine.MonoBehaviour self, System.String methodName)
    // Offset: 0x1C1A440
    static void CancelInvoke(UnityEngine::MonoBehaviour* self, ::Il2CppString* methodName);
    // static private System.Boolean IsInvoking(UnityEngine.MonoBehaviour self, System.String methodName)
    // Offset: 0x1C1A4E0
    static bool IsInvoking(UnityEngine::MonoBehaviour* self, ::Il2CppString* methodName);
    // static private System.Boolean IsObjectMonoBehaviour(UnityEngine.Object obj)
    // Offset: 0x1C1A658
    static bool IsObjectMonoBehaviour(UnityEngine::Object* obj);
    // private UnityEngine.Coroutine StartCoroutineManaged(System.String methodName, System.Object value)
    // Offset: 0x1C1A698
    UnityEngine::Coroutine* StartCoroutineManaged(::Il2CppString* methodName, ::Il2CppObject* value);
    // private UnityEngine.Coroutine StartCoroutineManaged2(System.Collections.IEnumerator enumerator)
    // Offset: 0x1C1A7FC
    UnityEngine::Coroutine* StartCoroutineManaged2(System::Collections::IEnumerator* enumerator);
    // private System.Void StopCoroutineManaged(UnityEngine.Coroutine routine)
    // Offset: 0x1C1AAB8
    void StopCoroutineManaged(UnityEngine::Coroutine* routine);
    // private System.Void StopCoroutineFromEnumeratorManaged(System.Collections.IEnumerator routine)
    // Offset: 0x1C1A95C
    void StopCoroutineFromEnumeratorManaged(System::Collections::IEnumerator* routine);
    // System.String GetScriptClassName()
    // Offset: 0x1C1AC90
    ::Il2CppString* GetScriptClassName();
    // public System.Void .ctor()
    // Offset: 0x1C1ACD0
    // Implemented from: UnityEngine.Behaviour
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::MonoBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoBehaviour*, creationType>()));
    }
  }; // UnityEngine.MonoBehaviour
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MonoBehaviour*, "UnityEngine", "MonoBehaviour");
// Writing includes for template specializations
#include "System/Collections/IEnumerator.hpp"
#include "UnityEngine/Coroutine.hpp"
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::IsInvoking
// Il2CppName: IsInvoking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::MonoBehaviour::*)()>(&UnityEngine::MonoBehaviour::IsInvoking)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "IsInvoking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::CancelInvoke
// Il2CppName: CancelInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)()>(&UnityEngine::MonoBehaviour::CancelInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "CancelInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(::Il2CppString*, float)>(&UnityEngine::MonoBehaviour::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::InvokeRepeating
// Il2CppName: InvokeRepeating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(::Il2CppString*, float, float)>(&UnityEngine::MonoBehaviour::InvokeRepeating)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "InvokeRepeating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::CancelInvoke
// Il2CppName: CancelInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(::Il2CppString*)>(&UnityEngine::MonoBehaviour::CancelInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "CancelInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::IsInvoking
// Il2CppName: IsInvoking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::MonoBehaviour::*)(::Il2CppString*)>(&UnityEngine::MonoBehaviour::IsInvoking)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "IsInvoking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StartCoroutine
// Il2CppName: StartCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Coroutine* (UnityEngine::MonoBehaviour::*)(::Il2CppString*)>(&UnityEngine::MonoBehaviour::StartCoroutine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StartCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StartCoroutine
// Il2CppName: StartCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Coroutine* (UnityEngine::MonoBehaviour::*)(::Il2CppString*, ::Il2CppObject*)>(&UnityEngine::MonoBehaviour::StartCoroutine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StartCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StartCoroutine
// Il2CppName: StartCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Coroutine* (UnityEngine::MonoBehaviour::*)(System::Collections::IEnumerator*)>(&UnityEngine::MonoBehaviour::StartCoroutine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StartCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::IEnumerator*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StartCoroutine_Auto
// Il2CppName: StartCoroutine_Auto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Coroutine* (UnityEngine::MonoBehaviour::*)(System::Collections::IEnumerator*)>(&UnityEngine::MonoBehaviour::StartCoroutine_Auto)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StartCoroutine_Auto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::IEnumerator*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StopCoroutine
// Il2CppName: StopCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(System::Collections::IEnumerator*)>(&UnityEngine::MonoBehaviour::StopCoroutine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StopCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::IEnumerator*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StopCoroutine
// Il2CppName: StopCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(UnityEngine::Coroutine*)>(&UnityEngine::MonoBehaviour::StopCoroutine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StopCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Coroutine*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StopCoroutine
// Il2CppName: StopCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(::Il2CppString*)>(&UnityEngine::MonoBehaviour::StopCoroutine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StopCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StopAllCoroutines
// Il2CppName: StopAllCoroutines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)()>(&UnityEngine::MonoBehaviour::StopAllCoroutines)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StopAllCoroutines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::get_useGUILayout
// Il2CppName: get_useGUILayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::MonoBehaviour::*)()>(&UnityEngine::MonoBehaviour::get_useGUILayout)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "get_useGUILayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::set_useGUILayout
// Il2CppName: set_useGUILayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(bool)>(&UnityEngine::MonoBehaviour::set_useGUILayout)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "set_useGUILayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::print
// Il2CppName: print
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&UnityEngine::MonoBehaviour::print)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "print", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::Internal_CancelInvokeAll
// Il2CppName: Internal_CancelInvokeAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::MonoBehaviour*)>(&UnityEngine::MonoBehaviour::Internal_CancelInvokeAll)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "Internal_CancelInvokeAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::MonoBehaviour*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::Internal_IsInvokingAll
// Il2CppName: Internal_IsInvokingAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::MonoBehaviour*)>(&UnityEngine::MonoBehaviour::Internal_IsInvokingAll)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "Internal_IsInvokingAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::MonoBehaviour*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::InvokeDelayed
// Il2CppName: InvokeDelayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::MonoBehaviour*, ::Il2CppString*, float, float)>(&UnityEngine::MonoBehaviour::InvokeDelayed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "InvokeDelayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::MonoBehaviour*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::CancelInvoke
// Il2CppName: CancelInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::MonoBehaviour*, ::Il2CppString*)>(&UnityEngine::MonoBehaviour::CancelInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "CancelInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::MonoBehaviour*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::IsInvoking
// Il2CppName: IsInvoking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::MonoBehaviour*, ::Il2CppString*)>(&UnityEngine::MonoBehaviour::IsInvoking)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "IsInvoking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::MonoBehaviour*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::IsObjectMonoBehaviour
// Il2CppName: IsObjectMonoBehaviour
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Object*)>(&UnityEngine::MonoBehaviour::IsObjectMonoBehaviour)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "IsObjectMonoBehaviour", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Object*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StartCoroutineManaged
// Il2CppName: StartCoroutineManaged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Coroutine* (UnityEngine::MonoBehaviour::*)(::Il2CppString*, ::Il2CppObject*)>(&UnityEngine::MonoBehaviour::StartCoroutineManaged)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StartCoroutineManaged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StartCoroutineManaged2
// Il2CppName: StartCoroutineManaged2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Coroutine* (UnityEngine::MonoBehaviour::*)(System::Collections::IEnumerator*)>(&UnityEngine::MonoBehaviour::StartCoroutineManaged2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StartCoroutineManaged2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::IEnumerator*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StopCoroutineManaged
// Il2CppName: StopCoroutineManaged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(UnityEngine::Coroutine*)>(&UnityEngine::MonoBehaviour::StopCoroutineManaged)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StopCoroutineManaged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Coroutine*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::StopCoroutineFromEnumeratorManaged
// Il2CppName: StopCoroutineFromEnumeratorManaged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MonoBehaviour::*)(System::Collections::IEnumerator*)>(&UnityEngine::MonoBehaviour::StopCoroutineFromEnumeratorManaged)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "StopCoroutineFromEnumeratorManaged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::IEnumerator*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::GetScriptClassName
// Il2CppName: GetScriptClassName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::MonoBehaviour::*)()>(&UnityEngine::MonoBehaviour::GetScriptClassName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MonoBehaviour*), "GetScriptClassName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MonoBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
