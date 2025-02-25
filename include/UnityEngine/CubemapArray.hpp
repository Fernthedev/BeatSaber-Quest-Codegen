// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Texture
#include "UnityEngine/Texture.hpp"
// Including type: UnityEngine.Experimental.Rendering.DefaultFormat
#include "UnityEngine/Experimental/Rendering/DefaultFormat.hpp"
// Including type: UnityEngine.Experimental.Rendering.TextureCreationFlags
#include "UnityEngine/Experimental/Rendering/TextureCreationFlags.hpp"
// Including type: UnityEngine.Experimental.Rendering.GraphicsFormat
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
// Including type: UnityEngine.TextureFormat
#include "UnityEngine/TextureFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CubemapArray
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DB4630
  class CubemapArray : public UnityEngine::Texture {
    public:
    // Creating value type constructor for type: CubemapArray
    CubemapArray() noexcept {}
    // public System.Void .ctor(System.Int32 width, System.Int32 cubemapCount, UnityEngine.Experimental.Rendering.DefaultFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x1C4F724
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CubemapArray* New_ctor(int width, int cubemapCount, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::CubemapArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CubemapArray*, creationType>(width, cubemapCount, format, flags)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 cubemapCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x1C4F774
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CubemapArray* New_ctor(int width, int cubemapCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::CubemapArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CubemapArray*, creationType>(width, cubemapCount, format, flags)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 cubemapCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.Int32 mipCount)
    // Offset: 0x1C4F814
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CubemapArray* New_ctor(int width, int cubemapCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int mipCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::CubemapArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CubemapArray*, creationType>(width, cubemapCount, format, flags, mipCount)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 cubemapCount, UnityEngine.TextureFormat textureFormat, System.Int32 mipCount, System.Boolean linear)
    // Offset: 0x1C4F8F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CubemapArray* New_ctor(int width, int cubemapCount, UnityEngine::TextureFormat textureFormat, int mipCount, bool linear) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::CubemapArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CubemapArray*, creationType>(width, cubemapCount, textureFormat, mipCount, linear)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 cubemapCount, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain, System.Boolean linear)
    // Offset: 0x1C4FA1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CubemapArray* New_ctor(int width, int cubemapCount, UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::CubemapArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CubemapArray*, creationType>(width, cubemapCount, textureFormat, mipChain, linear)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 cubemapCount, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain)
    // Offset: 0x1C4FA40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CubemapArray* New_ctor(int width, int cubemapCount, UnityEngine::TextureFormat textureFormat, bool mipChain) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::CubemapArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CubemapArray*, creationType>(width, cubemapCount, textureFormat, mipChain)));
    }
    // static private System.Boolean Internal_CreateImpl(UnityEngine.CubemapArray mono, System.Int32 ext, System.Int32 count, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x1C4F5BC
    static bool Internal_CreateImpl(UnityEngine::CubemapArray* mono, int ext, int count, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // static private System.Void Internal_Create(UnityEngine.CubemapArray mono, System.Int32 ext, System.Int32 count, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x1C4F63C
    static void Internal_Create(UnityEngine::CubemapArray* mono, int ext, int count, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // public override System.Boolean get_isReadable()
    // Offset: 0x1C4F57C
    // Implemented from: UnityEngine.Texture
    // Base method: System.Boolean Texture::get_isReadable()
    bool get_isReadable();
  }; // UnityEngine.CubemapArray
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CubemapArray*, "UnityEngine", "CubemapArray");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CubemapArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::CubemapArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::CubemapArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::CubemapArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::CubemapArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::CubemapArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::CubemapArray::Internal_CreateImpl
// Il2CppName: Internal_CreateImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::CubemapArray*, int, int, int, UnityEngine::Experimental::Rendering::GraphicsFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&UnityEngine::CubemapArray::Internal_CreateImpl)> {
  static const MethodInfo* get() {
    static auto* mono = &::il2cpp_utils::GetClassFromName("UnityEngine", "CubemapArray")->byval_arg;
    static auto* ext = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "TextureCreationFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CubemapArray*), "Internal_CreateImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mono, ext, count, mipCount, format, flags});
  }
};
// Writing MetadataGetter for method: UnityEngine::CubemapArray::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::CubemapArray*, int, int, int, UnityEngine::Experimental::Rendering::GraphicsFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&UnityEngine::CubemapArray::Internal_Create)> {
  static const MethodInfo* get() {
    static auto* mono = &::il2cpp_utils::GetClassFromName("UnityEngine", "CubemapArray")->byval_arg;
    static auto* ext = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "TextureCreationFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CubemapArray*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mono, ext, count, mipCount, format, flags});
  }
};
// Writing MetadataGetter for method: UnityEngine::CubemapArray::get_isReadable
// Il2CppName: get_isReadable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::CubemapArray::*)()>(&UnityEngine::CubemapArray::get_isReadable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CubemapArray*), "get_isReadable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
