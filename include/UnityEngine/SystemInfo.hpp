// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: OperatingSystemFamily
  struct OperatingSystemFamily;
  // Forward declaring type: DeviceType
  struct DeviceType;
  // Forward declaring type: RenderTextureFormat
  struct RenderTextureFormat;
  // Forward declaring type: TextureFormat
  struct TextureFormat;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: GraphicsDeviceType
  struct GraphicsDeviceType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Enum
  class Enum;
}
// Forward declaring namespace: UnityEngine::Experimental::Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: GraphicsFormat
  struct GraphicsFormat;
  // Forward declaring type: FormatUsage
  struct FormatUsage;
  // Forward declaring type: DefaultFormat
  struct DefaultFormat;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SystemInfo
  class SystemInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::SystemInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SystemInfo*, "UnityEngine", "SystemInfo");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SystemInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 1058A1C
  // [NativeHeaderAttribute] Offset: 1058A1C
  // [NativeHeaderAttribute] Offset: 1058A1C
  // [NativeHeaderAttribute] Offset: 1058A1C
  // [NativeHeaderAttribute] Offset: 1058A1C
  // [NativeHeaderAttribute] Offset: 1058A1C
  class SystemInfo : public ::Il2CppObject {
    public:
    // static public UnityEngine.OperatingSystemFamily get_operatingSystemFamily()
    // Offset: 0x28155D4
    static ::UnityEngine::OperatingSystemFamily get_operatingSystemFamily();
    // static public UnityEngine.DeviceType get_deviceType()
    // Offset: 0x281563C
    static ::UnityEngine::DeviceType get_deviceType();
    // static public UnityEngine.Rendering.GraphicsDeviceType get_graphicsDeviceType()
    // Offset: 0x28156A4
    static ::UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType();
    // static public System.String get_graphicsDeviceVersion()
    // Offset: 0x281570C
    static ::StringW get_graphicsDeviceVersion();
    // static public System.Boolean get_supportsInstancing()
    // Offset: 0x2815774
    static bool get_supportsInstancing();
    // static public System.Boolean get_usesReversedZBuffer()
    // Offset: 0x28157DC
    static bool get_usesReversedZBuffer();
    // static private System.Boolean IsValidEnumValue(System.Enum value)
    // Offset: 0x2815844
    static bool IsValidEnumValue(::System::Enum* value);
    // static public System.Boolean SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat format)
    // Offset: 0x28158CC
    static bool SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat format);
    // static public System.Boolean SupportsTextureFormat(UnityEngine.TextureFormat format)
    // Offset: 0x28159DC
    static bool SupportsTextureFormat(::UnityEngine::TextureFormat format);
    // static private UnityEngine.OperatingSystemFamily GetOperatingSystemFamily()
    // Offset: 0x2815608
    static ::UnityEngine::OperatingSystemFamily GetOperatingSystemFamily();
    // static private UnityEngine.DeviceType GetDeviceType()
    // Offset: 0x2815670
    static ::UnityEngine::DeviceType GetDeviceType();
    // static private UnityEngine.Rendering.GraphicsDeviceType GetGraphicsDeviceType()
    // Offset: 0x28156D8
    static ::UnityEngine::Rendering::GraphicsDeviceType GetGraphicsDeviceType();
    // static private System.String GetGraphicsDeviceVersion()
    // Offset: 0x2815740
    static ::StringW GetGraphicsDeviceVersion();
    // static private System.Boolean SupportsInstancing()
    // Offset: 0x28157A8
    static bool SupportsInstancing();
    // static private System.Boolean UsesReversedZBuffer()
    // Offset: 0x2815810
    static bool UsesReversedZBuffer();
    // static private System.Boolean HasRenderTextureNative(UnityEngine.RenderTextureFormat format)
    // Offset: 0x281599C
    static bool HasRenderTextureNative(::UnityEngine::RenderTextureFormat format);
    // static private System.Boolean SupportsTextureFormatNative(UnityEngine.TextureFormat format)
    // Offset: 0x2815AAC
    static bool SupportsTextureFormatNative(::UnityEngine::TextureFormat format);
    // static public System.Boolean IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.FormatUsage usage)
    // Offset: 0x2815AEC
    static bool IsFormatSupported(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage);
    // static public UnityEngine.Experimental.Rendering.GraphicsFormat GetCompatibleFormat(UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.FormatUsage usage)
    // Offset: 0x2815B3C
    static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage);
    // static public UnityEngine.Experimental.Rendering.GraphicsFormat GetGraphicsFormat(UnityEngine.Experimental.Rendering.DefaultFormat format)
    // Offset: 0x2815B8C
    static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format);
  }; // UnityEngine.SystemInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SystemInfo::get_operatingSystemFamily
// Il2CppName: get_operatingSystemFamily
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::OperatingSystemFamily (*)()>(&UnityEngine::SystemInfo::get_operatingSystemFamily)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "get_operatingSystemFamily", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::get_deviceType
// Il2CppName: get_deviceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::DeviceType (*)()>(&UnityEngine::SystemInfo::get_deviceType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "get_deviceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::get_graphicsDeviceType
// Il2CppName: get_graphicsDeviceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GraphicsDeviceType (*)()>(&UnityEngine::SystemInfo::get_graphicsDeviceType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "get_graphicsDeviceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::get_graphicsDeviceVersion
// Il2CppName: get_graphicsDeviceVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&UnityEngine::SystemInfo::get_graphicsDeviceVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "get_graphicsDeviceVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::get_supportsInstancing
// Il2CppName: get_supportsInstancing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::SystemInfo::get_supportsInstancing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "get_supportsInstancing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::get_usesReversedZBuffer
// Il2CppName: get_usesReversedZBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::SystemInfo::get_usesReversedZBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "get_usesReversedZBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::IsValidEnumValue
// Il2CppName: IsValidEnumValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Enum*)>(&UnityEngine::SystemInfo::IsValidEnumValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Enum")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "IsValidEnumValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::SupportsRenderTextureFormat
// Il2CppName: SupportsRenderTextureFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RenderTextureFormat)>(&UnityEngine::SystemInfo::SupportsRenderTextureFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "SupportsRenderTextureFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::SupportsTextureFormat
// Il2CppName: SupportsTextureFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::TextureFormat)>(&UnityEngine::SystemInfo::SupportsTextureFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "SupportsTextureFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::GetOperatingSystemFamily
// Il2CppName: GetOperatingSystemFamily
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::OperatingSystemFamily (*)()>(&UnityEngine::SystemInfo::GetOperatingSystemFamily)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "GetOperatingSystemFamily", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::GetDeviceType
// Il2CppName: GetDeviceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::DeviceType (*)()>(&UnityEngine::SystemInfo::GetDeviceType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "GetDeviceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::GetGraphicsDeviceType
// Il2CppName: GetGraphicsDeviceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GraphicsDeviceType (*)()>(&UnityEngine::SystemInfo::GetGraphicsDeviceType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "GetGraphicsDeviceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::GetGraphicsDeviceVersion
// Il2CppName: GetGraphicsDeviceVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&UnityEngine::SystemInfo::GetGraphicsDeviceVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "GetGraphicsDeviceVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::SupportsInstancing
// Il2CppName: SupportsInstancing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::SystemInfo::SupportsInstancing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "SupportsInstancing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::UsesReversedZBuffer
// Il2CppName: UsesReversedZBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::SystemInfo::UsesReversedZBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "UsesReversedZBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::HasRenderTextureNative
// Il2CppName: HasRenderTextureNative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RenderTextureFormat)>(&UnityEngine::SystemInfo::HasRenderTextureNative)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "HasRenderTextureNative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::SupportsTextureFormatNative
// Il2CppName: SupportsTextureFormatNative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::TextureFormat)>(&UnityEngine::SystemInfo::SupportsTextureFormatNative)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "SupportsTextureFormatNative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::IsFormatSupported
// Il2CppName: IsFormatSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::FormatUsage)>(&UnityEngine::SystemInfo::IsFormatSupported)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* usage = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "FormatUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "IsFormatSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, usage});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::GetCompatibleFormat
// Il2CppName: GetCompatibleFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::FormatUsage)>(&UnityEngine::SystemInfo::GetCompatibleFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* usage = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "FormatUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "GetCompatibleFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, usage});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemInfo::GetGraphicsFormat
// Il2CppName: GetGraphicsFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::Experimental::Rendering::DefaultFormat)>(&UnityEngine::SystemInfo::GetGraphicsFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "DefaultFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemInfo*), "GetGraphicsFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
