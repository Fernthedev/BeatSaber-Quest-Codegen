#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenCaptureCache_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "GlobalNamespace/zzzz__ScreenCaptureCache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
constexpr void GlobalNamespace::__ScreenCaptureCache__ScreenshotType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ScreenCaptureCache__ScreenshotType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__ScreenCaptureCache__ScreenshotType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType::__ScreenCaptureCache__ScreenshotType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType  GlobalNamespace::__ScreenCaptureCache__ScreenshotType::Game{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType  GlobalNamespace::__ScreenCaptureCache__ScreenshotType::Menu{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType  GlobalNamespace::__ScreenCaptureCache__ScreenshotType::Other{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureCache.GetLastScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (::GlobalNamespace::ScreenCaptureCache::*)(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType)>(&::GlobalNamespace::ScreenCaptureCache::GetLastScreenshot)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x280bbac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureCache*>::get(),
                            "GetLastScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureCache.StoreScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenCaptureCache::*)(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType, ::UnityEngine::Texture2D*)>(&::GlobalNamespace::ScreenCaptureCache::StoreScreenshot)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x280b868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureCache*>::get(),
                            "StoreScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureCache._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenCaptureCache::*)()>(&::GlobalNamespace::ScreenCaptureCache::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x280bc24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureCache*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ScreenCaptureCache::__set__cache(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D*>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D*>* GlobalNamespace::ScreenCaptureCache::__get__cache()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D*>*> GlobalNamespace::ScreenCaptureCache::__get__cache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D*>*, 0x10>(this);
}
inline ::UnityEngine::Texture2D* GlobalNamespace::ScreenCaptureCache::GetLastScreenshot(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType  screenshotType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureCache*>::get(),
                            "GetLastScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(*this, ___internal_method, screenshotType);
}
inline void GlobalNamespace::ScreenCaptureCache::StoreScreenshot(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType  screenshotType, ::UnityEngine::Texture2D*  texture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureCache*>::get(),
                            "StoreScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, screenshotType, texture);
}
inline ::GlobalNamespace::ScreenCaptureCache* GlobalNamespace::ScreenCaptureCache::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ScreenCaptureCache*>());
}
inline void GlobalNamespace::ScreenCaptureCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureCache*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
