// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: VRTrackersRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class VRTrackersRecorder : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VRTrackersRecorder::SavedData
    class SavedData;
    // Nested type: GlobalNamespace::VRTrackersRecorder::RecordMode
    struct RecordMode;
    // Nested type: GlobalNamespace::VRTrackersRecorder::Keyframe
    class Keyframe;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: VRTrackersRecorder/RecordMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct RecordMode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: RecordMode
      constexpr RecordMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VRTrackersRecorder/RecordMode Record
      static constexpr const int Record = 0;
      // Get static field: static public VRTrackersRecorder/RecordMode Record
      static GlobalNamespace::VRTrackersRecorder::RecordMode _get_Record();
      // Set static field: static public VRTrackersRecorder/RecordMode Record
      static void _set_Record(GlobalNamespace::VRTrackersRecorder::RecordMode value);
      // static field const value: static public VRTrackersRecorder/RecordMode Playback
      static constexpr const int Playback = 1;
      // Get static field: static public VRTrackersRecorder/RecordMode Playback
      static GlobalNamespace::VRTrackersRecorder::RecordMode _get_Playback();
      // Set static field: static public VRTrackersRecorder/RecordMode Playback
      static void _set_Playback(GlobalNamespace::VRTrackersRecorder::RecordMode value);
      // static field const value: static public VRTrackersRecorder/RecordMode Off
      static constexpr const int Off = 2;
      // Get static field: static public VRTrackersRecorder/RecordMode Off
      static GlobalNamespace::VRTrackersRecorder::RecordMode _get_Off();
      // Set static field: static public VRTrackersRecorder/RecordMode Off
      static void _set_Off(GlobalNamespace::VRTrackersRecorder::RecordMode value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VRTrackersRecorder/RecordMode
    #pragma pack(pop)
    static check_size<sizeof(VRTrackersRecorder::RecordMode), 0 + sizeof(int)> __GlobalNamespace_VRTrackersRecorder_RecordModeSizeCheck;
    static_assert(sizeof(VRTrackersRecorder::RecordMode) == 0x4);
    // private FloatSO _songTime
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FloatSO* songTime;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // private System.String _saveFilename
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* saveFilename;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private VRTrackersRecorder/RecordMode _mode
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::VRTrackersRecorder::RecordMode mode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRTrackersRecorder::RecordMode) == 0x4);
    // Padding between fields: mode and: originTransform
    char __padding2[0x4] = {};
    // private UnityEngine.Transform _originTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* originTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform[] _playbackTransforms
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::Transform*>* playbackTransforms;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // private System.Collections.Generic.List`1<VRTrackersRecorder/Keyframe> _keyframes
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::VRTrackersRecorder::Keyframe*>* keyframes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::VRTrackersRecorder::Keyframe*>*) == 0x8);
    // private System.Int32 _keyframeIndex
    // Size: 0x4
    // Offset: 0x48
    int keyframeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: keyframeIndex and: newPosesAction
    char __padding6[0x4] = {};
    // private SteamVR_Events/Action _newPosesAction
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::SteamVR_Events::Action* newPosesAction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_Events::Action*) == 0x8);
    // private UnityEngine.Vector3 _loadedOriginPos
    // Size: 0xC
    // Offset: 0x58
    UnityEngine::Vector3 loadedOriginPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _loadedOriginRot
    // Size: 0x10
    // Offset: 0x64
    UnityEngine::Quaternion loadedOriginRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: VRTrackersRecorder
    VRTrackersRecorder(GlobalNamespace::FloatSO* songTime_ = {}, ::Il2CppString* saveFilename_ = {}, GlobalNamespace::VRTrackersRecorder::RecordMode mode_ = {}, UnityEngine::Transform* originTransform_ = {}, ::Array<UnityEngine::Transform*>* playbackTransforms_ = {}, System::Collections::Generic::List_1<GlobalNamespace::VRTrackersRecorder::Keyframe*>* keyframes_ = {}, int keyframeIndex_ = {}, GlobalNamespace::SteamVR_Events::Action* newPosesAction_ = {}, UnityEngine::Vector3 loadedOriginPos_ = {}, UnityEngine::Quaternion loadedOriginRot_ = {}) noexcept : songTime{songTime_}, saveFilename{saveFilename_}, mode{mode_}, originTransform{originTransform_}, playbackTransforms{playbackTransforms_}, keyframes{keyframes_}, keyframeIndex{keyframeIndex_}, newPosesAction{newPosesAction_}, loadedOriginPos{loadedOriginPos_}, loadedOriginRot{loadedOriginRot_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private FloatSO _songTime
    GlobalNamespace::FloatSO*& dyn__songTime();
    // Get instance field reference: private System.String _saveFilename
    ::Il2CppString*& dyn__saveFilename();
    // Get instance field reference: private VRTrackersRecorder/RecordMode _mode
    GlobalNamespace::VRTrackersRecorder::RecordMode& dyn__mode();
    // Get instance field reference: private UnityEngine.Transform _originTransform
    UnityEngine::Transform*& dyn__originTransform();
    // Get instance field reference: private UnityEngine.Transform[] _playbackTransforms
    ::Array<UnityEngine::Transform*>*& dyn__playbackTransforms();
    // Get instance field reference: private System.Collections.Generic.List`1<VRTrackersRecorder/Keyframe> _keyframes
    System::Collections::Generic::List_1<GlobalNamespace::VRTrackersRecorder::Keyframe*>*& dyn__keyframes();
    // Get instance field reference: private System.Int32 _keyframeIndex
    int& dyn__keyframeIndex();
    // Get instance field reference: private SteamVR_Events/Action _newPosesAction
    GlobalNamespace::SteamVR_Events::Action*& dyn__newPosesAction();
    // Get instance field reference: private UnityEngine.Vector3 _loadedOriginPos
    UnityEngine::Vector3& dyn__loadedOriginPos();
    // Get instance field reference: private UnityEngine.Quaternion _loadedOriginRot
    UnityEngine::Quaternion& dyn__loadedOriginRot();
    // protected System.Void Awake()
    // Offset: 0x12A109C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x12A1718
    void OnDestroy();
    // protected System.Void OnEnable()
    // Offset: 0x12A1A4C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x12A1A70
    void OnDisable();
    // private System.Void OnNewPoses(Valve.VR.TrackedDevicePose_t[] poses)
    // Offset: 0x12A1A94
    void OnNewPoses(::Array<Valve::VR::TrackedDevicePose_t>* poses);
    // protected System.Void Update()
    // Offset: 0x12A1D08
    void Update();
    // private System.Void Save()
    // Offset: 0x12A1728
    void Save();
    // private System.Void Load()
    // Offset: 0x12A1234
    void Load();
    // public System.Void .ctor()
    // Offset: 0x12A216C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRTrackersRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRTrackersRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRTrackersRecorder*, creationType>()));
    }
  }; // VRTrackersRecorder
  #pragma pack(pop)
  static check_size<sizeof(VRTrackersRecorder), 100 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_VRTrackersRecorderSizeCheck;
  static_assert(sizeof(VRTrackersRecorder) == 0x74);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTrackersRecorder*, "", "VRTrackersRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTrackersRecorder::RecordMode, "", "VRTrackersRecorder/RecordMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)()>(&GlobalNamespace::VRTrackersRecorder::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)()>(&GlobalNamespace::VRTrackersRecorder::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)()>(&GlobalNamespace::VRTrackersRecorder::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)()>(&GlobalNamespace::VRTrackersRecorder::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::OnNewPoses
// Il2CppName: OnNewPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)(::Array<Valve::VR::TrackedDevicePose_t>*)>(&GlobalNamespace::VRTrackersRecorder::OnNewPoses)> {
  static const MethodInfo* get() {
    static auto* poses = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "OnNewPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{poses});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)()>(&GlobalNamespace::VRTrackersRecorder::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)()>(&GlobalNamespace::VRTrackersRecorder::Save)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)()>(&GlobalNamespace::VRTrackersRecorder::Load)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
