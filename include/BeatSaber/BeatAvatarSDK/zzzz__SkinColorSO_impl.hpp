#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__SkinColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::SkinColorSO.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::BeatAvatarSDK::SkinColorSO::*)()>(&::BeatSaber::BeatAvatarSDK::SkinColorSO::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe1c560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::SkinColorSO*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::SkinColorSO.get_Color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::BeatSaber::BeatAvatarSDK::SkinColorSO::*)()>(&::BeatSaber::BeatAvatarSDK::SkinColorSO::get_Color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe1c568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::SkinColorSO*>::get(),
                            "get_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::SkinColorSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarSDK::SkinColorSO::*)()>(&::BeatSaber::BeatAvatarSDK::SkinColorSO::_ctor)> {
  constexpr static std::size_t size = 0x1008;
  constexpr static std::size_t addrs = 0xe1c574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::SkinColorSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaber::BeatAvatarSDK::SkinColorSO::__set__id(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& BeatSaber::BeatAvatarSDK::SkinColorSO::__get__id()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& BeatSaber::BeatAvatarSDK::SkinColorSO::__get__id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void BeatSaber::BeatAvatarSDK::SkinColorSO::__set__color(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x20>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& BeatSaber::BeatAvatarSDK::SkinColorSO::__get__color()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x20>(this);
}
constexpr ::UnityEngine::Color const& BeatSaber::BeatAvatarSDK::SkinColorSO::__get__color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x20>(this);
}
inline ::StringW BeatSaber::BeatAvatarSDK::SkinColorSO::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::SkinColorSO*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::UnityEngine::Color BeatSaber::BeatAvatarSDK::SkinColorSO::get_Color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::SkinColorSO*>::get(),
                            "get_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::SkinColorSO* BeatSaber::BeatAvatarSDK::SkinColorSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarSDK::SkinColorSO*>());
}
inline void BeatSaber::BeatAvatarSDK::SkinColorSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::SkinColorSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
