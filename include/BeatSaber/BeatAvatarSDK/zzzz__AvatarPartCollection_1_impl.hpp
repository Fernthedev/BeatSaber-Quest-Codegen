#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__set__partById(::System::Collections::Generic::Dictionary_2<::StringW,T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,T>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,T>* BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__get__partById()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,T>*> BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__get__partById() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__set__partIndexById(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__get__partIndexById()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*> BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__get__partIndexById() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__set__parts(::ArrayW<T,::Array<T>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<T,::Array<T>*>, 0x20>(this, std::forward<::ArrayW<T,::Array<T>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*>& BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__get__parts()  {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*> const& BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::__get__parts() const {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::get_count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(),
                            "get_count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ArrayW<T,::Array<T>*> BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::get_parts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(),
                            "get_parts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::New_ctor(::ArrayW<T,::Array<T>*>  parts)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>(parts));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::_ctor(::ArrayW<T,::Array<T>*>  parts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parts);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::GetById(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(),
                            "GetById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, id);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::GetRandom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(),
                            "GetRandom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::GetByIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(),
                            "GetByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::GetIndexById(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(),
                            "GetIndexById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, id);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>::GetDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>::get(),
                            "GetDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
