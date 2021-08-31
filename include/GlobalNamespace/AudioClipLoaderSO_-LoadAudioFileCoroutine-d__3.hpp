// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: AudioClipLoaderSO
#include "GlobalNamespace/AudioClipLoaderSO.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: AudioClipLoaderSO/<LoadAudioFileCoroutine>d__3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.String filePath
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* filePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Action`1<UnityEngine.AudioClip> finishCallback
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<UnityEngine::AudioClip*>* finishCallback;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::AudioClip*>*) == 0x8);
    // public AudioClipLoaderSO <>4__this
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::AudioClipLoaderSO* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioClipLoaderSO*) == 0x8);
    // private UnityEngine.Networking.UnityWebRequest <www>5__2
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Networking::UnityWebRequest* $www$5__2;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::UnityWebRequest*) == 0x8);
    // Creating value type constructor for type: $LoadAudioFileCoroutine$d__3
    $LoadAudioFileCoroutine$d__3(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, ::Il2CppString* filePath_ = {}, System::Action_1<UnityEngine::AudioClip*>* finishCallback_ = {}, GlobalNamespace::AudioClipLoaderSO* $$4__this_ = {}, UnityEngine::Networking::UnityWebRequest* $www$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, filePath{filePath_}, finishCallback{finishCallback_}, $$4__this{$$4__this_}, $www$5__2{$www$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field: private System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: private System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: private System.Object <>2__current
    ::Il2CppObject* _get_$$2__current();
    // Set instance field: private System.Object <>2__current
    void _set_$$2__current(::Il2CppObject* value);
    // Get instance field: public System.String filePath
    ::Il2CppString* _get_filePath();
    // Set instance field: public System.String filePath
    void _set_filePath(::Il2CppString* value);
    // Get instance field: public System.Action`1<UnityEngine.AudioClip> finishCallback
    System::Action_1<UnityEngine::AudioClip*>* _get_finishCallback();
    // Set instance field: public System.Action`1<UnityEngine.AudioClip> finishCallback
    void _set_finishCallback(System::Action_1<UnityEngine::AudioClip*>* value);
    // Get instance field: public AudioClipLoaderSO <>4__this
    GlobalNamespace::AudioClipLoaderSO* _get_$$4__this();
    // Set instance field: public AudioClipLoaderSO <>4__this
    void _set_$$4__this(GlobalNamespace::AudioClipLoaderSO* value);
    // Get instance field: private UnityEngine.Networking.UnityWebRequest <www>5__2
    UnityEngine::Networking::UnityWebRequest* _get_$www$5__2();
    // Set instance field: private UnityEngine.Networking.UnityWebRequest <www>5__2
    void _set_$www$5__2(UnityEngine::Networking::UnityWebRequest* value);
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x117D3AC
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x117D414
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x117D070
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x117D0A4
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x117D180
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x117D0C0
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x117D3B4
    void System_Collections_IEnumerator_Reset();
  }; // AudioClipLoaderSO/<LoadAudioFileCoroutine>d__3
  #pragma pack(pop)
  static check_size<sizeof(AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3), 56 + sizeof(UnityEngine::Networking::UnityWebRequest*)> __GlobalNamespace_AudioClipLoaderSO_$LoadAudioFileCoroutine$d__3SizeCheck;
  static_assert(sizeof(AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3*, "", "AudioClipLoaderSO/<LoadAudioFileCoroutine>d__3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::*)()>(&GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::*)()>(&GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::*)()>(&GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::*)()>(&GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::*)()>(&GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::*)()>(&GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
