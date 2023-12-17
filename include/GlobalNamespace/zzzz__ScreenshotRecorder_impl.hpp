#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenshotRecorder_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "GlobalNamespace/zzzz__ScreenshotRecorder_def.hpp"
constexpr void GlobalNamespace::__ScreenshotRecorder__RecordingType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ScreenshotRecorder__RecordingType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__ScreenshotRecorder__RecordingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType::__ScreenshotRecorder__RecordingType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType  GlobalNamespace::__ScreenshotRecorder__RecordingType::Sequence{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType  GlobalNamespace::__ScreenshotRecorder__RecordingType::Stereo360Sequence{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType  GlobalNamespace::__ScreenshotRecorder__RecordingType::Mono360Sequence{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType  GlobalNamespace::__ScreenshotRecorder__RecordingType::F10ForScreenshot{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType  GlobalNamespace::__ScreenshotRecorder__RecordingType::Interval{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType  GlobalNamespace::__ScreenshotRecorder__RecordingType::ScreenshotOnPause{static_cast<int32_t>(0x5)};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.get_directory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::get_directory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f3f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "get_directory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.set_directory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)(::StringW)>(&::GlobalNamespace::ScreenshotRecorder::set_directory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f3f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "set_directory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::OnEnable)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x20f3f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::OnDisable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x20f40b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::LateUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x20f4174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.OnApplicationFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)(bool)>(&::GlobalNamespace::ScreenshotRecorder::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x20f42b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.SaveCameraScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::SaveCameraScreenshot)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x20f4234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "SaveCameraScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.SaveTextureScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)(::UnityEngine::Texture2D*)>(&::GlobalNamespace::ScreenshotRecorder::SaveTextureScreenshot)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x20f43ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "SaveTextureScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.ConvertRenderTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (::GlobalNamespace::ScreenshotRecorder::*)(::UnityEngine::RenderTexture*)>(&::GlobalNamespace::ScreenshotRecorder::ConvertRenderTexture)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x20f42d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "ConvertRenderTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x20f452c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ScreenshotRecorder::__set__directory(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::ScreenshotRecorder::__get__directory()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::ScreenshotRecorder::__get__directory() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__camera(::UnityEngine::Camera*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera*, 0x20>(this, std::forward<::UnityEngine::Camera*>(value));
}
constexpr ::UnityEngine::Camera* GlobalNamespace::ScreenshotRecorder::__get__camera()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> GlobalNamespace::ScreenshotRecorder::__get__camera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x20>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__frameRate(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::ScreenshotRecorder::__get__frameRate()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::ScreenshotRecorder::__get__frameRate() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__forceFixedFramerate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::ScreenshotRecorder::__get__forceFixedFramerate()  {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr bool const& GlobalNamespace::ScreenshotRecorder::__get__forceFixedFramerate() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__interval(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::ScreenshotRecorder::__get__interval()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& GlobalNamespace::ScreenshotRecorder::__get__interval() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__recordingType(::GlobalNamespace::__ScreenshotRecorder__RecordingType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__ScreenshotRecorder__RecordingType, 0x34>(this, std::forward<::GlobalNamespace::__ScreenshotRecorder__RecordingType>(value));
}
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType& GlobalNamespace::ScreenshotRecorder::__get__recordingType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ScreenshotRecorder__RecordingType, 0x34>(this);
}
constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType const& GlobalNamespace::ScreenshotRecorder::__get__recordingType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ScreenshotRecorder__RecordingType, 0x34>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__pauseWithPButton(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::ScreenshotRecorder::__get__pauseWithPButton()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::ScreenshotRecorder::__get__pauseWithPButton() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__antiAlias(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::ScreenshotRecorder::__get__antiAlias()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr int32_t const& GlobalNamespace::ScreenshotRecorder::__get__antiAlias() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__screenshotWidth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::ScreenshotRecorder::__get__screenshotWidth()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& GlobalNamespace::ScreenshotRecorder::__get__screenshotWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__screenshotHeight(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::ScreenshotRecorder::__get__screenshotHeight()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr int32_t const& GlobalNamespace::ScreenshotRecorder::__get__screenshotHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__counter(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::ScreenshotRecorder::__get__counter()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& GlobalNamespace::ScreenshotRecorder::__get__counter() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__originalTimeScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::ScreenshotRecorder::__get__originalTimeScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr float_t const& GlobalNamespace::ScreenshotRecorder::__get__originalTimeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__paused(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::ScreenshotRecorder::__get__paused()  {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr bool const& GlobalNamespace::ScreenshotRecorder::__get__paused() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__frameNum(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::ScreenshotRecorder::__get__frameNum()  {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr int32_t const& GlobalNamespace::ScreenshotRecorder::__get__frameNum() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__cubemapLeftEye(::UnityEngine::RenderTexture*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture*, 0x58>(this, std::forward<::UnityEngine::RenderTexture*>(value));
}
constexpr ::UnityEngine::RenderTexture* GlobalNamespace::ScreenshotRecorder::__get__cubemapLeftEye()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> GlobalNamespace::ScreenshotRecorder::__get__cubemapLeftEye() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x58>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__cubemapRighEye(::UnityEngine::RenderTexture*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture*, 0x60>(this, std::forward<::UnityEngine::RenderTexture*>(value));
}
constexpr ::UnityEngine::RenderTexture* GlobalNamespace::ScreenshotRecorder::__get__cubemapRighEye()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> GlobalNamespace::ScreenshotRecorder::__get__cubemapRighEye() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x60>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__equirectTexture(::UnityEngine::RenderTexture*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture*, 0x68>(this, std::forward<::UnityEngine::RenderTexture*>(value));
}
constexpr ::UnityEngine::RenderTexture* GlobalNamespace::ScreenshotRecorder::__get__equirectTexture()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> GlobalNamespace::ScreenshotRecorder::__get__equirectTexture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x68>(this);
}
constexpr void GlobalNamespace::ScreenshotRecorder::__set__cameraRenderTexture(::UnityEngine::RenderTexture*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture*, 0x70>(this, std::forward<::UnityEngine::RenderTexture*>(value));
}
constexpr ::UnityEngine::RenderTexture* GlobalNamespace::ScreenshotRecorder::__get__cameraRenderTexture()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> GlobalNamespace::ScreenshotRecorder::__get__cameraRenderTexture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x70>(this);
}
inline ::StringW GlobalNamespace::ScreenshotRecorder::get_directory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "get_directory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ScreenshotRecorder::set_directory(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "set_directory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::ScreenshotRecorder::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ScreenshotRecorder::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ScreenshotRecorder::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ScreenshotRecorder::OnApplicationFocus(bool  hasFocus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, hasFocus);
}
inline void GlobalNamespace::ScreenshotRecorder::SaveCameraScreenshot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "SaveCameraScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ScreenshotRecorder::SaveTextureScreenshot(::UnityEngine::Texture2D*  tex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "SaveTextureScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tex);
}
inline ::UnityEngine::Texture2D* GlobalNamespace::ScreenshotRecorder::ConvertRenderTexture(::UnityEngine::RenderTexture*  renderTexture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            "ConvertRenderTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(*this, ___internal_method, renderTexture);
}
inline ::GlobalNamespace::ScreenshotRecorder* GlobalNamespace::ScreenshotRecorder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ScreenshotRecorder*>());
}
inline void GlobalNamespace::ScreenshotRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
