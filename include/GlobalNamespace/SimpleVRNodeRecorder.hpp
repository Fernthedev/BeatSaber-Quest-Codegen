// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
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
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: SimpleVRNodeRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleVRNodeRecorder : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SimpleVRNodeRecorder::SavedData
    class SavedData;
    // Nested type: GlobalNamespace::SimpleVRNodeRecorder::RecordMode
    struct RecordMode;
    // Size: 0x18
    #pragma pack(push, 1)
    // Autogenerated type: SimpleVRNodeRecorder/SavedData
    // [TokenAttribute] Offset: FFFFFFFF
    class SavedData : public ::Il2CppObject {
      public:
      // Nested type: GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe
      class NodeKeyframe;
      // public SimpleVRNodeRecorder/SavedData/NodeKeyframe[] keyframes
      // Size: 0x8
      // Offset: 0x10
      ::Array<GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*>* keyframes;
      // Field size check
      static_assert(sizeof(::Array<GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*>*) == 0x8);
      // Creating value type constructor for type: SavedData
      SavedData(::Array<GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*>* keyframes_ = {}) noexcept : keyframes{keyframes_} {}
      // Creating conversion operator: operator ::Array<GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*>*
      constexpr operator ::Array<GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*>*() const noexcept {
        return keyframes;
      }
      // Get instance field reference: public SimpleVRNodeRecorder/SavedData/NodeKeyframe[] keyframes
      ::Array<GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*>*& dyn_keyframes();
      // public System.Void .ctor()
      // Offset: 0x107CA08
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static SimpleVRNodeRecorder::SavedData* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleVRNodeRecorder::SavedData::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<SimpleVRNodeRecorder::SavedData*, creationType>()));
      }
    }; // SimpleVRNodeRecorder/SavedData
    #pragma pack(pop)
    static check_size<sizeof(SimpleVRNodeRecorder::SavedData), 16 + sizeof(::Array<GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*>*)> __GlobalNamespace_SimpleVRNodeRecorder_SavedDataSizeCheck;
    static_assert(sizeof(SimpleVRNodeRecorder::SavedData) == 0x18);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: SimpleVRNodeRecorder/RecordMode
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
      // static field const value: static public SimpleVRNodeRecorder/RecordMode Record
      static constexpr const int Record = 0;
      // Get static field: static public SimpleVRNodeRecorder/RecordMode Record
      static GlobalNamespace::SimpleVRNodeRecorder::RecordMode _get_Record();
      // Set static field: static public SimpleVRNodeRecorder/RecordMode Record
      static void _set_Record(GlobalNamespace::SimpleVRNodeRecorder::RecordMode value);
      // static field const value: static public SimpleVRNodeRecorder/RecordMode Playback
      static constexpr const int Playback = 1;
      // Get static field: static public SimpleVRNodeRecorder/RecordMode Playback
      static GlobalNamespace::SimpleVRNodeRecorder::RecordMode _get_Playback();
      // Set static field: static public SimpleVRNodeRecorder/RecordMode Playback
      static void _set_Playback(GlobalNamespace::SimpleVRNodeRecorder::RecordMode value);
      // static field const value: static public SimpleVRNodeRecorder/RecordMode Off
      static constexpr const int Off = 2;
      // Get static field: static public SimpleVRNodeRecorder/RecordMode Off
      static GlobalNamespace::SimpleVRNodeRecorder::RecordMode _get_Off();
      // Set static field: static public SimpleVRNodeRecorder/RecordMode Off
      static void _set_Off(GlobalNamespace::SimpleVRNodeRecorder::RecordMode value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // SimpleVRNodeRecorder/RecordMode
    #pragma pack(pop)
    static check_size<sizeof(SimpleVRNodeRecorder::RecordMode), 0 + sizeof(int)> __GlobalNamespace_SimpleVRNodeRecorder_RecordModeSizeCheck;
    static_assert(sizeof(SimpleVRNodeRecorder::RecordMode) == 0x4);
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
    // private SimpleVRNodeRecorder/RecordMode _mode
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::SimpleVRNodeRecorder::RecordMode mode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleVRNodeRecorder::RecordMode) == 0x4);
    // private UnityEngine.XR.XRNode _node
    // Size: 0x4
    // Offset: 0x2C
    UnityEngine::XR::XRNode node;
    // Field size check
    static_assert(sizeof(UnityEngine::XR::XRNode) == 0x4);
    // private UnityEngine.Transform _playbackTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* playbackTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Single _smooth
    // Size: 0x4
    // Offset: 0x38
    float smooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _forwardOffset
    // Size: 0x4
    // Offset: 0x3C
    float forwardOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0xE45234
    // private IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // private System.Collections.Generic.List`1<SimpleVRNodeRecorder/SavedData/NodeKeyframe> _keyframes
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*>* keyframes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*>*) == 0x8);
    // private System.Int32 _keyframeIndex
    // Size: 0x4
    // Offset: 0x50
    int keyframeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector3 _prevPos
    // Size: 0xC
    // Offset: 0x54
    UnityEngine::Vector3 prevPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _prevRot
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Quaternion prevRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: SimpleVRNodeRecorder
    SimpleVRNodeRecorder(GlobalNamespace::FloatSO* songTime_ = {}, ::Il2CppString* saveFilename_ = {}, GlobalNamespace::SimpleVRNodeRecorder::RecordMode mode_ = {}, UnityEngine::XR::XRNode node_ = {}, UnityEngine::Transform* playbackTransform_ = {}, float smooth_ = {}, float forwardOffset_ = {}, GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}, System::Collections::Generic::List_1<GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*>* keyframes_ = {}, int keyframeIndex_ = {}, UnityEngine::Vector3 prevPos_ = {}, UnityEngine::Quaternion prevRot_ = {}) noexcept : songTime{songTime_}, saveFilename{saveFilename_}, mode{mode_}, node{node_}, playbackTransform{playbackTransform_}, smooth{smooth_}, forwardOffset{forwardOffset_}, vrPlatformHelper{vrPlatformHelper_}, keyframes{keyframes_}, keyframeIndex{keyframeIndex_}, prevPos{prevPos_}, prevRot{prevRot_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private FloatSO _songTime
    GlobalNamespace::FloatSO*& dyn__songTime();
    // Get instance field reference: private System.String _saveFilename
    ::Il2CppString*& dyn__saveFilename();
    // Get instance field reference: private SimpleVRNodeRecorder/RecordMode _mode
    GlobalNamespace::SimpleVRNodeRecorder::RecordMode& dyn__mode();
    // Get instance field reference: private UnityEngine.XR.XRNode _node
    UnityEngine::XR::XRNode& dyn__node();
    // Get instance field reference: private UnityEngine.Transform _playbackTransform
    UnityEngine::Transform*& dyn__playbackTransform();
    // Get instance field reference: private System.Single _smooth
    float& dyn__smooth();
    // Get instance field reference: private System.Single _forwardOffset
    float& dyn__forwardOffset();
    // Get instance field reference: private IVRPlatformHelper _vrPlatformHelper
    GlobalNamespace::IVRPlatformHelper*& dyn__vrPlatformHelper();
    // Get instance field reference: private System.Collections.Generic.List`1<SimpleVRNodeRecorder/SavedData/NodeKeyframe> _keyframes
    System::Collections::Generic::List_1<GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*>*& dyn__keyframes();
    // Get instance field reference: private System.Int32 _keyframeIndex
    int& dyn__keyframeIndex();
    // Get instance field reference: private UnityEngine.Vector3 _prevPos
    UnityEngine::Vector3& dyn__prevPos();
    // Get instance field reference: private UnityEngine.Quaternion _prevRot
    UnityEngine::Quaternion& dyn__prevRot();
    // protected System.Void Awake()
    // Offset: 0x107BDD8
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x107C178
    void OnDestroy();
    // private System.Void RecordNewKeyFrame()
    // Offset: 0x107C2BC
    void RecordNewKeyFrame();
    // protected System.Void Update()
    // Offset: 0x107C488
    void Update();
    // private System.Void Save()
    // Offset: 0x107C188
    void Save();
    // private System.Void Load()
    // Offset: 0x107BEC8
    void Load();
    // public System.Void .ctor()
    // Offset: 0x107CA10
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleVRNodeRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleVRNodeRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleVRNodeRecorder*, creationType>()));
    }
  }; // SimpleVRNodeRecorder
  #pragma pack(pop)
  static check_size<sizeof(SimpleVRNodeRecorder), 96 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_SimpleVRNodeRecorderSizeCheck;
  static_assert(sizeof(SimpleVRNodeRecorder) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleVRNodeRecorder*, "", "SimpleVRNodeRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleVRNodeRecorder::SavedData*, "", "SimpleVRNodeRecorder/SavedData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleVRNodeRecorder::RecordMode, "", "SimpleVRNodeRecorder/RecordMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleVRNodeRecorder::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleVRNodeRecorder::*)()>(&GlobalNamespace::SimpleVRNodeRecorder::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleVRNodeRecorder*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleVRNodeRecorder::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleVRNodeRecorder::*)()>(&GlobalNamespace::SimpleVRNodeRecorder::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleVRNodeRecorder*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleVRNodeRecorder::RecordNewKeyFrame
// Il2CppName: RecordNewKeyFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleVRNodeRecorder::*)()>(&GlobalNamespace::SimpleVRNodeRecorder::RecordNewKeyFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleVRNodeRecorder*), "RecordNewKeyFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleVRNodeRecorder::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleVRNodeRecorder::*)()>(&GlobalNamespace::SimpleVRNodeRecorder::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleVRNodeRecorder*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleVRNodeRecorder::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleVRNodeRecorder::*)()>(&GlobalNamespace::SimpleVRNodeRecorder::Save)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleVRNodeRecorder*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleVRNodeRecorder::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleVRNodeRecorder::*)()>(&GlobalNamespace::SimpleVRNodeRecorder::Load)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleVRNodeRecorder*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleVRNodeRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
