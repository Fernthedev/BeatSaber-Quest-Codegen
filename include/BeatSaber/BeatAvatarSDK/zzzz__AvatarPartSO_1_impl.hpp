#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartSO_1_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__IAvatarPart_def.hpp"
/// @brief Convert operator to "::BeatSaber::BeatAvatarSDK::IAvatarPart"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::operator ::BeatSaber::BeatAvatarSDK::IAvatarPart*() noexcept {
return static_cast<::BeatSaber::BeatAvatarSDK::IAvatarPart*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__set__id(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW& BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__get__id()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW const& BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__get__id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__set__localizationKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW& BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__get__localizationKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::StringW const& BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__get__localizationKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__set__partAsset(T  value)  {
::cordl_internals::setInstanceField<T, 0x28>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__get__partAsset()  {
return ::cordl_internals::getInstanceField<T, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::__get__partAsset() const {
return ::cordl_internals::getInstanceField<T, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::get_partAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>::get(),
                            "get_partAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::StringW BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::StringW BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::get_localizationKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>::get(),
                            "get_localizationKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::StringW BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::get_localizedName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>::get(),
                            "get_localizedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>* BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
