// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: UnityEngine.TextureFormat
#include "UnityEngine/TextureFormat.hpp"
// Completed includes
// Type namespace: UnityEngine.Profiling.Experimental
namespace UnityEngine::Profiling::Experimental {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Profiling.Experimental.DebugScreenCapture
  struct DebugScreenCapture/*, public System::ValueType*/ {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xD93EC0
    // [CompilerGeneratedAttribute] Offset: 0xD93EC0
    // private Unity.Collections.NativeArray`1<System.Byte> <rawImageDataReference>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    Unity::Collections::NativeArray_1<uint8_t> rawImageDataReference;
    // [CompilerGeneratedAttribute] Offset: 0xD93EFC
    // [DebuggerBrowsableAttribute] Offset: 0xD93EFC
    // private UnityEngine.TextureFormat <imageFormat>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::TextureFormat imageFormat;
    // Field size check
    static_assert(sizeof(UnityEngine::TextureFormat) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD93F38
    // [DebuggerBrowsableAttribute] Offset: 0xD93F38
    // private System.Int32 <width>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD93F74
    // [DebuggerBrowsableAttribute] Offset: 0xD93F74
    // private System.Int32 <height>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DebugScreenCapture
    constexpr DebugScreenCapture(Unity::Collections::NativeArray_1<uint8_t> rawImageDataReference_ = {}, UnityEngine::TextureFormat imageFormat_ = {}, int width_ = {}, int height_ = {}) noexcept : rawImageDataReference{rawImageDataReference_}, imageFormat{imageFormat_}, width{width_}, height{height_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void set_rawImageDataReference(Unity.Collections.NativeArray`1<System.Byte> value)
    // Offset: 0xF05E20
    void set_rawImageDataReference(Unity::Collections::NativeArray_1<uint8_t> value);
    // public System.Void set_imageFormat(UnityEngine.TextureFormat value)
    // Offset: 0xF05E28
    void set_imageFormat(UnityEngine::TextureFormat value);
    // public System.Void set_width(System.Int32 value)
    // Offset: 0xF05E30
    void set_width(int value);
    // public System.Void set_height(System.Int32 value)
    // Offset: 0xF05E38
    void set_height(int value);
  }; // UnityEngine.Profiling.Experimental.DebugScreenCapture
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Profiling::Experimental::DebugScreenCapture, "UnityEngine.Profiling.Experimental", "DebugScreenCapture");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::Profiling::Experimental::DebugScreenCapture::set_rawImageDataReference
// Il2CppName: set_rawImageDataReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Profiling::Experimental::DebugScreenCapture::*)(Unity::Collections::NativeArray_1<uint8_t>)>(&UnityEngine::Profiling::Experimental::DebugScreenCapture::set_rawImageDataReference)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Experimental::DebugScreenCapture), "set_rawImageDataReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Unity::Collections::NativeArray_1<uint8_t>>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Profiling::Experimental::DebugScreenCapture::set_imageFormat
// Il2CppName: set_imageFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Profiling::Experimental::DebugScreenCapture::*)(UnityEngine::TextureFormat)>(&UnityEngine::Profiling::Experimental::DebugScreenCapture::set_imageFormat)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Experimental::DebugScreenCapture), "set_imageFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::TextureFormat>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Profiling::Experimental::DebugScreenCapture::set_width
// Il2CppName: set_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Profiling::Experimental::DebugScreenCapture::*)(int)>(&UnityEngine::Profiling::Experimental::DebugScreenCapture::set_width)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Experimental::DebugScreenCapture), "set_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Profiling::Experimental::DebugScreenCapture::set_height
// Il2CppName: set_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Profiling::Experimental::DebugScreenCapture::*)(int)>(&UnityEngine::Profiling::Experimental::DebugScreenCapture::set_height)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Experimental::DebugScreenCapture), "set_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
