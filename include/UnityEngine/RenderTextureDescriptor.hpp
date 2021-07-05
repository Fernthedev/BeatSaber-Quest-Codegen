// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Experimental.Rendering.GraphicsFormat
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
// Including type: UnityEngine.Rendering.TextureDimension
#include "UnityEngine/Rendering/TextureDimension.hpp"
// Including type: UnityEngine.Rendering.ShadowSamplingMode
#include "UnityEngine/Rendering/ShadowSamplingMode.hpp"
// Including type: UnityEngine.VRTextureUsage
#include "UnityEngine/VRTextureUsage.hpp"
// Including type: UnityEngine.RenderTextureCreationFlags
#include "UnityEngine/RenderTextureCreationFlags.hpp"
// Including type: UnityEngine.RenderTextureMemoryless
#include "UnityEngine/RenderTextureMemoryless.hpp"
// Including type: UnityEngine.RenderTextureFormat
#include "UnityEngine/RenderTextureFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x34
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.RenderTextureDescriptor
  struct RenderTextureDescriptor/*, public System::ValueType*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD933CC
    // [DebuggerBrowsableAttribute] Offset: 0xD933CC
    // private System.Int32 <width>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD93408
    // [DebuggerBrowsableAttribute] Offset: 0xD93408
    // private System.Int32 <height>k__BackingField
    // Size: 0x4
    // Offset: 0x4
    int height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xD93444
    // [CompilerGeneratedAttribute] Offset: 0xD93444
    // private System.Int32 <msaaSamples>k__BackingField
    // Size: 0x4
    // Offset: 0x8
    int msaaSamples;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xD93480
    // [CompilerGeneratedAttribute] Offset: 0xD93480
    // private System.Int32 <volumeDepth>k__BackingField
    // Size: 0x4
    // Offset: 0xC
    int volumeDepth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD934BC
    // [DebuggerBrowsableAttribute] Offset: 0xD934BC
    // private System.Int32 <mipCount>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int mipCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Experimental.Rendering.GraphicsFormat _graphicsFormat
    // Size: 0x4
    // Offset: 0x14
    UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::Rendering::GraphicsFormat) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xD934F8
    // [CompilerGeneratedAttribute] Offset: 0xD934F8
    // private UnityEngine.Experimental.Rendering.GraphicsFormat <stencilFormat>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::Experimental::Rendering::GraphicsFormat stencilFormat;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::Rendering::GraphicsFormat) == 0x4);
    // private System.Int32 _depthBufferBits
    // Size: 0x4
    // Offset: 0x1C
    int depthBufferBits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD93534
    // [DebuggerBrowsableAttribute] Offset: 0xD93534
    // private UnityEngine.Rendering.TextureDimension <dimension>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    UnityEngine::Rendering::TextureDimension dimension;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::TextureDimension) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD93570
    // [DebuggerBrowsableAttribute] Offset: 0xD93570
    // private UnityEngine.Rendering.ShadowSamplingMode <shadowSamplingMode>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::ShadowSamplingMode) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD935AC
    // [DebuggerBrowsableAttribute] Offset: 0xD935AC
    // private UnityEngine.VRTextureUsage <vrUsage>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    UnityEngine::VRTextureUsage vrUsage;
    // Field size check
    static_assert(sizeof(UnityEngine::VRTextureUsage) == 0x4);
    // private UnityEngine.RenderTextureCreationFlags _flags
    // Size: 0x4
    // Offset: 0x2C
    UnityEngine::RenderTextureCreationFlags flags;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTextureCreationFlags) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xD935E8
    // [CompilerGeneratedAttribute] Offset: 0xD935E8
    // private UnityEngine.RenderTextureMemoryless <memoryless>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    UnityEngine::RenderTextureMemoryless memoryless;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTextureMemoryless) == 0x4);
    // Creating value type constructor for type: RenderTextureDescriptor
    constexpr RenderTextureDescriptor(int width_ = {}, int height_ = {}, int msaaSamples_ = {}, int volumeDepth_ = {}, int mipCount_ = {}, UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat_ = {}, UnityEngine::Experimental::Rendering::GraphicsFormat stencilFormat_ = {}, int depthBufferBits_ = {}, UnityEngine::Rendering::TextureDimension dimension_ = {}, UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode_ = {}, UnityEngine::VRTextureUsage vrUsage_ = {}, UnityEngine::RenderTextureCreationFlags flags_ = {}, UnityEngine::RenderTextureMemoryless memoryless_ = {}) noexcept : width{width_}, height{height_}, msaaSamples{msaaSamples_}, volumeDepth{volumeDepth_}, mipCount{mipCount_}, graphicsFormat{graphicsFormat_}, stencilFormat{stencilFormat_}, depthBufferBits{depthBufferBits_}, dimension{dimension_}, shadowSamplingMode{shadowSamplingMode_}, vrUsage{vrUsage_}, flags{flags_}, memoryless{memoryless_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static private System.Int32[] depthFormatBits
    static ::Array<int>* _get_depthFormatBits();
    // Set static field: static private System.Int32[] depthFormatBits
    static void _set_depthFormatBits(::Array<int>* value);
    // public System.Int32 get_width()
    // Offset: 0xF063FC
    int get_width();
    // public System.Void set_width(System.Int32 value)
    // Offset: 0xF06404
    void set_width(int value);
    // public System.Int32 get_height()
    // Offset: 0xF0640C
    int get_height();
    // public System.Void set_height(System.Int32 value)
    // Offset: 0xF06414
    void set_height(int value);
    // public System.Int32 get_msaaSamples()
    // Offset: 0xF0641C
    int get_msaaSamples();
    // public System.Void set_msaaSamples(System.Int32 value)
    // Offset: 0xF06424
    void set_msaaSamples(int value);
    // public System.Int32 get_volumeDepth()
    // Offset: 0xF0642C
    int get_volumeDepth();
    // public System.Void set_volumeDepth(System.Int32 value)
    // Offset: 0xF06434
    void set_volumeDepth(int value);
    // public System.Void set_mipCount(System.Int32 value)
    // Offset: 0xF0643C
    void set_mipCount(int value);
    // public UnityEngine.Experimental.Rendering.GraphicsFormat get_graphicsFormat()
    // Offset: 0xF06444
    UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();
    // public System.Void set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat value)
    // Offset: 0xF0644C
    void set_graphicsFormat(UnityEngine::Experimental::Rendering::GraphicsFormat value);
    // public UnityEngine.RenderTextureFormat get_colorFormat()
    // Offset: 0xF06490
    UnityEngine::RenderTextureFormat get_colorFormat();
    // public System.Void set_colorFormat(UnityEngine.RenderTextureFormat value)
    // Offset: 0xF0649C
    void set_colorFormat(UnityEngine::RenderTextureFormat value);
    // public System.Boolean get_sRGB()
    // Offset: 0xF064A4
    bool get_sRGB();
    // public System.Void set_sRGB(System.Boolean value)
    // Offset: 0xF064B0
    void set_sRGB(bool value);
    // public System.Int32 get_depthBufferBits()
    // Offset: 0xF064BC
    int get_depthBufferBits();
    // public System.Void set_depthBufferBits(System.Int32 value)
    // Offset: 0xF064C4
    void set_depthBufferBits(int value);
    // public System.Void set_dimension(UnityEngine.Rendering.TextureDimension value)
    // Offset: 0xF064F0
    void set_dimension(UnityEngine::Rendering::TextureDimension value);
    // public System.Void set_shadowSamplingMode(UnityEngine.Rendering.ShadowSamplingMode value)
    // Offset: 0xF064F8
    void set_shadowSamplingMode(UnityEngine::Rendering::ShadowSamplingMode value);
    // public System.Void set_vrUsage(UnityEngine.VRTextureUsage value)
    // Offset: 0xF06500
    void set_vrUsage(UnityEngine::VRTextureUsage value);
    // public System.Void set_memoryless(UnityEngine.RenderTextureMemoryless value)
    // Offset: 0xF06508
    void set_memoryless(UnityEngine::RenderTextureMemoryless value);
    // public System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.RenderTextureFormat colorFormat, System.Int32 depthBufferBits)
    // Offset: 0xF06510
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RenderTextureDescriptor(int width, int height, UnityEngine::RenderTextureFormat colorFormat, int depthBufferBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTextureDescriptor::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(width), ::il2cpp_utils::ExtractType(height), ::il2cpp_utils::ExtractType(colorFormat), ::il2cpp_utils::ExtractType(depthBufferBits)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, width, height, colorFormat, depthBufferBits);
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.Experimental.Rendering.GraphicsFormat colorFormat, System.Int32 depthBufferBits)
    // Offset: 0xF06518
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RenderTextureDescriptor(int width, int height, UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int depthBufferBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTextureDescriptor::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(width), ::il2cpp_utils::ExtractType(height), ::il2cpp_utils::ExtractType(colorFormat), ::il2cpp_utils::ExtractType(depthBufferBits)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, width, height, colorFormat, depthBufferBits);
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.Experimental.Rendering.GraphicsFormat colorFormat, System.Int32 depthBufferBits, System.Int32 mipCount)
    // Offset: 0xF06520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RenderTextureDescriptor(int width, int height, UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int depthBufferBits, int mipCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTextureDescriptor::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(width), ::il2cpp_utils::ExtractType(height), ::il2cpp_utils::ExtractType(colorFormat), ::il2cpp_utils::ExtractType(depthBufferBits), ::il2cpp_utils::ExtractType(mipCount)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, width, height, colorFormat, depthBufferBits, mipCount);
    }
    // private System.Void SetOrClearRenderTextureCreationFlag(System.Boolean value, UnityEngine.RenderTextureCreationFlags flag)
    // Offset: 0xF06528
    void SetOrClearRenderTextureCreationFlag(bool value, UnityEngine::RenderTextureCreationFlags flag);
    // public System.Void set_useMipMap(System.Boolean value)
    // Offset: 0xF06544
    void set_useMipMap(bool value);
    // public System.Void set_autoGenerateMips(System.Boolean value)
    // Offset: 0xF06560
    void set_autoGenerateMips(bool value);
    // public System.Void set_enableRandomWrite(System.Boolean value)
    // Offset: 0xF0657C
    void set_enableRandomWrite(bool value);
    // System.Void set_createdFromScript(System.Boolean value)
    // Offset: 0xF06598
    void set_createdFromScript(bool value);
    // public System.Void set_useDynamicScale(System.Boolean value)
    // Offset: 0xF065B4
    void set_useDynamicScale(bool value);
    // static private System.Void .cctor()
    // Offset: 0x1B2BA24
    static void _cctor();
  }; // UnityEngine.RenderTextureDescriptor
  #pragma pack(pop)
  static check_size<sizeof(RenderTextureDescriptor), 48 + sizeof(UnityEngine::RenderTextureMemoryless)> __UnityEngine_RenderTextureDescriptorSizeCheck;
  static_assert(sizeof(RenderTextureDescriptor) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderTextureDescriptor, "UnityEngine", "RenderTextureDescriptor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_width)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_width
// Il2CppName: set_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(int)>(&UnityEngine::RenderTextureDescriptor::set_width)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_height)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_height
// Il2CppName: set_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(int)>(&UnityEngine::RenderTextureDescriptor::set_height)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_msaaSamples
// Il2CppName: get_msaaSamples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_msaaSamples)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_msaaSamples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_msaaSamples
// Il2CppName: set_msaaSamples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(int)>(&UnityEngine::RenderTextureDescriptor::set_msaaSamples)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_msaaSamples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_volumeDepth
// Il2CppName: get_volumeDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_volumeDepth)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_volumeDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_volumeDepth
// Il2CppName: set_volumeDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(int)>(&UnityEngine::RenderTextureDescriptor::set_volumeDepth)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_volumeDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_mipCount
// Il2CppName: set_mipCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(int)>(&UnityEngine::RenderTextureDescriptor::set_mipCount)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_mipCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_graphicsFormat
// Il2CppName: get_graphicsFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Experimental::Rendering::GraphicsFormat (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_graphicsFormat)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_graphicsFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_graphicsFormat
// Il2CppName: set_graphicsFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(UnityEngine::Experimental::Rendering::GraphicsFormat)>(&UnityEngine::RenderTextureDescriptor::set_graphicsFormat)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_graphicsFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_colorFormat
// Il2CppName: get_colorFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RenderTextureFormat (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_colorFormat)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_colorFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_colorFormat
// Il2CppName: set_colorFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(UnityEngine::RenderTextureFormat)>(&UnityEngine::RenderTextureDescriptor::set_colorFormat)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_colorFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_sRGB
// Il2CppName: get_sRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_sRGB)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_sRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_sRGB
// Il2CppName: set_sRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(bool)>(&UnityEngine::RenderTextureDescriptor::set_sRGB)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_sRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::get_depthBufferBits
// Il2CppName: get_depthBufferBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RenderTextureDescriptor::*)()>(&UnityEngine::RenderTextureDescriptor::get_depthBufferBits)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "get_depthBufferBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_depthBufferBits
// Il2CppName: set_depthBufferBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(int)>(&UnityEngine::RenderTextureDescriptor::set_depthBufferBits)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_depthBufferBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_dimension
// Il2CppName: set_dimension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(UnityEngine::Rendering::TextureDimension)>(&UnityEngine::RenderTextureDescriptor::set_dimension)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "TextureDimension")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_dimension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_shadowSamplingMode
// Il2CppName: set_shadowSamplingMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(UnityEngine::Rendering::ShadowSamplingMode)>(&UnityEngine::RenderTextureDescriptor::set_shadowSamplingMode)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ShadowSamplingMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_shadowSamplingMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_vrUsage
// Il2CppName: set_vrUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(UnityEngine::VRTextureUsage)>(&UnityEngine::RenderTextureDescriptor::set_vrUsage)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "VRTextureUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_vrUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_memoryless
// Il2CppName: set_memoryless
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(UnityEngine::RenderTextureMemoryless)>(&UnityEngine::RenderTextureDescriptor::set_memoryless)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureMemoryless")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_memoryless", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::RenderTextureDescriptor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::RenderTextureDescriptor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::RenderTextureDescriptor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::SetOrClearRenderTextureCreationFlag
// Il2CppName: SetOrClearRenderTextureCreationFlag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(bool, UnityEngine::RenderTextureCreationFlags)>(&UnityEngine::RenderTextureDescriptor::SetOrClearRenderTextureCreationFlag)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* flag = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureCreationFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "SetOrClearRenderTextureCreationFlag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, flag});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_useMipMap
// Il2CppName: set_useMipMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(bool)>(&UnityEngine::RenderTextureDescriptor::set_useMipMap)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_useMipMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_autoGenerateMips
// Il2CppName: set_autoGenerateMips
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(bool)>(&UnityEngine::RenderTextureDescriptor::set_autoGenerateMips)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_autoGenerateMips", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_enableRandomWrite
// Il2CppName: set_enableRandomWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(bool)>(&UnityEngine::RenderTextureDescriptor::set_enableRandomWrite)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_enableRandomWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_createdFromScript
// Il2CppName: set_createdFromScript
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(bool)>(&UnityEngine::RenderTextureDescriptor::set_createdFromScript)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_createdFromScript", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::set_useDynamicScale
// Il2CppName: set_useDynamicScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RenderTextureDescriptor::*)(bool)>(&UnityEngine::RenderTextureDescriptor::set_useDynamicScale)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), "set_useDynamicScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RenderTextureDescriptor::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::RenderTextureDescriptor::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RenderTextureDescriptor), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
