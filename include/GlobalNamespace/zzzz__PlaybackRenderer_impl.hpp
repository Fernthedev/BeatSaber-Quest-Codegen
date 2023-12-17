#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
constexpr void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type::__PlaybackRenderer__PlaybackScreenshot__Type(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type  GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type::Foreground{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type  GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type::Background{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)()>(&::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23012b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.get_texture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)()>(&::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_texture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23012bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "get_texture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.get_layerMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)()>(&::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_layerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23012c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "get_layerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.get_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)()>(&::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23012cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.get_path
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)()>(&::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23012d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "get_path",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.set_path
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)(::StringW)>(&::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::set_path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23012dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "set_path",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.get_backgroundColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)()>(&::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_backgroundColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23012e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "get_backgroundColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)(::StringW, ::UnityEngine::LayerMask, ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type, ::UnityEngine::Color)>(&::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23012f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.CreateTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)(int32_t, int32_t)>(&::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::CreateTexture)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2300a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "CreateTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__set__name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__get__name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__set__layerMask(::UnityEngine::LayerMask  value)  {
::cordl_internals::setInstanceField<::UnityEngine::LayerMask, 0x18>(this, std::forward<::UnityEngine::LayerMask>(value));
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__get__layerMask()  {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x18>(this);
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__get__layerMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x18>(this);
}
constexpr void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__set__type(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type, 0x1c>(this, std::forward<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type>(value));
}
constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__get__type()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type, 0x1c>(this);
}
constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type const& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__get__type() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type, 0x1c>(this);
}
constexpr void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__set__texture(::UnityEngine::RenderTexture*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture*, 0x20>(this, std::forward<::UnityEngine::RenderTexture*>(value));
}
constexpr ::UnityEngine::RenderTexture* GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__get__texture()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__get__texture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x20>(this);
}
constexpr void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__set__path(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__get__path()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__get__path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__set__backgroundColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x30>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__get__backgroundColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x30>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__get__backgroundColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x30>(this);
}
inline ::StringW GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::UnityEngine::RenderTexture* GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_texture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "get_texture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTexture*, false>(*this, ___internal_method);
}
inline ::UnityEngine::LayerMask GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_layerMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "get_layerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_path()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "get_path",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::set_path(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "set_path",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_backgroundColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "get_backgroundColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot* GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::New_ctor(::StringW  name, ::UnityEngine::LayerMask  layerMask, ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type  type, ::UnityEngine::Color  backgroundColor)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>(name, layerMask, type, backgroundColor));
}
inline void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::_ctor(::StringW  name, ::UnityEngine::LayerMask  layerMask, ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type  type, ::UnityEngine::Color  backgroundColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, layerMask, type, backgroundColor);
}
inline void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::CreateTexture(int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                            "CreateTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, width, height);
}
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.add_texturesReadyEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::System::Action*)>(&::GlobalNamespace::PlaybackRenderer::add_texturesReadyEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2300540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "add_texturesReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.remove_texturesReadyEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::System::Action*)>(&::GlobalNamespace::PlaybackRenderer::remove_texturesReadyEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23005dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "remove_texturesReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.get_screenshots
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::get_screenshots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2300678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "get_screenshots",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::UnityEngine::Camera*, ::UnityEngine::Camera*, ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*, int32_t, int32_t, ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>)>(&::GlobalNamespace::PlaybackRenderer::Setup)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x22ffc08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.CreateClipQuad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::CreateClipQuad)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2300790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "CreateClipQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.InitCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::UnityEngine::Camera*, ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*)>(&::GlobalNamespace::PlaybackRenderer::InitCamera)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2300680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "InitCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.CreateTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(int32_t, int32_t)>(&::GlobalNamespace::PlaybackRenderer::CreateTextures)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2300a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "CreateTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.GetDistanceToHMD
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::GetDistanceToHMD)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2300b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "GetDistanceToHMD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.OrientClipQuad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::OrientClipQuad)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2300db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "OrientClipQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.RenderForeground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*)>(&::GlobalNamespace::PlaybackRenderer::RenderForeground)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2300ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "RenderForeground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.RenderBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*)>(&::GlobalNamespace::PlaybackRenderer::RenderBackground)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x23010b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "RenderBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::LateUpdate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2301208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23012ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PlaybackRenderer::__set_texturesReadyEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x18>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PlaybackRenderer::__get_texturesReadyEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PlaybackRenderer::__get_texturesReadyEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__clearBackgroundShader(::UnityEngine::Shader*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader*, 0x20>(this, std::forward<::UnityEngine::Shader*>(value));
}
constexpr ::UnityEngine::Shader* GlobalNamespace::PlaybackRenderer::__get__clearBackgroundShader()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> GlobalNamespace::PlaybackRenderer::__get__clearBackgroundShader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x20>(this);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__isSetup(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::PlaybackRenderer::__get__isSetup()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::PlaybackRenderer::__get__isSetup() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__hmd(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x30>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::PlaybackRenderer::__get__hmd()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::PlaybackRenderer::__get__hmd() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x30>(this);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__camera(::UnityEngine::Camera*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera*, 0x38>(this, std::forward<::UnityEngine::Camera*>(value));
}
constexpr ::UnityEngine::Camera* GlobalNamespace::PlaybackRenderer::__get__camera()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> GlobalNamespace::PlaybackRenderer::__get__camera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x38>(this);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__cameraCalibration(::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*, 0x40>(this, std::forward<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>(value));
}
constexpr ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* GlobalNamespace::PlaybackRenderer::__get__cameraCalibration()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*> GlobalNamespace::PlaybackRenderer::__get__cameraCalibration() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*, 0x40>(this);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__clipQuad(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x48>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::PlaybackRenderer::__get__clipQuad()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::PlaybackRenderer::__get__clipQuad() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x48>(this);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__clipMaterial(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x50>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* GlobalNamespace::PlaybackRenderer::__get__clipMaterial()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> GlobalNamespace::PlaybackRenderer::__get__clipMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x50>(this);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__screenshots(::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, 0x58>(this, std::forward<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>& GlobalNamespace::PlaybackRenderer::__get__screenshots()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, 0x58>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> const& GlobalNamespace::PlaybackRenderer::__get__screenshots() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, 0x58>(this);
}
inline void GlobalNamespace::PlaybackRenderer::add_texturesReadyEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "add_texturesReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PlaybackRenderer::remove_texturesReadyEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "remove_texturesReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> GlobalNamespace::PlaybackRenderer::get_screenshots()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "get_screenshots",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlaybackRenderer::Setup(::UnityEngine::Camera*  hmdCamera, ::UnityEngine::Camera*  camera, ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*  cameraCalibration, int32_t  textureWidth, int32_t  textureHeight, ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>  screenshots)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, hmdCamera, camera, cameraCalibration, textureWidth, textureHeight, screenshots);
}
inline void GlobalNamespace::PlaybackRenderer::CreateClipQuad()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "CreateClipQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlaybackRenderer::InitCamera(::UnityEngine::Camera*  camera, ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*  cameraCalibration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "InitCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, camera, cameraCalibration);
}
inline void GlobalNamespace::PlaybackRenderer::CreateTextures(int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "CreateTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, width, height);
}
inline float_t GlobalNamespace::PlaybackRenderer::GetDistanceToHMD()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "GetDistanceToHMD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlaybackRenderer::OrientClipQuad()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "OrientClipQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlaybackRenderer::RenderForeground(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*  screenshot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "RenderForeground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, screenshot);
}
inline void GlobalNamespace::PlaybackRenderer::RenderBackground(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*  screenshot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "RenderBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, screenshot);
}
inline void GlobalNamespace::PlaybackRenderer::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::PlaybackRenderer* GlobalNamespace::PlaybackRenderer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlaybackRenderer*>());
}
inline void GlobalNamespace::PlaybackRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
