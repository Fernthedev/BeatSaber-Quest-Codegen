#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CubemapCapture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__CubemapCapture_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
constexpr void GlobalNamespace::__CubemapCapture__ImageType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__CubemapCapture__ImageType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__CubemapCapture__ImageType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__CubemapCapture__ImageType::__CubemapCapture__ImageType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__CubemapCapture__ImageType  GlobalNamespace::__CubemapCapture__ImageType::PNG{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__CubemapCapture__ImageType  GlobalNamespace::__CubemapCapture__ImageType::JPEG{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__CubemapCapture__ImageType  GlobalNamespace::__CubemapCapture__ImageType::TGA{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__CubemapCapture__ImageType  GlobalNamespace::__CubemapCapture__ImageType::EXR{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapCapture::*)()>(&::GlobalNamespace::CubemapCapture::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22ec768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture.GenerateAndSaveCubemapTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapCapture::*)()>(&::GlobalNamespace::CubemapCapture::GenerateAndSaveCubemapTexture)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22ec7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(),
                            "GenerateAndSaveCubemapTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture.RenderCubemapTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapCapture::*)(::UnityEngine::Cubemap*)>(&::GlobalNamespace::CubemapCapture::RenderCubemapTexture)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x22ec8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(),
                            "RenderCubemapTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture.SaveCubemapTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapCapture::*)(::UnityEngine::Cubemap*, ::StringW)>(&::GlobalNamespace::CubemapCapture::SaveCubemapTexture)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x22ecd78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(),
                            "SaveCubemapTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture.SerializeTextureToByteArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::GlobalNamespace::CubemapCapture::*)(::UnityEngine::Texture2D*)>(&::GlobalNamespace::CubemapCapture::SerializeTextureToByteArray)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x22ed548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(),
                            "SerializeTextureToByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapCapture::*)()>(&::GlobalNamespace::CubemapCapture::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x22ed63c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CubemapCapture::__set__camera(::UnityEngine::Camera*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera*, 0x18>(this, std::forward<::UnityEngine::Camera*>(value));
}
constexpr ::UnityEngine::Camera* GlobalNamespace::CubemapCapture::__get__camera()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> GlobalNamespace::CubemapCapture::__get__camera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x18>(this);
}
constexpr void GlobalNamespace::CubemapCapture::__set__triggerKey(::UnityEngine::InputSystem::Key  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Key, 0x20>(this, std::forward<::UnityEngine::InputSystem::Key>(value));
}
constexpr ::UnityEngine::InputSystem::Key& GlobalNamespace::CubemapCapture::__get__triggerKey()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Key, 0x20>(this);
}
constexpr ::UnityEngine::InputSystem::Key const& GlobalNamespace::CubemapCapture::__get__triggerKey() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Key, 0x20>(this);
}
constexpr void GlobalNamespace::CubemapCapture::__set__cubemapSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::CubemapCapture::__get__cubemapSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& GlobalNamespace::CubemapCapture::__get__cubemapSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void GlobalNamespace::CubemapCapture::__set__saveDirectoryAbsolutePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::CubemapCapture::__get__saveDirectoryAbsolutePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& GlobalNamespace::CubemapCapture::__get__saveDirectoryAbsolutePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void GlobalNamespace::CubemapCapture::__set__imageType(::GlobalNamespace::__CubemapCapture__ImageType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__CubemapCapture__ImageType, 0x30>(this, std::forward<::GlobalNamespace::__CubemapCapture__ImageType>(value));
}
constexpr ::GlobalNamespace::__CubemapCapture__ImageType& GlobalNamespace::CubemapCapture::__get__imageType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CubemapCapture__ImageType, 0x30>(this);
}
constexpr ::GlobalNamespace::__CubemapCapture__ImageType const& GlobalNamespace::CubemapCapture::__get__imageType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CubemapCapture__ImageType, 0x30>(this);
}
constexpr void GlobalNamespace::CubemapCapture::__set__jpegCompression(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::CubemapCapture::__get__jpegCompression()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& GlobalNamespace::CubemapCapture::__get__jpegCompression() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void GlobalNamespace::CubemapCapture::__set__exrFlags(::UnityEngine::__Texture2D__EXRFlags  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__Texture2D__EXRFlags, 0x38>(this, std::forward<::UnityEngine::__Texture2D__EXRFlags>(value));
}
constexpr ::UnityEngine::__Texture2D__EXRFlags& GlobalNamespace::CubemapCapture::__get__exrFlags()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__Texture2D__EXRFlags, 0x38>(this);
}
constexpr ::UnityEngine::__Texture2D__EXRFlags const& GlobalNamespace::CubemapCapture::__get__exrFlags() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__Texture2D__EXRFlags, 0x38>(this);
}
constexpr void GlobalNamespace::CubemapCapture::__set__faces(::ArrayW<::UnityEngine::CubemapFace,::Array<::UnityEngine::CubemapFace>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::CubemapFace,::Array<::UnityEngine::CubemapFace>*>, 0x40>(this, std::forward<::ArrayW<::UnityEngine::CubemapFace,::Array<::UnityEngine::CubemapFace>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::CubemapFace,::Array<::UnityEngine::CubemapFace>*>& GlobalNamespace::CubemapCapture::__get__faces()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::CubemapFace,::Array<::UnityEngine::CubemapFace>*>, 0x40>(this);
}
constexpr ::ArrayW<::UnityEngine::CubemapFace,::Array<::UnityEngine::CubemapFace>*> const& GlobalNamespace::CubemapCapture::__get__faces() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::CubemapFace,::Array<::UnityEngine::CubemapFace>*>, 0x40>(this);
}
constexpr void GlobalNamespace::CubemapCapture::__set__faceAngles(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x48>(this, std::forward<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& GlobalNamespace::CubemapCapture::__get__faceAngles()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x48>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::CubemapCapture::__get__faceAngles() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x48>(this);
}
inline void GlobalNamespace::CubemapCapture::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::CubemapCapture::GenerateAndSaveCubemapTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(),
                            "GenerateAndSaveCubemapTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::CubemapCapture::RenderCubemapTexture(::UnityEngine::Cubemap*  cubemap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(),
                            "RenderCubemapTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cubemap);
}
inline void GlobalNamespace::CubemapCapture::SaveCubemapTexture(::UnityEngine::Cubemap*  cubemap, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(),
                            "SaveCubemapTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cubemap, path);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GlobalNamespace::CubemapCapture::SerializeTextureToByteArray(::UnityEngine::Texture2D*  texture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(),
                            "SerializeTextureToByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, texture);
}
inline ::GlobalNamespace::CubemapCapture* GlobalNamespace::CubemapCapture::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CubemapCapture*>());
}
inline void GlobalNamespace::CubemapCapture::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
