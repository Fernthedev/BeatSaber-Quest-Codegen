// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationClipPlayable
  struct AnimationClipPlayable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationClipPlayable, "UnityEngine.Animations", "AnimationClipPlayable");
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimationClipPlayable
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 1071D10
  // [NativeHeaderAttribute] Offset: 1071D10
  // [StaticAccessorAttribute] Offset: 1071D10
  // [RequiredByNativeCodeAttribute] Offset: 1071D10
  struct AnimationClipPlayable/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>, public ::UnityEngine::Playables::IPlayable*/ {
    public:
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableHandle) == 0xC);
    public:
    // Creating value type constructor for type: AnimationClipPlayable
    constexpr AnimationClipPlayable(::UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>
    operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>*>(this);
    }
    // Creating interface conversion operator: i_AnimationClipPlayable
    inline ::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>* i_AnimationClipPlayable() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Playables::IPlayable
    operator ::UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<::UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating interface conversion operator: i_IPlayable
    inline ::UnityEngine::Playables::IPlayable* i_IPlayable() noexcept {
      return reinterpret_cast<::UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Playables::PlayableHandle
    constexpr operator ::UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get instance field reference: private UnityEngine.Playables.PlayableHandle m_Handle
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableHandle& dyn_m_Handle();
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x2A7CE4C
    // ABORTED: conflicts with another method.  AnimationClipPlayable(::UnityEngine::Playables::PlayableHandle handle);
    // static public UnityEngine.Animations.AnimationClipPlayable Create(UnityEngine.Playables.PlayableGraph graph, UnityEngine.AnimationClip clip)
    // Offset: 0x2A7CD48
    static ::UnityEngine::Animations::AnimationClipPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip* clip);
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph, UnityEngine.AnimationClip clip)
    // Offset: 0x2A7CD84
    static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip* clip);
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0x2A7CF6C
    ::UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimationClipPlayable other)
    // Offset: 0x2A7CFAC
    bool Equals(::UnityEngine::Animations::AnimationClipPlayable other);
    // public System.Void SetApplyFootIK(System.Boolean value)
    // Offset: 0x2A7D034
    void SetApplyFootIK(bool value);
    // System.Void SetRemoveStartOffset(System.Boolean value)
    // Offset: 0x2A7D0D4
    void SetRemoveStartOffset(bool value);
    // System.Void SetOverrideLoopTime(System.Boolean value)
    // Offset: 0x2A7D174
    void SetOverrideLoopTime(bool value);
    // System.Void SetLoopTime(System.Boolean value)
    // Offset: 0x2A7D214
    void SetLoopTime(bool value);
    // static private System.Boolean CreateHandleInternal(UnityEngine.Playables.PlayableGraph graph, UnityEngine.AnimationClip clip, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x2A7CF04
    static bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip* clip, ByRef<::UnityEngine::Playables::PlayableHandle> handle);
    // static private System.Void SetApplyFootIKInternal(ref UnityEngine.Playables.PlayableHandle handle, System.Boolean value)
    // Offset: 0x2A7D084
    static void SetApplyFootIKInternal(ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);
    // static private System.Void SetRemoveStartOffsetInternal(ref UnityEngine.Playables.PlayableHandle handle, System.Boolean value)
    // Offset: 0x2A7D124
    static void SetRemoveStartOffsetInternal(ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);
    // static private System.Void SetOverrideLoopTimeInternal(ref UnityEngine.Playables.PlayableHandle handle, System.Boolean value)
    // Offset: 0x2A7D1C4
    static void SetOverrideLoopTimeInternal(ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);
    // static private System.Void SetLoopTimeInternal(ref UnityEngine.Playables.PlayableHandle handle, System.Boolean value)
    // Offset: 0x2A7D264
    static void SetLoopTimeInternal(ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);
    // static private System.Boolean CreateHandleInternal_Injected(ref UnityEngine.Playables.PlayableGraph graph, UnityEngine.AnimationClip clip, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x2A7D2B4
    static bool CreateHandleInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> graph, ::UnityEngine::AnimationClip* clip, ByRef<::UnityEngine::Playables::PlayableHandle> handle);
  }; // UnityEngine.Animations.AnimationClipPlayable
  #pragma pack(pop)
  static check_size<sizeof(AnimationClipPlayable), 0 + sizeof(::UnityEngine::Playables::PlayableHandle)> __UnityEngine_Animations_AnimationClipPlayableSizeCheck;
  static_assert(sizeof(AnimationClipPlayable) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationClipPlayable::AnimationClipPlayable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationClipPlayable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::AnimationClipPlayable (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*)>(&UnityEngine::Animations::AnimationClipPlayable::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationClipPlayable), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, clip});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationClipPlayable::CreateHandle
// Il2CppName: CreateHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*)>(&UnityEngine::Animations::AnimationClipPlayable::CreateHandle)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationClipPlayable), "CreateHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, clip});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationClipPlayable::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (UnityEngine::Animations::AnimationClipPlayable::*)()>(&UnityEngine::Animations::AnimationClipPlayable::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationClipPlayable), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationClipPlayable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::AnimationClipPlayable::*)(::UnityEngine::Animations::AnimationClipPlayable)>(&UnityEngine::Animations::AnimationClipPlayable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationClipPlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationClipPlayable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationClipPlayable::SetApplyFootIK
// Il2CppName: SetApplyFootIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::AnimationClipPlayable::*)(bool)>(&UnityEngine::Animations::AnimationClipPlayable::SetApplyFootIK)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationClipPlayable), "SetApplyFootIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationClipPlayable::SetRemoveStartOffset
// Il2CppName: SetRemoveStartOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::AnimationClipPlayable::*)(bool)>(&UnityEngine::Animations::AnimationClipPlayable::SetRemoveStartOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationClipPlayable), "SetRemoveStartOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationClipPlayable::SetOverrideLoopTime
// Il2CppName: SetOverrideLoopTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::AnimationClipPlayable::*)(bool)>(&UnityEngine::Animations::AnimationClipPlayable::SetOverrideLoopTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationClipPlayable), "SetOverrideLoopTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationClipPlayable::SetLoopTime
// Il2CppName: SetLoopTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::AnimationClipPlayable::*)(bool)>(&UnityEngine::Animations::AnimationClipPlayable::SetLoopTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationClipPlayable), "SetLoopTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationClipPlayable::CreateHandleInternal
// Il2CppName: CreateHandleInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*, ByRef<::UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Animations::AnimationClipPlayable::CreateHandleInternal)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationClipPlayable), "CreateHandleInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, clip, handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationClipPlayable::SetApplyFootIKInternal
// Il2CppName: SetApplyFootIKInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableHandle>, bool)>(&UnityEngine::Animations::AnimationClipPlayable::SetApplyFootIKInternal)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationClipPlayable), "SetApplyFootIKInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationClipPlayable::SetRemoveStartOffsetInternal
// Il2CppName: SetRemoveStartOffsetInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableHandle>, bool)>(&UnityEngine::Animations::AnimationClipPlayable::SetRemoveStartOffsetInternal)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationClipPlayable), "SetRemoveStartOffsetInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationClipPlayable::SetOverrideLoopTimeInternal
// Il2CppName: SetOverrideLoopTimeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableHandle>, bool)>(&UnityEngine::Animations::AnimationClipPlayable::SetOverrideLoopTimeInternal)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationClipPlayable), "SetOverrideLoopTimeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationClipPlayable::SetLoopTimeInternal
// Il2CppName: SetLoopTimeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableHandle>, bool)>(&UnityEngine::Animations::AnimationClipPlayable::SetLoopTimeInternal)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationClipPlayable), "SetLoopTimeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationClipPlayable::CreateHandleInternal_Injected
// Il2CppName: CreateHandleInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Playables::PlayableGraph>, ::UnityEngine::AnimationClip*, ByRef<::UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Animations::AnimationClipPlayable::CreateHandleInternal_Injected)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationClipPlayable), "CreateHandleInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, clip, handle});
  }
};
