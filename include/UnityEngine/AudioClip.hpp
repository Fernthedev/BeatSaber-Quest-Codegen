// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioDataLoadState
  struct AudioDataLoadState;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioClip
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: DE17A8
  // [NativeHeaderAttribute] Offset: DE17A8
  class AudioClip : public UnityEngine::Object {
    public:
    // Nested type: UnityEngine::AudioClip::PCMReaderCallback
    class PCMReaderCallback;
    // Nested type: UnityEngine::AudioClip::PCMSetPositionCallback
    class PCMSetPositionCallback;
    // [DebuggerBrowsableAttribute] Offset: 0xDE1F14
    // private UnityEngine.AudioClip/UnityEngine.PCMReaderCallback m_PCMReaderCallback
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioClip::PCMReaderCallback* m_PCMReaderCallback;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip::PCMReaderCallback*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xDE1F50
    // private UnityEngine.AudioClip/UnityEngine.PCMSetPositionCallback m_PCMSetPositionCallback
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AudioClip::PCMSetPositionCallback* m_PCMSetPositionCallback;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip::PCMSetPositionCallback*) == 0x8);
    // Creating value type constructor for type: AudioClip
    AudioClip(UnityEngine::AudioClip::PCMReaderCallback* m_PCMReaderCallback_ = {}, UnityEngine::AudioClip::PCMSetPositionCallback* m_PCMSetPositionCallback_ = {}) noexcept : m_PCMReaderCallback{m_PCMReaderCallback_}, m_PCMSetPositionCallback{m_PCMSetPositionCallback_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.AudioClip/UnityEngine.PCMReaderCallback m_PCMReaderCallback
    UnityEngine::AudioClip::PCMReaderCallback*& dyn_m_PCMReaderCallback();
    // Get instance field reference: private UnityEngine.AudioClip/UnityEngine.PCMSetPositionCallback m_PCMSetPositionCallback
    UnityEngine::AudioClip::PCMSetPositionCallback*& dyn_m_PCMSetPositionCallback();
    // public System.Single get_length()
    // Offset: 0x23FAE5C
    float get_length();
    // public System.Int32 get_samples()
    // Offset: 0x23FC154
    int get_samples();
    // public System.Int32 get_channels()
    // Offset: 0x23FC194
    int get_channels();
    // public System.Int32 get_frequency()
    // Offset: 0x23FC1D4
    int get_frequency();
    // public UnityEngine.AudioDataLoadState get_loadState()
    // Offset: 0x23FC254
    UnityEngine::AudioDataLoadState get_loadState();
    // private System.Void add_m_PCMReaderCallback(UnityEngine.AudioClip/UnityEngine.PCMReaderCallback value)
    // Offset: 0x23FC804
    void add_m_PCMReaderCallback(UnityEngine::AudioClip::PCMReaderCallback* value);
    // private System.Void remove_m_PCMReaderCallback(UnityEngine.AudioClip/UnityEngine.PCMReaderCallback value)
    // Offset: 0x23FC94C
    void remove_m_PCMReaderCallback(UnityEngine::AudioClip::PCMReaderCallback* value);
    // private System.Void add_m_PCMSetPositionCallback(UnityEngine.AudioClip/UnityEngine.PCMSetPositionCallback value)
    // Offset: 0x23FC8A8
    void add_m_PCMSetPositionCallback(UnityEngine::AudioClip::PCMSetPositionCallback* value);
    // private System.Void remove_m_PCMSetPositionCallback(UnityEngine.AudioClip/UnityEngine.PCMSetPositionCallback value)
    // Offset: 0x23FC9F0
    void remove_m_PCMSetPositionCallback(UnityEngine::AudioClip::PCMSetPositionCallback* value);
    // static private System.Boolean GetData(UnityEngine.AudioClip clip, out System.Single[] data, System.Int32 numSamples, System.Int32 samplesOffset)
    // Offset: 0x23FBF90
    static bool GetData(UnityEngine::AudioClip* clip, ByRef<::Array<float>*> data, int numSamples, int samplesOffset);
    // static private System.Boolean SetData(UnityEngine.AudioClip clip, System.Single[] data, System.Int32 numsamples, System.Int32 samplesOffset)
    // Offset: 0x23FBFF8
    static bool SetData(UnityEngine::AudioClip* clip, ::Array<float>* data, int numsamples, int samplesOffset);
    // static private UnityEngine.AudioClip Construct_Internal()
    // Offset: 0x23FC060
    static UnityEngine::AudioClip* Construct_Internal();
    // private System.String GetName()
    // Offset: 0x23FC094
    ::Il2CppString* GetName();
    // private System.Void CreateUserSound(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream)
    // Offset: 0x23FC0D4
    void CreateUserSound(::Il2CppString* name, int lengthSamples, int channels, int frequency, bool stream);
    // public System.Boolean LoadAudioData()
    // Offset: 0x23FC214
    bool LoadAudioData();
    // public System.Boolean GetData(System.Single[] data, System.Int32 offsetSamples)
    // Offset: 0x23FC294
    bool GetData(::Array<float>* data, int offsetSamples);
    // public System.Boolean SetData(System.Single[] data, System.Int32 offsetSamples)
    // Offset: 0x23FC420
    bool SetData(::Array<float>* data, int offsetSamples);
    // static public UnityEngine.AudioClip Create(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream)
    // Offset: 0x23FC638
    static UnityEngine::AudioClip* Create(::Il2CppString* name, int lengthSamples, int channels, int frequency, bool stream);
    // static public UnityEngine.AudioClip Create(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream, UnityEngine.AudioClip/UnityEngine.PCMReaderCallback pcmreadercallback, UnityEngine.AudioClip/UnityEngine.PCMSetPositionCallback pcmsetpositioncallback)
    // Offset: 0x23FC648
    static UnityEngine::AudioClip* Create(::Il2CppString* name, int lengthSamples, int channels, int frequency, bool stream, UnityEngine::AudioClip::PCMReaderCallback* pcmreadercallback, UnityEngine::AudioClip::PCMSetPositionCallback* pcmsetpositioncallback);
    // private System.Void InvokePCMReaderCallback_Internal(System.Single[] data)
    // Offset: 0x23FCA94
    void InvokePCMReaderCallback_Internal(::Array<float>* data);
    // private System.Void InvokePCMSetPositionCallback_Internal(System.Int32 position)
    // Offset: 0x23FCE38
    void InvokePCMSetPositionCallback_Internal(int position);
    // private System.Void .ctor()
    // Offset: 0x23FBF24
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClip* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AudioClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClip*, creationType>()));
    }
  }; // UnityEngine.AudioClip
  #pragma pack(pop)
  static check_size<sizeof(AudioClip), 32 + sizeof(UnityEngine::AudioClip::PCMSetPositionCallback*)> __UnityEngine_AudioClipSizeCheck;
  static_assert(sizeof(AudioClip) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioClip*, "UnityEngine", "AudioClip");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AudioClip::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::get_samples
// Il2CppName: get_samples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::get_samples)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "get_samples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::get_channels
// Il2CppName: get_channels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::get_channels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "get_channels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::get_frequency
// Il2CppName: get_frequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::get_frequency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "get_frequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::get_loadState
// Il2CppName: get_loadState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioDataLoadState (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::get_loadState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "get_loadState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::add_m_PCMReaderCallback
// Il2CppName: add_m_PCMReaderCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(UnityEngine::AudioClip::PCMReaderCallback*)>(&UnityEngine::AudioClip::add_m_PCMReaderCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMReaderCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "add_m_PCMReaderCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::remove_m_PCMReaderCallback
// Il2CppName: remove_m_PCMReaderCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(UnityEngine::AudioClip::PCMReaderCallback*)>(&UnityEngine::AudioClip::remove_m_PCMReaderCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMReaderCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "remove_m_PCMReaderCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::add_m_PCMSetPositionCallback
// Il2CppName: add_m_PCMSetPositionCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(UnityEngine::AudioClip::PCMSetPositionCallback*)>(&UnityEngine::AudioClip::add_m_PCMSetPositionCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMSetPositionCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "add_m_PCMSetPositionCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::remove_m_PCMSetPositionCallback
// Il2CppName: remove_m_PCMSetPositionCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(UnityEngine::AudioClip::PCMSetPositionCallback*)>(&UnityEngine::AudioClip::remove_m_PCMSetPositionCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMSetPositionCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "remove_m_PCMSetPositionCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::AudioClip*, ByRef<::Array<float>*>, int, int)>(&UnityEngine::AudioClip::GetData)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->this_arg;
    static auto* numSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* samplesOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, data, numSamples, samplesOffset});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::AudioClip*, ::Array<float>*, int, int)>(&UnityEngine::AudioClip::SetData)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* numsamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* samplesOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, data, numsamples, samplesOffset});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::Construct_Internal
// Il2CppName: Construct_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioClip* (*)()>(&UnityEngine::AudioClip::Construct_Internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "Construct_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::GetName
// Il2CppName: GetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::GetName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "GetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::CreateUserSound
// Il2CppName: CreateUserSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(::Il2CppString*, int, int, int, bool)>(&UnityEngine::AudioClip::CreateUserSound)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lengthSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "CreateUserSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, lengthSamples, channels, frequency, stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::LoadAudioData
// Il2CppName: LoadAudioData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AudioClip::*)()>(&UnityEngine::AudioClip::LoadAudioData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "LoadAudioData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AudioClip::*)(::Array<float>*, int)>(&UnityEngine::AudioClip::GetData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* offsetSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offsetSamples});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AudioClip::*)(::Array<float>*, int)>(&UnityEngine::AudioClip::SetData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* offsetSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offsetSamples});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioClip* (*)(::Il2CppString*, int, int, int, bool)>(&UnityEngine::AudioClip::Create)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lengthSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, lengthSamples, channels, frequency, stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioClip* (*)(::Il2CppString*, int, int, int, bool, UnityEngine::AudioClip::PCMReaderCallback*, UnityEngine::AudioClip::PCMSetPositionCallback*)>(&UnityEngine::AudioClip::Create)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lengthSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* pcmreadercallback = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMReaderCallback")->byval_arg;
    static auto* pcmsetpositioncallback = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip/PCMSetPositionCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, lengthSamples, channels, frequency, stream, pcmreadercallback, pcmsetpositioncallback});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::InvokePCMReaderCallback_Internal
// Il2CppName: InvokePCMReaderCallback_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(::Array<float>*)>(&UnityEngine::AudioClip::InvokePCMReaderCallback_Internal)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "InvokePCMReaderCallback_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::InvokePCMSetPositionCallback_Internal
// Il2CppName: InvokePCMSetPositionCallback_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::*)(int)>(&UnityEngine::AudioClip::InvokePCMSetPositionCallback_Internal)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip*), "InvokePCMSetPositionCallback_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
