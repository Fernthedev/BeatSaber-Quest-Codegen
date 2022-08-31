// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: TextureDimension
  struct TextureDimension;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextureWrapMode
  struct TextureWrapMode;
  // Forward declaring type: FilterMode
  struct FilterMode;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: TextureFormat
  struct TextureFormat;
  // Forward declaring type: UnityException
  class UnityException;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: UnityEngine::Experimental::Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: GraphicsFormat
  struct GraphicsFormat;
  // Forward declaring type: FormatUsage
  struct FormatUsage;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Texture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture*, "UnityEngine", "Texture");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Texture
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 1057254
  // [NativeHeaderAttribute] Offset: 1057254
  // [NativeHeaderAttribute] Offset: 1057254
  class Texture : public ::UnityEngine::Object {
    public:
    // Get static field: static public readonly System.Int32 GenerateAllMips
    static int _get_GenerateAllMips();
    // Set static field: static public readonly System.Int32 GenerateAllMips
    static void _set_GenerateAllMips(int value);
    // public System.Int32 get_mipmapCount()
    // Offset: 0x2815D2C
    int get_mipmapCount();
    // public System.Int32 get_width()
    // Offset: 0x2815DEC
    int get_width();
    // public System.Void set_width(System.Int32 value)
    // Offset: 0x2815E2C
    void set_width(int value);
    // public System.Int32 get_height()
    // Offset: 0x2815E8C
    int get_height();
    // public System.Void set_height(System.Int32 value)
    // Offset: 0x2815ECC
    void set_height(int value);
    // public System.Void set_dimension(UnityEngine.Rendering.TextureDimension value)
    // Offset: 0x2815F2C
    void set_dimension(::UnityEngine::Rendering::TextureDimension value);
    // public System.Boolean get_isReadable()
    // Offset: 0x2815F8C
    bool get_isReadable();
    // public UnityEngine.TextureWrapMode get_wrapMode()
    // Offset: 0x2815FCC
    ::UnityEngine::TextureWrapMode get_wrapMode();
    // public System.Void set_wrapMode(UnityEngine.TextureWrapMode value)
    // Offset: 0x281600C
    void set_wrapMode(::UnityEngine::TextureWrapMode value);
    // public System.Void set_filterMode(UnityEngine.FilterMode value)
    // Offset: 0x281605C
    void set_filterMode(::UnityEngine::FilterMode value);
    // public System.Void set_anisoLevel(System.Int32 value)
    // Offset: 0x28160AC
    void set_anisoLevel(int value);
    // public System.Void set_mipMapBias(System.Single value)
    // Offset: 0x28160FC
    void set_mipMapBias(float value);
    // public UnityEngine.Vector2 get_texelSize()
    // Offset: 0x281614C
    ::UnityEngine::Vector2 get_texelSize();
    // private System.Int32 GetDataWidth()
    // Offset: 0x2815D6C
    int GetDataWidth();
    // private System.Int32 GetDataHeight()
    // Offset: 0x2815DAC
    int GetDataHeight();
    // public System.IntPtr GetNativeTexturePtr()
    // Offset: 0x28161F4
    ::System::IntPtr GetNativeTexturePtr();
    // System.Boolean ValidateFormat(UnityEngine.TextureFormat format)
    // Offset: 0x2816234
    bool ValidateFormat(::UnityEngine::TextureFormat format);
    // System.Boolean ValidateFormat(UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.FormatUsage usage)
    // Offset: 0x281639C
    bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage);
    // UnityEngine.UnityException CreateNonReadableException(UnityEngine.Texture t)
    // Offset: 0x2816504
    ::UnityEngine::UnityException* CreateNonReadableException(::UnityEngine::Texture* t);
    // private System.Void get_texelSize_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x28161A4
    void get_texelSize_Injected(ByRef<::UnityEngine::Vector2> ret);
    // protected System.Void .ctor()
    // Offset: 0x2815CC4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Texture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x2816624
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // UnityEngine.Texture
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Texture::get_mipmapCount
// Il2CppName: get_mipmapCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Texture::*)()>(&UnityEngine::Texture::get_mipmapCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "get_mipmapCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Texture::*)()>(&UnityEngine::Texture::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::set_width
// Il2CppName: set_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Texture::*)(int)>(&UnityEngine::Texture::set_width)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "set_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Texture::*)()>(&UnityEngine::Texture::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::set_height
// Il2CppName: set_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Texture::*)(int)>(&UnityEngine::Texture::set_height)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "set_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::set_dimension
// Il2CppName: set_dimension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Texture::*)(::UnityEngine::Rendering::TextureDimension)>(&UnityEngine::Texture::set_dimension)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "TextureDimension")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "set_dimension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::get_isReadable
// Il2CppName: get_isReadable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Texture::*)()>(&UnityEngine::Texture::get_isReadable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "get_isReadable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::get_wrapMode
// Il2CppName: get_wrapMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextureWrapMode (UnityEngine::Texture::*)()>(&UnityEngine::Texture::get_wrapMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "get_wrapMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::set_wrapMode
// Il2CppName: set_wrapMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Texture::*)(::UnityEngine::TextureWrapMode)>(&UnityEngine::Texture::set_wrapMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureWrapMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "set_wrapMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::set_filterMode
// Il2CppName: set_filterMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Texture::*)(::UnityEngine::FilterMode)>(&UnityEngine::Texture::set_filterMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "FilterMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "set_filterMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::set_anisoLevel
// Il2CppName: set_anisoLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Texture::*)(int)>(&UnityEngine::Texture::set_anisoLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "set_anisoLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::set_mipMapBias
// Il2CppName: set_mipMapBias
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Texture::*)(float)>(&UnityEngine::Texture::set_mipMapBias)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "set_mipMapBias", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::get_texelSize
// Il2CppName: get_texelSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Texture::*)()>(&UnityEngine::Texture::get_texelSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "get_texelSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::GetDataWidth
// Il2CppName: GetDataWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Texture::*)()>(&UnityEngine::Texture::GetDataWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "GetDataWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::GetDataHeight
// Il2CppName: GetDataHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Texture::*)()>(&UnityEngine::Texture::GetDataHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "GetDataHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::GetNativeTexturePtr
// Il2CppName: GetNativeTexturePtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (UnityEngine::Texture::*)()>(&UnityEngine::Texture::GetNativeTexturePtr)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "GetNativeTexturePtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::ValidateFormat
// Il2CppName: ValidateFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Texture::*)(::UnityEngine::TextureFormat)>(&UnityEngine::Texture::ValidateFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "ValidateFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::ValidateFormat
// Il2CppName: ValidateFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Texture::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::FormatUsage)>(&UnityEngine::Texture::ValidateFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* usage = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "FormatUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "ValidateFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, usage});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::CreateNonReadableException
// Il2CppName: CreateNonReadableException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UnityException* (UnityEngine::Texture::*)(::UnityEngine::Texture*)>(&UnityEngine::Texture::CreateNonReadableException)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "CreateNonReadableException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::get_texelSize_Injected
// Il2CppName: get_texelSize_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Texture::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Texture::get_texelSize_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), "get_texelSize_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Texture::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
