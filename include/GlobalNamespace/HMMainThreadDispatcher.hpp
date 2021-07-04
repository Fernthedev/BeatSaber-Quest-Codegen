// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentSingleton`1
#include "GlobalNamespace/PersistentSingleton_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: HMMainThreadDispatcher
  class HMMainThreadDispatcher : public GlobalNamespace::PersistentSingleton_1<GlobalNamespace::HMMainThreadDispatcher*> {
    public:
    // Nested type: GlobalNamespace::HMMainThreadDispatcher::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: GlobalNamespace::HMMainThreadDispatcher::$ActionCoroutine$d__4
    class $ActionCoroutine$d__4;
    // Creating value type constructor for type: HMMainThreadDispatcher
    HMMainThreadDispatcher() noexcept {}
    // Get static field: static private System.Collections.Generic.Queue`1<System.Action> _mainThreadExecutionQueue
    static System::Collections::Generic::Queue_1<System::Action*>* _get__mainThreadExecutionQueue();
    // Set static field: static private System.Collections.Generic.Queue`1<System.Action> _mainThreadExecutionQueue
    static void _set__mainThreadExecutionQueue(System::Collections::Generic::Queue_1<System::Action*>* value);
    // protected System.Void Update()
    // Offset: 0x124A7A4
    void Update();
    // public System.Void Enqueue(System.Collections.IEnumerator action)
    // Offset: 0x124A90C
    void Enqueue(System::Collections::IEnumerator* action);
    // public System.Void Enqueue(System.Action action)
    // Offset: 0x124AA8C
    void Enqueue(System::Action* action);
    // private System.Collections.IEnumerator ActionCoroutine(System.Action action)
    // Offset: 0x124AAB4
    System::Collections::IEnumerator* ActionCoroutine(System::Action* action);
    // public System.Void .ctor()
    // Offset: 0x124AB50
    // Implemented from: PersistentSingleton`1
    // Base method: System.Void PersistentSingleton_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMMainThreadDispatcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HMMainThreadDispatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMMainThreadDispatcher*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x124ABC0
    // Implemented from: PersistentSingleton`1
    // Base method: System.Void PersistentSingleton_1::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // HMMainThreadDispatcher
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HMMainThreadDispatcher*, "", "HMMainThreadDispatcher");
// Writing includes for template specializations
#include "System/Collections/IEnumerator.hpp"
#include "System/Action.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HMMainThreadDispatcher::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMMainThreadDispatcher::*)()>(&GlobalNamespace::HMMainThreadDispatcher::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMMainThreadDispatcher*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMMainThreadDispatcher::Enqueue
// Il2CppName: Enqueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMMainThreadDispatcher::*)(System::Collections::IEnumerator*)>(&GlobalNamespace::HMMainThreadDispatcher::Enqueue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMMainThreadDispatcher*), "Enqueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::IEnumerator*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMMainThreadDispatcher::Enqueue
// Il2CppName: Enqueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMMainThreadDispatcher::*)(System::Action*)>(&GlobalNamespace::HMMainThreadDispatcher::Enqueue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMMainThreadDispatcher*), "Enqueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMMainThreadDispatcher::ActionCoroutine
// Il2CppName: ActionCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::HMMainThreadDispatcher::*)(System::Action*)>(&GlobalNamespace::HMMainThreadDispatcher::ActionCoroutine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMMainThreadDispatcher*), "ActionCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMMainThreadDispatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HMMainThreadDispatcher::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::HMMainThreadDispatcher::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMMainThreadDispatcher*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
