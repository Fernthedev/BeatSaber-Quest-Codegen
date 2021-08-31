// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimeUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class TimeUtility : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Timeline::TimeUtility::$$c
    class $$c;
    // Creating value type constructor for type: TimeUtility
    TimeUtility() noexcept {}
    // Get static field: static public readonly System.Double kTimeEpsilon
    static double _get_kTimeEpsilon();
    // Set static field: static public readonly System.Double kTimeEpsilon
    static void _set_kTimeEpsilon(double value);
    // Get static field: static public readonly System.Double kFrameRateEpsilon
    static double _get_kFrameRateEpsilon();
    // Set static field: static public readonly System.Double kFrameRateEpsilon
    static void _set_kFrameRateEpsilon(double value);
    // Get static field: static public readonly System.Double k_MaxTimelineDurationInSeconds
    static double _get_k_MaxTimelineDurationInSeconds();
    // Set static field: static public readonly System.Double k_MaxTimelineDurationInSeconds
    static void _set_k_MaxTimelineDurationInSeconds(double value);
    // static private System.Void .cctor()
    // Offset: 0x18282D8
    static void _cctor();
    // static private System.Void ValidateFrameRate(System.Double frameRate)
    // Offset: 0x1826FDC
    static void ValidateFrameRate(double frameRate);
    // static public System.Int32 ToFrames(System.Double time, System.Double frameRate)
    // Offset: 0x1827094
    static int ToFrames(double time, double frameRate);
    // static public System.Double ToExactFrames(System.Double time, System.Double frameRate)
    // Offset: 0x1827288
    static double ToExactFrames(double time, double frameRate);
    // static public System.Double FromFrames(System.Int32 frames, System.Double frameRate)
    // Offset: 0x1827300
    static double FromFrames(int frames, double frameRate);
    // static public System.Double FromFrames(System.Double frames, System.Double frameRate)
    // Offset: 0x182737C
    static double FromFrames(double frames, double frameRate);
    // static public System.Boolean OnFrameBoundary(System.Double time, System.Double frameRate)
    // Offset: 0x18273F4
    static bool OnFrameBoundary(double time, double frameRate);
    // static public System.Double GetEpsilon(System.Double time, System.Double frameRate)
    // Offset: 0x18271D4
    static double GetEpsilon(double time, double frameRate);
    // static public System.Boolean OnFrameBoundary(System.Double time, System.Double frameRate, System.Double epsilon)
    // Offset: 0x1827478
    static bool OnFrameBoundary(double time, double frameRate, double epsilon);
    // static public System.Double RoundToFrame(System.Double time, System.Double frameRate)
    // Offset: 0x18275A4
    static double RoundToFrame(double time, double frameRate);
    // static public System.String TimeAsFrames(System.Double timeValue, System.Double frameRate, System.String format)
    // Offset: 0x182768C
    static ::Il2CppString* TimeAsFrames(double timeValue, double frameRate, ::Il2CppString* format);
    // static public System.String TimeAsTimeCode(System.Double timeValue, System.Double frameRate, System.String format)
    // Offset: 0x182778C
    static ::Il2CppString* TimeAsTimeCode(double timeValue, double frameRate, ::Il2CppString* format);
    // static public System.Double ParseTimeCode(System.String timeCode, System.Double frameRate, System.Double defaultValue)
    // Offset: 0x1827C34
    static double ParseTimeCode(::Il2CppString* timeCode, double frameRate, double defaultValue);
    // static public System.Double GetAnimationClipLength(UnityEngine.AnimationClip clip)
    // Offset: 0x18158FC
    static double GetAnimationClipLength(UnityEngine::AnimationClip* clip);
    // static private System.String RemoveChar(System.String str, System.Func`2<System.Char,System.Boolean> charToRemoveFunc)
    // Offset: 0x18281C4
    static ::Il2CppString* RemoveChar(::Il2CppString* str, System::Func_2<::Il2CppChar, bool>* charToRemoveFunc);
  }; // UnityEngine.Timeline.TimeUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimeUtility*, "UnityEngine.Timeline", "TimeUtility");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::TimeUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::ValidateFrameRate
// Il2CppName: ValidateFrameRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(double)>(&UnityEngine::Timeline::TimeUtility::ValidateFrameRate)> {
  static const MethodInfo* get() {
    static auto* frameRate = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility*), "ValidateFrameRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameRate});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::ToFrames
// Il2CppName: ToFrames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(double, double)>(&UnityEngine::Timeline::TimeUtility::ToFrames)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameRate = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility*), "ToFrames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, frameRate});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::ToExactFrames
// Il2CppName: ToExactFrames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double)>(&UnityEngine::Timeline::TimeUtility::ToExactFrames)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameRate = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility*), "ToExactFrames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, frameRate});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::FromFrames
// Il2CppName: FromFrames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(int, double)>(&UnityEngine::Timeline::TimeUtility::FromFrames)> {
  static const MethodInfo* get() {
    static auto* frames = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frameRate = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility*), "FromFrames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frames, frameRate});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::FromFrames
// Il2CppName: FromFrames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double)>(&UnityEngine::Timeline::TimeUtility::FromFrames)> {
  static const MethodInfo* get() {
    static auto* frames = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameRate = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility*), "FromFrames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frames, frameRate});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::OnFrameBoundary
// Il2CppName: OnFrameBoundary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(double, double)>(&UnityEngine::Timeline::TimeUtility::OnFrameBoundary)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameRate = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility*), "OnFrameBoundary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, frameRate});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::GetEpsilon
// Il2CppName: GetEpsilon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double)>(&UnityEngine::Timeline::TimeUtility::GetEpsilon)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameRate = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility*), "GetEpsilon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, frameRate});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::OnFrameBoundary
// Il2CppName: OnFrameBoundary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(double, double, double)>(&UnityEngine::Timeline::TimeUtility::OnFrameBoundary)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameRate = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* epsilon = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility*), "OnFrameBoundary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, frameRate, epsilon});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::RoundToFrame
// Il2CppName: RoundToFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double)>(&UnityEngine::Timeline::TimeUtility::RoundToFrame)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameRate = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility*), "RoundToFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, frameRate});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::TimeAsFrames
// Il2CppName: TimeAsFrames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(double, double, ::Il2CppString*)>(&UnityEngine::Timeline::TimeUtility::TimeAsFrames)> {
  static const MethodInfo* get() {
    static auto* timeValue = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameRate = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility*), "TimeAsFrames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeValue, frameRate, format});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::TimeAsTimeCode
// Il2CppName: TimeAsTimeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(double, double, ::Il2CppString*)>(&UnityEngine::Timeline::TimeUtility::TimeAsTimeCode)> {
  static const MethodInfo* get() {
    static auto* timeValue = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameRate = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility*), "TimeAsTimeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeValue, frameRate, format});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::ParseTimeCode
// Il2CppName: ParseTimeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(::Il2CppString*, double, double)>(&UnityEngine::Timeline::TimeUtility::ParseTimeCode)> {
  static const MethodInfo* get() {
    static auto* timeCode = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* frameRate = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility*), "ParseTimeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeCode, frameRate, defaultValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::GetAnimationClipLength
// Il2CppName: GetAnimationClipLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(UnityEngine::AnimationClip*)>(&UnityEngine::Timeline::TimeUtility::GetAnimationClipLength)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility*), "GetAnimationClipLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::RemoveChar
// Il2CppName: RemoveChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, System::Func_2<::Il2CppChar, bool>*)>(&UnityEngine::Timeline::TimeUtility::RemoveChar)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* charToRemoveFunc = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility*), "RemoveChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, charToRemoveFunc});
  }
};
