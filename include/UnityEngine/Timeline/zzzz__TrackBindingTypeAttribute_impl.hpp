#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackBindingTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackBindingFlags_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TrackBindingTypeAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackBindingTypeAttribute::*)(::System::Type*)>(&::UnityEngine::Timeline::TrackBindingTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c6e6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackBindingTypeAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackBindingTypeAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackBindingTypeAttribute::*)(::System::Type*, ::UnityEngine::Timeline::TrackBindingFlags)>(&::UnityEngine::Timeline::TrackBindingTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c6e6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackBindingTypeAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackBindingFlags>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Timeline::TrackBindingTypeAttribute::__set_type(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x10>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* UnityEngine::Timeline::TrackBindingTypeAttribute::__get_type()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> UnityEngine::Timeline::TrackBindingTypeAttribute::__get_type() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr void UnityEngine::Timeline::TrackBindingTypeAttribute::__set_flags(::UnityEngine::Timeline::TrackBindingFlags  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::TrackBindingFlags, 0x18>(this, std::forward<::UnityEngine::Timeline::TrackBindingFlags>(value));
}
constexpr ::UnityEngine::Timeline::TrackBindingFlags& UnityEngine::Timeline::TrackBindingTypeAttribute::__get_flags()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::TrackBindingFlags, 0x18>(this);
}
constexpr ::UnityEngine::Timeline::TrackBindingFlags const& UnityEngine::Timeline::TrackBindingTypeAttribute::__get_flags() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::TrackBindingFlags, 0x18>(this);
}
inline ::UnityEngine::Timeline::TrackBindingTypeAttribute* UnityEngine::Timeline::TrackBindingTypeAttribute::New_ctor(::System::Type*  type)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::TrackBindingTypeAttribute*>(type));
}
inline void UnityEngine::Timeline::TrackBindingTypeAttribute::_ctor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackBindingTypeAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type);
}
inline ::UnityEngine::Timeline::TrackBindingTypeAttribute* UnityEngine::Timeline::TrackBindingTypeAttribute::New_ctor(::System::Type*  type, ::UnityEngine::Timeline::TrackBindingFlags  flags)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::TrackBindingTypeAttribute*>(type, flags));
}
inline void UnityEngine::Timeline::TrackBindingTypeAttribute::_ctor(::System::Type*  type, ::UnityEngine::Timeline::TrackBindingFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackBindingTypeAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackBindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, flags);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
